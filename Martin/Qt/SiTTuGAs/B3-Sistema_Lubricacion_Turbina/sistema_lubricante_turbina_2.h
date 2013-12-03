#ifndef SISTEMA_LUBRICANTE_TURBINA_2_H
#define SISTEMA_LUBRICANTE_TURBINA_2_H

#include <QWidget>
#include <Qtimer>
#include <QDebug>
#include <QtCore/qmath.h>

namespace Ui {
    class SISTEMA_LUBRICANTE_TURBINA_2;
}

class SISTEMA_LUBRICANTE_TURBINA_2 : public QWidget
{
    Q_OBJECT

public:
    explicit SISTEMA_LUBRICANTE_TURBINA_2(QWidget *parent = 0);
    ~SISTEMA_LUBRICANTE_TURBINA_2();

    QTimer *Timer;

    double NivelTanque(double Fin,double Fout,double Area,double CITanque,int signal);
    double TemperaturaTanque(double CITin_tanque,double FlujoMasico_ac,double CP_ac,double Temp_ac_in,double q_elect1,double Masa_ac_in);
    double PresionBomba(double ValMaxPre,double TaoBomba,double CIPBomba,int signal);
    double FlujoBomba(double ValMaxFlujo,double TaoBomba,double CIFBomba,int signal);
    double FlujoBombaBarrido(double ValMaxFlujoBarrido,double TaoBombaBarrido,double CIFBombaBarrido,int signal);
    double TempSalidaInter(double U_A_Tamb,double CP_ac2,double Tac_in,double CITemp_ac,double U_A,double Masa_ac_CP_ac,double Densidad2,int signal);
    double Flujo_aire_carters(double ValFlujo,double TaoFlujo,double CIFlujo,int signal);
    double TemperaturaCA(double ValMaxTCA,double TaoBomba,double CITCA,int signal);
    double TemperaturaCB(double ValMaxTCB,double TaoBomba,double CITCB,int signal);
    double TemperaturaCC(double ValMaxTCC,double TaoBomba,double CITCC,int signal);
    double TemperaturaCD(double ValMaxTCD,double TaoBomba,double CITCD,int signal);
    double TemperaturaCE(double ValMaxTCE,double TaoBomba,double CITCE,int signal);
    double TemperaturaLUB(double ValMaxTLUB,double TaoBomba,double CITLUB,int signal);
    double TemperaturaTAGB(double ValMaxTAGB,double TaoBomba,double CITTAGB,int signal);

signals:
    void STemp1(double t);
    void STemp2(double t);
    void STemp3(double t);
    void STemp4(double t);
    void STemp5(double t);
    void STemp6(double t);
    void STemp7(double t);

public slots:

    int Iniciar();
    int Finalizar();
    int BombaSuministro();
    void Modelo();



private:
    Ui::SISTEMA_LUBRICANTE_TURBINA_2 *ui;

    double Tiempo;                    //Tiempo del timer

    double Fin;                       //Flujo de entrada al tanque
    double Fout;                      //Flujo de salida del tanque
    double Area;                      //Area del tanque de suministro
    double CITanque;                  //Condiciones iniciales del tanque
    double Nivel_Tanque_Suministro;   //Variable de salida de nivel

    double CITin_tanque;              //Temperatura dentro del tanque
    double FlujoMasico_ac;            //Flujo masico del aceite
    double Densidad;                  //Densidad del aceite a la temperatura en el tanque
    double CP_ac;                     //Calor especifico del aceite dentro del tanque
    double Temp_ac_in;                //Temperatura del aceite a la entrada del tanque
    double q_elect1;                  //Calor que genera la resistencia 1
    double Masa_ac_in;                //Masa del aceite dentro del tanque
    double Temperatura_Tanque;        //Variable de salida de temperatura

    double ValMaxPre;                 //Valor maximo de presion de la bomba
    double TaoBomba;                  //Constante de respuesta de la bomba
    double CIPBomba;                  //Condiciones iniciales de presion en la bomba
    double Presion_Bomba;             //Variable de salida de presion

    double ValMaxFlujo;               //Valor maximo de flujo de la bomba
    double CIFBomba;                  //Condiciones iniciales del flujo de la bomba
    double Flujo_Bomba;               //Variable de salida de flujo bomba
    int ArranqueBomba;                //Señal de control de bomba

    double ValMaxFlujoBarrido;        //Valor maximo de flujo de la bomba de barrido
    double CIFBombaBarrido;           //Condicion de flujo de bomba de barrido
    double Flujo_BombaBarrido;        //Variable de salida de flujo bomba de barrido
    double TaoBombaBarrido;           //Constante de respuesta de la bomba

    double PresionDif;                //Presion diferencial en filtro

    double PresionDifBarrido;         //Presion diferencial en filtro de bariido

    double PresionDifSeparador;       //Presion diferencial en el separador
    double Flujo_aire_compresor;      //Flujo de aire del compresor para enfriamiento
    double ValFlujo;
    double TaoFlujo;
    double CIFlujo;

    double UInter;                    //Coeficiente de transferencia global del intercambiador
    double AInter;                    //Area del intercambiador de calor
    double TAmb;                      //Temperatura del ambiente
    double CP_ac2;                     //Calor especifico del aceite
    double Tac_in;                    //Temperatura de entrada del aceite
    double Masa_ac;                   //Masa en el interior del intercambiador de calor
    double CITemp_ac;                 //Condiciones iniciales de temperatura
    double Densidad2;                  //Densidad del aceite
    double Tac_out;                   //Variable de salida de temperatura del intercambiador

    double ValMaxTCA;
    double CITCA;
    double TCA;

    double ValMaxTCB;
    double CITCB;
    double TCB;

    double ValMaxTCC;
    double CITCC;
    double TCC;

    double ValMaxTCD;
    double CITCD;
    double TCD;

    double ValMaxTCE;
    double CITCE;
    double TCE;

    double ValMaxTLUB;
    double CITLUB;
    double TLUB;

    double ValMaxTAGB;
    double CITTAGB;
    double TAGB;
};

#endif // SISTEMA_LUBRICANTE_TURBINA_2_H
