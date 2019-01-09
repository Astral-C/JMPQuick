#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T19:45:42
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET = JMPQuick
TEMPLATE = app
RESOURCES = resources.qrc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    bstream.cpp \
    jfile.cpp

HEADERS += \
        mainwindow.h \
    bstream.h \
    jfile.h

FORMS += \
        mainwindow.ui

DISTFILES +=
