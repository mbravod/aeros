
OBJECTS_DIR = ../objects
TARGET = Base
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas


INSTALLS += staticlib

HEADERS += \
    Base.h \
   ../../SiTTuGAs/SharedMemory/httprequest.h



SOURCES += \
    Base.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp
