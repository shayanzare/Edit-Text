#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T01:32:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = notepadHTML
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    form.cpp \
    highlighter.cpp

HEADERS  += mainwindow.h \
    form.h \
    highlighter.h

FORMS    += mainwindow.ui \
    form.ui

RESOURCES += \
    file.qrc
    

