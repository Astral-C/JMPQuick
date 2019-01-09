#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QSettings>
#include <QMessageBox>
#include <QtWidgets>

JTreeWidgetItem::JTreeWidgetItem(int EntryNum, int FieldNum, QTreeWidget *parent) : QTreeWidgetItem(parent) {
    this->entryNum = EntryNum;
    this->fieldNum = FieldNum;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //init jmp to nothing since we havent set it yet
    jmp = nullptr;
    //load the user config file
#ifdef _WIN32
    //Thanks to Gamma/SageOfMirrors for helping me debug this part on windows
    QString appDir = QCoreApplication::applicationDirPath();
    if(QFile::exists(appDir + "\\jmpquick.conf")){
        QSettings config(appDir + "\\jmpquick.conf", QSettings::IniFormat);
        QString test = config.value("theme", "").toString();
        if(config.contains("theme") && QFile::exists(appDir + "\\" + config.value("theme", "").toString())){
            QFile f(appDir + "\\" + config.value("theme", "").toString());
            f.open(QFile::ReadOnly | QFile::Text);
            this->setStyleSheet(f.readAll());
        }
    } else {
            QMessageBox::warning(this, "Error!", "Config (jmpquick.conf) not found!", QMessageBox::Ok);
    }

#else

    if(QFile::exists("jmpquick.conf")){
        QSettings config("jmpquick.conf", QSettings::IniFormat);
        if(config.contains("theme") && QFile::exists(config.value("theme", "").toString())){
            QFile f(config.value("theme", "").toString());
            f.open(QFile::ReadOnly | QFile::Text);
            this->setStyleSheet(f.readAll());
        }
    } else {
            QMessageBox::warning(this, "Error!", "Config (jmpquick.conf) not found!", QMessageBox::Ok);
    }

#endif

    //load embedded names.txtew
    QFile n(":/names.txt");
    if(n.open(QIODevice::ReadOnly)){
        QString curLine = n.readLine();
        while(curLine != nullptr){
            if(curLine.at(0) != "#" && curLine.at(0) != "\n"){
                curLine.replace("\n", QString("\0")) ; //set the end to \0 so that the hash calculates properly.
                uint32_t hash = 0u;
                for(char c : curLine.toStdString()){
                    hash <<= 8;
                    hash += c;
                    uint32_t r6 = (4993ul * hash) >> 32;
                    char r0 = ((((hash - r6)/2)+r6)>>24);
                    hash -= r0*33554393u;
                }
                names.insert(std::pair<uint32_t, QString>(hash, curLine));
            }
            curLine = n.readLine();
        }
    }
}

MainWindow::~MainWindow() {
    if(jmp != nullptr){
        delete jmp;
    }
    delete ui;
}

