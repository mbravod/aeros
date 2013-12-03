QT+= svg network sql

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
TARGET =       WidgetsSiTTuGAs
DESTDIR =      ../
CONFIG += release \
          warn_on \
          designer \
          plugin
TEMPLATE = lib

HEADERS += \
    flama_anexomplugin.h \
    flama_anexonplugin.h \
    flama_sectoraplugin.h \
    flama_sectorbplugin.h \
    flama_sectorcplugin.h \
    flama_sectordplugin.h \
    flama_sectoreplugin.h \
    flama_sectorfplugin.h \
    flama_sectorgplugin.h \
    flama_sectorhplugin.h \
    flama_sectoriplugin.h \
    flama_sectorjplugin.h \
    flama_sectorkplugin.h \
    flama_sectorlplugin.h \
    wbombaplugin.h \
    wventiladorplugin.h\
    welemento_aplugin.h \
    welemento_cplugin.h \
    welemento_dplugin.h \
    welemento_eplugin.h \
    welemento_fplugin.h \
    welemento_gplugin.h \
    welemento_hplugin.h \
    welementos_bplugin.h \
    widgetssittugas.h \
    ../../SiTTuGAs/SharedMemory/httprequest.h

SOURCES += \
    wventiladorplugin.cpp \
    flama_anexomplugin.cpp \
    flama_anexonplugin.cpp \
    flama_sectoraplugin.cpp \
    flama_sectorbplugin.cpp \
    flama_sectorcplugin.cpp \
    flama_sectordplugin.cpp \
    flama_sectoreplugin.cpp \
    flama_sectorfplugin.cpp \
    flama_sectorgplugin.cpp \
    flama_sectorhplugin.cpp \
    flama_sectoriplugin.cpp \
    flama_sectorjplugin.cpp \
    flama_sectorkplugin.cpp \
    flama_sectorlplugin.cpp \
    wbombaplugin.cpp \
    welemento_aplugin.cpp \
    welemento_cplugin.cpp \
    welemento_dplugin.cpp \
    welemento_eplugin.cpp \
    welemento_fplugin.cpp \
    welemento_gplugin.cpp \
    welemento_hplugin.cpp \
    welementos_bplugin.cpp \
    widgetssittugas.cpp \
    wventiladorplugin.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp


RESOURCES += \
    ../Code/icons.qrc
