#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T19:13:53
#
#-------------------------------------------------

QT       += widgets

TARGET = uilab-utils-gui
TEMPLATE = lib

DEFINES += LIBUILABUTILSGUI_LIBRARY

SOURCES += utilsbase.cpp

HEADERS += utilsbase.h\
        libuilab-utils-gui_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
