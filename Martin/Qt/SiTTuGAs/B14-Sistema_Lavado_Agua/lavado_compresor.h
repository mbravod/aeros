#ifndef LAVADO_COMPRESOR_H
#define LAVADO_COMPRESOR_H

#include <QWidget>
#include <QDebug>
#include <QtCore/qmath.h>
#include <QFile>
#include <QTextStream>
#include <QTimer>

namespace Ui {
    class Lavado_Compresor;
}

class Lavado_Compresor : public QWidget
{
    Q_OBJECT

    public:
        explicit Lavado_Compresor(QWidget *parent = 0);
        ~Lavado_Compresor();

        QTimer *Timer;

        double Motobomba(int segnal,double ValMax,double Tao,double CI,int Falla);
        double NivelTanqueRectangular(double FlujoIn,double FlujoOut,double CINivel,double Largo,double Ancho);

    signals:
        void SNivelT(int);
        void SVal01(bool);
        void SVal02(bool);
        void SVal03(bool);
        void SVal04(bool);
        void STiempo(double);


    public slots:
        int Encendido();
        int Apagado();
        int Check();
        int Check_ArranqueL();
        int Check_ParoL();
        int Check_ArranqueR();
        int Check_ParoR();
        int Check_VInQuimico();
        int Check_VInAgua();
        int Check_VDrenado();
        int Check_VSuccion();
        int Check_OPurga();
        int Check_CPurga();
        int Check_OLavadoIn();
        int Check_CLavadoIn();
        int Check_OLavadoOut();
        int Check_CLavadoOut();
        int Check_FBomba();
        int Check_FVLavadoIn();
        int Check_FVLavadoOut();
        int Check_FVPurga();
        int Check_FFuga();
        int Check_ResetFuga();
        void Modelo();

    private:
        Ui::Lavado_Compresor *ui;

        FILE *Lavado;

        double FlujoInAgua;		//FLUJO DE ENTRADA DE AGUA AL TANQUE
        double FlujoInQuimico;		//FLUJO DE ENTRADA DEL QUIMICO AL TANQUE
        double LG6520;		//MEDIDOR DE NIVEL DEL TANQUE
        int LS6543;                 //SWITCH DE BAJO NIVEL
        int TAH1620;		//ALARMA POR ALTA TEMPERATURA
        double FMOT6535;            //BOMBA DEL SISTEMA DE LAVADO
        int SOV6540;		//VÁLVULA SOLENOIDE DE LA PURGA POR AIRE
        double PI6538;		//INDICADOR DE PRESIÓN
        int SOV6516;		//VÁLVULA SOLENOIDE PARA LAVADO EN LÍNEA
        int SOV6504;		//VÁLVULA SOLENOIDE PARA LAVADO FUERA DE LÍNEA
        int ValBol1;		//VÁLVULA DE BOLA PARA LA ENTRADA DEL QUÍMICO
        int ValBol2;		//VÁLVULA DE BOLA PARA LA ENTRADA DE AGUA
        int ValBol3;		//VÁLVULA DE BOLA PARA EL DRENADO DEL TANQUE
        int ValBol4;		//VÁLVULA DE BOLA PARA LA SUCCIÓN DE LA BOMBA
        int OpSOV6540;		//APERTURA DE LA VÁLVULA SOV6540
        int ClSOV6540;		//CIERRE DE LA VÁLVULA SOV6540
        int OpSOV6516;		//APERTURA DE LA VÁLVULA SOV6516
        int ClSOV6516;		//CIERRE DE LA VÁLVULA SOV6516
        int OpSOV6504;		//APERTURA DE LA VÁLVULA SOV6504
        int ClSOV6504;		//CIERRE DE LA VÁLVULA SOV6504
        int Local_Remoto_WWash;	//LOCAL REMOTO DEL ACCIONAMIENTO DEL SISTEMA
        int StartHS6505;            //ARRANQUE LOCAL DEL SISTEMA
        int StopHS6505;		//PARO LOCAL DEL SISTEMA
        int StartRemoto;            //ARRANQUE REMOTO DEL SISTEMA
        int StopRemoto;             //PARO REMOTO DEL SISTEMA
        int FallaMOT6535;           //FALLA BOMBA MOT6535
        int FallaSOV6516;           //FALLA VÁLVULA SOLENOIDE SOV6516
        int FallaSOV6540;           //FALLA VÁLVULA SOLENOIDE SOV6540
        int FallaSOV6504;           //FALLA VÁLVULA SOLENOIDE SOV6504
        double CIFMOT6535;          //CONDICIONES INICIALES FLUJO MOT6535
        double NivelTank;           //NIVEL DEL TANQUE
        double CINivelTank;         //CONDICIONES INICIALES DE NIVEL DEL TANQUE
        int OnMOT6535;		//ARRANQUE DE MOT6535
        int OffMOT6535;		//PARO DE MOT6535
        double Tiempo;		//TIEMPO TRANSCURRIDO
        double qoutTank;            //FLUJO DE SALIDA DEL TANQUE
        double FugaTank;		//FLUJO DE FUGA DEL TANQUE
        double qDren;		//FLUJO DEL DREN
        double qOverflow;		//FLUJO DEL OVERFLOW
        double PMOT6535;            //PRESION DE LA BOMBA
        double CIPMOT6535;          //CONDICIONES INICIALES PRESION MOT6535
        int ResetFuga;		//RESET PARA LA FUGA DEL TANQUE
        double qAire;		//FLUJO DE AIRE PARA PURGA
};

#endif // LAVADO_COMPRESOR_H
