#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T19:29:54
#
#-------------------------------------------------

QT       += widgets

TARGET = uilab-testrunner
TEMPLATE = lib
CONFIG += plugin

QMAKE_CXXFLAGS += -std=c++0x

DEFINES += UILABTESTRUNNER_LIBRARY

SOURCES += testrunner.cpp

HEADERS += testrunner.h\
        uilab-testrunner_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -luilab
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -luilabd
else:unix: LIBS += -L$$OUT_PWD/../libuilab/ -luilab

INCLUDEPATH += $$PWD/../libuilab
DEPENDPATH += $$PWD/../libuilab
