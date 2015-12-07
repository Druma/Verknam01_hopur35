QT += core sql
QT -= gui

TARGET = p1
CONFIG += console
CONFIG -= app_bundle
CONFIG   -= x86_64

TEMPLATE = app

SOURCES += main.cpp \
    sort.cpp \
    fileManage.cpp \
    startup.cpp \
    errorhandling.cpp \ 
    search.cpp \
    PerCom.cpp

HEADERS += \
    variables.h \
    PerCom.h

DISTFILES +=

