QT       += core gui svg sql network
CONFIG   +=  qwt

TARGET = SiTTuGAs
TEMPLATE = app

INCLUDEPATH += ../awidgets/awidgets
INCLUDEPATH += ../awidgets/bases

INCLUDEPATH += ../Widgets_SiTTuGAs/Base
INCLUDEPATH += ../Widgets_SiTTuGAs/Header

INCLUDEPATH += ../Componentes/Base
INCLUDEPATH += ../Componentes/Header

win32-g++:{
LIBS += ../BD-Widgets/libawidgets.a
LIBS += ../BD-Widgets/libbases.a
}

win32-msvc*:{
LIBS += ../BD-Widgets/awidgets.lib
LIBS += ../BD-Widgets/bases.lib

#Librerias de los nuevos elementos de la interfaz
LIBS += ../BD-Componentes/Base.lib
LIBS += ../BD-Componentes/Header.lib

#Elementos de los sectores para las flamas
LIBS += ../BD-WidgetsSiTTuGAs/Base.lib
LIBS += ../BD-WidgetsSiTTuGAs/Header.lib

}

SOURCES += main.cpp\
    Sittugas/sittugas.cpp \
    A1-Turbina/a1.cpp \
    A2-Generador/a2.cpp \
    A3-Secuencia/a3.cpp \
    A4-Secuencia/a4.cpp \
    B1-Sistema_Lubricacion_Generador/b1.cpp \
    B2-Sistema_Lubricacion_Generador/b2.cpp \
    B3-Sistema_Lubricacion_Turbina/b3.cpp \
    B4-Arrancador_Hidraulico/b4.cpp \
    B6-Sistema_Combustible/b6.cpp \
    B7-Sistema_Combustible/b7.cpp \
    B14-Sistema_Lavado_Agua/b14.cpp \
    C4-Vibraciones/c4.cpp \
    D5-Datos_Turbina/d5.cpp \
    D6-Datos_Turbina/d6.cpp \
    D7-Datos_Generador/d7.cpp \
    Menu/menu.cpp \
    Abstract/pantallas.cpp \
    Componets/qlabelclick.cpp \
    B4-Arrancador_Hidraulico/arrancadorhidraulico.cpp \
    B14-Sistema_Lavado_Agua/lavado_compresor.cpp \
    B2-Sistema_Lubricacion_Generador/lubricacion_generador.cpp \
    Modelos/sistema_aire_instrumentos.cpp \
    Modelos/sistema_electrico.cpp \
    B11-Carcaza_Generador/b11.cpp \
    B6-Sistema_Combustible/sitematoroumout.cpp \
    C4-Vibraciones/sistema_vibraciones.cpp \
    Modelos/aire_ventilacion_combustion.cpp \
    B3-Sistema_Lubricacion_Turbina/sistema_lubricante_turbina_2.cpp \
    Settings/settings.cpp \
    Console/IConsole/console.cpp \
    Console/Base/toolbar.cpp \
    Console/Base/toolb.cpp \
    Settings/modsel.cpp \
    Console/Login/passwdialog.cpp \
    Console/Login/login.cpp \
    BitaC/bitac.cpp \
    Console/ParametrosDeSimulacion/parametrossimulacion.cpp \
    Console/Tablas/tablas.cpp \
    Console/PInternos/parametrosinternos.cpp \
    Console/Fallas/fallas.cpp \
    Console/Monitoreo/monitoreov.cpp \
    Console/GrupoCurvas/grupocurves.cpp \
    Console/GrupoVariables/grupovars.cpp \
    Console/BitacoraI/bitacorai.cpp \
    Console/BitacoraO/bitacorao.cpp \
    Console/CIniciales/condicionesiniciales.cpp \
    Console/CIClass/cin.cpp \
    Console/CIEdit/ci_edit.cpp \
    Console/Reproducir/retroceder.cpp \
    Console/CIHistorial/ci_historial.cpp \
    Console/MConfiguracion/configuraciondemodelos.cpp \
    header.cpp \
    D1-Micronet/d1.cpp \
    D1-Micronet/digital16.cpp \
    D1-Micronet/analog24_s2.cpp \
    D1-Micronet/analog24.cpp \
    D1-Micronet/analog16.cpp \
    D1-Micronet/analog04.cpp \
    D2-Linknet/lnet_dl2.cpp \
    D2-Linknet/lnet_di3.cpp \
    D2-Linknet/lnet_di.cpp \
    D2-Linknet/lnet_al7.cpp \
    D2-Linknet/lnet_al6.cpp \
    D2-Linknet/lnet_al5.cpp \
    D2-Linknet/lnet_al3.cpp \
    D2-Linknet/lnet_ai9.cpp \
    D2-Linknet/lnet_ai8.cpp \
    D2-Linknet/lnet_ai4.cpp \
    D2-Linknet/d2.cpp \
    A1-Turbina/wvoltctrl.cpp \
    A1-Turbina/wvigb.cpp \
    A1-Turbina/wvelnsd.cpp \
    A1-Turbina/wveln25.cpp \
    A1-Turbina/wtempespera.cpp \
    A1-Turbina/wtempcompb.cpp \
    A1-Turbina/wtempcompa2.cpp \
    A1-Turbina/wtempcompa1.cpp \
    A1-Turbina/wtempadm.cpp \
    A1-Turbina/wstg8bld.cpp \
    A1-Turbina/wrotorturb.cpp \
    A1-Turbina/wpurgav.cpp \
    A1-Turbina/wpresdescc.cpp \
    A1-Turbina/wprescompb.cpp \
    A1-Turbina/wpresbalance.cpp \
    A1-Turbina/wnivel2.cpp \
    A1-Turbina/westatorv.cpp \
    A1-Turbina/wdiariodatos.cpp \
    A1-Turbina/wctrllavagua.cpp \
    A1-Turbina/wctrlcarga.cpp \
    A1-Turbina/wctrlarranque.cpp \
    A1-Turbina/wctrlapagado.cpp \
    A1-Turbina/wcrakctrl.cpp \
    A1-Turbina/wcdpbld.cpp \
    A1-Turbina/wbalancei.cpp \
    A1-Turbina/wapagemer.cpp \
    A6-Permisos_Rotacion/a6.cpp \
    B9-Carcaza_Turbina/b9.cpp \
    C1-Regulador_Control/c1.cpp \
    D4-Condicion_Utilerias/d4.cpp \
    D8-Mapeo_Combustor/d8.cpp \
    C5-Datos_Operacionales/c5.cpp \
    B12-Proteccion_Contra_Incendios/b12.cpp \
    A5-Permisos_Arranque/a5.cpp \
    B5-Generalidades_Turbina/b5.cpp \
    B8-Valvulas_Etapas/b8.cpp \
    C2-Temperatura_Turbina/c2.cpp \
    C3-Bobinado_Estator/c3.cpp \
    F2-Detencion/f2.cpp \
    F3-Desaceleracion/f3.cpp \
    F4-Apagados_de_emergencia/f4.cpp \
    F5-Apagados_de_emergencia/f5.cpp \
    D1-Micronet/digital24_2.cpp \
    D1-Micronet/digital24.cpp \
    D1-Micronet/analog16_3.cpp \
    D1-Micronet/analog16_2.cpp \
    D1-Micronet/analog08_2.cpp \
    D1-Micronet/analog08.cpp \
    D2-Linknet/inet_di_5.cpp \
    D2-Linknet/inet_ai_19.cpp \
    D2-Linknet/inet_ai_18.cpp \
    D2-Linknet/inet_ai_17.cpp \
    D2-Linknet/inet_ai_16.cpp \
    D2-Linknet/inet_ai_15.cpp \
    D2-Linknet/inet_ai_14.cpp \
    D2-Linknet/inet_ai_13.cpp \
    D2-Linknet/inet_ai_12.cpp \
    D2-Linknet/inet_ai_11.cpp \
    D2-Linknet/inet_ai_10.cpp \
    D2-Linknet/inet_ai_6.cpp \
    D2-Linknet/inet_di_4.cpp \
    D9-Calibracion_Impulsor/d9.cpp \
    D2-Linknet/lnet_al.cpp \
    D2-Linknet/lnet_al2.cpp \
    D1-Micronet/d1.cpp \
    D1-Micronet/d1.cpp \
    D1-Micronet/digital24_2.cpp \
    D1-Micronet/digital24.cpp \
    D1-Micronet/digital16.cpp \
    D1-Micronet/d1.cpp \
    D1-Micronet/analog24_s2.cpp \
    D1-Micronet/analog24.cpp \
    D1-Micronet/analog16_3.cpp \
    D1-Micronet/analog16_2.cpp \
    D1-Micronet/analog16.cpp \
    D1-Micronet/analog08_2.cpp \
    D1-Micronet/analog08.cpp \
    D1-Micronet/analog04.cpp \
    E1-Tendencia_Turbina/e1.cpp \
    E2-Tendencia_Combustible/e2.cpp \
    E3-Tendencia_Aceite/e3.cpp \
    F1-Resumen_Alarmas/f1.cpp \
    D3-Linknet/d3.cpp \
    N1/zonaalim.cpp \
    N2/sisaguares.cpp \
    N4/widget.cpp \
    N5/enfriador.cpp \
    N6/compresorgas.cpp \
    N7/filtrogas.cpp \
    N8/sistaguacontrain.cpp \
    Extras/desc1.cpp \
    Extras/desc_2.cpp \
    Extras/bob_digital_pf1.cpp \
    Extras/bob_digital_pf.cpp \
    N3/sisgascomb.cpp \
    D3-Linknet/n3n42.cpp \
    D3-Linknet/n3n41.cpp \
    D3-Linknet/n3n40.cpp \
    D3-Linknet/n3n39.cpp \
    D3-Linknet/n3n18.cpp \
    SharedMemory/sqlite.cpp \
    SharedMemory/httprequest.cpp \
    SharedMemory/config.cpp

