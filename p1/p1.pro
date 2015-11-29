QT += core
QT -= gui

TARGET = p1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    person.cpp \
    ../sort.cpp

HEADERS += \
    person.h \
    variables.h

