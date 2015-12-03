QT += core
QT -= gui

TARGET = p1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    person.cpp \
    sort.cpp \
    fileManage.cpp \
    startup.cpp \
    vecthelpers.cpp \
    errorhandling.cpp \ 
    search.cpp

HEADERS += \
    person.h \
    variables.h

DISTFILES += \
    data.txt

