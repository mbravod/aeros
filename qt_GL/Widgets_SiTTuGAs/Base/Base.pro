
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
    Base.h  \
   ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
   ../../SiTTuGAs/SharedMemory/config.h


SOURCES += \
    Base.cpp\
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp

