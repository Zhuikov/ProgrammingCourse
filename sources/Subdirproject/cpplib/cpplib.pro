#-------------------------------------------------
#
# Project created by QtCreator 2015-12-07T17:33:13
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpplib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    matrix.cpp \
    1_length_of_segment.cpp \
    exceptions.cpp

HEADERS += \
    matrix.h \
    length_of_segment.h \
    exceptions.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
