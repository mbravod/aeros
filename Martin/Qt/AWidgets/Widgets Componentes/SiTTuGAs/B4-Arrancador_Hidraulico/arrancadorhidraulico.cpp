#include "arrancadorhidraulico.h"
#include "ui_arrancadorhidraulico.h"

ArrancadorHidraulico::ArrancadorHidraulico(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArrancadorHidraulico)
{
    ui->setupUi(this);

    FlujoInTanque=0;
    FlujoOutTanque=0;
    LargoTanque=0.78;
    AnchoTanque=0.4;
    CINivelTanque=0.4853;
    TempAceiteTank=298.15;
    WElec=0;
    UTanque=5;
    TempAmbiente=298.15;
    CpAceite=1.98;
    MasaAceite=0;
    CITempAceiteTanque=298.15;
    UInter=0;
    MasaAceiteInter=0;
    CITempAceiteInter=298.15;
    PotMaxVentilador=2237.103;
    TaoVentilador=0.05;
    CIPotVentilador=0;
    VelocidadArranHidra=0;
    VelocidadMaxAH=1047.197551;
    TaoAH=2;
    CIVelArranHidra=0;
    TempMetalAH=298.15;
    hMetal=250;
    Mmetal=150;
    CpMetal=1.98;
    ViscosidadAceite=0.00000000835094552073;
    eLub=0.000002;
    AContac=0.002827433;
    Diametro=0.3;
    CITempMetalAH=298.15;
    TempAceiteAH=298.15;
    MAceiteAH=2.8213934;
    CITempAceiteAH=298.15;
    Integral=0;
    CIInt=0;
    Proporcional=0;
    IntPro=0;
    errorPI=0;
    Sat=0;
    Variador=1;

    Nivel_Tanque=0.4853;
    PotenciaBomba=0;
    PotenciaVentilador=0;
    PresionBombS=0;
    FlujoBombS=0;
    PresionBombP=0;
    FlujoBombP=0;
    TempAceiteIntercambiador=0;
    TempAceiteInTank=0;
    FlujoOutInter=0;
    SetPoint=308.15;
    ki=0.5;
    kp=10;
    LInf=0;
    LSup=200;
    Tiempo=0;
    CIPotBomba=0;
    DensidadAceite=860;
    PotMaxBomba=149140.2;
    TaoBomba=1;

    FallaVent=1;
    FallaBomb=1;
    OnOffVentilador=0;
    OnOffBomba=0;
    OnOffCalentador=0;

    Arrancador=fopen("ArrancadorHidraulico.txt","a");
    fprintf(Arrancador,"Tiempo\tNivel Tanque Acumulador\tTemperatura Aceite Tanque\tPotencia Motor Ventilador\tVelocidad Ventilador\tTemperatura Aceite Intercambiador\tPotencia Motor Ensamble\tFlujo Bomba Succión\tPresión Bomba Succión\tFlujo Bomba Principal\tPresión Bomba Principal\tVelocidad Angular AH\tTorque AH\tTemperatura Metal AH\tTemperatura Aceite AH\n");

    ArrancadorHidraulico::Timer=new QTimer(this);
    connect(this->ui->Btn1,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->Btn2,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(this->ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(OnOff_Bomb_H()));
    connect(this->ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(OnOff_Ventilador()));
    connect(this->ui->checkBox_3,SIGNAL(clicked()),this,SLOT(Variar50()));
    connect(this->ui->checkBox_4,SIGNAL(clicked(bool)),this,SLOT(Variar100()));
    connect(this->ui->checkBox_5,SIGNAL(clicked(bool)),this,SLOT(OnOff_Calentador()));
    connect(this->Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

void ArrancadorHidraulico::Encendido()
{
    this->Timer->start(50);
}

void ArrancadorHidraulico::Apagado()
{
    this->Timer->stop();
}

void ArrancadorHidraulico::OnOff_Bomb_H()
{
    if(this->ui->checkBox->checkState()==2)
    {
        OnOffBomba=1;
        emit SBombaOn(true);
    }
    else if(this->ui->checkBox->checkState()==0)
    {
        OnOffBomba=0;
        emit SBombaOn(false);
    }
}

void ArrancadorHidraulico::OnOff_Ventilador()
{
    if(this->ui->checkBox_2->checkState()==2)
    {
        OnOffVentilador=1;
        emit SIntercam(true);
    }
    else if(this->ui->checkBox_2->checkState()==0)
    {
        OnOffVentilador=0;
        emit SIntercam(false);
    }
}

void ArrancadorHidraulico::OnOff_Calentador()
{
    if(this->ui->checkBox_5->checkState()==2)
    {
        OnOffCalentador=1;
    }
    else if(this->ui->checkBox_5->checkState()==0)
    {
        OnOffCalentador=0;
    }
}

void ArrancadorHidraulico::Variar50()
{
    if(this->ui->checkBox_3->checkState()==2 && this->ui->checkBox_4->checkState()==0)
    {
        Variador=0.5;
    }
}

void ArrancadorHidraulico::Variar100()
{
    if(this->ui->checkBox_4->checkState()==2 && this->ui->checkBox_3->checkState()==0)
    {
        Variador=1.0;
    }
}

double ArrancadorHidraulico::NivelTanque(double FlujoIn, double FlujoOut, double Largo, double Ancho, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(FlujoIn-FlujoOut)/(Largo*Ancho);
        k2=((FlujoIn-FlujoOut)+((h/2)*k1))/(Largo*Ancho);
        k3=((FlujoIn-FlujoOut)+((h/2)*k2))/(Largo*Ancho);
        k4=((FlujoIn-FlujoOut)+(h*k3))/(Largo*Ancho);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    double t = x[0]*10;
    int r = (int)t;
    emit SNivelTanque(r);
    return x[0];
}

double ArrancadorHidraulico::TempAceiteTanque(double WElec, double UTank, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(WElec+((UTank*1.2508)*(TempAmbiente-x[j-1]))+(FICp*TempInAceite)-(FOCp*x[j-1]))/(MCv);
        k2=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h/2)*k1))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k1))))/(MCv);
        k3=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h/2)*k2))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k2))))/(MCv);
        k4=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h)*k3))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h)*k3))))/(MCv);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    emit STemperatura(x[0]);
    return x[0];
}

