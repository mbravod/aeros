#include "sistema_electrico.h"
#include "ui_sistema_electrico.h"

Sistema_Electrico::Sistema_Electrico(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sistema_Electrico)
{
    ui->setupUi(this);
    Electrico=fopen("Sistema Electrico.txt","a");
    fprintf(Electrico,"Tiempo\tPotencia GU\tVFA GU\tVFB GU\tVFC GU\tCFA GU\tCFB GU\tCFC GU\tPotencia GAux\tVoltaje GAux\tCorriente GAux\tVFA T21A\tVFB T21A\tVFC T21A\tCFA T21A\tCFB T21A\tCFC T21A\t92BT221A\t92BAT21A\t92BT221C\t92BCT21A\t90MC\tVFA T20AUXG1\tVFB T20AUXG1\tVFC T20AUXG1\tCFA T20AUXG1\tCFB T20AUXG1\tCFC T20AUXG1\tVFA T00AUXG1\tVFB T00AUXG1\tVFC T00AUXG1\tCFA T00AUXG1\tCFB T00AUXG1\tCFC T00AUXG1\tTablero CCM\tTablero CHILLER\tTablero CA\tTablero BCI\n");

    TabCCM=57384.366;
    TabChiller=1793475.434;
    TabCompAire=74570.1;
    TabBCI=149140.2;

    TaoGeneradorUnidad=0.08;
    PotenciaGenerador=32000000; //Watts.
    VoltajeGenerador=13800;     //Volts.
    VFAGeneradorU=0;            //Volts.
    VFBGeneradorU=0;            //Volts.
    VFCGeneradorU=0;            //Volts.
    CFAGeneradorU=0;            //Volts.
    CFBGeneradorU=0;            //Volts.
    GeneradorUnidadP=0;         //Watts.
    GeneradorAuxiliar=0;        //Hz.
    VoltajeGeneradorAuxiliar=4100;  //Volts.
    TaoGenAux=0.2;
    CIVGenAux=0;
    CIPGenAux=0;
    CIGeneradorUnidadP=0;
    CIGeneradorUnidadVFA=0;
    CIGeneradorUnidadVFB=0;
    CIGeneradorUnidadVFC=0;
    TaoIsocrono=0.00001;
    SetPointFrecuencia=60;
    CIContrIsoc=0;
    PotMecanica=0;
    PotElectrica=0;
    CIPotElec=0;
    CGeneradorAux=0;
    TaoCuchillas=2;
    C92BT221A=0;
    CIC92BT221A=0;
    C92BAT21A=0;
    CIC92BAT21A=0;
    C92BT221C=0;
    CIC92BT221C=0;
    C92BCT21A=0;
    CIC92BCT21A=0;
    C90MC=0;
    CIC90MC=0;
    VFAT21A=0;
    VFBT21A=0;
    VFCT21A=0;
    CFAT21A=0;
    CFBT21A=0;
    CFCT21A=0;
    VFAT20AuxG1=0;
    VFBT20AuxG1=0;
    VFCT20AuxG1=0;
    CFAT20AuxG1=0;
    CFBT20AuxG1=0;
    CFCT20AuxG1=0;
    VFAT00AuxG1=0;
    VFBT00AuxG1=0;
    VFCT00AuxG1=0;
    CFAT00AuxG1=0;
    CFBT00AuxG1=0;
    CFCT00AuxG1=0;
    VFAT221A=0;
    VFBT221A=0;
    VFCT221A=0;
    CFAT221A=0;
    CFBT221A=0;
    CFCT221A=0;
    VFAT221C=0;
    VFBT221C=0;
    VFCT221C=0;
    CFAT221C=0;
    CFBT221C=0;
    CFCT221C=0;
    Tiempo=0;
    AmortiguamientoAux=1;
    RozamientoAux=10;
    FrecGeneradorAux=0;
    CIFrecAux=0;
    CFCGeneradorU=0;

    OnOffGenerador=0;
    OnOffGeneradorAuxiliar=0;
    OnOffC92BT221A=0;
    OnOffC92BAT21A=0;
    OnOffC92BT221C=0;
    OnOffC92BCT21A=0;
    OnOffC90MC=0;
    I521T21A=0;
    I522T21A=0;
    I52AuxG1=0;
    I51G1=0;
    I501AuxG1=0;
    I50ANG1=0;
    I502AuxG1=0;
    Conexion1T21A=0;
    Conexion2T21A=0;
    Conexion1T20AuxG1=0;
    Conexion2T20AuxG1=0;
    Conexion1T00AuxG1=0;
    Conexion2T00AuxG1=0;

    FGenerador=1;
    FGeneradorAux=1;
    FC92BT221A=1;
    FC92BAT21A=1;
    FC92BT221C=1;
    FC92BCT21A=1;
    FC90MC=1;
    FI521T21A=1;
    FI522T21A=1;
    FI52AuxG1=1;
    FI51G1=1;
    FI501AuxG1=1;
    FI50ANG1=1;
    FI502AuxG1=1;
    FTabCCM=1;
    FTabChiller=1;
    FTabCompAire=1;
    FTabBCI=1;

    Sistema_Electrico::Timer=new QTimer(this);
    connect(this->ui->btn1,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->btn2,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(this->ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(On_Off_Generador()));
    connect(this->ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(On_Off_GeneradorAux()));
    connect(this->ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(On_Off_Chucilla92BT221A()));
    connect(this->ui->checkBox_4,SIGNAL(clicked(bool)),this,SLOT(On_Off_Cuchilla92BAT21A()));
    connect(this->ui->checkBox_5,SIGNAL(clicked(bool)),this,SLOT(On_Off_Cuchilla92BT221C()));
    connect(this->ui->checkBox_6,SIGNAL(clicked(bool)),this,SLOT(On_Off_Cuchilla92BCT21A()));
    connect(this->ui->checkBox_7,SIGNAL(clicked(bool)),this,SLOT(On_Off_Cuchilla90MC()));
    connect(this->ui->checkBox_8,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor521T21A()));
    connect(this->ui->checkBox_9,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor522T21A()));
    connect(this->ui->checkBox_10,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor52AuxG1()));
    connect(this->ui->checkBox_11,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor501AuxG1()));
    connect(this->ui->checkBox_12,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor502AuxG1()));
    connect(this->ui->checkBox_13,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor50ANG1()));
    connect(this->ui->checkBox_14,SIGNAL(clicked(bool)),this,SLOT(On_Off_Interruptor51G1()));
    connect(this->Timer,SIGNAL(timeout()),this,SLOT(Modelo()));

}

