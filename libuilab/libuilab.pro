#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T18:57:31
#
#-------------------------------------------------

QT       -= gui

TARGET = uilab
TEMPLATE = lib

DEFINES += LIBUILAB_LIBRARY

SOURCES += uilabbase.cpp

HEADERS += uilabbase.h\
        libuilab_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
