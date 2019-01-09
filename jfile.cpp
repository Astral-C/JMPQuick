#include "jfile.h"
#include <iostream>

jValue jFile::getField(int entryNum, int fieldNum){
    return m_entries.at(static_cast<size_t>(entryNum * m_fieldCount + fieldNum));
}

void jFile::setField(int entryNum, int fieldNum, jValue v){
    m_entries.at(static_cast<size_t>(entryNum * m_fieldCount + fieldNum)) = v;
}

jField jFile::getFieldDesc(int32_t index){
    return m_fields.at(static_cast<size_t>(index));
}

bool jFile::randomize(std::map<uint32_t, QString>& names){
    std::deque<std::string> objectNames; //buffer used to hold all of the ghost/furniture names

    int nameField = -1; //if it doesnt contain a name field it should be -1
    for(int y = 0; y < m_fieldCount; y++){
        jField curField = m_fields.at(y);
        if(names.find(curField.hash) != names.end()){
            //check if the jmp file has a dmd_name or name field
            if(names.find(curField.hash)->second == "dmd_name" || names.find(curField.hash)->second == "name" || names.find(curField.hash)->second == "type"){
                nameField = y;
            }
        }
    }

    //file contains no name field
    if(nameField == -1){
        return false;
    }

    //build a name list, who cares about duplicates
    for(int x = 0; x < m_entryCount; x++){
        objectNames.push_back(std::string(getField(x, nameField).vStr));
    }

    //finally set all the values
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for(int x = 0; x < m_entryCount; x++){
        jValue v;
        strncpy(v.vStr, objectNames.at(static_cast<unsigned long>(std::rand()) % objectNames.size()).c_str(), 32);
        setField(x, nameField, v);
    }

    return true;
}

jFile::jFile(bStream& stream, bool log){

    std::ofstream nlog;

    m_entryCount = stream.readInt32();
    m_fieldCount = stream.readInt32();
    m_entryOffset = stream.readUInt32();
    m_entrySize = stream.readInt32();

    if(log){
        nlog.open("jmpquick.log", std::ios_base::app);
        nlog << "===== JMPQuick Log: " << stream.getPath() << " =====\n";
        nlog << "Entry Count: " << m_entryCount << "\n" <<
                "Field Count: " << m_fieldCount << "\n" <<
                "Entry Offset: " << std::hex << m_entryOffset << "\n" <<
                "Entry Size: " << std::hex << m_entrySize << "\n\n";
    }

    for(int i = 0; i < m_fieldCount; i++){
        m_fields.push_back(jField(stream));
        if(log){
            nlog << "=== Field 0x" << std::hex << m_fields.back().hash << " ===\n";
            nlog << "Bitmask: " << m_fields.back().bitmask << "\n" <<
                    "Start: " << m_fields.back().start << "\n" <<
                    "Shift: " << m_fields.back().shift << "\n" <<
                    "Type: " << m_fields.back().type << "\n\n";
        }
    }

    for(int x = 0; x < m_entryCount; x++){
        if (log) nlog << "== Entry " << x << " ==\n";
        for(int y = 0; y < m_fieldCount; y++){
            stream.seek(m_entryOffset + (m_entrySize*x) + m_fields.at(y).start);
            m_entries.push_back((jValue(stream, m_fields.at(y))));
            if(log){
                nlog << "Field " << std::hex << m_fields.at(y).hash;
                nlog << ": " <<
                (m_fields.at(y).type == jType::JSTRING ? std::string(m_entries.back().vStr) : (m_fields.at(y).type == jType::JINT32 ? std::to_string(m_entries.back().vInt) : std::to_string(m_entries.back().vFlt)))
                << "\n";
            }
        }
    }

    if(log){
        //just in case there are multiple jmp reads in the log, seperate them with a few lines
        nlog << "\n\n\n\n";
        nlog.close();
    }
}

void jFile::addEntry(){
    m_entryCount += 1;
    for(uint f = 0; f < m_fieldCount; f++){
        jValue j;
        switch (m_fields.at(f).type) {
            case jType::JFLOAT:
                j.vFlt = 0.0f;
                break;
            case jType::JSTRING:
                strncpy(j.vStr, std::string(32, '\0').c_str(), 32);
                break;
            case jType::JINT32:
                j.vInt = 0;
                break;
        }
        m_entries.push_back(j);
    }
}

void jFile::removeEntry(int index){
    m_entries.erase(m_entries.begin() + (index * m_fieldCount), m_entries.begin() + (index * m_fieldCount) + m_fieldCount);
    m_entryCount--;
}

void jFile::writeFile(bStream &stream){
    //Write JMP Header
    stream.writeInt32(m_entryCount);
    stream.writeInt32(m_fieldCount);
    stream.writeUInt32(m_entryOffset);
    stream.writeInt32(m_entrySize);

    //Write field LUT
    for(int f = 0; f < m_fieldCount; f++){
        stream.writeUInt32(m_fields.at(f).hash);
        stream.writeUInt32(m_fields.at(f).bitmask);
        stream.writeUInt16(m_fields.at(f).start);
        stream.writeUInt8(m_fields.at(f).shift);
        stream.writeUInt8((uint8_t)m_fields.at(f).type);
    }

    //Write Entries
    //Bitmask buffer needed for generating bitmasks for fields that require them. Clears on every entry.
    std::map<uint16_t, uint32_t> bitmaskBuffer;
    for(int x = 0; x < m_entryCount; x++){
        bitmaskBuffer.clear();
        for(int y = 0; y < m_fieldCount; y++){
            jValue curVal = getField(x, y);
            jField curField = getFieldDesc(y);
            stream.seek(m_entryOffset + (m_entrySize * x) + curField.start);

            switch (curField.type) {
            case jType::JINT32:
                if(curField.bitmask == 0xFFFFFFFFu){
                    stream.writeInt32(curVal.vInt);
                } else {
                    //If the bitmask buffer doesn't contain the current start, add it
                    if(bitmaskBuffer.count(curField.start) == 0){
                        bitmaskBuffer[curField.start] = 0u;
                    }
                    bitmaskBuffer.find(curField.start)->second |= ((uint32_t)curVal.vInt << curField.shift) & curField.bitmask;
                }
                break;
            case jType::JFLOAT:
                stream.writeFloat(curVal.vFlt);
                break;
            case jType::JSTRING:
                stream.writeString(std::string(curVal.vStr));
                break;
            }
        }
        std::map<uint16_t, uint32_t>::iterator it;
        for(it = bitmaskBuffer.begin(); it != bitmaskBuffer.end(); it++){
            stream.seek(m_entryOffset + (m_entrySize * x) + it->first);
            stream.writeUInt32(it->second);
        }
    }
}