double Sistema_Electrico::GeneradorPot(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];

}

double Sistema_Electrico::GeneradorVol(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];
}

double Sistema_Electrico::ContrlIsoc(double TiempoInteg, double SP, double Frec, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    for(j=1;j<=25;j++)
    {
        k1=(SP-Frec)/TiempoInteg;
        k2=((SP-Frec)+((h/2)*k1))/TiempoInteg;
        k3=((SP-Frec)+((h/2)*k2))/TiempoInteg;
        k4=((SP-Frec)+(h*k3))/TiempoInteg;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];

}

double Sistema_Electrico::FrecuenciaGenerador(double PotM, double PotE, double B, double J, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((PotM-PotE)/B)-(x[j-1]*J));
        k2=(((PotM-PotE)/B)-((x[j-1]+((h/2)*k1))*J));
        k3=(((PotM-PotE)/B)-((x[j-1]+((h/2)*k2))*J));
        k4=(((PotM-PotE)/B)-((x[j-1]+((h)*k3))*J));

        x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double Sistema_Electrico::PosicionCuchilla(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-x[j-1])/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]>=0.99)
    {
        x[0]=1;
    }

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];

}

int Sistema_Electrico::Encendido()
{
    this->Timer->start(50);
    return 0;
}

int Sistema_Electrico::Apagado()
{
    this->Timer->stop();
    return 0;
}

