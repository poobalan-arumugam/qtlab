TEMPLATE = subdirs

QMAKE_CXXFLAGS += -std=c++0x

SUBDIRS+= uilab-main \
    libuilab \
    libuilab-utils-gui \
    uilab-testrunner
