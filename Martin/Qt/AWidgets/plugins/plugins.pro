QT+= svg network sql

INCLUDEPATH += ../awidgets
INCLUDEPATH +=  ../bases
INCLUDEPATH += ../../SiTTuGAs/SharedMemory
INCLUDEPATH += ../../SiTTuGAs/Sittugas

win32-g++:{
TARGETDEPS += ../libawidgets.a
LIBS += ../libawidgets.a
TARGETDEPS += ../libbases.a
LIBS += ../libbases.a
}


win32-msvc*:{
 TARGETDEPS += ../awidgets.lib
 LIBS += ../awidgets.lib
 TARGETDEPS += ../bases.lib
 LIBS += ../bases.lib

}


MOC_DIR =     ..\objects
OBJECTS_DIR = ..\objects
TARGET =       awidgets_plugin
DESTDIR =      ../
CONFIG += release \
          warn_on \
          designer \
          plugin
TEMPLATE = lib

HEADERS += \
    awidgetscollection.h \
    atextplugin.h \
    aledplugin.h \
    anumindicatorplugin.h \
    ainstrumentindicatorplugin.h \
    auptextlabelplugin.h \
    awmultiobjectplugin.h \
    awanalogiclevelplugin.h \
    ../../SiTTuGAs/SharedMemory/httprequest.h
SOURCES += \
    awidgetscollection.cpp \
    aledplugin.cpp \
    anumindicatorplugin.cpp \
    ainstrumentindicatorplugin.cpp \
    auptextlabelplugin.cpp \
    awmultiobjectplugin.cpp \
    awanalogiclevelplugin.cpp \
    ../../SiTTuGAs/SharedMemory/httprequest.cpp


RESOURCES += \
    ../code/aresources.qrc
