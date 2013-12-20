
OBJECTS_DIR = ../objects
TARGET = BaseComponentes
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas


INSTALLS += staticlib

HEADERS += \
    BaseComponentes.h \
   ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
   ../../SiTTuGAs/SharedMemory/config.h




SOURCES += \
    BaseComponentes.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp
