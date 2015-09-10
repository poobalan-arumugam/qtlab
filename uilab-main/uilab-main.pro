#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T13:13:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uilab-main
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -llibuilab
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -llibuilabd
else:unix: LIBS += -L$$OUT_PWD/../libuilab/ -llibuilab

INCLUDEPATH += $$PWD/../libuilab
DEPENDPATH += $$PWD/../libuilab
