#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T13:13:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uilab-main
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -luilab
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libuilab/ -luilabd
else:unix: LIBS += -L$$OUT_PWD/../libuilab/ -luilab

INCLUDEPATH += $$PWD/../libuilab
DEPENDPATH += $$PWD/../libuilab

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libuilab-utils-gui/ -luilab-utils-gui
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libuilab-utils-gui/ -luilab-utils-guid
else:unix: LIBS += -L$$OUT_PWD/../libuilab-utils-gui/ -luilab-utils-gui

INCLUDEPATH += $$PWD/../libuilab-utils-gui
DEPENDPATH += $$PWD/../libuilab-utils-gui
