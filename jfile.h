#ifndef JFILE_H
#define JFILE_H

#include <map>
#include <ctime>
#include <deque>
#include <cstring>
#include <QString>
#include <algorithm>
#include <bstream.h>

enum jType {
    JINT32 = 0,
    JSTRING = 1,
    JFLOAT = 2
};

//A jField is a field description used for reading and writing them later on

struct jField {
    uint32_t hash;
    uint32_t bitmask;
    uint16_t start;
    uint8_t shift;
    jType type;

    jField(bStream& stream){
        hash = stream.readUInt32();
        bitmask = stream.readUInt32();
        start = stream.readUInt16();
        shift = stream.readUInt8();
        type = (jType)stream.readUInt8();
    }
    jField(){}
};

// A jValue represents a value that corresponds to a field as defined in the field LUT

struct jValue {
    int32_t vInt;
    float vFlt;
    char vStr[32];

    jValue(bStream& stream, jField& f){
        switch (f.type) {
            case JINT32:
                vInt = (stream.readInt32() & f.bitmask) >> f.shift;
            break;
            case JSTRING:
                strncpy(vStr, stream.readString(32).c_str(), 32);
            break;
            case JFLOAT:
                vFlt = stream.readFloat();
            break;
            default:
            break;
        }
    }
    jValue(){}
};

class jFile {
private:

    bool isLM3D;
    int32_t m_entryCount;
    int32_t m_fieldCount;
    uint32_t m_entryOffset;
    int32_t m_entrySize;
    std::deque<jField> m_fields;
    std::deque<jValue> m_entries;

public:

    jValue getField(int entryNum, int fieldNum);
    void setField(int entryNum, int fieldNum, jValue v);
    jField getFieldDesc(int32_t index);
    int32_t getFieldCount(){ return m_fieldCount; }
    int32_t getEntryCount(){ return m_entryCount; }
    void addEntry();
    void removeEntry(int index);
    void setLM3D(bool yn){ isLM3D = yn; }
    bool getLM3D() { return isLM3D; }
    bool randomize(std::map<uint32_t, QString>& names);

    void writeFile(bStream& stream);
    jFile(bStream& stream, bool log = false);
    jFile(){}
};

#endif // JFILE_H
