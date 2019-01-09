/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_Custom_Style;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionRandomize;
    QAction *actionOpen_from_LM3D;
    QAction *actionSave_for_LM3D;
    QAction *actionSave_As_for_LM3D;
    QAction *actionLogging;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_2;
    QLabel *fieldNameLabel;
    QLineEdit *fieldName;
    QLabel *fieldHashLabel;
    QLineEdit *fieldHash;
    QLabel *fieldTypeLabel;
    QLineEdit *fieldType;
    QLabel *valLabel;
    QPushButton *setValue;
    QLineEdit *valString;
    QSpinBox *valInt;
    QDoubleSpinBox *valFlt;
    QTreeWidget *jmpView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuOther;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(529, 352);
        QIcon icon;
        icon.addFile(QStringLiteral(":/JMPQuickIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionLoad_Custom_Style = new QAction(MainWindow);
        actionLoad_Custom_Style->setObjectName(QStringLiteral("actionLoad_Custom_Style"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionRandomize = new QAction(MainWindow);
        actionRandomize->setObjectName(QStringLiteral("actionRandomize"));
        actionOpen_from_LM3D = new QAction(MainWindow);
        actionOpen_from_LM3D->setObjectName(QStringLiteral("actionOpen_from_LM3D"));
        actionSave_for_LM3D = new QAction(MainWindow);
        actionSave_for_LM3D->setObjectName(QStringLiteral("actionSave_for_LM3D"));
        actionSave_As_for_LM3D = new QAction(MainWindow);
        actionSave_As_for_LM3D->setObjectName(QStringLiteral("actionSave_As_for_LM3D"));
        actionLogging = new QAction(MainWindow);
        actionLogging->setObjectName(QStringLiteral("actionLogging"));
        actionLogging->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fieldNameLabel = new QLabel(groupBox);
        fieldNameLabel->setObjectName(QStringLiteral("fieldNameLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fieldNameLabel);

        fieldName = new QLineEdit(groupBox);
        fieldName->setObjectName(QStringLiteral("fieldName"));
        fieldName->setFrame(false);
        fieldName->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, fieldName);

        fieldHashLabel = new QLabel(groupBox);
        fieldHashLabel->setObjectName(QStringLiteral("fieldHashLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, fieldHashLabel);

        fieldHash = new QLineEdit(groupBox);
        fieldHash->setObjectName(QStringLiteral("fieldHash"));
        fieldHash->setFrame(false);
        fieldHash->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, fieldHash);

        fieldTypeLabel = new QLabel(groupBox);
        fieldTypeLabel->setObjectName(QStringLiteral("fieldTypeLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, fieldTypeLabel);

        fieldType = new QLineEdit(groupBox);
        fieldType->setObjectName(QStringLiteral("fieldType"));
        fieldType->setFrame(false);
        fieldType->setReadOnly(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, fieldType);

        valLabel = new QLabel(groupBox);
        valLabel->setObjectName(QStringLiteral("valLabel"));
        valLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, valLabel);

        setValue = new QPushButton(groupBox);
        setValue->setObjectName(QStringLiteral("setValue"));

        formLayout_2->setWidget(9, QFormLayout::SpanningRole, setValue);

        valString = new QLineEdit(groupBox);
        valString->setObjectName(QStringLiteral("valString"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, valString);

        valInt = new QSpinBox(groupBox);
        valInt->setObjectName(QStringLiteral("valInt"));
        valInt->setMaximum(2147483647);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, valInt);

        valFlt = new QDoubleSpinBox(groupBox);
        valFlt->setObjectName(QStringLiteral("valFlt"));
        valFlt->setMinimum(-9e+10);
        valFlt->setMaximum(9e+10);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, valFlt);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, formLayout_2);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        jmpView = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        jmpView->setHeaderItem(__qtreewidgetitem);
        jmpView->setObjectName(QStringLiteral("jmpView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(jmpView->sizePolicy().hasHeightForWidth());
        jmpView->setSizePolicy(sizePolicy1);
        jmpView->header()->setVisible(false);

        gridLayout->addWidget(jmpView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 529, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuOther = new QMenu(menuBar);
        menuOther->setObjectName(QStringLiteral("menuOther"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOther->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionOpen_from_LM3D);
        menuFile->addAction(actionSave_for_LM3D);
        menuFile->addAction(actionSave_As_for_LM3D);
        menuSettings->addAction(actionLogging);
        menuOther->addAction(actionRandomize);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JMPQuick", nullptr));
        actionLoad_Custom_Style->setText(QApplication::translate("MainWindow", "Load Custom Style", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLoad_Custom_Style->setShortcut(QApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open GC", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save GC", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save GC As", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionRandomize->setText(QApplication::translate("MainWindow", "Randomize", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRandomize->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_from_LM3D->setText(QApplication::translate("MainWindow", "Open LM3D", nullptr));
        actionSave_for_LM3D->setText(QApplication::translate("MainWindow", "Save LM3D", nullptr));
        actionSave_As_for_LM3D->setText(QApplication::translate("MainWindow", "Save LM3D As", nullptr));
        actionLogging->setText(QApplication::translate("MainWindow", "Logging", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Property Information", nullptr));
        fieldNameLabel->setText(QApplication::translate("MainWindow", "Field Name: ", nullptr));
        fieldHashLabel->setText(QApplication::translate("MainWindow", "Field Hash: ", nullptr));
        fieldTypeLabel->setText(QApplication::translate("MainWindow", "Field Type: ", nullptr));
        valLabel->setText(QApplication::translate("MainWindow", "Value: ", nullptr));
        setValue->setText(QApplication::translate("MainWindow", "Save Value", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuOther->setTitle(QApplication::translate("MainWindow", "Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
