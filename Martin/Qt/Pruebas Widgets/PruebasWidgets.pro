#-------------------------------------------------
#
# Project created by QtCreator 2013-10-07T19:23:55
#
#-------------------------------------------------

QT       += core gui svg

TARGET = PruebasWidgets
TEMPLATE = app

INCLUDEPATH =+ ../Awidgets/
INCLUDEPATH =+ ../awidgets/bases



win32-msvc*:{

LIBS += ../BD-Widgets/bases.lib
LIBS += ../BD-Widgets/awidgets.lib

}
SOURCES += main.cpp\
        mi_prueba.cpp\ 
	   ../SiTTuGAs/SharedMemory/shrdmem.cpp	
HEADERS  += mi_prueba.h\ 
	   ../SiTTuGAs/SharedMemory/shrdmem.h	

FORMS    += mi_prueba.ui
