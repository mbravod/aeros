#include "aire_ventilacion_combustion.h"
#include "ui_aire_ventilacion_combustion.h"
#include <QDebug>
#include <QtCore/qmath.h>

aire_ventilacion_combustion::aire_ventilacion_combustion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::aire_ventilacion_combustion)
{
    ui->setupUi(this);



    Cp_agua = 4.18;                       // kJ/kg K
    VolEsp_agua = 0.001;                  // m3/kg
    Densidad_agua = 997;                  // kg/m3
    Tamb = 310;                           // K
    Cv_aire = 0.718;                      // kJ/kg K
    Cp_aire = 1.005;                      // kJ/kg K

   // Parámetros de las bombas de agua

    WBombaA = 18.64;                      // kJ/s  (potencia max. 44.74 kW)
    PI_A = 200 ;                          // kPa (kN/m2)presion maxima  689.48 kPa=100psig
    CI_PA = 689.48;                       // kPa (kN/m2)presion maxima  689.48 kPa=100psig
    PresionFinalBomba = 0;                // kPa
    Flujo_in = 29;                        // kg/s (29 min - 106.6 max)
    VolumenBomba = 0.001;                 // m3
    Vel_BombaA = 0;                       // rpm
    Vel_maxBombaA  = 1750;                // rpm (vel max 1750 rpm)
    VelI_A = 0 ;                          // rpm
    CI_VelA = 0;                          // rpm
    Tao_bombaA = 1;
    ParInducidoMotorBomba = 244.14;       // N m

    // Parámetros del calentador

    AreaCal = 10;                  // m2
    UCal = 0.1 ;                   // kW/m2 K
    Temperatura_final_Cal = 300;   // K
    MasaCal = 500;                // kg
    CICal = 298;                   // K
    TemperaturaInicial = 298;      // K
    Potencia_resistencia = 1758;   // kW

    // Parámetros del evaporador

    AreaEvap = 10;                  // m2
    UEvap = 0.1 ;                   // kW/m2 K
    Temperatura_final_Evap = 300;   // K
    MasaEvap = 1100;                // kg
    CIEvap = 313;                   // K
    Tempera_Inicial_Evap = 313;     // K
    Potencia_frigorifica = 1758;    // kW


    // Parametros del interbambiador de carcasa de filtro

    Temperatura_final_HEX= 0;       // K
    MasaHEX= 40;                    // kg
    AreaHEX = 28.615 ;              // m2
    UHEX = 1.3703;                  // kJ/m2 K
    CIHEX= 273;                     // K

    Temperatura_final_Aire= 0;       // K
    MasaHEXAire = 4;                 // kg
    CIAire = 298;                    // K
    Flujo_Aire_in = 20;              // kg/s

    //  double

    TgasesTurbina = 1150;            // K
    Vel_in_Aire =5;                  // m/s
    Vel_out_Aire= 12;                // m/s
    Uturbina = 45;                    // m/s
    Aturbina = 3;                    // m2
    FlujoAireTurbina = 1290;         // kg/s
    MasaTurbina = 60;                // kg
    Temperatura_aire_turbina = 298;  //
    CIAire_Turbina = 298;            //
    Pow_Res_Electrica = 1000;           // kW

    // Parametros del motor de ventilador

    WVenti = 77.5;                        // kW
    PI_Venti = 101.3;                     // kPa
    CI_VentiVel = 101.3;                     //
    PresionFinalVenti = 1;                //
    Tao_Ventilador = 1;                   //
    ParInducidoMotorVentilador = 501.7 ;  // Par inducido en el motor del ventilador.
    VelMaxVenti = 1475;
    VelFinalVenti = 3;

    // generador electrico

    Temperatura_aire_generador = Tamb;

    aire_ventilacion_combustion::Timer=new QTimer(this);
    connect(this->ui->Star,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->Stop,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));


}


