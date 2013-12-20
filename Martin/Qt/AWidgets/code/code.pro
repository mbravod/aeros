
QT+= svg network sql

INCLUDEPATH += ../awidgets
INCLUDEPATH +=  ../bases
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
TARGETDEPS += ../libbases.a
LIBS += ../libbases.a
}


win32-msvc*:{
 TARGETDEPS += ../bases.lib
 LIBS += ../bases.lib
}


OBJECTS_DIR = ../objects
TARGET = awidgets
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

SOURCES += \
    aled.cpp \
    anumindicator.cpp \
    ainstrumentindicator.cpp \
    auptextlabel.cpp \
    awmultiobject.cpp \
    awanalogiclevel.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp

HEADERS += \
    ../awidgets/aled.h \
    ../awidgets/anumindicator.h \
    ../awidgets/ainstrumentindicator.h \
    ../awidgets/auptextlabel.h \
    ../awidgets/awmultiobject.h \
    ../awidgets/awanalogiclevel.h \
   ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
   ../../SiTTuGAs/SharedMemory/config.h

RESOURCES += \
    aresources.qrc
