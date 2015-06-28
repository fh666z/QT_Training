TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Income.cpp \
    DatabaseAccess.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Income.h \
    DatabaseAccess.h

