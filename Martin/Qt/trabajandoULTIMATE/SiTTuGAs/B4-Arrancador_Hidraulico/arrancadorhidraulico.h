#ifndef ARRANCADORHIDRAULICO_H
#define ARRANCADORHIDRAULICO_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QFile>
#include <math.h>
#include <QtCore/qmath.h>

namespace Ui {
    class ArrancadorHidraulico;
}

class ArrancadorHidraulico : public QWidget
{
    Q_OBJECT

    public:
        explicit ArrancadorHidraulico(QWidget *parent = 0);
        ~ArrancadorHidraulico();

        QTimer *Timer;

        double NivelTanque(double FlujoIn, double FlujoOut, double Largo, double Ancho, double CI);
        double TempAceiteTanque(double WElec, double UTank, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI);
        double TempAceiteInter(double UInter, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI);
        double PotVentilador(int Segnal, double PotMax, double Tao, double CI, int Falla);
        double PotBomba(int Segnal, double PotMax, double Tao, double CI, int Falla);
        double VelArranHidra(double VelMax, double Tao, double CI);
        double TempMetalArranHidra(double hMetal, double TempInAceite, double Velocidad, double MmetalCp, double VisAeLub, double Diam, double CI);
        double TempAceiteArranHidra(double hMetal, double TempInMetal, double FCp, double TempInAceite, double MCv, double CI);
        double I(double ki, double error, double CI);
        double P(double kp, double error);
        double PI(double P, double I);
        double ErrorPI(double SPT, double TempAceite);
        double Saturacion(double Segnal, double LInf, double LSup);

    signals:
        void SNivelTanque(int);
        void STemperatura(double);
        void SBombaOn(bool);
        void SIntercam(bool);

    public slots:
        void Encendido();
        void Apagado();
        void OnOff_Bomb_H();
        void OnOff_Ventilador();
        void OnOff_Calentador();
        void Variar50();
        void Variar100();
        void Modelo();

    private:
        Ui::ArrancadorHidraulico *ui;
        FILE *Arrancador;

        double FlujoInTanque;
        double FlujoOutTanque;
        double LargoTanque;
        double AnchoTanque;
        double CINivelTanque;
        double TempAceiteTank;
        double WElec;
        double UTanque;
        double TempAmbiente;
        double CpAceite;
        double MasaAceite;
        double CITempAceiteTanque;
        double UInter;
        double MasaAceiteInter;
        double CITempAceiteInter;
        double PotMaxVentilador;
        double TaoVentilador;
        double CIPotVentilador;
        double PotMaxBomba;
        double TaoBomba;
        double CIPotBomba;
        double VelocidadArranHidra;
        double VelocidadMaxAH;
        double TaoAH;
        double CIVelArranHidra;
        double TempMetalAH;
        double hMetal;
        double Mmetal;
        double CpMetal;
        double ViscosidadAceite;
        double eLub;
        double AContac;
        double Diametro;
        double CITempMetalAH;
        double TempAceiteAH;
        double MAceiteAH;
        double CITempAceiteAH;
        double Integral;
        double CIInt;
        double Proporional;
        double IntPro;
        double errorPI;
        double Sat;
        double Variador;
        double CPI;
        double LInf;
        double LSup;
        double SetPoint;
        double ki;
        double kp;

        double Nivel_Tanque;
        double PotenciaBomba;
        double PotenciaVentilador;
        double PresionBombS;
        double FlujoBombS;
        double PresionBombP;
        double FlujoBombP;
        double TempAceiteIntercambiador;
        double TempAceiteInTank;
        double FlujoOutInter;
        double VelocidadVentilador;
        double Proporcional;
        double TorqueAH;
        double Tiempo;
        double DensidadAceite;

        int FallaVent;
        int FallaBomb;
        int OnOffVentilador;
        int OnOffBomba;
        int OnOffCalentador;
};

#endif // ARRANCADORHIDRAULICO_H