HEADERS  += Sittugas/sittugas.h \
    A1-Turbina/a1.h \
    A2-Generador/a2.h \
    A3-Secuencia/a3.h \
    A4-Secuencia/a4.h \
    B1-Sistema_Lubricacion_Generador/b1.h \
    B2-Sistema_Lubricacion_Generador/b2.h \
    B3-Sistema_Lubricacion_Turbina/b3.h \
    B4-Arrancador_Hidraulico/b4.h \
    B6-Sistema_Combustible/b6.h \
    B7-Sistema_Combustible/b7.h \
    B14-Sistema_Lavado_Agua/b14.h \
    C4-Vibraciones/c4.h \
    D5-Datos_Turbina/d5.h \
    D6-Datos_Turbina/d6.h \
    D7-Datos_Generador/d7.h \
    Menu/menu.h \
    Abstract/pantallas.h \
    Componets/qlabelclick.h \
    B4-Arrancador_Hidraulico/arrancadorhidraulico.h \
    B14-Sistema_Lavado_Agua/lavado_compresor.h \
    B2-Sistema_Lubricacion_Generador/lubricacion_generador.h \
    Modelos/sistema_aire_instrumentos.h \
    Modelos/sistema_electrico.h \
    B11-Carcaza_Generador/b11.h \
    B6-Sistema_Combustible/sitematoroumout.h \
    C4-Vibraciones/sistema_vibraciones.h \
    Modelos/aire_ventilacion_combustion.h \
    B3-Sistema_Lubricacion_Turbina/sistema_lubricante_turbina_2.h \
    Settings/settings.h \
    Settings/Paths.h \
    Console/IConsole/console.h \
    Console/Base/toolbar.h \
    Console/Base/toolb.h \
    Settings/modsel.h \
    Console/Login/passwdialog.h \
    Console/Login/login.h \
    BitaC/bitac.h \
    Console/ParametrosDeSimulacion/parametrossimulacion.h \
    Console/Tablas/tablas.h \
    Console/PInternos/parametrosinternos.h \
    Console/Fallas/fallas.h \
    Console/Monitoreo/monitoreov.h \
    Console/GrupoCurvas/grupocurves.h \
    Console/GrupoVariables/grupovars.h \
    Console/BitacoraI/bitacorai.h \
    Console/BitacoraO/bitacorao.h \
    Console/CIniciales/condicionesiniciales.h \
    Console/CIClass/cin.h \
    Console/CIEdit/ci_edit.h \
    Console/Reproducir/retroceder.h \
    Console/CIHistorial/ci_historial.h \
    Console/MConfiguracion/configuraciondemodelos.h \
    header.h \
    D1-Micronet/d1.h \
    D1-Micronet/digital16.h \
    D1-Micronet/analog24_s2.h \
    D1-Micronet/analog24.h \
    D1-Micronet/analog16.h \
    D1-Micronet/analog04.h \
    D2-Linknet/lnet_dl2.h \
    D2-Linknet/lnet_di3.h \
    D2-Linknet/lnet_di.h \
    D2-Linknet/lnet_al7.h \
    D2-Linknet/lnet_al6.h \
    D2-Linknet/lnet_al5.h \
    D2-Linknet/lnet_al3.h \
    D2-Linknet/lnet_ai9.h \
    D2-Linknet/lnet_ai8.h \
    D2-Linknet/lnet_ai4.h \
    D2-Linknet/d2.h \
    A1-Turbina/wvoltctrl.h \
    A1-Turbina/wvigb.h \
    A1-Turbina/wvelnsd.h \
    A1-Turbina/wveln25.h \
    A1-Turbina/wtempespera.h \
    A1-Turbina/wtempcompb.h \
    A1-Turbina/wtempcompa2.h \
    A1-Turbina/wtempcompa1.h \
    A1-Turbina/wtempadm.h \
    A1-Turbina/wstg8bld.h \
    A1-Turbina/wrotorturb.h \
    A1-Turbina/wpurgav.h \
    A1-Turbina/wpresdescc.h \
    A1-Turbina/wprescompb.h \
    A1-Turbina/wpresbalance.h \
    A1-Turbina/wnivel2.h \
    A1-Turbina/westatorv.h \
    A1-Turbina/wdiariodatos.h \
    A1-Turbina/wctrllavagua.h \
    A1-Turbina/wctrlcarga.h \
    A1-Turbina/wctrlarranque.h \
    A1-Turbina/wctrlapagado.h \
    A1-Turbina/wcrakctrl.h \
    A1-Turbina/wcdpbld.h \
    A1-Turbina/wbalancei.h \
    A1-Turbina/wapagemer.h \
    A6-Permisos_Rotacion/a6.h \
    B9-Carcaza_Turbina/b9.h \
    C1-Regulador_Control/c1.h \
    D4-Condicion_Utilerias/d4.h \
    D8-Mapeo_Combustor/d8.h \
    C5-Datos_Operacionales/c5.h \
    B12-Proteccion_Contra_Incendios/b12.h \
    A5-Permisos_Arranque/a5.h \
    B5-Generalidades_Turbina/b5.h \
    B8-Valvulas_Etapas/b8.h \
    C2-Temperatura_Turbina/c2.h \
    C3-Bobinado_Estator/c3.h \
    F2-Detencion/f2.h \
    F3-Desaceleracion/f3.h \
    F4-Apagados_de_emergencia/f4.h \
    F5-Apagados_de_emergencia/f5.h \
    D1-Micronet/digital24_2.h \
    D1-Micronet/digital24.h \
    D1-Micronet/analog16_3.h \
    D1-Micronet/analog16_2.h \
    D1-Micronet/analog08_2.h \
    D1-Micronet/analog08.h \
    D2-Linknet/inet_di_5.h \
    D2-Linknet/inet_ai_19.h \
    D2-Linknet/inet_ai_18.h \
    D2-Linknet/inet_ai_17.h \
    D2-Linknet/inet_ai_16.h \
    D2-Linknet/inet_ai_15.h \
    D2-Linknet/inet_ai_14.h \
    D2-Linknet/inet_ai_13.h \
    D2-Linknet/inet_ai_12.h \
    D2-Linknet/inet_ai_11.h \
    D2-Linknet/inet_ai_10.h \
    D2-Linknet/inet_ai_6.h \
    D2-Linknet/inet_di_4.h \
    D9-Calibracion_Impulsor/d9.h \
    D2-Linknet/lnet_al.h \
    D2-Linknet/lnet_al2.h \
    D1-Micronet/d1.h \
    D1-Micronet/d1.h \
    D1-Micronet/digital24_2.h \
    D1-Micronet/digital24.h \
    D1-Micronet/digital16.h \
    D1-Micronet/d1.h \
    D1-Micronet/analog24_s2.h \
    D1-Micronet/analog24.h \
    D1-Micronet/analog16_3.h \
    D1-Micronet/analog16_2.h \
    D1-Micronet/analog16.h \
    D1-Micronet/analog08_2.h \
    D1-Micronet/analog08.h \
    D1-Micronet/analog04.h \
    E1-Tendencia_Turbina/e1.h \
    E2-Tendencia_Combustible/e2.h \
    E3-Tendencia_Aceite/e3.h \
    F1-Resumen_Alarmas/f1.h \
    D3-Linknet/d3.h \
    N1/zonaalim.h \
    N2/sisaguares.h \
    N3/sisgascomb.h \
    N4/widget.h \
    N5/enfriador.h \
    N6/compresorgas.h \
    N7/filtrogas.h \
    N8/sistaguacontrain.h \
    Extras/desc1.h \
    Extras/desc_2.h \
    Extras/bob_digital_pf1.h \
    Extras/bob_digital_pf.h \
    D3-Linknet/n3n42.h \
    D3-Linknet/n3n41.h \
    D3-Linknet/n3n40.h \
    D3-Linknet/n3n39.h \
    D3-Linknet/n3n18.h \
    SharedMemory/sqlite.h \
    SharedMemory/httprequest.h \
    SharedMemory/config.h

