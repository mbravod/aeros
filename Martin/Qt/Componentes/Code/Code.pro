
QT+= svg network sql

INCLUDEPATH += ../Header
INCLUDEPATH +=  ../BaseComponentes
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
    POST_TARGETDEPS += ../libBaseComponentes.a
    LIBS += ../libBaseComponentes.a
}


win32-msvc*:{
    POST_TARGETDEPS += ../BaseComponentes.lib
    LIBS += ../BaseComponentes.lib
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
    wlineedit.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp


HEADERS += \
    ../Header/wcheckbox.h \
    ../Header/wlabel.h \
    ../Header/wlineedit.h \
    ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
    ../../SiTTuGAs/SharedMemory/config.h



RESOURCES += \
    componentes.qrc
