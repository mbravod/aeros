#ifndef LUBRICACION_GENERADOR_H
#define LUBRICACION_GENERADOR_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <QDebug>
#include <QtCore/qmath.h>

namespace Ui {
    class Lubricacion_Generador;
}

class Lubricacion_Generador : public QWidget
{
    Q_OBJECT

    public:
        explicit Lubricacion_Generador(QWidget *parent = 0);
        ~Lubricacion_Generador();

        QTimer  *Timer;

        double NivelTanqueSuministro(double Fin,double Fout,double Area,double CITanqueSum,int signal1);
        double TemperaturaTanqueSuministro(double CITin_tanque,double FlujoMasico_ac,double CP_ac2,double Temp_ac_in,double q_elect1,double q_elect2,double Masa_ac_in);
        double PresionBomba_1(double ValMaxPre_1,double TaoBomba_1,double CIBomba_1,int signal1);
        double FlujoBomba_1(double ValMaxFlujo_1,double Tao,double CIFBomba_1,int signal1);
        double PresionBomba_2(double ValMaxPre_2,double TaoBomba_2,double CIBomba_2,int signal2);
        double FlujoBomba_2(double ValMaxFlujo_2,double Tao_2,double CIFBomba_2,int signal2);
        double TempSalidaInter(double U_A_Tamb,double CP_ac,double Tac_in,double CITemp_ac,double U_A,double Masa_ac_CP_ac,double Densidad);
        double PresionBombaLevante_HP(double ValMaxPre_HP,double TaoBomba_HP,double CIBombaLevante_HP,int signal1);
        double PresionBombaLevante_LP(double ValMaxPre_LP,double TaoBomba_LP,double CIBombaLevante_LP,int signal1);
        double NivelTanqueDescarga(double Fin_TD,double Fout_TD,double Area_TD,double CITanqueDescarga);
        double TempCojineteEmpuje(double h,double As_metal,double CITac_out,double CITmetal_empuje,double Viscosidad_AreaContacto,double Diametro_eje,double Pi,double VelocidadAngular,double EspesorLub,double CP_metal_Masa_metal);
        double TempCojineteLiso(double h2,double As_metal2,double CITac_out,double CITmetal_liso,double Viscosidad_AreaContacto2,double Diametro_eje,double Pi,double VelocidadAngular,double EspesorLub,double CP_metal_Masa_metal2);
        double TemperaturaAceite_out_coj(double W_rotor,double UChumacera,double As_metal,double Temp_ac_in_coj,double CITmetalempuje,double FlujoMasico_ac_coj,double CP_ac_2,double Masa_ac_coj,double CITac_out);

    public slots:
        int Iniciar();
        int Finalizar();
        int BombaSuministro1();
        int FallaBomba1();
        int FallaBomba2();
        void Modelo();

    signals:
        void SNivelT(int);
        void STempTS(double);
        void SPressB1(double);
        void SFlujoB1(double);
        void SPressB2(double);
        void SFlujoB2(double);
        void STempSI(double);
        void PressBL_HP(double);
        void PressBL_LP(double);
        void SNivelTD(int);
        void STempCE(double);
        void STempAOC(double);
        void STempCL(double);
        void SBombaON(bool);



    private:
        Ui::Lubricacion_Generador *ui;
        FILE *LubGen;

        double Fin;                       //Flujo de entrada al tanque
        double Fout;                      //Flujo de salida del tanque
        double Area;                      //Area del tanque de suministro
        double CITanqueSum;               //Condiciones iniciales del tanque
        double Nivel_Tanque_Suministro;   //Variable de salida de nivel

        double CITin_tanque;              //Temperatura dentro del tanque
        double FlujoMasico_ac;            //Flujo masico del aceite
        double Densidad_2;                //Densidad del aceite a la temperatura en el tanque
        double CP_ac2;                    //Calor especifico del aceite dentro del tanque
        double Temp_ac_in;                //Temperatura del aceite a la entrada del tanque
        double q_elect1;                  //Calor que genera la resistencia 1
        double q_elect2;                  //Calor que genera la resistencia 2
        double Masa_ac_in;                //Masa del aceite dentro del tanque
        double Temperatura_Tanque;        //Variable de salida de temperatura

        double ValMaxPre_1;               //Valor maximo de presion de la bomba
        double TaoBomba_1;                //Constante de respuesta de la bomba
        double CIBomba_1;                 //Condiciones iniciales de presion en la bomba
        double Presion_Bomba_1;           //Variable de salida de presion

