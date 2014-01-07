#ifndef SITEMATOROUMOUT_H
#define SITEMATOROUMOUT_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QtCore/qmath.h>


namespace Ui {
    class sitematoroumout;
}

class sitematoroumout : public QWidget
{
    Q_OBJECT

public:
    explicit sitematoroumout(QWidget *parent = 0);
    ~sitematoroumout();


    QTimer*Timer;

    double Compresor(double TI,double CI, double Gasin_Cp, double Masa_Cv, double Potencia);
    double HEX(double TIHEX,double CIHEX, double GasinCpHEX,double UA, double Tamb,double Masa_Cv_Hex);
    double Nivel(double CIFIL,double Gasin_FIL, double Humedad,double EtaFIL, double Area_DensiAgua);
    double Xvalvulas(double XI,double CIVal, double TaoVal, double Xmax);
    double VelocidadCompresor(double CIMotorCompresor, double TaoMotor, double VelMax);

signals:
    void SVibra01(double);
    void SVibra02(double);
    void SVibra03(double);
    void SVibra04(double);
    void SVibra05(double);
    void SVibra06(double);
    void SVibra07(double);
    void SVibra08(double);
    void SVibra09(double);
    void SVibra10(double);
    void SVibra11(double);
    void SVibra12(double);


public slots:

    int Encendido();
    int Apagado();
    void Modelo();
    //int OnOff();

signals:
    void STemp(double);
    void SPress(double);

private:
    Ui::sitematoroumout *ui;

    // variables de propiedades  de fluidos

    double Cv;                       // Calor especifico del gas
    double Cp;                       // Calor especifico del gas
    double R_gas;                    // constante de gas
    double Tiempo;                   // Tiempo
    double Flujo_in;                 // Flujo de gas
    double Tamb;                     // Temperatura ambiente
    double Humedadgasin;             // humedad especifica del gas
    double DensidadAgua;             // Densidad del agua
    double DensidadGas;              // Densidad del gas
    double ViscosiGas;

    // variables válvulas de control


    double XvalControl1max;          // Porcentaje maximo de apertura de la valvula
    double CIXvalControl1;           // Condición inicial del porcentaje de apertura de la valvula
    double TaoXvalControl1;          // Constante de respuesta del sistema
    double FlujoMax;                 // Flujo maximo de combustible
    double XvalControl1;             // Porcentaje de aperuta de valvula


    // Variables tanque de depuración V-1

    double VolTanqueDepu1;           // Volumen del tanque depurador
    double AreaTanqueDepu1;          // Area del tanque depurador
    double UTanqueDepu1;             // Coeficiente global de trasferencia de calor del tanque depurador
    double TemperaturaOutTanqueDepu1;// Temperatura en el tanque de depuración
    double MasaTanqueDepu1;          // Masa en el tanque de depuración
    double CITanqDepu1;              // Temperatura inicial en el tanque de depuración
    double PresionTanqueDepu1;       // presion en el tanque de depuracion
    double Eta_Fil1;                 // Eficiencia de filtrado
    double AreaFilTanqueDepu1;       // Area del tanque transversal al flujo de gas
    double CIFIL1;                   // Condiciones iniciales del Nivel en tanque de depuración
    double NivelTanqueDepu1;         // Nivel de agua en el tanque de depuración
    double TaoTanqueDepu1;           // Tao de tanque de depuración 1


    // variables tanque de succión 1(PB-1)

    double Temperatura_final_TanSuc1;   //
    double MasaTanqueSuc1;              // kg
    double VolTanqueSuc1;               // m3
    double UTanqueSuc1;                 // kJ/m2 K
    double AreaTanqueSuc1;              // m2
    double PresionOutTanSuc1;           // kPa
    double CITanqueSuc1;                // K


    // Variables compresor 1ra etapa CZ-2


    double Temperatura_in;           // Temperatura de entrada del gas al compresor de 1ra etapa
    double Masa;                     // Masa de gas contenida en el compresor de 1ra etapa
    double VelMaximaMotorCompresor;  // Velicidad maxima del motor del compresor
    double TaoMotorCompresor;        // Constante de respuesta motor compresor
    double CIVelocidad;              // Condición inicial del motor de compresor
    double Temperatura_final_1ra;    // Temperatura final del gas a la salida del compresor de 1ra etapa
    double Trabajo_in1;              // Potencia de compresión de 1ra etapa
    double ParInducidoMotorComp1;    // Par inducido en el motor del compresor
    double CIMotorCompresor;         //
    double VelMotorCompresor;
    double PresionIn1ra;             // Presion de entrada al compresor de la 1ra etapa
    double PresionOut1ra ;           // Presion de salida del compresor de la 1ra etapa
    double CI1ra;                    // Temperatura inicial del compresor de 1ra etapa
    double TaoComp1ra;               // Tao de compresor1


    // Variables tanque de expanción PB-2

    double UTanqueExp;               // Coeficiente global de trasferencia de calor del HEX
    double CITanqueExp;              // Temperatura inicial en el tanque de expansión
    double MasaTanqueExp;            // Masa de gas en el tanque de expansion
    double VolTanqueExp;             // Volumen tanque de expansion
    double UTanqueDeExpa;            // Coeficiente global de trasferencia de calor del tanque de expansion
    double Temperatura_final_TanExp; // Temperatura final del gas a la salida del tanque de expansion.
    double AreaTanqueExp;            // Area tanque de expansión
    double PresionOutTanExp;         // Temeperatura a la salida del tanque