double ArrancadorHidraulico::TempAceiteInter(double UInter, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((UInter*0.0797964534)*(TempAmbiente-x[j-1]))+(FICp*TempInAceite)-(FOCp*x[j-1]))/(MCv);
        k2=(((UInter*0.0797964534)*(TempAmbiente-(x[j-1]+((h/2)*k1))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k1))))/(MCv);
        k3=(((UInter*0.0797964534)*(TempAmbiente-(x[j-1]+((h/2)*k2))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k2))))/(MCv);
        k4=(((UInter*0.0797964534)*(TempAmbiente-(x[j-1]+((h)*k3))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h)*k2))))/(MCv);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double ArrancadorHidraulico::PotVentilador(int Segnal, double PotMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((PotMax*Segnal*Falla)-x[j-1])/(Tao);
        k2=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k1)))/(Tao);
        k3=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k2)))/(Tao);
        k4=((PotMax*Segnal*Falla)-(x[j-1]+((h)*k3)))/(Tao);

        x[j]=x[j-1]+((h/6)*(k1+(k2)+(k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double ArrancadorHidraulico::PotBomba(int Segnal, double PotMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((PotMax*Segnal*Falla)-x[j-1])/(Tao);
        k2=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k1)))/(Tao);
        k3=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k2)))/(Tao);
        k4=((PotMax*Segnal*Falla)-(x[j-1]+((h)*k3)))/(Tao);

        x[j]=x[j-1]+((h/6)*(k1+(k2)+(k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double ArrancadorHidraulico::VelArranHidra(double VelMax, double Tao, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(VelMax-x[j-1])/Tao;
        k2=(VelMax-(x[j-1]+((h/2)*k1)))/Tao;
        k3=(VelMax-(x[j-1]+((h/2)*k2)))/Tao;
        k4=(VelMax-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double ArrancadorHidraulico::TempMetalArranHidra(double hMetal, double TempInAceite, double Velocidad, double MmetalCp, double VisAeLub, double Diam, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((hMetal*0.03)*(TempInAceite-x[j-1]))+(VisAeLub*qPow((Diam*Velocidad*3.141516),2)))/(MmetalCp);
        k2=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h/2)*k1))))+(VisAeLub*qPow((Diam*Velocidad*3.141516),2)))/(MmetalCp);
        k3=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h/2)*k2))))+(VisAeLub*qPow((Diam*Velocidad*3.141516),2)))/(MmetalCp);
        k4=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h)*k3))))+(VisAeLub*qPow((Diam*Velocidad*3.141516),2)))/(MmetalCp);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double ArrancadorHidraulico::TempAceiteArranHidra(double hMetal, double TempInMetal, double FCp, double TempInAceite, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<25;j++)
    {
        k1=(((hMetal*0.03)*(TempInMetal-x[j-1]))+((FCp)*(TempInAceite-x[j-1])))/(MCv);
        k2=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h/2)*k1))))+((FCp)*(TempInAceite-(x[j-1]+((h/2)*k1)))))/(MCv);
        k3=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h/2)*k2))))+((FCp)*(TempInAceite-(x[j-1]+((h/2)*k2)))))/(MCv);
        k4=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h)*k3))))+((FCp)*(TempInAceite-(x[j-1]+((h)*k3)))))/(MCv);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double ArrancadorHidraulico::I(double ki, double error, double CI)
{
    int j;
    double h=0.01/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(ki*error);
        k2=(ki*error)+((h/2*k1));
        k3=(ki*error)+((h/2)*k2);
        k4=(ki*error)+(h*k3);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double ArrancadorHidraulico::P(double kp, double error)
{
    double Prop;

    Prop=kp*error;

    return Prop;
}

double ArrancadorHidraulico::PI(double P, double I)
{
    double pi;

    pi=P+I;

    return pi;
}

double ArrancadorHidraulico::ErrorPI(double SPT, double TempAceite)
{
    double errorpi;

    errorpi=SPT-TempAceite;

    return errorpi;
}

double ArrancadorHidraulico::Saturacion(double Segnal, double LInf, double LSup)
{
    double Sat;

    if(Segnal<LInf)
    {
        Sat=LInf;
    }
    else if(Segnal>LSup)
    {
        Sat=LSup;
    }
    else
    {
        Sat=Segnal;
    }

    return Sat;
}

void ArrancadorHidraulico::Modelo()
{

    errorPI=(SetPoint-CITempAceiteTanque)*OnOffCalentador;
    Integral=I(ki,errorPI,CIInt);
    Proporcional=P(kp,errorPI);
    CPI=PI(Proporcional,Integral);
    Sat=Saturacion(CPI,LInf,LSup);
    WElec=Sat;
    qDebug()<<errorPI<<CIInt<<SetPoint<<CITempAceiteTanque;
    //if(OnOffBomba==1)
    //{
        FlujoInTanque=(0.045424/0.0454249)*FlujoBombS;
    //}
    //else
    //{
      //  FlujoInTanque=0;
    //}

    if(CITempAceiteAH<322.15)
    {
        FlujoOutInter=0;
        TempAceiteInTank=CITempAceiteAH;
    }
    else
    {
        FlujoOutInter=FlujoBombP-0.000001892;
        TempAceiteInTank=CITempAceiteInter;
    }
/////////////////////////////Tanque/////////////////////////////////////////////////////
    PotenciaBomba=PotBomba(OnOffBomba,PotMaxBomba,TaoBomba,CIPotBomba,FallaBomb);
    //qDebug()<<PotMaxBomba<<TaoBomba;
    PresionBombS=(2413165.052609/PotMaxBomba)*CIPotBomba;
    FlujoBombS=(0.0454249/PotMaxBomba)*CIPotBomba;
    PresionBombP=(((33439572.871867+PresionBombS)/PotMaxBomba)*CIPotBomba)*Variador;
    FlujoBombP=((0.0454249/PotMaxBomba)*CIPotBomba)*Variador;
    FlujoOutTanque=FlujoBombS;
    Nivel_Tanque=NivelTanque(FlujoInTanque,FlujoOutTanque,LargoTanque,AnchoTanque,CINivelTanque);
    MasaAceite=(CINivelTanque*LargoTanque*AnchoTanque)*DensidadAceite;
    TempAceiteTank=TempAceiteTanque(WElec,UTanque,TempAmbiente,(FlujoInTanque*CpAceite),TempAceiteInTank,(FlujoOutTanque*CpAceite),(MasaAceite*CpAceite),CITempAceiteTanque);
    //qDebug()<<OnOffBomba<<FlujoOutTanque<<CIPotBomba<<MasaAceite<<CpAceite;
    //qDebug()<<WElec<<UTanque<<TempAmbiente<<FlujoInTanque*CpAceite<<TempAceiteInTank<<FlujoOutTanque*CpAceite<<MasaAceite*CpAceite;
///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////Intercambiador////////////////////////////////////////////////
    PotenciaVentilador=PotVentilador(OnOffVentilador,PotMaxVentilador,TaoVentilador,CIPotVentilador,FallaVent);
    VelocidadVentilador=(1800/PotMaxVentilador)*CIPotVentilador;
    UInter=(25/1800)*VelocidadVentilador;
    if(CITempAceiteAH<322.15)
    {
        TempAceiteIntercambiador=0;
        CITempAceiteInter=0;
    }
    else
    {
        TempAceiteIntercambiador=TempAceiteInter(UInter,TempAmbiente,(FlujoInTanque*CpAceite),CITempAceiteAH,(FlujoOutInter*CpAceite),(MasaAceiteInter*CpAceite),CITempAceiteInter);
    }
///////////////////////////////////////////////////////////////////////////////////////////
    VelocidadArranHidra=(VelArranHidra(VelocidadMaxAH,TaoAH,CIVelArranHidra)/(33439572.871867+PresionBombS))*PresionBombP;
    TorqueAH=(4000*VelocidadArranHidra);

    if(OnOffBomba==0)
    {
        CITempMetalAH=298.15;
        CITempAceiteAH=0;
        TempAceiteAH=0;
    }
    else
    {
        TempMetalAH=TempMetalArranHidra(hMetal,CITempAceiteTanque,VelocidadArranHidra,(Mmetal*CpMetal),((ViscosidadAceite*AContac)/(2*eLub)),Diametro,CITempMetalAH);
        TempAceiteAH=TempAceiteArranHidra(hMetal,CITempMetalAH,(FlujoBombP*CpAceite),TempAceiteTank,(MAceiteAH*CpAceite),CITempAceiteAH);
    }

    if(OnOffCalentador==0)
    {
        CIInt=0;
    }
    else
    {
        CIInt=Integral;
    }

    CIPotBomba=PotenciaBomba;
    CINivelTanque=Nivel_Tanque;
    CITempAceiteTanque=TempAceiteTank;
    CIPotVentilador=PotenciaVentilador;
    CITempAceiteInter=TempAceiteIntercambiador;
    CIVelArranHidra=VelocidadArranHidra;
    CITempMetalAH=TempMetalAH;
    CITempAceiteAH=TempAceiteAH;
    Tiempo=Tiempo+0.05;

    this->ui->txt1->setText(QString::number(Tiempo));
    this->ui->txt2->setText(QString::number(CINivelTanque));
    this->ui->txt3->setText(QString::number(CITempAceiteTanque-273.15));
    this->ui->txt4->setText(QString::number(CIPotVentilador));
    this->ui->txt5->setText(QString::number(VelocidadVentilador));
    this->ui->txt6->setText(QString::number(CITempAceiteInter));
    this->ui->txt7->setText(QString::number(CIPotBomba));
    this->ui->txt8->setText(QString::number(FlujoBombS));
    this->ui->txt9->setText(QString::number(PresionBombS));
    this->ui->txt10->setText(QString::number(FlujoBombP));
    this->ui->txt11->setText(QString::number(PresionBombP));
    this->ui->txt12->setText(QString::number(CIVelArranHidra));
    this->ui->txt13->setText(QString::number(TorqueAH));
    this->ui->txt14->setText(QString::number(CITempMetalAH-273.15));
    this->ui->txt15->setText(QString::number(CITempAceiteAH));

    fprintf(Arrancador,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",Tiempo,CINivelTanque,(CITempAceiteTanque-273.15),CIPotVentilador,VelocidadVentilador,CITempAceiteInter,CIPotBomba,FlujoBombS,PresionBombS,FlujoBombP,PresionBombP,CIVelArranHidra,TorqueAH,(CITempMetalAH-273.15),CITempAceiteAH);
}

ArrancadorHidraulico::~ArrancadorHidraulico()
{
    delete Timer;
    delete Arrancador;
    fclose(Arrancador);
    delete ui;
}
