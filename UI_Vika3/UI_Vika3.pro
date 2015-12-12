#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T13:46:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UI_Vika3

CONFIG += C++11

TEMPLATE = app


SOURCES += main.cpp\
    UI/mainwindow.cpp \
    models/scientist.cpp \
    models/computer.cpp \
    utilities/utils.cpp \
    services/scientistservice.cpp \
    services/computerservice.cpp \
    services/linkservice.cpp \
    repositories/scientistrepository.cpp \
    repositories/computerrepository.cpp \
    repositories/linkrepository.cpp \
    UI/addscientistdialog.cpp

HEADERS  += UI/mainwindow.h \
    models/scientist.h \
    models/computer.h \
    utilities/utils.h \
    utilities/constants.h \
    services/scientistservice.h \
    services/computerservice.h \
    services/linkservice.h \
    repositories/scientistrepository.h \
    repositories/computerrepository.h \
    repositories/linkrepository.h \
    UI/addscientistdialog.h

FORMS    += UI/mainwindow.ui \
    UI/addscientistdialog.ui

INCLUDEPATH += UI \
    Models \
    repositories \
    services
