CONFIG      += designer plugin debug_and_release
TARGET      = $$qtLibraryTarget(coleccion_dieselplugin)
TEMPLATE    = lib

HEADERS     = elemento1plugin.h elemento2plugin.h elemento3plugin.h elemento4plugin.h elemento5plugin.h elemento6plugin.h elemento7plugin.h elemento8plugin.h elemento9plugin.h coleccion_diesel.h
SOURCES     = elemento1plugin.cpp elemento2plugin.cpp elemento3plugin.cpp elemento4plugin.cpp elemento5plugin.cpp elemento6plugin.cpp elemento7plugin.cpp elemento8plugin.cpp elemento9plugin.cpp coleccion_diesel.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(elemento1.pri)
include(elemento5.pri)
include(elemento3.pri)
include(elemento4.pri)
include(elemento9.pri)
include(elemento2.pri)
include(elemento7.pri)
include(elemento8.pri)
include(elemento6.pri)
