#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <jfile.h>
#include <QMainWindow>
#include <QtWidgets>

namespace Ui {

class JTreeWidgetItem;
class MainWindow;

}

class JTreeWidgetItem : public QTreeWidgetItem {
public:
    explicit JTreeWidgetItem(int EntryNum, int FieldNum, QTreeWidget *parent = 0);
    ~JTreeWidgetItem(){}
   int fieldNum;
   int entryNum;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_jmpView_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_setValue_clicked();

    void on_actionSave_As_triggered();

    void on_actionRandomize_triggered();

    void on_pushButton_clicked();

    void on_actionOpen_from_LM3D_triggered();

    void on_actionSave_for_LM3D_triggered();

    void on_actionSave_As_for_LM3D_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    jFile *jmp;
    QString curFile;
    std::map<uint32_t, QString> names; //names is a map, makes it easier to get values when filling tree and property view
};

#endif // MAINWINDOW_H
