
QT+= svg

INCLUDEPATH += ../Header
INCLUDEPATH +=  ../Base
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
    POST_TARGETDEPS += ../libBase.a
    LIBS += ../libBase.a
}


win32-msvc*:{
    POST_TARGETDEPS += ../Base.lib
    LIBS += ../Base.lib
}


OBJECTS_DIR = ../objects
TARGET = Header
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

SOURCES += \
    wcheckbox.cpp \
    wlabel.cpp \
    ../../SiTTuGAs/SharedMemory/shrdmem.cpp \
    wlineedit.cpp

HEADERS += \
    ../Header/wcheckbox.h \
    ../Header/wlabel.h \
    ../../SiTTuGAs/SharedMemory/shrdmem.h \
    ../Header/wlineedit.h

RESOURCES += \
    componentes.qrc
