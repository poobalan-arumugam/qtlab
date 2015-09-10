#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T19:29:54
#
#-------------------------------------------------

QT       += widgets

TARGET = uilab-testrunner
TEMPLATE = lib

DEFINES += UILABTESTRUNNER_LIBRARY

SOURCES += testrunner.cpp

HEADERS += testrunner.h\
        uilab-testrunner_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
