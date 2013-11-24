#ifndef SISTEMA_ELECTRICO_H
#define SISTEMA_ELECTRICO_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <QtCore/qmath.h>

namespace Ui
{
    class Sistema_Electrico;
}

class Sistema_Electrico : public QWidget
{
    Q_OBJECT

    public:
        explicit Sistema_Electrico(QWidget *parent = 0);
        ~Sistema_Electrico();

    private:
        Ui::Sistema_Electrico *ui;
        QTimer *Timer;

        double GeneradorPot(int segnal,double ValMax, double Tao, double CI, int Falla);
        double GeneradorVol(int segnal,double ValMax, double Tao, double CI, int Falla);
        double ContrlIsoc(double TiempoInteg,double SP, double Frec, double CI);
        double FrecuenciaGenerador(double PotM, double PotE, double B, double J, double CI);
        double PosicionCuchilla(int segnal, double ValMax, double Tao, double CI, int Falla);

    public slots:
        int Encendido();
        int Apagado();
        int On_Off_Generador();
        int On_Off_GeneradorAux();
        int On_Off_Chucilla92BT221A();
        int On_Off_Cuchilla92BAT21A();
        int On_Off_Cuchilla92BT221C();
        int On_Off_Cuchilla92BCT21A();
        int On_Off_Cuchilla90MC();
        int On_Off_Interruptor521T21A();
        int On_Off_Interruptor522T21A();
        int On_Off_Interruptor52AuxG1();
        int On_Off_Interruptor51G1();
        int On_Off_Interruptor501AuxG1();
        int On_Off_Interruptor502AuxG1();
        int On_Off_Interruptor50ANG1();
        void Modelo();

    private:
        FILE *Electrico;

