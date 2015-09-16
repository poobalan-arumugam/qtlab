#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T18:57:31
#
#-------------------------------------------------

QT       -= gui

TARGET = uilab
TEMPLATE = lib

QMAKE_CXXFLAGS += -std=c++0x

DEFINES += LIBUILAB_LIBRARY

SOURCES += uilabbase.cpp

HEADERS += uilabbase.h\
        libuilab_global.h \
    uilab_modules.h \
    nsii_eventbus.h \
    nsii_identity.h \
    nsii_logging.h \
    nsii_service.h \
    nsii_service_registry.h \
    nsii_observables.h \
    nsii_rules.h \
    nsii_alert.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