void MainWindow::on_actionOpen_triggered() {

    //create a new bStream and create a jFile object
    curFile = QFileDialog::getOpenFileName(this, tr("Open JMP File"), "", tr("GC JMP Files (*info);;3DS JMP Files (*.gseb)"));
    if(curFile == ""){
        return;
    }

    //clear old jmp (if there is one) out to load a new one
    if(jmp != nullptr){
        delete jmp;
        jmp = nullptr;
        ui->jmpView->clear();
    }

    bStream* stream = new bStream(curFile.toStdString(), curFile.endsWith(".gseb") ? Endianess::Little : Endianess::Big);

    if(stream != nullptr){
        jmp = new jFile(*stream, ui->actionLogging->isChecked());

        if(curFile.endsWith(".gseb")){
            jmp->setLM3D(true);
        } else {
            jmp->setLM3D(false);
        }

        for (int x = 0; x < jmp->getEntryCount(); x++){
            JTreeWidgetItem *t = new JTreeWidgetItem(x, -1);
            t->setText(0, QString("Entry ") + QString::number(x));
            ui->jmpView->addTopLevelItem(t);
            for(int y = 0; y < jmp->getFieldCount(); y++){
                jValue curValue = jmp->getField(x, y);
                jField cDesc = jmp->getFieldDesc(y);
                JTreeWidgetItem *f = new JTreeWidgetItem(x, y);
                f->setText(0, (cDesc.type == jType::JINT32 ? QString::number(curValue.vInt) : (cDesc.type == jType::JFLOAT ? QString::number(curValue.vFlt) : QString(curValue.vStr))));
                t->addChild(f);
            }
        }

        //now that were done with the stream clean it up
        delete stream;
    }
}
void MainWindow::on_jmpView_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous){
    JTreeWidgetItem *curItem = static_cast<JTreeWidgetItem*>(current);
    if(current != nullptr && !(curItem->fieldNum == -1)){
        jField fld = jmp->getFieldDesc(curItem->fieldNum);

        auto n = names.find(fld.hash);
        if(n != names.end()){
            ui->fieldName->setText(n->second);
        } else {
            ui->fieldName->setText("Unknown");
        }
        ui->fieldHash->setText("0x" + QString::number(fld.hash, 16));
        ui->fieldType->setText(fld.type == jType::JINT32 ? "INT" : (fld.type == jType::JFLOAT ? "JFLOAT" : "JSTRING"));
        ui->valFlt->clear();
        ui->valInt->clear();
        ui->valString->clear();
        switch (fld.type) {
        case jType::JINT32:
            ui->valInt->setEnabled(true);
            ui->valFlt->setEnabled(false);
            ui->valString->setEnabled(false);
            ui->valInt->setValue(jmp->getField(curItem->entryNum, curItem->fieldNum).vInt);
            break;
        case jType::JFLOAT:
            ui->valInt->setEnabled(false);
            ui->valFlt->setEnabled(true);
            ui->valString->setEnabled(false);
            ui->valFlt->setValue(static_cast<double>(jmp->getField(curItem->entryNum, curItem->fieldNum).vFlt));
            break;
        case jType::JSTRING:
            ui->valInt->setEnabled(false);
            ui->valFlt->setEnabled(false);
            ui->valString->setEnabled(true);
            ui->valString->setText(jmp->getField(curItem->entryNum, curItem->fieldNum).vStr);
            break;
        default:
            break;
        }
    }

}

void MainWindow::on_setValue_clicked(){
    JTreeWidgetItem *curItem = static_cast<JTreeWidgetItem*>(ui->jmpView->selectedItems()[0]);
    if(curItem != nullptr && !(curItem->fieldNum == -1)){
        jField fld = jmp->getFieldDesc(curItem->fieldNum);
        jValue newValue;
        switch (fld.type) {
        case jType::JINT32:
            newValue.vInt = ui->valInt->value();
            break;
        case jType::JFLOAT:
            newValue.vFlt = static_cast<float>(ui->valFlt->value());
            break;
        case jType::JSTRING:
            //the 32nd character is alwas \0
            strncpy(newValue.vStr, ui->valString->text().toStdString().data(), 31);
            newValue.vStr[32] = '\0';
            break;
        default:
            break;
        }
        jmp->setField(curItem->entryNum, curItem->fieldNum, newValue);
        curItem->setText(0, (fld.type == jType::JINT32 ? QString::number(newValue.vInt) : (fld.type == jType::JFLOAT ? QString::number(newValue.vFlt) : QString(newValue.vStr))));
    }
}

void MainWindow::on_actionSave_triggered() {
    bStream *stream = new bStream(curFile.toStdString(), jmp->getLM3D() ? Endianess::Little : Endianess::Big, RW::Write);
    jmp->writeFile(*stream);
    delete stream;
}

void MainWindow::on_actionSave_As_triggered(){
    QString path = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("GC JMP Files (*info);;3DS JMP Files (*.gseb)"));
    bStream *stream = new bStream(path.toStdString(), jmp->getLM3D() ? Endianess::Little : Endianess::Big, RW::Write);
    jmp->writeFile(*stream);
    delete stream;
}

