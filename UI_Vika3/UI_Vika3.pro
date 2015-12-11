#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T13:46:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UI_Vika3
TEMPLATE = app


SOURCES += main.cpp\
        UI/mainwindow.cpp \
		Models/computer.cpp \
		Models/person.cpp
		

HEADERS  += UI/mainwindow.h \
		Models/computer.h \
		Models/person.h

FORMS    += UI/mainwindow.ui

INCLUDEPATH += UI \
    Models 
