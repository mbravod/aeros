#include "sitematoroumout.h"
#include "ui_sitematoroumout.h"

sitematoroumout::sitematoroumout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sitematoroumout)
{
    ui->setupUi(this);

    // Variables de la valvula de control

    XvalControl1max = 1;
    CIXvalControl1 = 0;
    TaoXvalControl1=1;
    XvalControl1= 0.5;

    // Propiedades del combustible

    Cp = 2.25;                   // kJ/kg K
    Cv = 1.7354;                 // kJ/kg K
    DensidadAgua=1000;           // kg/m3
    Temperatura_in = 300;        // K
    Tiempo = 0.5 ;               // s
    Flujo_in = 0.5;                // kg/s
    FlujoMax = 2;                // kg/s
    Humedadgasin= 0.1;           // kg_vapor/kg_gas
    R_gas = 0.5182;              // kPa*m3/kg K
    Tamb = 300;                  // K
    ViscosiGas = 0.00005;        // kg/m s
    DensidadGas = 0.6050;        // kg/m3

    // parametros tanque de depuración

    VolTanqueDepu1=1.72;            // m3
    AreaTanqueDepu1= 4.12;          // m2
    UTanqueDepu1 =1.11;             // kJ/m2 K
    TemperaturaOutTanqueDepu1=300;    // K
    MasaTanqueDepu1 = 9;            // kg
    CITanqDepu1 = 300;              // K
    PresionTanqueDepu1=100;         //kPa
    Eta_Fil1 = 0.0001;              //
    AreaFilTanqueDepu1=0.246;       // m2
    CIFIL1=0.05;                    // m
    NivelTanqueDepu1=0;             // m max 0.3m
    TaoTanqueDepu1= 1;


    // tanque de succión 1(PB-1)

    Temperatura_final_TanSuc1= 300;        //
    MasaTanqueSuc1=1.0334;                      // kg
    VolTanqueSuc1 = 0.21;                  // m3
    UTanqueSuc1 = 1;                       // kJ/m2 K
    AreaTanqueSuc1= 1.75;                  // m2
    PresionOutTanSuc1=0;                   // kPa
    CITanqueSuc1=TemperaturaOutTanqueDepu1;                // K


    // parametros  compresor 1ra etapa

    PresionIn1ra = 766;             // kPa
    VelMaximaMotorCompresor = 1200; // rev/min
    VelMotorCompresor=0;            // rad/min
    TaoMotorCompresor=1;
    CIVelocidad= 200;               // rev/min
    ParInducidoMotorComp1= 5952.4;  // rad/s
    Trabajo_in1 = 0;                // kJ/s
    CI1ra = Temperatura_final_TanSuc1;                       // K
    Temperatura_final_1ra = 300;    // K
    Masa = 0.0595;                  // kg
    PresionOut1ra = 1000;              // kPa
    CIMotorCompresor=200;           // rev/min
    TaoComp1ra= 1;

    // Tanque de expanción 1(PB-2)

    Temperatura_final_TanExp=300;     // K
    MasaTanqueExp=0.91;              // kg
    VolTanqueExp = 0.099;           // m3
    UTanqueExp = 0.1;                 // kJ/m2 K
    AreaTanqueExp= 2.52;            // m2
    PresionOutTanExp=1000;             // kPa
    CITanqueExp=Temperatura_final_1ra;                // K

    // parametros  HEX

    Temperatura_final_HEX= Tamb;       // K
    MasaHEX= 1.493;                 // kg
    AreaHEX = 28.615 ;              // m2
    UHEX = 1.3703;                  // kJ/m2 K
    CIHEX=Temperatura_final_TanExp; // K
    PresionOutHEX=1;                // kPa

    // parametros tanque de depuracion 2

    VolTanqueDepu2=0.5;         // m3 calculado en excel 0.68
    AreaTanqueDepu2= 3.14;       // m2
    UTanqueDepu2 =1;             // kJ/m2 K
    TemperaturaOutTanqueDepu2=300; // K
    MasaTanqueDepu2 = 5.14;      // kg
    CITanqDepu2 = Temperatura_final_HEX;           // K
    PresionTanqueDepu2=0;        //kPa
    NivelTanqueDepu2=0.05;       // m max 0.3m
    AreaFilTanqueDepu2=0.20;     // m2
    CIFIL2=0.05;                 // m
    Eta_Fil2 = 0.01;              //

    // tanque de succión 2(PB-3)

    Temperatura_final_TanSuc2=300;     // K
    MasaTanqueSuc2=1;                // kg
    VolTanqueSuc2 = 0.0991;          // m3
    UTanqueSuc2 = 1;                 // kJ/m2 K
    AreaTanqueSuc2= 2.52;            // m2
    PresionOutTanSuc2=1500;             // kPa
    CITanqueSuc2=TemperaturaOutTanqueDepu2;                // K
    PresionOutTanSuc2 = 0;           // kPa

    // parametros  compresor 2da etapa

    Temperatura_final_2da =Tamb;       // K
    Trabajo_in2 = 314;              // kJ/s
    Masa2= 0.144;                   // kg
    Eta_CIC = 0.85;                 //
    TaoComp2da= 1;                //
    ParInducidoMotorComp2= 5952.4;  //
    PresionOut2da = 0;              // kPa
    CI2da = Temperatura_final_TanSuc2;


    // tanque de expansión 2(PB-4)

    Temperatura_final_TanExp2=Tamb;     // K
    MasaTanqueExp2=1.9;              // kg
    VolTanqueExp2 = 0.099;           // m3
    UTanqueExp2 = 0.08;                 // kJ/m2 K
    AreaTanqueExp2= 2.52;            // m2
    PresionOutTanExp2=1000;             // kPa
    CITanqueExp2=Temperatura_final_2da; // K


    // parametros  HEX2

    Temperatura_final_HEX2= Tamb;       // K
    MasaHEX2= 1.493;                 // kg
    AreaHEX2= 18.615 ;              // m2
    UHEX2 = 0.03703;                  // kJ/m2 K
    CIHEX2=Temperatura_final_TanExp2; // K
    PresionOutHEX2=1;                // kPa


    // parametros filtro de coalescencia V-3

    VolTanqueCoal1=0.276;            // m3
    AreaTanqueCoal1= 2.72;          // m2
    UTanqueCoal1 =0.011;             // kJ/m2 K
    TemperaturaOutTanqueCoal1=300;    // K
    MasaTanqueCoal1 = 5;            // kg
    CITemCoal1 = 300;              // K
    PresionTanqueCoal1=100;         //kPa
    Eta_Coal1 = 0.50;              //
    AreaFilTanqueCoal1=0.246;       // m2
    CICoal1A=0.002;                    // m
    CICoal1B=0.0001;                    // m
    NivelCoal1A=0;             // m max 0.3m
    NivelCoal1B=0;             // m max 0.3m
    TaoCoal1= 1;
    PermeabCoal1 = 0.00001;             // permeabilidad del filtro de coalescencia
    LongiCoal1 =  0.001;               // longitud del filtro
    DifPresCoal = 4;


    sitematoroumout::Timer=new QTimer(this);
    connect(this->ui->Star,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->Stop,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));

}

