
QT+= svg

INCLUDEPATH += ../ewidgets
INCLUDEPATH +=  ../base


win32-g++:{
POST_TARGETDEPS += ../libbase.a
LIBS += ../libbase.a
}


win32-msvc*:{
 POST_TARGETDEPS += ../base.lib
 LIBS += ../base.lib
}


OBJECTS_DIR = ../objects
TARGET = ewidgets
DESTDIR = ../
CONFIG += release \
            warn_on \
            staticlib
TEMPLATE = lib

SOURCES += \
    flama.cpp \
    ventilador.cpp 
    

HEADERS += \
    ../ewidgets/flama.h \
    ../ewidgets/ventilador.h \
   

RESOURCES += \
    icons.qrc