int Sistema_Electrico::On_Off_Generador()
{
    if(this->ui->checkBox->checkState()==2)
    {
        OnOffGenerador=1;
    }
    else if(this->ui->checkBox->checkState()==0)
    {
        OnOffGenerador=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_GeneradorAux()
{
    if(this->ui->checkBox_2->checkState()==2)
    {
        OnOffGeneradorAuxiliar=1;
    }
    else if(this->ui->checkBox_2->checkState()==0)
    {
        OnOffGeneradorAuxiliar=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Chucilla92BT221A()
{
    if(this->ui->checkBox_3->checkState()==2)
    {
        OnOffC92BT221A=1;
    }
    else if(this->ui->checkBox_3->checkState()==0)
    {
        OnOffC92BT221A=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Cuchilla92BAT21A()
{
    if(this->ui->checkBox_4->checkState()==2)
    {
        OnOffC92BAT21A=1;
    }
    else if(this->ui->checkBox_4->checkState()==0)
    {
        OnOffC92BAT21A=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Cuchilla92BT221C()
{
    if(this->ui->checkBox_5->checkState()==2)
    {
        OnOffC92BT221C=1;
    }
    else if(this->ui->checkBox_5->checkState()==0)
    {
        OnOffC92BT221C=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Cuchilla92BCT21A()
{
    if(this->ui->checkBox_6->checkState()==2)
    {
        OnOffC92BCT21A=1;
    }
    else if(this->ui->checkBox_6->checkState()==0)
    {
        OnOffC92BCT21A=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Cuchilla90MC()
{
    if(this->ui->checkBox_7->checkState()==2)
    {
        OnOffC90MC=1;
    }
    else if(this->ui->checkBox_7->checkState()==0)
    {
        OnOffC90MC=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor521T21A()
{
    if(this->ui->checkBox_8->checkState()==2 && I522T21A==0 && C92BT221A==1 && C92BAT21A==1)
    {
        I521T21A=1;
    }
    else if(this->ui->checkBox_8->checkState()==0)
    {
        I521T21A=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor522T21A()
{
    if(this->ui->checkBox_9->checkState()==2 && I521T21A==0 && C92BT221C==1 && C92BCT21A==1)
    {
        I522T21A=1;
    }
    else if(this->ui->checkBox_9->checkState()==0)
    {
        I522T21A=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor52AuxG1()
{
    if(this->ui->checkBox_10->checkState()==2)
    {
        I52AuxG1=1;
    }
    else if(this->ui->checkBox_10->checkState()==0)
    {
        I52AuxG1=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor501AuxG1()
{
    if(this->ui->checkBox_11->checkState()==2)
    {
        I501AuxG1=1;
    }
    else if(this->ui->checkBox_11->checkState()==0)
    {
        I501AuxG1=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor502AuxG1()
{
    if(this->ui->checkBox_12->checkState()==2)
    {
        I502AuxG1=1;
    }
    else if(this->ui->checkBox_12->checkState()==0)
    {
        I502AuxG1=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor50ANG1()
{
    if(this->ui->checkBox_13->checkState()==2)
    {
        I50ANG1=1;
    }
    else if(this->ui->checkBox_13->checkState()==0)
    {
        I50ANG1=0;
    }
    return 0;
}

int Sistema_Electrico::On_Off_Interruptor51G1()
{
    if(this->ui->checkBox_14->checkState()==2)
    {
        I51G1=1;
    }
    else if(this->ui->checkBox_14->checkState()==0)
    {
        I51G1=0;
    }
    return 0;
}

void Sistema_Electrico::Modelo()
{
    CIPotElec=(TabCCM+TabChiller+TabCompAire+TabBCI);

    GeneradorUnidadP=GeneradorPot(OnOffGenerador,PotenciaGenerador,TaoGeneradorUnidad,CIGeneradorUnidadP,FGenerador);
    VFAGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFA,FGenerador);
    VFBGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFB,FGenerador);
    VFCGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFC,FGenerador);

    if(VFAGeneradorU==0 || VFBGeneradorU==0 || VFCGeneradorU==0)
    {
        CFAGeneradorU=0;
        CFBGeneradorU=0;
        CFCGeneradorU=0;
    }
    else
    {
        CFAGeneradorU=qSqrt((CIGeneradorUnidadP*I51G1)/(3*VFAGeneradorU));
        CFBGeneradorU=qSqrt((CIGeneradorUnidadP*I51G1)/(3*VFBGeneradorU));
        CFCGeneradorU=qSqrt((CIGeneradorUnidadP*I51G1)/(3*VFCGeneradorU));
    }


    PotMecanica=1800*CIContrIsoc*OnOffGeneradorAuxiliar;
    PotElectrica=GeneradorPot(OnOffGeneradorAuxiliar,CIPotElec,TaoGenAux,CIPGenAux,FGeneradorAux);
    GeneradorAuxiliar=GeneradorVol(OnOffGeneradorAuxiliar,VoltajeGeneradorAuxiliar,TaoGenAux,CIVGenAux,FGeneradorAux);


    if(PotElectrica==0)
    {
        CGeneradorAux=0;
    }
    else
    {
        if(CIVGenAux<1)
        {
            CGeneradorAux=0;
        }
        else
        {
            CGeneradorAux=qSqrt((PotElectrica*I50ANG1)/CIVGenAux);
        }

    }


    Conexion1T21A=I51G1*I521T21A;
    Conexion2T21A=I51G1*I522T21A;
    Conexion1T20AuxG1=I51G1*I52AuxG1*I501AuxG1*I502AuxG1;
    Conexion2T20AuxG1=I50ANG1*I501AuxG1*I52AuxG1;
    Conexion1T00AuxG1=I51G1*I52AuxG1*I501AuxG1*I502AuxG1;
    Conexion2T00AuxG1=I50ANG1*I502AuxG1;


    VFAT21A=1.666666667*CIGeneradorUnidadVFA*I51G1;
    VFBT21A=1.666666667*CIGeneradorUnidadVFB*I51G1;
    VFCT21A=1.666666667*CIGeneradorUnidadVFC*I51G1;

    if(VFAT21A==0 || VFBT21A==0 || VFCT21A==0)
    {
       CFAT21A=0;
       CFBT21A=0;
       CFCT21A=0;
    }
    else
    {
        if(Conexion1T21A==1 || Conexion2T21A==1)
        {
            CFAT21A=qSqrt((CIGeneradorUnidadP)/(3*VFAT21A));
            CFBT21A=qSqrt((CIGeneradorUnidadP)/(3*VFBT21A));
            CFCT21A=qSqrt((CIGeneradorUnidadP)/(3*VFCT21A));
        }
        else
        {
            CFAT21A=0;
            CFBT21A=0;
            CFCT21A=0;
        }
    }



    if(OnOffGenerador==1 && OnOffGeneradorAuxiliar==0)
    {
        VFAT20AuxG1=(0.178260869)*VFAT21A*I52AuxG1;

        if(VFAT20AuxG1==0)
        {
            CFAT20AuxG1=0;
        }
        else
        {
            CFAT20AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFAT20AuxG1));
        }

        VFBT20AuxG1=(0.178260869)*VFBT21A*I52AuxG1;

        if(VFBT20AuxG1==0)
        {
            CFBT20AuxG1=0;
        }
        else
        {
            CFBT20AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFBT20AuxG1));
        }

        VFCT20AuxG1=(0.178260869)*VFCT21A*I52AuxG1;

        if(VFCT20AuxG1==0)
        {
            CFCT20AuxG1=0;
        }
        else
        {
            CFCT20AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFCT20AuxG1));
        }

    }
    else if(OnOffGeneradorAuxiliar==1 && OnOffGenerador==0)
    {
        VFAT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFAT20AuxG1==0)
        {
            CFAT20AuxG1=0;
        }
        else
        {
            CFAT20AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFAT20AuxG1));
        }

        VFBT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFBT20AuxG1==0)
        {
            CFBT20AuxG1=0;
        }
        else
        {
            CFBT20AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFBT20AuxG1));
        }

        VFCT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFCT20AuxG1==0)
        {
            CFCT20AuxG1=0;
        }
        else
        {
            CFCT20AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFCT20AuxG1));
        }

    }
    else
    {
        VFAT20AuxG1=0;
        CFAT20AuxG1=0;
        VFBT20AuxG1=0;
        CFBT20AuxG1=0;
        VFCT20AuxG1=0;
        CFCT20AuxG1=0;
    }

    if(OnOffGenerador==1 && OnOffGeneradorAuxiliar==0)
    {
        VFAT00AuxG1=(0.11707317)*VFAT20AuxG1;

        if(VFAT00AuxG1==0)
        {
            CFAT00AuxG1=0;
        }
        else
        {
            CFAT00AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFAT00AuxG1));
        }

        VFBT00AuxG1=(0.11707317)*VFBT20AuxG1;

        if(VFBT00AuxG1==0)
        {
            CFBT00AuxG1=0;
        }
        else
        {
            CFBT00AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFBT00AuxG1));
        }

        VFCT00AuxG1=(0.11707317)*VFCT20AuxG1;

        if(VFCT00AuxG1==0)
        {
            CFCT00AuxG1=0;
        }
        else
        {
            CFCT00AuxG1=qSqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFCT00AuxG1));
        }

    }
    else if(OnOffGenerador==0 && OnOffGeneradorAuxiliar==1)
    {
        VFAT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFAT00AuxG1==0)
        {
            CFAT00AuxG1=0;
        }
        else
        {
            CFAT00AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFAT00AuxG1));
        }

        VFBT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFBT00AuxG1==0)
        {
            CFBT00AuxG1=0;
        }
        else
        {
            CFBT00AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFBT00AuxG1));
        }

        VFCT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFCT00AuxG1==0)
        {
            CFCT00AuxG1=0;
        }
        else
        {
            CFCT00AuxG1=qSqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFCT00AuxG1));
        }

    }
    else
    {
        VFAT00AuxG1=0;
        CFAT00AuxG1=0;
        VFBT00AuxG1=0;
        CFBT00AuxG1=0;
        VFCT00AuxG1=0;
        CFCT00AuxG1=0;
    }


    C92BT221A=PosicionCuchilla(OnOffC92BT221A,1,TaoCuchillas,CIC92BT221A,FC92BT221A);

    if(CIC92BT221A>0.99)
    {
        C92BT221A=1;
    }

    C92BAT21A=PosicionCuchilla(OnOffC92BAT21A,1,TaoCuchillas,CIC92BAT21A,FC92BAT21A);

    if(CIC92BAT21A>0.99)
    {
        C92BAT21A=1;
    }

    C92BT221C=PosicionCuchilla(OnOffC92BT221C,1,TaoCuchillas,CIC92BT221C,FC92BT221C);

    if(CIC92BT221C>0.99)
    {
        C92BT221C=1;
    }

    C92BCT21A=PosicionCuchilla(OnOffC92BCT21A,1,TaoCuchillas,CIC92BCT21A,FC92BCT21A);

    if(CIC92BCT21A>0.99)
    {
        C92BCT21A=1;
    }

    C90MC=PosicionCuchilla(OnOffC90MC,1,TaoCuchillas,CIC90MC,FC90MC);

    if(CIC90MC>0.99)
    {
        C90MC=1;
    }


    CIGeneradorUnidadP=GeneradorUnidadP;
    CIGeneradorUnidadVFA=VFAGeneradorU;
    CIGeneradorUnidadVFB=VFBGeneradorU;
    CIGeneradorUnidadVFC=VFCGeneradorU;
    CIVGenAux=GeneradorAuxiliar;
    CIPGenAux=PotElectrica;
    CIC92BT221A=C92BT221A;
    CIC92BAT21A=C92BAT21A;
    CIC92BT221C=C92BT221C;
    CIC92BCT21A=C92BCT21A;
    CIC90MC=C90MC;
    Tiempo=Tiempo+0.05;

    this->ui->txt23->setText(QString::number(CIGeneradorUnidadP/1000000));
    this->ui->txt1->setText(QString::number(CIGeneradorUnidadVFA));
    this->ui->txt18->setText(QString::number(CIGeneradorUnidadVFB));
    this->ui->txt19->setText(QString::number(CIGeneradorUnidadVFC));
    this->ui->txt20->setText(QString::number(CFAGeneradorU));
    this->ui->txt21->setText(QString::number(CFBGeneradorU));
    this->ui->txt22->setText(QString::number(CFCGeneradorU));
    this->ui->txt25->setText(QString::number(PotElectrica));
    this->ui->txt27->setText(QString::number(CIVGenAux));
    this->ui->txt28->setText(QString::number(CGeneradorAux));
    this->ui->txt3->setText(QString::number(CIC92BT221A));
    this->ui->txt4->setText(QString::number(CIC92BAT21A));
    this->ui->txt5->setText(QString::number(CIC92BT221C));
    this->ui->txt6->setText(QString::number(CIC92BCT21A));
    this->ui->txt7->setText(QString::number(CIC90MC));
    this->ui->txt8->setText(QString::number(VFAT21A));
    this->ui->txt9->setText(QString::number(VFBT21A));
    this->ui->txt10->setText(QString::number(VFCT21A));
    this->ui->txt11->setText(QString::number(CFAT21A));
    this->ui->txt12->setText(QString::number(CFBT21A));
    this->ui->txt13->setText(QString::number(CFCT21A));
    this->ui->txt14->setText(QString::number(VFAT20AuxG1));
    this->ui->txt15->setText(QString::number(VFBT20AuxG1));
    this->ui->txt16->setText(QString::number(VFCT20AuxG1));
    this->ui->txt31->setText(QString::number(VFAT00AuxG1));
    this->ui->txt32->setText(QString::number(VFBT00AuxG1));
    this->ui->txt33->setText(QString::number(VFCT00AuxG1));
    this->ui->txt17->setText(QString::number(CFAT20AuxG1));
    this->ui->txt29->setText(QString::number(CFBT20AuxG1));
    this->ui->txt30->setText(QString::number(CFCT20AuxG1));
    this->ui->txt34->setText(QString::number(CFAT00AuxG1));
    this->ui->txt35->setText(QString::number(CFBT00AuxG1));
    this->ui->txt36->setText(QString::number(CFCT00AuxG1));
    this->ui->txt37->setText(QString::number(TabCCM));
    this->ui->txt40->setText(QString::number(TabChiller));
    this->ui->txt38->setText(QString::number(TabCompAire));
    this->ui->txt39->setText(QString::number(TabBCI));
    this->ui->txt2->setText(QString::number(Tiempo));

    fprintf(Electrico,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",Tiempo,(CIGeneradorUnidadP/1000000),CIGeneradorUnidadVFA,CIGeneradorUnidadVFB,CIGeneradorUnidadVFC,CFAGeneradorU,CFBGeneradorU,CFCGeneradorU,PotElectrica,CIVGenAux,CGeneradorAux,VFAT21A,VFBT21A,VFCT21A,CFAT21A,CFBT21A,CFCT21A,CIC92BT221A,CIC92BAT21A,CIC92BT221C,CIC92BCT21A,CIC90MC,VFAT20AuxG1,VFBT20AuxG1,VFCT20AuxG1,CFAT20AuxG1,CFBT20AuxG1,CFCT20AuxG1,VFAT00AuxG1,VFBT00AuxG1,VFCT00AuxG1,CFAT00AuxG1,CFBT00AuxG1,CFCT00AuxG1,TabCCM,TabChiller,TabCompAire,TabBCI);

}


Sistema_Electrico::~Sistema_Electrico()
{
    delete ui;
    delete Timer;
    delete Electrico;
    fclose(Electrico);
}
