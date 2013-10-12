QT+= svg

INCLUDEPATH += ../Header
INCLUDEPATH +=  ../Base
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
        POST_TARGETDEPS += ../libHeader.a
	LIBS += ../libHeader.a
        POST_TARGETDEPS += ../libBase.a
        LIBS += ../libBase.a
}


win32-msvc*:{
        POST_TARGETDEPS += ../Header.lib
	LIBS += ../Header.lib
        POST_TARGETDEPS += ../Base.lib
        LIBS += ../Base.lib

}


MOC_DIR =     ..\objects
OBJECTS_DIR = ..\objects
TARGET =       Componentes_plugin
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
    ../../SiTTuGAs/SharedMemory/shrdmem.h

SOURCES += \
    componentes.cpp \
    wcheckboxplugin.cpp \
    wlineeditplugin.cpp \
    wlabelplugin.cpp \
    ../../SiTTuGAs/SharedMemory/shrdmem.cpp


RESOURCES += \
    ../Code/componentes.qrc
