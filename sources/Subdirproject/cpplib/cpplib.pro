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
    indexexception.cpp \
    1_length_of_segment.cpp

HEADERS += \
    matrix.h \
    indexexception.h \
    length_of_segment.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
