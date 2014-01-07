#ifndef A1_H
#define A1_H

#include <QWidget>
#include <QTimer>
#include "wapagemer.h"
#include "wbalancei.h"
#include "wcdpbld.h"
#include "wcrakctrl.h"
#include "wctrlapagado.h"
#include "wctrlarranque.h"
#include "wctrlcarga.h"
#include "wctrllavagua.h"
#include "wdiariodatos.h"
#include "westatorv.h"
#include "wnivel2.h"
#include "wpresbalance.h"
#include "wprescompb.h"
#include "wpresdescc.h"
#include "wpurgav.h"
#include "wrotorturb.h"
#include "wstg8bld.h"
#include "wtempadm.h"
#include "wtempcompa1.h"
#include "wtempcompa2.h"
#include "wtempcompb.h"
#include "wtempespera.h"
#include "wveln25.h"
#include "wvelnsd.h"
#include "wvigb.h"
#include "wvoltctrl.h"
#include "Abstract/pantallas.h"
#include <QPoint>
#include <QMouseEvent>
#include <QDebug>
#include <QTimer>
#include <QString>
#include "awidget.h"

//Definimos identificadores de cada ventana emergente
#define wapagemer 0 //Listo
#define wbalancei 1 //Listo
#define wcdpbld 2
#define wcrakctrl 3
#define wctrlapagado 4
#define wctrlarranque 5
#define wctrlcarga 6
#define wctrllavagua 7
#define wdiariodatos 8
#define westatorv 9
#define wnivel2 10
#define wpresbalance 11
#define wprescompb 12
#define wpresdescc 13
#define wpurgav 14
#define wrotorturb 15
#define wstg8bld 16
#define wtempadm 17
#define wtempcompa1 18
#define wtempcompa2 19
#define wtempcompb 20
#define wtempespera 21
#define wveln25 22 //Listo
#define wvelnsd 23 //Listo
#define wvigb 24
#define wvoltctrl 25

namespace Ui {
class A1;
}

class A1 : public Pantallas
{
    Q_OBJECT

    public:
        explicit A1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
        void cerrarVentanasEmergentes();
        QTimer *opt;
        ~A1();


    public slots:
        void prueba();
        void sltWApagEmer();
        void sltWBalanceI();
        void sltWCDPBLD();
        void sltWCrakCtrl();
        void sltWCtrlApagado();
        void sltWCtrlArranque();
        void sltWCtrlCarga();
        void sltWCtrlLavAgua();
        void sltWDiarioDatos();
        void sltWEstatorV();
        void sltWNivel2();
        void sltWPresBalance();
        void sltWPresCompB();
        void sltWPresDescC();
        void sltWPurgaV();
        void sltWRotorTurb();
        void sltWSTG8BLD();
        void sltWTempADM();
        void sltWTempCompA1();
        void sltWTempCompA2();
        void sltWTempCompB();
        void sltWTempEspera();
        void sltWVelN25();
        void sltWVelNSD();
        void sltWVIGB();
        void sltWVoltCtrl();


        //Slot para validar la eleccion de la ventana
        void sltWVelNSD_Select(int id);
        void sltWApagEmer_Select(int id);
        void sltWBalanceI_Select(int id);
        void sltWCDPBLD_Select(int id);
        void sltWCrakCtrl_Select(int id);
        void sltWCtrlApagado_Select(int id);
        void sltWCtrlArranque_Select(int id);
        void sltWCtrlCarga_Select(int id);
        void sltWCtrlLavAgua_Select(int id);
        void sltWDiarioDatos_Select(int id);
        void sltWEstatorV_Select(int id);
        void sltWNivel2_Select(int id);
        void sltWPresBalance_Select(int id);
        void sltWPresCompB_Select(int id);
        void sltWPresDescC_Select(int id);
        void sltWPurgaV_Select(int id);
        void sltWRotorTurb_Select(int id);
        void sltWSTG8BLD_Select(int id);
        void sltWTempADM_Select(int id);
        void sltWTempCompA1_Select(int id);
        void sltWTempCompA2_Select(int id);
        void sltWTempCompB_Select(int id);
        void sltWTempEspera_Select(int id);
        void sltWVelN25_Select(int id);
        void sltWVIGB_Select(int id);
        void sltWVoltCtrl_Select(int id);
        void ctlVenActivacionSuperior(int id);
        void ctlVenActivacionInferior(int id);


        void sltIrA3();
        void sltIrF1();
        void sltIrB4();
        void sltIrB11();

        void Actualizar();


    private:
        Ui::A1 *ui;
        bool moving;
        long posX;
        long posY;
        //Consideramos todas las subventanas emergentes
        WApagEmer *eWApagEmer;
        WBalanceI *eWBalanceI;
        WCDPBLD *eWCDPBLD;
        WCrakCtrl *eWCrakCtrl;
        WCtrlApagado *eWCtrlApagado;
        WCtrlArranque *eWCtrlArranque;
        WCtrlCarga *eWCtrlCarga;
        WCtrlLavAgua *eWCtrlLavAgua;
        WDiarioDatos *eWDiarioDatos;
        WEstatorV *eWEstatorV;
        WNivel2 *eWNivel2;
        WPresBalance *eWPresBalance;
        WPresCompB *eWPresCompB;
        WPresDescC *eWPresDescC;
        WPurgaV *eWPurgaV;
        WRotorTurb *eWRotorTurb;
        WSTG8BLD *eWSTG8BLD;
        WTempADM *eWTempADM;
        WTempCompA1 *eWTempCompA1;
        WTempCompA2 *eWTempCompA2;
        WTempCompB *eWTempCompB;
        WTempEspera *eWTempEspera;
        WVelN25 *eWVelN25;
        WVelNSD *eWVelNSD;
        WVIGB *eWVIGB;
        WVoltCtrl *eWVoltCtrl;
        int Id;
        bool active;
        bool ctrVen[25];

        void cerrarVentanaSuperior(int i);
        void cerrarVentanaInferior(int i);
        int venActualSuperior;
        int venActualInferior;

        void CreaConexiones();
        QList<AWidget *> allTextLabels;

signals:
    void irA(int);

protected:
    void mouseMoveEvent( QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // A1_H