FORMS    += \
    Sittugas/sittugas.ui \
    A1-Turbina/a1.ui \
    A2-Generador/a2.ui \
    A3-Secuencia/a3.ui \
    A4-Secuencia/a4.ui \
    B1-Sistema_Lubricacion_Generador/b1.ui \
    B2-Sistema_Lubricacion_Generador/b2.ui \
    B3-Sistema_Lubricacion_Turbina/b3.ui \
    B4-Arrancador_Hidraulico/b4.ui \
    B6-Sistema_Combustible/b6.ui \
    B7-Sistema_Combustible/b7.ui \
    B14-Sistema_Lavado_Agua/b14.ui \
    C4-Vibraciones/c4.ui \
    D5-Datos_Turbina/d5.ui \
    D6-Datos_Turbina/d6.ui \
    D7-Datos_Generador/d7.ui \
    Menu/menu.ui \
    B4-Arrancador_Hidraulico/arrancadorhidraulico.ui \
    B14-Sistema_Lavado_Agua/lavado_compresor.ui \
    B2-Sistema_Lubricacion_Generador/lubricacion_generador.ui \
    Modelos/sistema_aire_instrumentos.ui \
    Modelos/sistema_electrico.ui \
    B11-Carcaza_Generador/b11.ui \
    B6-Sistema_Combustible/sitematoroumout.ui \
    C4-Vibraciones/sistema_vibraciones.ui \
    Modelos/aire_ventilacion_combustion.ui \
    B3-Sistema_Lubricacion_Turbina/sistema_lubricante_turbina_2.ui \
    Console/IConsole/console.ui \
    Settings/modsel.ui \
    Console/Login/passwdialog.ui \
    Console/ParametrosDeSimulacion/parametrossimulacion.ui \
    Console/Tablas/tablas.ui \
    Console/PInternos/parametrosinternos.ui \
    Console/Fallas/fallas.ui \
    Console/Monitoreo/monitoreov.ui \
    Console/GrupoCurvas/grupocurves.ui \
    Console/GrupoVariables/grupovars.ui \
    Console/BitacoraI/bitacorai.ui \
    Console/BitacoraO/bitacorao.ui \
    Console/CIniciales/condicionesiniciales.ui \
    Console/CIEdit/ci_edit.ui \
    Console/Reproducir/retroceder.ui \
    Console/CIHistorial/ci_historial.ui \
    Console/MConfiguracion/configuraciondemodelos.ui \
    header.ui \
    D1-Micronet/d1.ui \
    D1-Micronet/digital16.ui \
    D1-Micronet/analog24_s2.ui \
    D1-Micronet/analog24.ui \
    D1-Micronet/analog16.ui \
    D1-Micronet/analog04.ui \
    D2-Linknet/lnet_dl2.ui \
    D2-Linknet/lnet_di3.ui \
    D2-Linknet/lnet_di.ui \
    D2-Linknet/lnet_al7.ui \
    D2-Linknet/lnet_al6.ui \
    D2-Linknet/lnet_al5.ui \
    D2-Linknet/lnet_al3.ui \
    D2-Linknet/lnet_ai9.ui \
    D2-Linknet/lnet_ai8.ui \
    D2-Linknet/lnet_ai4.ui \
    D2-Linknet/d2.ui \
    A1-Turbina/wvoltctrl.ui \
    A1-Turbina/wvigb.ui \
    A1-Turbina/wvelnsd.ui \
    A1-Turbina/wveln25.ui \
    A1-Turbina/wtempespera.ui \
    A1-Turbina/wtempcompb.ui \
    A1-Turbina/wtempcompa2.ui \
    A1-Turbina/wtempcompa1.ui \
    A1-Turbina/wtempadm.ui \
    A1-Turbina/wstg8bld.ui \
    A1-Turbina/wrotorturb.ui \
    A1-Turbina/wpurgav.ui \
    A1-Turbina/wpresdescc.ui \
    A1-Turbina/wprescompb.ui \
    A1-Turbina/wpresbalance.ui \
    A1-Turbina/wnivel2.ui \
    A1-Turbina/westatorv.ui \
    A1-Turbina/wdiariodatos.ui \
    A1-Turbina/wctrllavagua.ui \
    A1-Turbina/wctrlcarga.ui \
    A1-Turbina/wctrlarranque.ui \
    A1-Turbina/wctrlapagado.ui \
    A1-Turbina/wcrakctrl.ui \
    A1-Turbina/wcdpbld.ui \
    A1-Turbina/wbalancei.ui \
    A1-Turbina/wapagemer.ui \
    A6-Permisos_Rotacion/a6.ui \
    B9-Carcaza_Turbina/b9.ui \
    C1-Regulador_Control/c1.ui \
    D4-Condicion_Utilerias/d4.ui \
    D8-Mapeo_Combustor/d8.ui \
    C5-Datos_Operacionales/c5.ui \
    B12-Proteccion_Contra_Incendios/b12.ui \
    A5-Permisos_Arranque/a5.ui \
    B5-Generalidades_Turbina/b5.ui \
    B8-Valvulas_Etapas/b8.ui \
    C2-Temperatura_Turbina/c2.ui \
    C3-Bobinado_Estator/c3.ui \
    F2-Detencion/f2.ui \
    F3-Desaceleracion/f3.ui \
    F4-Apagados_de_emergencia/f4.ui \
    F5-Apagados_de_emergencia/f5.ui \
    D1-Micronet/digital24_2.ui \
    D1-Micronet/digital24.ui \
    D1-Micronet/analog16_3.ui \
    D1-Micronet/analog16_2.ui \
    D1-Micronet/analog08_2.ui \
    D1-Micronet/analog08.ui \
    D2-Linknet/inet_di_5.ui \
    D2-Linknet/inet_ai_19.ui \
    D2-Linknet/inet_ai_18.ui \
    D2-Linknet/inet_ai_17.ui \
    D2-Linknet/inet_ai_16.ui \
    D2-Linknet/inet_ai_15.ui \
    D2-Linknet/inet_ai_14.ui \
    D2-Linknet/inet_ai_13.ui \
    D2-Linknet/inet_ai_12.ui \
    D2-Linknet/inet_ai_11.ui \
    D2-Linknet/inet_ai_10.ui \
    D2-Linknet/inet_ai_6.ui \
    D2-Linknet/inet_di_4.ui \
    D9-Calibracion_Impulsor/d9.ui \
    D2-Linknet/lnet_al.ui \
    D2-Linknet/lnet_al2.ui \
    D1-Micronet/d1.ui \
    D1-Micronet/d1.ui \
    D1-Micronet/digital24_2.ui \
    D1-Micronet/digital24.ui \
    D1-Micronet/digital16.ui \
    D1-Micronet/d1.ui \
    D1-Micronet/analog24_s2.ui \
    D1-Micronet/analog24.ui \
    D1-Micronet/analog16_3.ui \
    D1-Micronet/analog16_2.ui \
    D1-Micronet/analog16.ui \
    D1-Micronet/analog08_2.ui \
    D1-Micronet/analog08.ui \
    D1-Micronet/analog04.ui \
    E1-Tendencia_Turbina/e1.ui \
    E2-Tendencia_Combustible/e2.ui \
    E3-Tendencia_Aceite/e3.ui \
    F1-Resumen_Alarmas/f1.ui \
    D3-Linknet/d3.ui \
    N1/zonaalim.ui \
    N2/sisaguares.ui \
    N3/sisgascomb.ui \
    N4/widget.ui \
    N5/enfriador.ui \
    N6/compresorgas.ui \
    N7/filtrogas.ui \
    N8/sistaguacontrain.ui \
    Extras/desc1.ui \
    Extras/desc_2.ui \
    Extras/bob_digital_pf1.ui \
    Extras/bob_digital_pf.ui \
    D3-Linknet/n3n42.ui \
    D3-Linknet/n3n41.ui \
    D3-Linknet/n3n40.ui \
    D3-Linknet/n3n39.ui \
    D3-Linknet/n3n18.ui

RESOURCES += \
    Resources.qrc \
    ../AWidgets/code/aresources.qrc \
    ../Widgets_SiTTuGAs/Code/icons.qrc \
    ../Componentes/Code/componentes.qrc

