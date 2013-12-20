QT+= svg network sql


INCLUDEPATH += ../Header
INCLUDEPATH +=  ../BaseComponentes
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
        POST_TARGETDEPS += ../libHeader.a
        LIBS += ../libHeader.a
        POST_TARGETDEPS += ../libBaseComponentes.a
        LIBS += ../libBaseComponentes.a
}


win32-msvc*:{
        POST_TARGETDEPS += ../Header.lib
        LIBS += ../Header.lib
        POST_TARGETDEPS += ../BaseComponentes.lib
        LIBS += ../BaseComponentes.lib

}


MOC_DIR =     ..\objects
OBJECTS_DIR = ..\objects
TARGET =       Componentes
DESTDIR =      ../
CONFIG += release \
          warn_on \
          designer \
          plugin
TEMPLATE = lib

HEADERS += \
    componentes.h \
    wcheckboxplugin.h \
    wlabelplugin.h \
    wlineeditplugin.h \
    ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
    ../../SiTTuGAs/SharedMemory/config.h

SOURCES += \
    componentes.cpp \
    wcheckboxplugin.cpp \
    wlineeditplugin.cpp \
    wlabelplugin.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp


RESOURCES += \
    ../Code/componentes.qrc