        double ValMaxFlujo_1;             //Valor maximo de flujo de la bomba 1
        double Tao;                       //Constante de respuesta de la bomba 1
        double CIFBomba_1;                //Condiciones iniciales del flujo de la bomba 1
        double Flujo_Bomba_1;             //Variable de salida de flujo bomba 1
        int ArranqueBomba1;               //Señal de control de bomba 1

        double ValMaxPre_2;               //Valor maximo de presion de la bomba
        double TaoBomba_2;                //Constante de respuesta de la bomba
        double CIBomba_2;                 //Condiciones iniciales de presion en la bomba
        double Presion_Bomba_2;           //Variable de salida de presion

        double ValMaxFlujo_2;             //Valor maximo de flujo de la bomba 2
        double Tao_2;                     //Constante de respuesta de la bomba 2
        double CIFBomba_2;                //Condiciones iniciales del flujo de la bomba 2
        double Flujo_Bomba_2;             //Variable de salida de flujo bomba 2
        int ArranqueBomba2;               //Señal de control de bomba 2

        double UInter;                    //Coeficiente de transferencia global del intercambiador
        double AInter;                    //Area del intercambiador de calor
        double TAmb;                      //Temperatura del ambiente
        double CP_ac;                     //Calor especifico del aceite
        double Tac_in;                    //Temperatura de entrada del aceite
        double Masa_ac;                   //Masa en el interior del intercambiador de calor
        double CITemp_ac;                 //Condiciones iniciales de temperatura
        double Densidad;                  //Densidad del aceite
        double Tac_out;                   //Variable de salida de temperatura del intercambiador

        double PresionDif;                //Presion diferencial en filtro

        double Tiempo;                    //Tiempo del timer
        double Fin_TD;                    //Flujo de entrada al tanque de descarga
        double Fout_TD;                   //Flujo de salida del tanque de descarga
        double Area_TD;                   //Area del tanque de descarga
        double CITanqueDescarga;          //Condiciones iniciales del tanque de descarga
        double Nivel_Tanque_Descarga;     //Variable de salida de nivel

        double ValMaxPre_HP;              //Valor maximo de los elementos de HP
        double TaoBomba_HP;               //Constante de respuesta de la bomba
        double CIBombaLevante_HP;         //Condiciones iniciales de la bomba de levante HP (Presion de salida del filtro)
        double Presion_HP;                //Variable de salida de presion en los elementos HP

        double ValMaxPre_LP;              //Valor maximo de los elementos de LP
        double TaoBomba_LP;               //Constante de respuesta de la bomba
        double CIBombaLevante_LP;         //Condiciones iniciales de la bomba de levante LP (Presion de salida del filtro)
        double Presion_LP;                //Variable de salida de presion en los elementos LP

        double CITac_out;                 //Condicion inicial de temperatura a la salida de cojinetes
        double W_rotor;                   //Calor por trabajo suministrado por el rotor
        double UChumacera;                //Coeficiente de transferencia de calor en la chumacera
        double Temp_ac_in_coj;            //Temperatura del aceite a la entrada de la chumacera
        double FlujoMasico_ac_coj;        //Flujo masico del aceite en la chumacera
        double CP_ac_2;                   //Calor especifico del aceite a la temperatura en la chumacera
        double Masa_ac_coj;               //Masa del aceite entre el cojinete y el rotor
        double Temp_ac_out_coj;           //Variable de salida de temperatura del aceite lubricante

        double h_conv;                    //Coeficiente de transferencia de calor por conveccion
        double As_metal;                  //Area superficial de contacto entre chumacera y el aceite
        double CITmetal_empuje;           //Condiciones iniciales de temperatura del metal de chumacera
        double Viscosidad;                //Viscosidad del aceite entre la chumacera y rotor
        double AreaContacto;              //Area de contacto entre el eje y la chumacera
        double Diametro_eje;              //Diametro del eje del rotor
        double Pi;                        //Valor de 3.1416
        double VelocidadAngular;          //Velocidad angular
        double EspesorLub;                //Espesor de la pelicula lubricante
        double Temperatura_CojEmp;        //Variable de salida de temperatura en el cojinete de empuje
        double CP_metal;                  //Calor especifico del metal
        double Masa_metal;                //Masa del metal

        double h_conv2;                   //Coeficiente de transferencia de calor por conveccion
        double As_metal2;                 //Area superficial de contacto entre chumacera y el aceite
        double CITmetal_liso;             //Condiciones iniciales de temperatura del metal de chumacera
        double AreaContacto2;             //Area de contacto entre el eje y la chumacera
        double Temperatura_CojLiso;        //Variable de salida de temperatura en el cojinete de empuje
        double Masa_metal2;                //Masa del metal
};

#endif // LUBRICACION_GENERADOR_H
