#include "sistema_lubricante_turbina_2.h"
#include "ui_sistema_lubricante_turbina_2.h"

SISTEMA_LUBRICANTE_TURBINA_2::SISTEMA_LUBRICANTE_TURBINA_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SISTEMA_LUBRICANTE_TURBINA_2)
{
    ui->setupUi(this);
    Tiempo=0;

    Fin=0.020;
    Fout=0.021;
    Area=3.4125;
    CITanque=0.3881;

    CITin_tanque=70;
    Densidad=550;
    CP_ac=1.98;
    Temp_ac_in=075;
    q_elect1=0;

    ValMaxPre=206;
    TaoBomba=0.5;
    CIPBomba=0;

    ValMaxFlujo=0.021;
    CIFBomba=0;
    ArranqueBomba=0;

    ValMaxFlujoBarrido=0.021;
    CIFBombaBarrido=0;
    TaoBombaBarrido=0.5;

    UInter=30;
    AInter=9;
    TAmb=25;
    CP_ac2=1.98;
    Tac_in=80;
    Masa_ac=152.57;
    CITemp_ac=25;
    Densidad2=690;

    ValFlujo=0.063;
    TaoFlujo=0.5;
    CIFlujo=0;

    ValMaxTCA=79.44;
    CITCA=21.66;

    ValMaxTCB=86.11;
    CITCB=21.66;

    ValMaxTCC=100;
    CITCC=21.66;

    ValMaxTCD=89.44;
    CITCD=21.66;

    ValMaxTCE=83.88;
    CITCE=21.66;

    ValMaxTLUB=40.556;
    CITLUB=21.66;

    ValMaxTAGB=79.44;
    CITTAGB=21.66;

    SISTEMA_LUBRICANTE_TURBINA_2::Timer=new QTimer(this);
    connect(this->ui->btn1,SIGNAL(clicked()),this,SLOT(Iniciar()));
    connect(this->ui->btn2,SIGNAL(clicked()),this,SLOT(Finalizar()));
    connect(this->ui->checkBox4,SIGNAL(clicked(bool)),this,SLOT(BombaSuministro()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

double SISTEMA_LUBRICANTE_TURBINA_2::NivelTanque(double Fin,double Fout,double Area,double CITanque,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITanque;

    for(j=1;j<25;j++)
    {
        k1=((Fin*signal)-(Fout))/Area;
        k2=((Fin*signal)-((Fout)+((h/2)*k1)))/Area;
        k3=((Fin*signal)-((Fout)+((h/2)*k2)))/Area;
        k4=((Fin*signal)-((Fout)+(h*k3)))/Area;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaTanque(double CITin_tanque,double FlujoMasico_ac,double CP_ac,double Temp_ac_in,double q_elect1,double Masa_ac_in)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITin_tanque;

    for(j=1;j<25;j++)
    {

        k1=((FlujoMasico_ac*CP_ac*(Temp_ac_in-(x[j-1])))+q_elect1)/(Masa_ac_in*CP_ac);
        k2=((FlujoMasico_ac*CP_ac*(Temp_ac_in-(x[j-1]+((h/2)*k1))))+q_elect1)/(Masa_ac_in*CP_ac);
        k3=((FlujoMasico_ac*CP_ac*(Temp_ac_in-(x[j-1]+((h/2)*k2))))+q_elect1)/(Masa_ac_in*CP_ac);
        k4=((FlujoMasico_ac*CP_ac*(Temp_ac_in-(x[j-1]+((h)*k3))))+q_elect1)/(Masa_ac_in*CP_ac);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }
    if(Masa_ac_in<0.0001)
  {
      x[0]=0;
  }
  else
  {
      x[0]=x[j-1];
  }

  return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::PresionBomba(double ValMaxPre,double TaoBomba,double CIPBomba,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIPBomba;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxPre*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxPre*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxPre*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxPre*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::FlujoBomba(double ValMaxFlujo,double TaoBomba,double CIFBomba,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIFBomba;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxFlujo*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxFlujo*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxFlujo*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxFlujo*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::FlujoBombaBarrido(double ValMaxFlujoBarrido,double TaoBombaBarrido,double CIFBombaBarrido,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIFBombaBarrido;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxFlujoBarrido*signal)-(x[j-1]))/TaoBombaBarrido;
        k2=((ValMaxFlujoBarrido*signal)-(x[j-1]+((h/2)*k1)))/TaoBombaBarrido;
        k3=((ValMaxFlujoBarrido*signal)-(x[j-1]+((h/2)*k2)))/TaoBombaBarrido;
        k4=((ValMaxFlujoBarrido*signal)-(x[j-1]+((h)*k3)))/TaoBombaBarrido;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TempSalidaInter(double U_A_Tamb,double CP_ac2,double Tac_in,double CITemp_ac,double U_A,double Masa_ac_CP_ac2,double Densidad2,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;
    double FlujoMasico;

    FlujoMasico=(CIFBombaBarrido*signal)*Densidad2;


    x[0]=CITemp_ac;

    for(j=1;j<25;j++)
    {

        k1=((U_A_Tamb)+(FlujoMasico*CP_ac2*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac2))))/(Masa_ac_CP_ac2);
        k2=((U_A_Tamb)+(FlujoMasico*CP_ac2*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac2))+((h/2)*k1)))/(Masa_ac_CP_ac2);
        k3=((U_A_Tamb)+(FlujoMasico*CP_ac2*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac2))+((h/2)*k2)))/(Masa_ac_CP_ac2);
        k4=((U_A_Tamb)+(FlujoMasico*CP_ac2*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac2))+((h)*k3)))/(Masa_ac_CP_ac2);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::Flujo_aire_carters(double ValFlujo,double TaoFlujo,double CIFlujo,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIFlujo;

    for(j=1;j<25;j++)
    {

        k1=((ValFlujo*signal)-(x[j-1]))/TaoFlujo;
        k2=((ValFlujo*signal)-(x[j-1]+((h/2)*k1)))/TaoFlujo;
        k3=((ValFlujo*signal)-(x[j-1]+((h/2)*k2)))/TaoFlujo;
        k4=((ValFlujo*signal)-(x[j-1]+((h)*k3)))/TaoFlujo;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaCA(double ValMaxTCA,double TaoBomba,double CITCA,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITCA;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTCA*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTCA*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTCA*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTCA*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaCB(double ValMaxTCB,double TaoBomba,double CITCB,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITCB;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTCB*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTCB*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTCB*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTCB*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaCC(double ValMaxTCC,double TaoBomba,double CITCC,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITCC;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTCC*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTCC*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTCC*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTCC*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaCD(double ValMaxTCD,double TaoBomba,double CITCD,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITCD;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTCD*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTCD*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTCD*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTCD*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaCE(double ValMaxTCE,double TaoBomba,double CITCE,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITCE;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTCE*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTCE*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTCE*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTCE*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaLUB(double ValMaxTLUB,double TaoBomba,double CITLUB,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITLUB;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTLUB*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTLUB*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTLUB*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTLUB*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

double SISTEMA_LUBRICANTE_TURBINA_2::TemperaturaTAGB(double ValMaxTAGB,double TaoBomba,double CITTAGB,int signal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CITTAGB;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxTAGB*signal)-(x[j-1]))/TaoBomba;
        k2=((ValMaxTAGB*signal)-(x[j-1]+((h/2)*k1)))/TaoBomba;
        k3=((ValMaxTAGB*signal)-(x[j-1]+((h/2)*k2)))/TaoBomba;
        k4=((ValMaxTAGB*signal)-(x[j-1]+((h)*k3)))/TaoBomba;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/
    return x[0];
}

int SISTEMA_LUBRICANTE_TURBINA_2::Iniciar()
{
    this->Timer->start(50);
    return 0;
}

int SISTEMA_LUBRICANTE_TURBINA_2::Finalizar()
{
    this->Timer->stop();
    return 0;
}

int SISTEMA_LUBRICANTE_TURBINA_2::BombaSuministro()
{
    if(this->ui->checkBox4->checkState()==2)
    {
        ArranqueBomba=1;
    }
    else if(this->ui->checkBox4->checkState()==0)
    {
        ArranqueBomba=0;
    }
    return 0;
}


void SISTEMA_LUBRICANTE_TURBINA_2::Modelo()
{
    Fout=CIFBomba;

    PresionDif=(((((CIFBomba)*0.8)/0.22)*0.02*0.0019))/0.000000000030;

    PresionDifBarrido=(((((CIFBombaBarrido)*0.8)/0.22)*0.02*0.002))/0.000000000030;

    PresionDifSeparador=(((((CIFlujo)*0.8)/1.5)*0.039*0.002))/0.00000000030;


    Nivel_Tanque_Suministro=NivelTanque(Fin,Fout,Area,CITanque,ArranqueBomba);
    Temperatura_Tanque=TemperaturaTanque(CITin_tanque,((CIFBomba)*Densidad),CP_ac,Temp_ac_in,q_elect1,((Area)*(CITanque)*Densidad));
    Presion_Bomba=PresionBomba(ValMaxPre,TaoBomba,CIPBomba,ArranqueBomba);
    Flujo_Bomba=FlujoBomba(ValMaxFlujo,TaoBomba,CIFBomba,ArranqueBomba);
    Flujo_BombaBarrido=FlujoBombaBarrido(ValMaxFlujoBarrido,TaoBombaBarrido,CIFBombaBarrido,ArranqueBomba);
    Tac_out=TempSalidaInter(((UInter)*(AInter)*TAmb),CP_ac2,Tac_in,CITemp_ac,((UInter)*AInter),((Masa_ac)*CP_ac2),Densidad2,ArranqueBomba);
    Flujo_aire_compresor=Flujo_aire_carters(ValFlujo,TaoFlujo,CIFlujo,ArranqueBomba);
    TCA=TemperaturaCA(ValMaxTCA,TaoBomba,CITCA,ArranqueBomba);
    TCB=TemperaturaCB(ValMaxTCB,TaoBomba,CITCB,ArranqueBomba);
    TCC=TemperaturaCC(ValMaxTCC,TaoBomba,CITCC,ArranqueBomba);
    TCD=TemperaturaCD(ValMaxTCD,TaoBomba,CITCD,ArranqueBomba);
    TCE=TemperaturaCE(ValMaxTCE,TaoBomba,CITCE,ArranqueBomba);
    TLUB=TemperaturaLUB(ValMaxTLUB,TaoBomba,CITLUB,ArranqueBomba);
    TAGB=TemperaturaTAGB(ValMaxTAGB,TaoBomba,CITTAGB,ArranqueBomba);


    CITanque=Nivel_Tanque_Suministro;
    CITin_tanque=Temperatura_Tanque;
    CIPBomba=Presion_Bomba;
    CIFBomba=Flujo_Bomba;
    CIFBombaBarrido=Flujo_BombaBarrido;
    CITemp_ac=Tac_out;
    CIFlujo=Flujo_aire_compresor;
    CITCA=TCA;
    CITCB=TCB;
    CITCC=TCC;
    CITCD=TCD;
    CITCE=TCE;
    CITLUB=TLUB;
    CITTAGB=TAGB;
    Tiempo=Tiempo+0.05;

    this->ui->txt1->append(QString::number(CITanque));
    this->ui->txt2->append(QString::number(CITin_tanque));
    this->ui->txt3->append(QString::number(CIPBomba));
    this->ui->txt8->append(QString::number(CIFBomba));
    this->ui->txt9->append(QString::number(PresionDif));
    this->ui->txt11->append(QString::number(PresionDifBarrido));
    this->ui->txt24->append(QString::number(CITemp_ac));
    this->ui->txt26->append(QString::number(PresionDifSeparador));
    this->ui->txt13->append(QString::number(CITCA));
    this->ui->txt14->append(QString::number(CITCB));
    this->ui->txt15->append(QString::number(CITCC));
    this->ui->txt16->append(QString::number(CITCD));
    this->ui->txt17->append(QString::number(CITCE));
    this->ui->txt18->append(QString::number(CITLUB));
    this->ui->txt19->append(QString::number(CITTAGB));
    this->ui->txt5->append(QString::number(Tiempo));


    emit STemp1(CITTAGB);
    emit STemp2(CITCA);
    emit STemp3(CITCB);
    emit STemp4(CITCC);
    emit STemp5(CITCD);
    emit STemp6(CITCE);
    emit STemp7(CITLUB);

}

SISTEMA_LUBRICANTE_TURBINA_2::~SISTEMA_LUBRICANTE_TURBINA_2()
{
    delete ui;
    delete Timer;
}
