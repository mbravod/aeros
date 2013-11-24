
QT+= svg

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
    ../../SiTTuGAs/SharedMemory/shrdmem.cpp

HEADERS += \
    ../awidgets/aled.h \
    ../awidgets/anumindicator.h \
    ../awidgets/ainstrumentindicator.h \
    ../awidgets/auptextlabel.h \
    ../awidgets/awmultiobject.h \
    ../awidgets/awanalogiclevel.h \
    ../../SiTTuGAs/SharedMemory/shrdmem.h

RESOURCES += \
    aresources.qrc