//This entire thing is awfully optimized, but it works
void MainWindow::on_actionRandomize_triggered(){
    //jmp->randomize does the actual randomizing, the rest of the code just updates the UI accordingly
    if(jmp != nullptr && jmp->randomize(names)){
        int entryNum = 0, fieldNum = 0;
        while(ui->jmpView->topLevelItem(entryNum) != nullptr){
            while(ui->jmpView->topLevelItem(entryNum)->child(fieldNum) != nullptr){
                JTreeWidgetItem *item = static_cast<JTreeWidgetItem*>(ui->jmpView->topLevelItem(entryNum)->child(fieldNum));
                if(item->fieldNum != -1){
                    jField fld = jmp->getFieldDesc(item->fieldNum);
                    jValue newValue = jmp->getField(item->entryNum, item->fieldNum);
                    item->setText(0, (fld.type == jType::JINT32 ? QString::number(newValue.vInt) : (fld.type == jType::JFLOAT ? QString::number(newValue.vFlt) : QString(newValue.vStr))));
                }
                fieldNum++;
            }
            fieldNum = 0;
            entryNum++;
        }
    } else {
        QMessageBox::warning(this, "Error", "Randomization failed.\nDoes this file have a dmd_name or name field?", QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(jmp == nullptr){
        QMessageBox::warning(this, "Error", "No Open JMP File", QMessageBox::Ok);
        return;
    }
    jmp->addEntry();
    JTreeWidgetItem *t = new JTreeWidgetItem(jmp->getEntryCount()-1, -1);
    t->setText(0, QString("Entry ") + QString::number(jmp->getEntryCount()-1));
    ui->jmpView->addTopLevelItem(t);
    for(int y = 0; y < jmp->getFieldCount(); y++){
        jValue curValue = jmp->getField(jmp->getEntryCount()-1, y);
        jField cDesc = jmp->getFieldDesc(y);
        JTreeWidgetItem *f = new JTreeWidgetItem(jmp->getEntryCount()-1, y);
        f->setText(0, (cDesc.type == jType::JINT32 ? QString::number(curValue.vInt) : (cDesc.type == jType::JFLOAT ? QString::number(curValue.vFlt) : QString(curValue.vStr))));
        t->addChild(f);
    }

}

void MainWindow::on_actionOpen_from_LM3D_triggered()
{

    //create a new bStream and create a jFile object
    curFile = QFileDialog::getOpenFileName(this, tr("Open LM3D JMP File"), "", "*.gseb");

    if(curFile == ""){
        return;
    }

    //clear old jmp (if there is one) out to load a new one
    if(jmp != nullptr){
        delete jmp;
        ui->jmpView->clear();
    }

    bStream* stream = new bStream(curFile.toStdString(), Endianess::Little);
    jmp = new jFile(*stream, ui->actionLogging->isChecked());

    for (int x = 0; x < jmp->getEntryCount(); x++){
        JTreeWidgetItem *t = new JTreeWidgetItem(x, -1);
        t->setText(0, QString("Entry ") + QString::number(x));
        ui->jmpView->addTopLevelItem(t);
        for(int y = 0; y < jmp->getFieldCount(); y++){
            jValue curValue = jmp->getField(x, y);
            jField cDesc = jmp->getFieldDesc(y);
            JTreeWidgetItem *f = new JTreeWidgetItem(x, y);
            f->setText(0, (cDesc.type == jType::JINT32 ? QString::number(curValue.vInt) : (cDesc.type == jType::JFLOAT ? QString::number(curValue.vFlt) : QString(curValue.vStr))));
            t->addChild(f);
        }
    }

    //now that were done with the stream clean it up
    delete stream;
}

void MainWindow::on_actionSave_for_LM3D_triggered()
{
    bStream *stream = new bStream(curFile.toStdString(), Endianess::Little, RW::Write);
    jmp->writeFile(*stream);
    delete stream;
}

void MainWindow::on_actionSave_As_for_LM3D_triggered()
{
    std::string path = QFileDialog::getSaveFileName(this, tr("Save LM3D File")).toStdString();
    bStream *stream = new bStream(path, Endianess::Little, RW::Write);
    jmp->writeFile(*stream);
    delete stream;
}

void MainWindow::on_pushButton_2_clicked()
{
    JTreeWidgetItem *curItem = static_cast<JTreeWidgetItem*>(ui->jmpView->selectedItems()[0]);
    if(jmp == nullptr || curItem == nullptr){
        return;
    }

    //reset entry index
    //remove tree item last last, that way we can still use it when modifying other entries
    if(curItem->fieldNum != -1){
        curItem = static_cast<JTreeWidgetItem*>(curItem->parent());
    }


    jmp->removeEntry(curItem->entryNum);


    int entryIndex = ui->jmpView->indexOfTopLevelItem(curItem);

    while(ui->jmpView->topLevelItem(entryIndex) != nullptr){
        JTreeWidgetItem *item = static_cast<JTreeWidgetItem*>(ui->jmpView->topLevelItem(entryIndex));
        item->entryNum -= 1;
        for(int j = 0; j < jmp->getFieldCount(); j++){
            static_cast<JTreeWidgetItem*>(item->child(j))->entryNum -= 1;
        }
        entryIndex++;
    }

    delete ui->jmpView->takeTopLevelItem(ui->jmpView->indexOfTopLevelItem(curItem));
}
