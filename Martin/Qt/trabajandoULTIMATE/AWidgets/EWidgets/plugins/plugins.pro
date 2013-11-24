QT+= svg

INCLUDEPATH += ../ewidgets
INCLUDEPATH +=  ../base


win32-g++:{
TARGETDEPS += ../libewidgets.a
LIBS += ../libewidgets.a
TARGETDEPS += ../libbase.a
LIBS += ../libbases.a
}


win32-msvc*:{
 POST_TARGETDEPS += ../ewidgets.lib
 LIBS += ../ewidgets.lib
 POST_TARGETDEPS += ../base.lib
 LIBS += ../base.lib

}


MOC_DIR =     ..\objects
OBJECTS_DIR = ..\objects
TARGET =       ewidgets_plugin
DESTDIR =      ../
CONFIG += release \
          warn_on \
          designer \
          plugin
TEMPLATE = lib

HEADERS += \
    complementos.h \
    flamaplugin.h \
    ventiladorplugin.h

SOURCES += \    
    complementos.cpp \
    flamaplugin.cpp \
    ventiladorplugin.cpp


RESOURCES += \
    ../code/icons.qrc
