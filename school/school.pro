#-------------------------------------------------
#
# Project created by QtCreator 2013-05-03T13:42:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = School
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    nazemadmin.cpp \
    addstu.cpp

HEADERS  += mainwindow.h \
    nazemadmin.h \
    addstu.h

FORMS += \
    addstu.ui
