#ifndef SITTUGAS_H
#define SITTUGAS_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

#include "menu/menu.h"
#include "A1-Turbina/a1.h"
#include "A2-Generador/a2.h"
#include "A3-Secuencia/a3.h"
#include "A4-Secuencia/a4.h"
#include "A5-Permisos_Arranque/a5.h"
#include "A6-Permisos_Rotacion/a6.h"
#include "B1-Sistema_Lubricacion_Generador/b1.h"
#include "B2-Sistema_Lubricacion_Generador/b2.h"
#include "B3-Sistema_Lubricacion_Turbina/b3.h"
#include "B4-Arrancador_Hidraulico/b4.h"
#include "B5-Generalidades_Turbina/b5.h"
#include "B6-Sistema_Combustible/b6.h"
#include "B7-Sistema_Combustible/b7.h"
#include "B8-Valvulas_Etapas/b8.h"
#include "B9-Carcaza_Turbina/b9.h"
#include "B11-Carcaza_Generador/b11.h"
#include "B12-Proteccion_Contra_Incendios/b12.h"
#include "B14-Sistema_Lavado_Agua/b14.h"
#include "C1-Regulador_Control/c1.h"
#include "C2-Temperatura_Turbina/c2.h"
#include "C3-Bobinado_Estator/c3.h"
#include "C4-Vibraciones/c4.h"
#include "C5-Datos_Operacionales/c5.h"
#include "D1-Micronet/d1.h"
#include "D2-Linknet/d2.h"
#include "D3-Linknet/d3.h"
#include "D4-Condicion_Utilerias/d4.h"
#include "D5-Datos_Turbina/d5.h"
#include "D6-Datos_Turbina/d6.h"
#include "D7-Datos_Generador/d7.h"
#include "D8-Mapeo_Combustor/d8.h"
#include "D9-Calibracion_Impulsor/d9.h"
#include "E1-Tendencia_Turbina/e1.h"
#include "E2-Tendencia_Combustible/e2.h"
#include "E3-Tendencia_Aceite/e3.h"
#include "F1-Resumen_Alarmas/f1.h"
#include "F2-Detencion/f2.h"
#include "F3-Desaceleracion/f3.h"
#include "F4-Apagados_de_emergencia/f4.h"
#include "F5-Apagados_de_emergencia/f5.h"
#include "SharedMemory/shrdmem.h"

#include "N1/zonaalim.h"
#include "N2/sisaguares.h"
#include "N3/sisgascomb.h"
#include "N4/widget.h"
#include "N5/enfriador.h"
#include "N6/compresorgas.h"
#include "N7/filtrogas.h"
#include "N8/sistaguacontrain.h"


//Identificador de la interfaz
#define ID_MENU 0
#define ID_A1 1
#define ID_A2 2
#define ID_A3 3
#define ID_A4 4
#define ID_A5 5
#define ID_A6 6

#define ID_B1 7
#define ID_B2 8
#define ID_B3 9
#define ID_B4 10
#define ID_B5 11
#define ID_B6 12
#define ID_B7 13
#define ID_B8 14
#define ID_B9 15
#define ID_B11 16
#define ID_B12 17
#define ID_B14 18

#define ID_C1 19
#define ID_C2 20
#define ID_C3 21
#define ID_C4 22
#define ID_C5 23

#define ID_D1 24
#define ID_D2 25
#define ID_D3 26
#define ID_D4 27
#define ID_D5 28
#define ID_D6 29
#define ID_D7 30
#define ID_D8 31
#define ID_D9 32

#define ID_E1 33
#define ID_E2 34
#define ID_E3 35

#define ID_F1 36
#define ID_F2 37
#define ID_F3 38
#define ID_F4 39
#define ID_F5 40

#define ID_N1 41
#define ID_N2 42
#define ID_N3 43
#define ID_N4 44
#define ID_N5 45
#define ID_N6 46
#define ID_N7 47
#define ID_N8 48

namespace Ui {
class SiTTuGAs;
}

class SiTTuGAs  : public QWidget
{
    Q_OBJECT

    public:
        explicit SiTTuGAs(QWidget *parent = 0);
        ~SiTTuGAs();
        void Connections();

        ShrdMem getShrdMem()const{return m_shrdMem;}

    public slots:
        void ChangeWin(int n);
        void ViewMenu();
        void PrevWin();
        void NextWin();

        void ViewMain();
        void ViewSystems();
        void ViewMonitor();
        void ViewUtils();
        void ViewTends();
        void ViewAlarms();

        void ViewBOP(int id);

signals:
        void Update();
    private slots:
        void reconnectUpdateSignal();
        void emitUpdate();

protected:
        ShrdMem *m_shrdMem;

    private:
        Ui::SiTTuGAs *ui;
        int opt;
        Pantallas *interfaz;
        Menu *menu; //0
        A1 *a1;     //1
        A2 *a2;     //2
        A3 *a3;     //3
        A4 *a4;     //4
        A5 *a5;     //5
        A6 *a6;     //6
        B1 *b1;     //7
        B2 *b2;     //8
        B3 *b3;     //9
        B4 *b4;     //10
        B5 *b5;     //11
        B6 *b6;     //12
        B7 *b7;     //13
        B8 *b8;     //14
        B9 *b9;     //15
        B11 *b11;   //16
        B12 *b12;   //17
        B14 *b14;   //18
        C1 *c1;     //19
        C2 *c2;     //20
        C3 *c3;     //21
        C4 *c4;     //22
        C5 *c5;     //23
        D1 *d1;     //24
        D2 *d2;     //25

        D3 *d3;     //26

        D4 *d4;     //27
        D5 *d5;     //28
        D6 *d6;     //29
        D7 *d7;     //30
        D8 *d8;     //31
        D9 *d9;     //32

        E1 *e1;     //33
        E2 *e2;     //34
        E3 *e3;     //35
        F1 *f1;     //36
        F2 *f2;     //37
        F3 *f3;     //38
        F4 *f4;     //39
        F5 *f5;     //40

        N1 *n1;     //41
        N2 *n2;     //42
        N3 *n3;     //43
        N4 *n4;     //44
        N5 *n5;     //45
        N6 *n6;     //46
        N7 *n7;     //47
        N8 *n8;     //48

        void initDateTimeTimer();
        QList<QMdiSubWindow *> lst;
        QMdiSubWindow *subWindow;
        void selectWindow(int n,int opt);
        int flagOpt;
        int currentWin;


};

#endif // SITTUGAS_H