        double TaoGeneradorUnidad;      //Constante de respuesta del Generador.
        double PotenciaGenerador;       //Potencia Otrogada por el Generador.
        double VoltajeGenerador;        //Voltaje Máximo Otorgado por el Generador.
        double VFAGeneradorU;           //Voltaje en la Fase A del Generador.
        double VFBGeneradorU;           //Voltaje en la Fase B del Generador.
        double VFCGeneradorU;           //Voltaje en la Fase C del Generador.
        double CFAGeneradorU;           //Corriente en la Fase A del Generador.
        double CFBGeneradorU;           //Corriente en la Fase B del Generador.
        double CFCGeneradorU;           //Corriente en la Fase C del Generador.
        double GeneradorUnidadP;        //Generador Unidad Potencia.
        double GeneradorAuxiliar;       //Generador Auxiliar.
        double VoltajeGeneradorAuxiliar;//Voltaje Máximo Otorgado por el Generador Auxiliar.
        double TaoGenAux;               //Constante de Respuesta del Generador Auxiliar.
        double CIVGenAux;               //Condiciones Iniciales de Voltaje del Generador Auxiliar.
        double CIPGenAux;               //Condiciones Iniciales de Potencia del Generador Auxiliar.
        double CIGeneradorUnidadP;      //Condiciones Iniciales de Potencia del Generador Unidad.
        double CIGeneradorUnidadVFA;    //Condiciones Iniciales de Voltaje en la Fase A del Generador de la Unidad.
        double CIGeneradorUnidadVFB;    //Condiciones Iniciales de Voltaje en la Fase B del Generador de la Unidad.
        double CIGeneradorUnidadVFC;    //Condiciones Iniciales de Voltaje en la Fase C del Generador de la Unidad.
        double TaoIsocrono;             //Constante de Respuesta del Controlodor Isocrono del Generador Auxiliar.
        double SetPointFrecuencia;      //Set Point de la Frecuencia del Generador Auxiliar.
        double CIContrIsoc;             //Condiciones Iniciales del Controlador Isócrono.
        double ControlIsocrono;         //Controlador Isocrono.
        double PotMecanica;             //Potencia Mecánica del Generador Auxiliar.
        double PotElectrica;            //Potencia Eléctrica del Generador Auxiliar.
        double AmortiguamientoAux;      //Constante de Amortiguamiento del Generador Auxiliar.
        double RozamientoAux;           //Constante de Rozamiento del Generador Auxiliar.
        double FrecGeneradorAux;        //Frecuencia del Generador Auxiliar.
        double CIFrecAux;               //Condiciones Iniciales de la Frecuencia del Generador Auxiliar.
        double CIPotElec;               //Condiciones Iniciales de la Potencia Electrica Demandada.
        double CGeneradorAux;           //Corriente Proporcionada por el Generador Auxiliar.
        double TaoCuchillas;            //Constante de Respuesta de las Cuchillas.
        double C92BT221A;               //Posición Cuchilla 92BT221A.
        double CIC92BT221A;             //Condiciones Iniciales de la Cuchilla 92BT221A.
        double C92BAT21A;               //Posición Cuchilla 92BAT21A.
        double CIC92BAT21A;             //Condiciones Iniciales de la Cuchilla 92BAT21A.
        double C92BT221C;               //Posición Cuchilla 92BT221C.
        double CIC92BT221C;             //Condiciones Iniciales de la Cuchilla 92BT221C.
        double C92BCT21A;               //Posición Cuchilla 92BCT21A.
        double CIC92BCT21A;             //Condiciones Iniciales de la Cuchilla 92BCT21A.
        double C90MC;                   //Posición Cuchilla 90MC.
        double CIC90MC;                 //Condiciones Iniciales de la Cuchilla 90MC.
        double VFAT21A;                 //Voltaje Fase A del Transformador T21A.
        double VFBT21A;                 //Voltaje Fase B del Transformador T21A.
        double VFCT21A;                 //Voltaje Fase C del Transformador T21A.
        double CFAT21A;                 //Corriente Fase A del Transformador T21A.
        double CFBT21A;                 //Corriente Fase B del Transformador T21A.
        double CFCT21A;                 //Corriente Fase C del Transformador T21A.
        double VFAT20AuxG1;             //Voltaje Fase A del Transformador T20AuxG1.
        double VFBT20AuxG1;             //Voltaje Fase B del Transformador T20AuxG1.
        double VFCT20AuxG1;             //Voltaje Fase C del Transformador T20AuxG1.
        double CFAT20AuxG1;             //Corriente Fase A del Transformador T20AuxG1.
        double CFBT20AuxG1;             //Corriente Fase B del Transformador T20AuxG1.
        double CFCT20AuxG1;             //Corriente Fase C del Transformador T20AuxG1.
        double VFAT00AuxG1;             //Voltaje Fase A del Transformador T00AuxG1.
        double VFBT00AuxG1;             //Voltaje Fase B del Transformador T00AuxG1.
        double VFCT00AuxG1;             //Voltaje Fase C del Transformador T00AuxG1.
        double CFAT00AuxG1;             //Corriente Fase A del Transformador T00AuxG1.
        double CFBT00AuxG1;             //Corriente Fase B del Transformador T00AuxG1.
        double CFCT00AuxG1;             //Corriente Fase C del Transformador T00AuxG1.
        double VFAT221A;                //Voltaje Fase A del Transformador T221A.
        double VFBT221A;                //Voltaje Fase B del Transformador T221A.
        double VFCT221A;                //Voltaje Fase C del Transformador T221A.
        double CFAT221A;                //Corriente Fase A del Transformador T221A.
        double CFBT221A;                //Corriente Fase B del Transformador T221A.
        double CFCT221A;                //Corriente Fase C del Transformador T221A.
        double VFAT221C;                //Voltaje Fase A del Transformador T221C.
        double VFBT221C;                //Voltaje Fase B del Transformador T221C.
        double VFCT221C;                //Voltaje Fase C del Transformador T221C.
        double CFAT221C;                //Corriente Fase A del Transformador T221C.
        double CFBT221C;                //Corriente Fase B del Transformador T221C.
        double CFCT221C;                //Corriente Fase C del Transformador T221C.
        double TabCCM;                  //Potencia Consumida en el Tablero CCM.
        double TabChiller;              //Potencia Consumida en el Tablero del Chiller.
        double TabCompAire;             //Potencia Consumida en el Tablero del Compresor de Aire.
        double TabBCI;                  //Potencia Consumida en el Tablero de la Bomba Contra Incendio.
        double Tiempo;                  //El tiempo del timer;
        int OnOffGenerador;             //Señal de Arranque y Paro del Generador de la Unidad.
        int OnOffGeneradorAuxiliar;     //Señal de Arranque y Paro del Generador Auxiliar.
        int OnOffC92BT221A;             //Señal de Apertura y Cierre de la Cuchilla 92BT221A.
        int OnOffC92BAT21A;             //Señal de Apertura y Cierre de la Cuchilla 92BAT21A.
        int OnOffC92BT221C;             //Señal de Apertura y Cierre de la Cuchilla 92BT221C.
        int OnOffC92BCT21A;             //Señal de Apertura y Cierre de la Cuchilla 92BCT21A.
        int OnOffC90MC;                 //Señal de Apertura y Cierre de la Cuchilla 90MC.
        int I521T21A;                   //Interruptor 521T21A.
        int I522T21A;                   //Interruptor 522T21A.
        int I52AuxG1;                   //Interruptor 52AuxG1.
        int I51G1;                      //Interruptor 51G1.
        int I501AuxG1;                  //Interruptor 501AuxG1.
        int I50ANG1;                    //Interruptor 50ANG1.
        int I502AuxG1;                  //Interruptor 502AuxG1.
        int Conexion1T21A;              //Variable de Conexión del Transformador T21A.
        int Conexion2T21A;              //Variable de Conexión Alternativa del Transformador T21A.
        int Conexion1T20AuxG1;          //Variable de Conexión del Transformador T20AuxG1.
        int Conexion2T20AuxG1;          //Variable de Conexión Alternativa del Transformador T20AuxG1.
        int Conexion1T00AuxG1;          //Variable de Conexión del Transformador T00AuxG1.
        int Conexion2T00AuxG1;          //Variable de Conexión Alternativa del Transformador T00AuxG1.

        int FGenerador;                 //Falla del Generador de la Unidad.
        int FGeneradorAux;              //Falla del Generador Auxiliar.
        int FC92BT221A;                 //Falla de Cuchilla 92BT221A.
        int FC92BAT21A;                 //Falla de Cuchilla 92BAT21A.
        int FC92BT221C;                 //Falla de Cuchilla 92BT221C.
        int FC92BCT21A;                 //Falla de Cuchilla 92BCT21A.
        int FC90MC;                     //Falla de Cuchilla 90MC.
        int FI521T21A;                  //Falla de Interruptor 521T21A.
        int FI522T21A;                  //Falla de Interruptor 522T21A.
        int FI52AuxG1;                  //Falla de Interruptor 52AuxG1.
        int FI51G1;                     //Falla de Interruptor 51G1.
        int FI501AuxG1;                 //Falla de Interruptor 501AuxG1.
        int FI50ANG1;                   //Falla de Interruptor 50ANG1.
        int FI502AuxG1;                 //Falla de Interruptor 502AuxG1.
        int FTabCCM;                    //Falla del Tablero de CCM.
        int FTabChiller;                //Falla del Tablero del Chiller.
        int FTabCompAire;               //Falla del Tablero del Compresor de Aire.
        int FTabBCI;                    //Falla del Tablero de la Bomba Contra Incendio.
};

#endif // SISTEMA_ELECTRICO_H
