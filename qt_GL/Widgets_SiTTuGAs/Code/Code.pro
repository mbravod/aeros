
QT+= svg network sql

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
    flama_anexom.cpp\
    flama_anexon.cpp\
    flama_sectora.cpp\
    flama_sectorb.cpp\
    flama_sectorc.cpp\
    flama_sectord.cpp\
    flama_sectore.cpp\
    flama_sectorf.cpp\
    flama_sectorg.cpp\
    flama_sectorh.cpp\
    flama_sectori.cpp\
    flama_sectorj.cpp\
    flama_sectork.cpp\
    flama_sectorl.cpp\
    wbomba.cpp\
    welemento_a.cpp\
    welemento_c.cpp\
    welemento_d.cpp\
    welemento_e.cpp\
    welemento_f.cpp\
    welemento_g.cpp\
    welemento_h.cpp\
    welementos_b.cpp\
    wventilador.cpp\
    ../../SiTTuGAs/SharedMemory/httprequest.cpp \
    ../../SiTTuGAs/SharedMemory/sqlite.cpp \
    ../../SiTTuGAs/SharedMemory/config.cpp


HEADERS += \
    ../Header/flama_anexom.h\
    ../Header/flama_anexon.h\
    ../Header/flama_sectora.h\
    ../Header/flama_sectorb.h\
    ../Header/flama_sectorc.h\
    ../Header/flama_sectord.h\
    ../Header/flama_sectore.h\
    ../Header/flama_sectorf.h\
    ../Header/flama_sectorg.h\
    ../Header/flama_sectorh.h\
    ../Header/flama_sectori.h\
    ../Header/flama_sectorj.h\
    ../Header/flama_sectork.h\
    ../Header/flama_sectorl.h\
    ../Header/wbomba.h\
    ../Header/welemento_a.h\
    ../Header/welemento_c.h\
    ../Header/welemento_d.h\
    ../Header/welemento_e.h\
    ../Header/welemento_f.h\
    ../Header/welemento_g.h\
    ../Header/welemento_h.h\
    ../Header/welementos_b.h\
    ../Header/wventilador.h\
   ../../SiTTuGAs/SharedMemory/httprequest.h \
   ../../SiTTuGAs/SharedMemory/sqlite.h \
   ../../SiTTuGAs/SharedMemory/config.h
RESOURCES += \
    icons.qrc