double aire_ventilacion_combustion::VelocidadBomba(double CIBomba, double TaoBomba, double VelMax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIBomba;

    for (j=1;j<25;j++)
    {
        k1=((VelMax)-(x[j-1]))/TaoBomba;
        k2=((VelMax)-(x[j-1]+(h*k1/2)))/TaoBomba;
        k3=((VelMax)-(x[j-1]+(h*k2/2)))/TaoBomba;
        k4=((VelMax)-(x[j-1]+(h*k3)))/TaoBomba;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::Calentador (double TICal, double CICal, double Aguain_Cp, double UA, double Tamb, double Masa_Cp_Cal, double Potencia_Resistencia)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CICal;

    for (j=1;j<25;j++)
    {
       k1=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-(((UA+Aguain_Cp)*x[j-1])))/Masa_Cp_Cal;
       k2=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-(((UA+Aguain_Cp)*x[j-1]))+(h*k1/2))/Masa_Cp_Cal;
       k3=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-(((UA+Aguain_Cp)*x[j-1]))+(h*k2/2))/Masa_Cp_Cal;
       k4=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-(((UA+Aguain_Cp)*x[j-1]))+(h*k3))/Masa_Cp_Cal;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::Evaporador (double TIEvap, double CIEvap, double Aguain_Cp, double UA, double Tamb, double Masa_Cp_Evap, double Potencia_Frigorifica)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIEvap;

    for (j=1;j<25;j++)
    {
       k1=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-(((UA+Aguain_Cp)*x[j-1])))/Masa_Cp_Evap;
       k2=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-(((UA+Aguain_Cp)*x[j-1]))+(h*k1/2))/Masa_Cp_Evap;
       k3=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-(((UA+Aguain_Cp)*x[j-1]))+(h*k2/2))/Masa_Cp_Evap;
       k4=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-(((UA+Aguain_Cp)*x[j-1]))+(h*k3))/Masa_Cp_Evap;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::HEX (double TIHEX, double CIHEX, double AguainCpHEX, double UA, double Tamb, double Masa_Cp_Hex)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIHEX;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tamb)+(AguainCpHEX*TIHEX))-(((UA+AguainCpHEX)*x[j-1])))/Masa_Cp_Hex;
       k2=(((UA*Tamb)+(AguainCpHEX*TIHEX))-(((UA+AguainCpHEX)*x[j-1])+(h*k1/2)))/Masa_Cp_Hex;
       k3=(((UA*Tamb)+(AguainCpHEX*TIHEX))-(((UA+AguainCpHEX)*x[j-1])+(h*k2/2)))/Masa_Cp_Hex;
       k4=(((UA*Tamb)+(AguainCpHEX*TIHEX))-(((UA+AguainCpHEX)*x[j-1])+(h*k3)))/Masa_Cp_Hex;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::HEX_Aire(double TIAire, double CIAire, double Airein_CpAire, double UA, double Tagua_in, double Masa_Cv_Aire)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIAire;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(((Airein_CpAire)*x[j-1])))/Masa_Cv_Aire;
       k2=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(((Airein_CpAire)*x[j-1])+(h*k1/2)))/Masa_Cv_Aire;
       k3=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(((Airein_CpAire)*x[j-1])+(h*k2/2)))/Masa_Cv_Aire;
       k4=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(((Airein_CpAire)*x[j-1])+(h*k3)))/Masa_Cv_Aire;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::TurbinaCalor(double TIAire, double CIAire_Turbina, double Airein_CpAire, double UA, double Tgases, double MasaCabina_Cv_Aire, double Vel_in, double Vel_out, double Pow_Electr)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIAire_Turbina;

    for (j=1;j<25;j++)
    {
       k1=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-x[j-1])+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k2=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k1/2)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k3=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k2/2)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k4=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k3)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double aire_ventilacion_combustion::VelocidadVenti(double CIVenti, double TaoVenti, double VelMaxVenti)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIVenti;

    for (j=1;j<25;j++)
    {
        k1=((VelMaxVenti)-(x[j-1]))/TaoVenti;
        k2=((VelMaxVenti)-(x[j-1]+(h*k1/2)))/TaoVenti;
        k3=((VelMaxVenti)-(x[j-1]+(h*k2/2)))/TaoVenti;
        k4=((VelMaxVenti)-(x[j-1]+(h*k3)))/TaoVenti;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

int aire_ventilacion_combustion::Encendido()
{
    this->Timer->start(50);
    return 0;
}

int aire_ventilacion_combustion::Apagado()
{
    this->Timer->stop();
    return 0;
}

/*int SistemaDecombustible::OnOff()
{
    if (this->ui->checkBox->checkState()==2)
    {
        OnOff = 1;
    }
    else if (this->ui->checkBox->checkState()==0)
    {
        OnOff=0;
    }
    return 0;
}*/

void aire_ventilacion_combustion::Modelo()
{
    Vel_BombaA = VelocidadBomba(CI_VelA,Tao_bombaA,Vel_maxBombaA);

    WBombaA = 1.341*Vel_BombaA*ParInducidoMotorBomba*2*3.1416/60000;

    PresionFinalBomba = ((WBombaA*Densidad_agua/Flujo_in)+PI_A)*0.145;

    Temperatura_final_Cal = Calentador(TemperaturaInicial,CICal,(Flujo_in*Cp_agua),(UCal*AreaCal),Tamb,(MasaCal*Cp_agua),Potencia_resistencia);

    Temperatura_final_Evap = Evaporador(Tempera_Inicial_Evap,CIEvap,(Flujo_in*Cp_agua),(UEvap*AreaEvap),Tamb,(MasaEvap*Cp_agua),Potencia_frigorifica);

    Temperatura_final_HEX = HEX(CIHEX,CIHEX,(Flujo_in*Cp_agua),(AreaHEX*UHEX),Tamb,(MasaHEX*Cp_agua));

    Temperatura_final_Aire = HEX_Aire(Tamb,Tamb,(Flujo_Aire_in*Cp_aire),(AreaHEX*UHEX),Temperatura_final_Cal,(MasaHEXAire*Cv_aire));

    Temperatura_aire_turbina = TurbinaCalor(Temperatura_final_Aire,Temperatura_final_Aire,(FlujoAireTurbina*Cp_aire),(Uturbina*Aturbina),TgasesTurbina,(MasaTurbina*Cv_aire),Vel_in_Aire,Vel_out_Aire,Pow_Res_Electrica);

    VelFinalVenti = VelocidadVenti(CI_VentiVel,Tao_Ventilador,VelMaxVenti);

    Temperatura_aire_generador = Temperatura_aire_turbina*0.9;

   // qDebug()<<(VelFinalVenti);

     //qDebug()<<(AreaHEX*UHEX);


   CI_VelA = Vel_BombaA;

   CICal = Temperatura_final_Cal;

   CIEvap = Temperatura_final_Evap;

   CIHEX = Temperatura_final_HEX;

   CIAire = Temperatura_final_Aire;

   CIAire_Turbina = Temperatura_aire_turbina;

   CI_VentiVel = VelFinalVenti;

   Tiempo = Tiempo+0.05;

   this->ui->txt1->append(QString::number(Vel_BombaA));
   this->ui->txt2->append(QString::number(Tiempo));
   this->ui->txt3->append(QString::number(WBombaA));
   this->ui->txt4->append(QString::number(PI_A*0.145));
   this->ui->txt5->append(QString::number(PresionFinalBomba));
   this->ui->txt6->append(QString::number(Temperatura_final_Cal));
   this->ui->txt7->append(QString::number(Temperatura_final_Evap));
   this->ui->txt8->append(QString::number(Temperatura_final_HEX));
   this->ui->txt9->append(QString::number(Temperatura_final_Aire));
   this->ui->txt10->append(QString::number(Temperatura_aire_turbina));
   this->ui->txt11->append(QString::number(VelFinalVenti));
   this->ui->txt12->append(QString::number(Temperatura_aire_generador));
   /*this->ui->txt13->append(QString::number(Trabajo_in1));
   //this->ui->txt14->append(QString::number(XvalControl1));*/



}



aire_ventilacion_combustion::~aire_ventilacion_combustion()
{
    delete ui;
    delete Timer;
}
