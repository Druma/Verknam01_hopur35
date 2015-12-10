QT += core sql
QT -= gui

TARGET = p1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    sort.cpp \
    fileManage.cpp \
    startup.cpp \
    errorhandling.cpp \ 
    search.cpp \
    computer.cpp \
    person.cpp

HEADERS += \
    variables.h \
    computer.h \
    person.h

DISTFILES +=