double sitematoroumout::Xvalvulas(double XI, double CIVal, double TaoVal, double Xmax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIVal;

    for (j=1;j<25;j++)
    {
        k1=((Xmax)-(x[j-1]))/TaoVal;
        k2=((Xmax)-(x[j-1]+(h*k1/2)))/TaoVal;
        k3=((Xmax)-(x[j-1]+(h*k2/2)))/TaoVal;
        k4=((Xmax)-(x[j-1]+(h*k3)))/TaoVal;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}


double sitematoroumout::VelocidadCompresor(double CIMotorCompresor, double TaoMotor, double VelMax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIMotorCompresor;

    for (j=1;j<25;j++)
    {
        k1=((VelMax)-(x[j-1]))/TaoMotor;
        k2=((VelMax)-(x[j-1]+(h*k1/2)))/TaoMotor;
        k3=((VelMax)-(x[j-1]+(h*k2/2)))/TaoMotor;
        k4=((VelMax)-(x[j-1]+(h*k3)))/TaoMotor;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double sitematoroumout::Compresor(double TI,double CI, double Gasin_Cp, double Masa_Cv, double Potencia)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CI;

    for (j=1;j<25;j++)
    {
       k1=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])))/Masa_Cv;
       k2=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k1/2)))/Masa_Cv;
       k3=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k2/2)))/Masa_Cv;
       k4=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k3)))/Masa_Cv;
        /*k1=(((Gasin_Cp*TI)-(Gasin_Cp*x[j-1]))+Potencia)/Masa_Cv;
        k2=(((Gasin_Cp*TI)-(Gasin_Cp*(x[j-1]+((h/2)*k1))))+Potencia)/Masa_Cv;
        k3=(((Gasin_Cp*TI)-(Gasin_Cp*(x[j-1]+((h/2)*k2))))+Potencia)/Masa_Cv;
        k4=(((Gasin_Cp*TI)-(Gasin_Cp*(x[j-1]+(h*k3))))+Potencia)/Masa_Cv;*/

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double sitematoroumout::HEX (double TIHEX, double CIHEX, double GasinCpHEX, double UA, double Tamb, double Masa_Cv_Hex)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIHEX;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasinCpHEX)*x[j-1])))/Masa_Cv_Hex;
       k2=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasinCpHEX)*x[j-1]))+(h*k1/2))/Masa_Cv_Hex;
       k3=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasinCpHEX)*x[j-1]))+(h*k2/2))/Masa_Cv_Hex;
       k4=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasinCpHEX)*x[j-1]))+(h*k3))/Masa_Cv_Hex;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double sitematoroumout::Nivel(double CIFIL, double Gasin_FIL, double Humedad, double EtaFIL, double Area_DensiAgua)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIFIL;

    for (j=1;j<25;j++)
    {
       k1=((Gasin_FIL*Humedad*EtaFIL))/Area_DensiAgua;
       k2=(((Gasin_FIL*Humedad*EtaFIL)+(h*k1/2))/Area_DensiAgua);
       k3=((Gasin_FIL*Humedad*EtaFIL)+(h*k2/2))/Area_DensiAgua;
       k4=((Gasin_FIL*Humedad*EtaFIL)+(h*k3)/Area_DensiAgua);

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

int sitematoroumout::Encendido()
{
    this->Timer->start(50);
    return 0;
}

int sitematoroumout::Apagado()
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

void sitematoroumout::Modelo()
{
    XvalControl1=Xvalvulas(CIXvalControl1,CIXvalControl1,TaoXvalControl1,XvalControl1max);

    CIXvalControl1=XvalControl1;

    Flujo_in= XvalControl1*FlujoMax;

    TemperaturaOutTanqueDepu1=HEX(Temperatura_in,CITanqDepu1,(Cp*Flujo_in),(UTanqueDepu1*AreaTanqueDepu1),Tamb,(MasaTanqueDepu1*Cv));

    CITanqDepu1=TemperaturaOutTanqueDepu1;

    PresionTanqueDepu1=(MasaTanqueDepu1*R_gas*TemperaturaOutTanqueDepu1/VolTanqueDepu1);

    NivelTanqueDepu1=Nivel(CIFIL1,Flujo_in,Humedadgasin,Eta_Fil1,(AreaFilTanqueDepu1*DensidadAgua));

    CIFIL1=NivelTanqueDepu1;

    Temperatura_final_TanSuc1 = HEX(TemperaturaOutTanqueDepu1,CITanqueSuc1,(Cp*Flujo_in),(AreaTanqueSuc1*UTanqueSuc1),Tamb,(MasaTanqueSuc1*Cv));

    CITanqueSuc1=Temperatura_final_TanSuc1;

    PresionOutTanSuc1=(MasaTanqueSuc1*R_gas*Temperatura_final_TanSuc1/VolTanqueSuc1);

    VelMotorCompresor=VelocidadCompresor(CIMotorCompresor,TaoMotorCompresor,VelMaximaMotorCompresor);

    CIMotorCompresor=VelMotorCompresor;

    Trabajo_in1=VelMotorCompresor*ParInducidoMotorComp1/(20000);

    Temperatura_final_1ra=Compresor(Temperatura_final_TanSuc1,CI1ra,(Cp*Flujo_in),(Masa*Cv*TaoComp1ra),Trabajo_in1);

    CI1ra=Temperatura_final_1ra;

    PresionOut1ra=PresionOutTanSuc1*(qPow((((Temperatura_final_1ra/Temperatura_final_TanSuc1))),(Eta_CIC*((Cp/Cv)/((Cp/Cv)-1)))));

    Temperatura_final_TanExp = HEX(Temperatura_final_1ra,CITanqueExp,(Cp*Flujo_in),(AreaTanqueExp*UTanqueExp),Tamb,(MasaTanqueExp*Cv));

    CITanqueExp=Temperatura_final_TanExp;

    PresionOutTanExp=(MasaTanqueExp*R_gas*Temperatura_final_TanExp/VolTanqueExp);

    Temperatura_final_HEX=HEX(Temperatura_final_TanExp,CIHEX,(Flujo_in*Cp),(AreaHEX*UHEX),Tamb,(MasaHEX*Cv));

    CIHEX=Temperatura_final_HEX;

    PresionOutHEX=PresionOutTanExp*(1-0.013);

    TemperaturaOutTanqueDepu2=HEX(Temperatura_final_HEX,CITanqDepu2,(Cp*Flujo_in),(UTanqueDepu2*AreaTanqueDepu2),Tamb,(MasaTanqueDepu2*Cv));

    CITanqDepu2=TemperaturaOutTanqueDepu2;

    NivelTanqueDepu2=Nivel(CIFIL2,Flujo_in,(Humedadgasin*Eta_Fil1),Eta_Fil2,(AreaFilTanqueDepu2*DensidadAgua));

    CIFIL2=NivelTanqueDepu2;

    PresionTanqueDepu2=(MasaTanqueDepu2*R_gas*TemperaturaOutTanqueDepu2/VolTanqueDepu2);

    Temperatura_final_TanSuc2=HEX(TemperaturaOutTanqueDepu2,CITanqueSuc2,(Cp*Flujo_in),(UTanqueSuc2*AreaTanqueSuc2),Tamb,(MasaTanqueSuc2*Cv));

    CITanqueSuc2 = Temperatura_final_TanSuc2;

    PresionOutTanSuc2=(MasaTanqueSuc2*R_gas*Temperatura_final_TanSuc2/VolTanqueSuc2);

    Trabajo_in2=VelMotorCompresor*ParInducidoMotorComp2/(20000);

    Temperatura_final_2da=Compresor(Temperatura_final_TanSuc2,CI2da,(Cp*Flujo_in),(Masa2*Cv*TaoComp2da),Trabajo_in2);

    CI2da=Temperatura_final_2da;

    PresionOut2da=PresionOutTanSuc2*qPow((((Temperatura_final_2da/Temperatura_final_TanSuc2))),(Eta_CIC*((Cp/Cv)/((Cp/Cv)-1))));

    Temperatura_final_TanExp2 = HEX(Temperatura_final_2da,CITanqueExp2,(Cp*Flujo_in),(AreaTanqueExp2*UTanqueExp2),Tamb,(MasaTanqueExp2*Cv));

    CITanqueExp2=Temperatura_final_TanExp2;

    PresionOutTanExp2=(MasaTanqueExp2*R_gas*Temperatura_final_TanExp2/VolTanqueExp2);

    Temperatura_final_HEX2=HEX(Temperatura_final_TanExp2,CIHEX2,(Flujo_in*Cp),(AreaHEX2*UHEX2),Tamb,(MasaHEX2*Cv));

    CIHEX2=Temperatura_final_HEX2;

    PresionOutHEX2=PresionOutTanExp2*(0.9923);

    NivelCoal1A=Nivel(CICoal1A,Flujo_in,(Humedadgasin*0.04),Eta_Coal1,(AreaFilTanqueCoal1*DensidadAgua));

    NivelCoal1B=Nivel(CICoal1B,Flujo_in,(Humedadgasin*0.004),Eta_Coal1,(AreaFilTanqueCoal1*DensidadAgua));

    CICoal1A=NivelCoal1A;

    CICoal1B=NivelCoal1B;

    TemperaturaOutTanqueCoal1=HEX(Temperatura_final_HEX2,CITemCoal1,(Cp*Flujo_in),(UTanqueCoal1*AreaTanqueCoal1),Tamb,(MasaTanqueCoal1*Cv));

    CITemCoal1 = TemperaturaOutTanqueCoal1;

    PresionTanqueCoal1=(MasaTanqueCoal1*R_gas*TemperaturaOutTanqueCoal1/VolTanqueCoal1);

    DifPresCoal= PresionOutHEX2-PresionTanqueCoal1;

    qDebug()<<(TemperaturaOutTanqueCoal1);



   Tiempo=Tiempo+0.05;

   this->ui->txt1->append(QString::number(TemperaturaOutTanqueDepu1));
   this->ui->txt2->append(QString::number(Tiempo));
   this->ui->txt3->append(QString::number(PresionTanqueDepu1));
   this->ui->txt4->append(QString::number(NivelTanqueDepu1));
   this->ui->txt5->append(QString::number(PresionOutTanSuc1));
   this->ui->txt6->append(QString::number(Temperatura_final_1ra));
   this->ui->txt7->append(QString::number(PresionOut1ra));
   this->ui->txt8->append(QString::number(Temperatura_final_TanExp));
   this->ui->txt9->append(QString::number(PresionOutTanExp));
   this->ui->txt10->append(QString::number(Temperatura_final_HEX));
   this->ui->txt11->append(QString::number(PresionOutHEX));
   this->ui->txt12->append(QString::number(TemperaturaOutTanqueDepu2));
   this->ui->txt13->append(QString::number(NivelTanqueDepu2));
   this->ui->txt14->append(QString::number(PresionTanqueDepu2));
   this->ui->txt15->append(QString::number(PresionOutTanSuc2));
   this->ui->txt16->append(QString::number(Temperatura_final_2da));
   this->ui->txt17->append(QString::number(PresionOut2da));
   this->ui->txt18->append(QString::number(Temperatura_final_TanExp2));
   this->ui->txt19->append(QString::number(PresionOutTanExp2));
   this->ui->txt20->append(QString::number(Temperatura_final_HEX2));
   this->ui->txt21->append(QString::number(PresionOutHEX2));
   this->ui->txt22->append(QString::number(NivelCoal1A));
   this->ui->txt23->append(QString::number(NivelCoal1B));
   this->ui->txt24->append(QString::number(DifPresCoal));

   emit SPress(PresionOutHEX2);
   emit STemp(Temperatura_final_HEX2);
}



sitematoroumout::~sitematoroumout()
{
    delete ui;
    delete Timer;
}
