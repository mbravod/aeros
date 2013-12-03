#ifndef AIRE_VENTILACION_COMBUSTION_H
#define AIRE_VENTILACION_COMBUSTION_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
    class aire_ventilacion_combustion;
}

class aire_ventilacion_combustion : public QMainWindow
{
    Q_OBJECT

public:
    explicit aire_ventilacion_combustion(QWidget *parent = 0);
    ~aire_ventilacion_combustion();


    QTimer*Timer;

    double VelocidadBomba(double CIBomba, double TaoBomba, double VelMax);
    double BombaAgua(double TI,double CI, double Aguain_Cp, double Masa_Cp, double Potencia);
    double Calentador(double TICal,double CICal, double Aguain_Cp,double UA, double Tamb,double Masa_Cp_Cal, double Potencia_Resistencia);
    double Evaporador(double TIEvap,double CIEvap, double Aguain_Cp,double UA, double Tamb,double Masa_Cp_Evap, double Potencia_Frigorifica);
    double HEX(double TIHEX,double CIHEX, double Aguain_Cp,double UA, double Tamb,double Masa_Cp_Hex);
    double HEX_Aire(double TIAire,double CIAire, double Airein_CpAire,double UA, double Tagua_in,double Masa_Cv_Aire);
    double TurbinaCalor(double TIAire,double CIAire_Turbina, double Airein_CpAire,double UA, double Tgases,double MasaCabina_Cv_Aire, double Vel_in, double Vel_out, double Pow_Electr);
    double VelocidadVenti(double CIVenti, double TaoVenti, double VelMaxVenti);
public slots:

    int Encendido();
    int Apagado();
    void Modelo();
    //int OnOff();

private:
    Ui::aire_ventilacion_combustion *ui;

    // Parámetros del los fluidos de trabajo

    double Cp_agua;                       // Calor especifico del agua
    double VolEsp_agua;                   // volumen específico del agua
    double Densidad_agua;                 // densidad del agua
    double Tiempo;                        // Tiempo
    double Cv_aire;                       // Calor epecifico del aire
    double Cp_aire;                       // Calor especifico del aire

   // Parámetros de las bombas de agua

    double WBombaA;                       // Potencia de la bomba de agua P-100A
    double PI_A;                          // Presión de entrada a la bomba P-100A
    double CI_PA;                         // Condiciones iniciales de presión de la bomba P-100A
    double PresionFinalBomba;             // Diferencia de presion en la bomba P-100A.
    double Flujo_in;                      // Flujo másico de agua la entrada
    double VolumenBomba;                  // Volumen de la bomba P-100A
    double Vel_maxBombaA;                 // Velocidad máxima de la bomba de agua P-100A
    double Vel_BombaA;                    // Velocidad de la bomba
    double VelI_A;                        // Velocidad inicial de la bomba P-100A
    double CI_VelA;                       // Condiciones iniciales de la velocidad de bomba P-100A
    double Tao_bombaA;                    // Constante de respuesta de la bomba P-100A
    double ParInducidoMotorBomba;         // Par inducido en el motor del ventilador.

    // Parámetros calentador

    double AreaCal;                  // Area de intercambio de calor del Calentador
    double UCal;                     // Coeficiente global de trasferencia de calor del calentador
    double Tamb;                     // Temperatura ambiente
    double Temperatura_final_Cal;    // Temperatura de salida del calentador
    double MasaCal;                  // Masa de agua en el calentador
    double CICal;                    // Condicion inicial en el calentador
    double TemperaturaInicial;       // temperatura inicial
    double Potencia_resistencia;     // Potencia de la resistencia

    // parametro evaporador

    double AreaEvap;                  // Area de intercambio de calor del evaporador
    double UEvap;                     // Coeficiente global de trasferencia de calor del evaporador
    double Temperatura_final_Evap;    // Temperatura a la salida del evaporador
    double MasaEvap;                  // Masa en el evaporador
    double CIEvap;                    // Condiciones iniciales en el evaporador
    double Tempera_Inicial_Evap;      // temperatura inicial en el evaporador
    double Potencia_frigorifica;      // Potencia frigorifica

    // parametros del intercambiador de calor sección agua

    double AreaHEX;                  // Area de intercambio de calor del HEX
    double UHEX;                     // Coeficiente global de trasferencia de calor del HEX
    double Temperatura_final_HEX;    // Temperatura de salida del HEX
    double MasaHEX;                  // Masa de agua en el intercambiador
    double CIHEX;                    // Temperatura inicial en el HEX

    // parametros del intercambiador de calor seccion aire


    double Temperatura_final_Aire;    // Temperatura de salida del aire en el HEX
    double MasaHEXAire;               // Masa del aire en el intercambiador
    double Flujo_Aire_in;             // Flujo másio de aire a la entrada del HEX
    double CIAire;                    // Condiciones de entrada del aire


    // Parametros de la cabina de turbina

    double Pow_Res_Electrica;          // Potencia electrica de la cabina de turbina
    double TgasesTurbina;              // Temperatura de los gases en turbina
    double Vel_in_Aire;                // Velocidad de aire a la entrada
    double Vel_out_Aire;               // Velocidad de aire a la salida
    double Uturbina;                    // m/s
    double Aturbina;                    // m2
    double FlujoAireTurbina;
    double MasaTurbina;
    double Temperatura_aire_turbina;
    double CIAire_Turbina;

    // Parametros de ventiladores

    double WVenti;                        // Potencia del vebtilador
    double PI_Venti;                      // Presión de entrada del ventilador
    double CI_VentiVel;                      // Condiciones iniciales de presión del ventilador
    double PresionFinalVenti;             // Diferencia de presion en el ventilador.
    double Tao_Ventilador;                // Constante de respuesta del ventilador.
    double ParInducidoMotorVentilador;    // Par inducido en el motor del ventilador.
    double VelMaxVenti;
    double VelFinalVenti;

    // Parametros generador electrico

    double Temperatura_aire_generador;



}
;

#endif // AIRE_VENTILACION_COMBUSTION_H




