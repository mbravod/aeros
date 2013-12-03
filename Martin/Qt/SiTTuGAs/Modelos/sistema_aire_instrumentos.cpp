#include "sistema_aire_instrumentos.h"
#include "ui_sistema_aire_instrumentos.h"

Sistema_Aire_Instrumentos::Sistema_Aire_Instrumentos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sistema_Aire_Instrumentos)
{
    ui->setupUi(this);
    Instrumentos=fopen("Aire Instrumentos.txt","a");
    fprintf(Instrumentos,"Tiempo\tPotencia Compresor\tTemperatura Aire Salida\tPresión Aire Salida\tPresión Tanque\n");

    OnOffCompresor=0;
    PotenciaCompresor=0;
    PotMaxCompresor=3.73;   //kW
    TempAmbiente=298.15;    //K
    TempAireCompresor=TempAmbiente;
    TempAireTanque=TempAmbiente;
    PresionTanque=0;
    NivelSecador=0;
    FlujoInAire=0;
    FlujoOutAire=0;
    FlujoCompresor=0;
    FlujoOutSecador=0;
    R_Aire=0.287;   //kJ/kgK
    Masa_Tanque=1.16840;    //kg
    VolumenTanque=0.96;    //m3
    HumedadEspecifica=0.3;   //%
    EficienciaSecador=0.98;  //%
    DensidadAgua=1000;  //kg/m3
    DensidadAire=1.22;  //kg/m3
    TaoCompresor=0.5;
    CpAire=1.005;       //kJ/kgK
    CvAire=0.718;       //kJ/kgK
    PresionAmbiente=101.3;  //kPa
    MasaCompresor=0;        //kg
    VolCompresor=0.00315;   //m^3
    CIPotComp=0;            //W
    PresionOutComp=0;       //Pa
    PresionOutCompC=0;
    CITempAireComp=298.15;  //K
    CIMasaTanque=1.16840;   //kg
    CIPresionTanque=0;      //Pa
    CIDensidadAire=1.22;    //kg/m3
    Tiempo=0;

    FallaCompresor=1;

    Sistema_Aire_Instrumentos::Timer=new QTimer(this);

    connect(this->ui->pushButton,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->pushButton_2,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(this->ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(On_Off_Compresor()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

double Sistema_Aire_Instrumentos::PotCompresor(int Segnal, double ValMax, double CI, double Tao, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((Segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((Segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((Segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((Segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];
}

double Sistema_Aire_Instrumentos::TempOutAire(double WComp, double FCp, double Tin, double FCvTao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((WComp+(FCp*(Tin-x[j-1])))*Falla)/FCvTao;
        k2=((WComp+(FCp*(Tin-(x[j-1]+((h/2)*k1)))))*Falla)/FCvTao;
        k3=((WComp+(FCp*(Tin-(x[j-1]+((h/2)*k2)))))*Falla)/FCvTao;
        k4=((WComp+(FCp*(Tin-(x[j-1]+(h*k3)))))*Falla)/FCvTao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double Sistema_Aire_Instrumentos::MasaTanque(double qinAire, double qoutAire, double DensidadAire, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(qinAire-qoutAire)*DensidadAire;
        k2=((qinAire-qoutAire)+((h/2)*k1))*DensidadAire;
        k3=((qinAire-qoutAire)+((h/2)*k2))*DensidadAire;
        k4=((qinAire-qoutAire)+(h*k3))*DensidadAire;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

void Sistema_Aire_Instrumentos::Modelo()
{
    PotenciaCompresor=PotCompresor(OnOffCompresor,PotMaxCompresor,CIPotComp,TaoCompresor,FallaCompresor);
    if(PotenciaCompresor<=0)
    {
        FlujoCompresor=0;
        MasaCompresor=0;
        TempAireCompresor=TempAmbiente;
        PresionOutComp=0;
        FlujoOutSecador=0;
    }
    else
    {
        FlujoCompresor=(0.0645/PotMaxCompresor)*CIPotComp;
        MasaCompresor=(PresionAmbiente*VolCompresor)/(R_Aire*TempAmbiente);
        TempAireCompresor=TempOutAire(CIPotComp,(FlujoCompresor*CpAire),TempAmbiente,(MasaCompresor*CvAire/*TaoCompresor*/),CITempAireComp,FallaCompresor);
        TempAireTanque=CITempAireComp;
        PresionOutComp=PresionAmbiente*(qPow(((TempAireTanque-273.15)/(TempAmbiente-273.15)),(3.5*0.48)));
        FlujoOutSecador=FlujoCompresor-(FlujoCompresor*HumedadEspecifica*EficienciaSecador)/(DensidadAgua*0.78);
    }


    DensidadAire=(CIPresionTanque)/(R_Aire*CITempAireComp);

    if(Masa_Tanque<=0)
    {
        Masa_Tanque=0;
    }
    else if(Masa_Tanque>=8.30098)
    {
        Masa_Tanque=8.30098;
    }
    else
    {
        Masa_Tanque=MasaTanque(FlujoOutSecador,FlujoOutAire,CIDensidadAire,CIMasaTanque);
    }
    PresionTanque=(CIMasaTanque*R_Aire*TempAireTanque)/(VolumenTanque);

    if((PresionTanque-PresionAmbiente)>781.4)
    {
        OnOffCompresor=0;
    }


    CIPotComp=PotenciaCompresor;
    CITempAireComp=TempAireCompresor;
    CIDensidadAire=DensidadAire;
    CIMasaTanque=Masa_Tanque;
    CIPresionTanque=PresionTanque;
    Tiempo=Tiempo+0.05;

    this->ui->textEdit->setText(QString::number(Tiempo));
    this->ui->textEdit_2->setText(QString::number(PotenciaCompresor));
    this->ui->textEdit_3->setText(QString::number(TempAireCompresor-273.15));
    this->ui->textEdit_4->setText(QString::number(PresionOutComp));
    this->ui->textEdit_5->setText(QString::number(PresionTanque-PresionAmbiente));
    fprintf(Instrumentos,"%lf\t%lf\t%lf\t%lf\t%lf\n",Tiempo,PotenciaCompresor,(TempAireCompresor-273.15),PresionOutComp,(PresionTanque-PresionAmbiente));
}

int Sistema_Aire_Instrumentos::Encendido()
{
    this->Timer->start(50);
    return 0;
}

int Sistema_Aire_Instrumentos::Apagado()
{
    this->Timer->stop();
    return 0;
}

int Sistema_Aire_Instrumentos::On_Off_Compresor()
{
    if(this->ui->checkBox->checkState()==2)
    {
        OnOffCompresor=1;
    }
    else if(this->ui->checkBox->checkState()==0)
    {
        OnOffCompresor=0;
    }
    return 0;
}

Sistema_Aire_Instrumentos::~Sistema_Aire_Instrumentos()
{
    delete Timer;
    delete Instrumentos;
    fclose(Instrumentos);
    delete ui;
}
