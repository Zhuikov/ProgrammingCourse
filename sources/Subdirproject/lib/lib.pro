#-------------------------------------------------
#
# Project created by QtCreator 2015-10-23T12:22:36
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    2_equation.c \
    1_length_of_segment.c \
    3_km_to_miles.c \
    5_strings.c

HEADERS += \
    km_to_miles.h \
    length_of_segment.h \
    equation.h \
    stringsx.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
