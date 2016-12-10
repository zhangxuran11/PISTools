#-------------------------------------------------
#
# Project created by QtCreator 2016-05-30T14:47:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PISTools
TEMPLATE = app

include(ZTPManager/ZTPManager.pri)
SOURCES += main.cpp\
        mainwindow.cpp \
    pistools.cpp \
    setcjrcar.cpp

HEADERS  += mainwindow.h \
    pistools.h \
    setcjrcar.h

FORMS    += mainwindow.ui \
    pistools.ui \
    setcjrcar.ui