    // Variables HEX

    double AreaHEX;                  // Area de intercambio de calor del HEX
    double UHEX;                     // Coeficiente global de trasferencia de calor del HEX
    double Temperatura_final_HEX;    // Temperatura de salida del HEX
    double MasaHEX;                  // Masa de gas en el intercambiador de gas
    double CIHEX;                    // Temperatura inicial en el HEX
    double PresionOutHEX;            // Presión a la salida del intercambiador de calor.

    // Variables tanque de depuración V-2

    double VolTanqueDepu2;           // Volumen del tanque depurador 2
    double AreaTanqueDepu2;          // Area del tanque depurador 2
    double UTanqueDepu2;             // Coeficiente global de trasferencia de calor del tanque depurador 2
    double TemperaturaOutTanqueDepu2;// Temperatura en el tanque de depuración 2
    double MasaTanqueDepu2;          // Masa en el tanque de depuración 2
    double CITanqDepu2;              // Temperatura inicial en el tanque de depuración 2
    double PresionTanqueDepu2;       // presion en el tanque de depuracion 2
    double NivelTanqueDepu2;         // Nivel de agua en el tanque de depuración
    double Eta_Fil2;                 // Eficiencia de filtrado
    double AreaFilTanqueDepu2;       // Area del tanque transversal al flujo de gas
    double CIFIL2;                   // Condiciones iniciales del Nivel en tanque de depuración

    // vairables tanque de succión PB-3

    double Temperatura_final_TanSuc2;   // temperatura final tanque de succión 2
    double MasaTanqueSuc2;              // masa tanque de succión 2
    double VolTanqueSuc2;               // volumen tanque de succión 2
    double UTanqueSuc2;                 // coeficiente global de trasnferencia de calor tanque succión 2
    double AreaTanqueSuc2;              // atrea transfercnia de calor tanque succión 2
    double PresionOutTanSuc2;           // presión final tanque de succión 2
    double CITanqueSuc2;                // condiciones iniciales tanque de succión 2

    // Variables compresor 2da etapa CZ-1

    double Masa2;                    // Masa de gas contenida en el compresor de 2da etapa
    double Temperatura_final_2da;    // Temperatura final del gas a la salida del compresor de 2da etapa
    double ParInducidoMotorComp2;     // Par inducido en el compresor 2
    double PresionIn2da;             // Presion de entrada al compresor de la 2da etapa
    double TaoComp2da;               // Tao de compresor2
    double Trabajo_in2;              // Potencia de compresión de 2da etapa
    double PresionOut2da ;           // Presion de salida del compresor de la 1ra etapa
    double CI2da;                    // Condiciones iniciales compresor 2da etapa
    double Eta_CIC;                  // Eficiencia del compresor

    // Variables tanque de expanción PB-4

    double UTanqueExp2;               // Coeficiente global de trasferencia de calor del HEX
    double CITanqueExp2;              // Temperatura inicial en el tanque de expansión
    double MasaTanqueExp2;            // Masa de gas en el tanque de expansion
    double VolTanqueExp2;             // Volumen tanque de expansion
    double UTanqueDeExpa2;            // Coeficiente global de trasferencia de calor del tanque de expansion
    double Temperatura_final_TanExp2; // Temperatura final del gas a la salida del tanque de expansion.
    double AreaTanqueExp2;            // Area tanque de expansión
    double PresionOutTanExp2;         // Temeperatura a la salida del tanque

    // Variables HEX2

    double AreaHEX2;                  // Area de intercambio de calor del HEX2
    double UHEX2;                     // Coeficiente global de trasferencia de calor del HEX2
    double Temperatura_final_HEX2;    // Temperatura de salida del HEX2
    double MasaHEX2;                  // Masa de gas en el intercambiador de gas 2
    double CIHEX2;                    // Temperatura inicial en el HEX2
    double PresionOutHEX2;            // Presión a la salida del intercambiador de calor 2.

    // Variables filtro coalescencia V-3

    double VolTanqueCoal1;           // Volumen del filtro coalescencia
    double AreaTanqueCoal1;          // Area del filtro coalescencia
    double UTanqueCoal1;             // Coeficiente global de trasferencia de calor del filtro coalescencia
    double TemperaturaOutTanqueCoal1;// Temperatura en el filtro coalescencia
    double MasaTanqueCoal1;          // Masa en el filtro coalescencia
    double CITemCoal1;              // Temperatura inicial en el filtro coalescencia
    double PresionTanqueCoal1;       // presion en el filtro coalescencia
    double NivelCoal1A;              // Nivel de agua en el filtro coalescencia LG 1306
    double NivelCoal1B;              // Nivel de agua en el filtro coalescencia LG 1310
    double Eta_Coal1;                // Eficiencia de filtrado del filtro coalescencia
    double AreaFilTanqueCoal1;       // Area del filtro coalescencia transversal al flujo de gas
    double CICoal1A;                 // Condiciones iniciales del Nivel en filtro coalescencia sección A
    double CICoal1B;                 // Condiciones iniciales del Nivel en filtro coalescencia sección B
    double TaoCoal1;                 // Tao filtro coalescencia
    double PermeabCoal1;             // permeabilidad del filtro de coalescencia
    double LongiCoal1;
    double DifPresCoal;              // Diferencia de presión en el filtro coalescente
};

#endif // SITEMATOROUMOUT_H
