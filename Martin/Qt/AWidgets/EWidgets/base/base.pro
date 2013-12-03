
OBJECTS_DIR = ../objects
TARGET = base
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib



INSTALLS += staticlib

HEADERS += \
    base.h 

SOURCES += \
    base.cpp 