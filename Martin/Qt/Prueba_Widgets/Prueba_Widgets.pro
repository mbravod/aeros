#-------------------------------------------------
#
# Project created by QtCreator 2013-10-08T16:38:24
#
#-------------------------------------------------

QT       += core gui svg

TARGET = Prueba_Widgets
TEMPLATE = app

INCLUDEPATH += ../awidgets/awidgets
INCLUDEPATH += ../awidgets/bases

win32-msvc*:{
LIBS += ../BD-Widgets/awidgets.lib
LIBS += ../BD-Widgets/bases.lib
}

SOURCES += main.cpp\
           principal.cpp\
           SharedMemory/shrdmem.cpp \

HEADERS  += principal.h\
            SharedMemory/shrdmem.h \

FORMS    += principal.ui

RESOURCES += \
    ../AWidgets/code/aresources.qrc \
