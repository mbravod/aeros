
OBJECTS_DIR = ../objects
TARGET = bases
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

INSTALLS += staticlib

HEADERS += \
    awidget.h \
    awanalogicwidget.h \
    awmultestatewidget.h \
    ../../SiTTuGAs/SharedMemory/httprequest.h

SOURCES += \
    awidget.cpp \
    awanalogicwidget.cpp \
    awmultestatewidget.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp
