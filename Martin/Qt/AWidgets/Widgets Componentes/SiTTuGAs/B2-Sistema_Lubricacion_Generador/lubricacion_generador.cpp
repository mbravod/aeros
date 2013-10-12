#include "lubricacion_generador.h"
#include "ui_lubricacion_generador.h"

Lubricacion_Generador::Lubricacion_Generador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lubricacion_Generador)
{
    ui->setupUi(this);
    LubGen=fopen("Lubricacion Generador.txt","a");
    fprintf(LubGen,"Tiempo\t\tCITanqueSum\tCITin_tanque\tCIBomba_1\tCIBomba_2\tCITemp_ac\tPresionDif\tCIBombaLevante_HP\tCIBombaLevante_LP\tCITanqueDescarga\tCITmetal_empuje\tCITac_out\tCITmetal_liso\n");

    Tiempo=0;
    Fin_TD=0;
    Area_TD=0.1590;
    CITanqueDescarga=0.0;
    Nivel_Tanque_Descarga=0;

    Fin=0.02099;
    Fout=0.021;
    Area=3.4125;
    CITanqueSum=0.3881;

    CITin_tanque=82;
    Densidad_2=690;
    CP_ac_2=1.98;
    Temp_ac_in=80;
    q_elect1=0;
    q_elect2=0;

    ValMaxPre_1=206;
    TaoBomba_1=0.5;
    CIBomba_1=0;

    ValMaxFlujo_1=0.021;
    Tao=0.5;
    CIFBomba_1=0;
    ArranqueBomba1=0;

    ValMaxPre_2=206;
    TaoBomba_2=0.5;
    CIBomba_2=0;

    ValMaxFlujo_2=0.01;
    Tao_2=0.5;
    CIFBomba_2=0;
    ArranqueBomba2=0;

    UInter=30;
    AInter=9;
    TAmb=25;
    CP_ac=1.98;
    Tac_in=80;
    Masa_ac=152.57;
    CITemp_ac=25;
    Densidad=690;

    ValMaxPre_HP=19650.063;
    TaoBomba_HP=0.5;
    CIBombaLevante_HP=68;

    ValMaxPre_LP=5515.807;
    TaoBomba_LP=0.5;
    CIBombaLevante_LP=68;

    h_conv=0.1;
    As_metal=0.0022;
    Viscosidad=0.006111;
    AreaContacto=0.0022;
    Diametro_eje=0.7;
    Pi=3.1416;
    VelocidadAngular=377;
    EspesorLub=0.002;
    CITmetal_empuje=95;
    CP_metal=0.3934;
    Masa_metal=20;

    h_conv2=0.1;
    As_metal2=0.0022;
    Viscosidad=0.006111;
    AreaContacto2=0.0022;
    Diametro_eje=0.7;
    Pi=3.1416;
    VelocidadAngular=377;
    EspesorLub=0.002;
    CITmetal_liso=95;
    CP_metal=25;
    Masa_metal2=30;

    W_rotor=0;
    UChumacera=693;
    Temp_ac_in_coj=62;
    CITac_out=81;
    Masa_ac_coj=0.77;
    FlujoMasico_ac_coj=0;
    Fout_TD=0;


    Timer=new QTimer(this);
    connect(this->ui->btn1,SIGNAL(clicked()),this,SLOT(Iniciar()));
    connect(this->ui->btn2,SIGNAL(clicked()),this,SLOT(Finalizar()));
    connect(this->ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(BombaSuministro1()));
    connect(this->ui->checkBox_4,SIGNAL(clicked(bool)),this,SLOT(FallaBomba1()));
    connect(this->ui->checkBox_6,SIGNAL(clicked(bool)),this,SLOT(FallaBomba2()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

double Lubricacion_Generador::NivelTanqueSuministro(double Fin,double Fout,double Area,double CITanqueSum,int signal1)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITanqueSum;

    for(j=1;j<25;j++)
    {
        k1=((Fin*signal1)-(Fout))/Area;
        k2=((Fin*signal1)-((Fout)+((h/2)*k1)))/Area;
        k3=((Fin*signal1)-((Fout)+((h/2)*k2)))/Area;
        k4=((Fin*signal1)-((Fout)+(h*k3)))/Area;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    double t = x[0]*10;
    int n = (int)t;
    emit SNivelT(n);
    return x[0];
}

double Lubricacion_Generador::TemperaturaTanqueSuministro(double CITin_tanque,double FlujoMasico_ac,double CP_ac2,double Temp_ac_in,double q_elect1,double q_elect2,double Masa_ac_in)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITin_tanque;

    for(j=1;j<25;j++)
    {

        k1=((FlujoMasico_ac*CP_ac2*(Temp_ac_in-(x[j-1])))+q_elect1+q_elect2)/(Masa_ac_in*CP_ac2);
        k2=((FlujoMasico_ac*CP_ac2*(Temp_ac_in-(x[j-1]+((h/2)*k1))))+q_elect1+q_elect2)/(Masa_ac_in*CP_ac2);
        k3=((FlujoMasico_ac*CP_ac2*(Temp_ac_in-(x[j-1]+((h/2)*k2))))+q_elect1+q_elect2)/(Masa_ac_in*CP_ac2);
        k4=((FlujoMasico_ac*CP_ac2*(Temp_ac_in-(x[j-1]+((h)*k3))))+q_elect1+q_elect2)/(Masa_ac_in*CP_ac2);

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

  emit STempTS(x[0]);

  return x[0];
}

double Lubricacion_Generador::PresionBomba_1(double ValMaxPre_1,double TaoBomba_1,double CIBomba_1,int signal1)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIBomba_1;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxPre_1*signal1)-(x[j-1]))/TaoBomba_1;
        k2=((ValMaxPre_1*signal1)-(x[j-1]+((h/2)*k1)))/TaoBomba_1;
        k3=((ValMaxPre_1*signal1)-(x[j-1]+((h/2)*k2)))/TaoBomba_1;
        k4=((ValMaxPre_1*signal1)-(x[j-1]+((h)*k3)))/TaoBomba_1;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    emit SPressB1(x[0]);
    return x[0];
}

double Lubricacion_Generador::FlujoBomba_1(double ValMaxFlujo_1,double Tao,double CIFBomba_1,int signal1)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIFBomba_1;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxFlujo_1*signal1)-(x[j-1]))/Tao;
        k2=((ValMaxFlujo_1*signal1)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((ValMaxFlujo_1*signal1)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((ValMaxFlujo_1*signal1)-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    /*if(x[0]<0.00001)
    {
        x[0]=0;
    }*/

    emit SFlujoB1(x[0]);
    return x[0];
}

double Lubricacion_Generador::PresionBomba_2(double ValMaxPre_2,double TaoBomba_2,double CIBomba_2,int signal2)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIBomba_2;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxPre_2*signal2)-(x[j-1]))/TaoBomba_2;
        k2=((ValMaxPre_2*signal2)-(x[j-1]+((h/2)*k1)))/TaoBomba_2;
        k3=((ValMaxPre_2*signal2)-(x[j-1]+((h/2)*k2)))/TaoBomba_2;
        k4=((ValMaxPre_2*signal2)-(x[j-1]+((h)*k3)))/TaoBomba_2;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    emit SPressB2(x[0]);
    return x[0];
}

double Lubricacion_Generador::FlujoBomba_2(double ValMaxFlujo_2,double Tao_2,double CIFBomba_2,int signal2)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIFBomba_2;

    for(j=1;j<25;j++)
    {

        k1=((ValMaxFlujo_2*signal2)-(x[j-1]))/Tao_2;
        k2=((ValMaxFlujo_2*signal2)-(x[j-1]+((h/2)*k1)))/Tao_2;
        k3=((ValMaxFlujo_2*signal2)-(x[j-1]+((h/2)*k2)))/Tao_2;
        k4=((ValMaxFlujo_2*signal2)-(x[j-1]+((h)*k3)))/Tao_2;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    emit SFlujoB2(x[0]);
    return x[0];
}

double Lubricacion_Generador::TempSalidaInter(double U_A_Tamb,double CP_ac,double Tac_in,double CITemp_ac,double U_A,double Masa_ac_CP_ac,double Densidad)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;
    double FlujoMasico;

    FlujoMasico=(CIFBomba_1+CIFBomba_2)*Densidad;


    x[0]=CITemp_ac;

    for(j=1;j<25;j++)
    {

        k1=(((U_A_Tamb)+(FlujoMasico*CP_ac*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac))))/(Masa_ac_CP_ac));
        k2=(((U_A_Tamb)+(FlujoMasico*CP_ac*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac))+((h/2)*k1)))/(Masa_ac_CP_ac));
        k3=(((U_A_Tamb)+(FlujoMasico*CP_ac*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac))+((h/2)*k2)))/(Masa_ac_CP_ac));
        k4=(((U_A_Tamb)+(FlujoMasico*CP_ac*Tac_in)-(x[j-1]*(U_A+(FlujoMasico*CP_ac))+((h)*k3)))/(Masa_ac_CP_ac));

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    emit STempSI(x[0]);
    return x[0];
}


double Lubricacion_Generador::PresionBombaLevante_HP(double ValMaxPre_HP,double TaoBomba_HP,double CIBombaLevante_HP,int signal1)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIBombaLevante_HP;

    for(j=1;j<25;j++)
    {

        k1=(((ValMaxPre_HP)-(x[j-1]))/TaoBomba_HP)*signal1;
        k2=(((ValMaxPre_HP)-(x[j-1]+((h/2)*k1)))/TaoBomba_HP)*signal1;
        k3=(((ValMaxPre_HP)-(x[j-1]+((h/2)*k2)))/TaoBomba_HP)*signal1;
        k4=(((ValMaxPre_HP)-(x[j-1]+((h)*k3)))/TaoBomba_HP)*signal1;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    emit PressBL_HP(x[0]);
    return x[0];
}

double Lubricacion_Generador::PresionBombaLevante_LP(double ValMaxPre_LP,double TaoBomba_LP,double CIBombaLevante_LP,int signal1)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;


    x[0]=CIBombaLevante_LP;

    for(j=1;j<25;j++)
    {

        k1=(((ValMaxPre_LP)-(x[j-1]))/TaoBomba_LP)*signal1;
        k2=(((ValMaxPre_LP)-(x[j-1]+((h/2)*k1)))/TaoBomba_LP)*signal1;
        k3=(((ValMaxPre_LP)-(x[j-1]+((h/2)*k2)))/TaoBomba_LP)*signal1;
        k4=(((ValMaxPre_LP)-(x[j-1]+((h)*k3)))/TaoBomba_LP)*signal1;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }
    emit PressBL_LP(x[0]);
    return x[0];
}


double Lubricacion_Generador::NivelTanqueDescarga(double Fin_TD,double Fout_TD,double Area_TD,double CITanqueDescarga)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITanqueDescarga;

    for(j=1;j<25;j++)
    {
        k1=((Fin_TD)-(Fout_TD))/Area_TD;
        k2=((Fin_TD)-((Fout_TD)+((h/2)*k1)))/Area_TD;
        k3=((Fin_TD)-((Fout_TD)+((h/2)*k2)))/Area_TD;
        k4=((Fin_TD)-((Fout_TD)+(h*k3)))/Area_TD;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];

//    double t = ;
    double t = x[0]*10;
    int n = (int)t;
    emit SNivelTD(n);

    return x[0];
}

double Lubricacion_Generador::TempCojineteEmpuje(double h_conv,double As_metal,double CITac_out,double CITmetal_empuje,double Viscosidad_AreaContacto,double Diametro_eje,double Pi,double VelocidadAngular,double EspesorLub,double CP_metal_Masa_metal)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITmetal_empuje;

    for(j=1;j<25;j++)
    {
        k1=((h_conv*As_metal*(CITac_out-x[j-1]))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k2=((h_conv*As_metal*(CITac_out-(x[j-1]+((h/2)*k1))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k3=((h_conv*As_metal*(CITac_out-(x[j-1]+((h/2)*k2))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k4=((h_conv*As_metal*(CITac_out-(x[j-1]+(h*k3))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];

    emit STempCE(x[0]);

    return x[0];
}

double Lubricacion_Generador::TemperaturaAceite_out_coj(double W_rotor,double UChumacera,double As_metal,double Temp_ac_in_coj,double CITmetalempuje,double FlujoMasico_ac_coj,double CP_ac_2,double Masa_ac_coj,double CITac_out)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITac_out;

    for(j=1;j<25;j++)
    {
        k1=(W_rotor-(UChumacera*As_metal*(Temp_ac_in_coj-CITmetalempuje))+(FlujoMasico_ac_coj*CP_ac_2*(Temp_ac_in_coj-x[j-1])))/(Masa_ac_coj*CP_ac_2);
        k2=(W_rotor-(UChumacera*As_metal*(Temp_ac_in_coj-CITmetalempuje))+(FlujoMasico_ac_coj*CP_ac_2*(Temp_ac_in_coj-(x[j-1]+((h/2)*k1)))))/(Masa_ac_coj*CP_ac_2);
        k3=(W_rotor-(UChumacera*As_metal*(Temp_ac_in_coj-CITmetalempuje))+(FlujoMasico_ac_coj*CP_ac_2*(Temp_ac_in_coj-(x[j-1]+((h/2)*k2)))))/(Masa_ac_coj*CP_ac_2);
        k4=(W_rotor-(UChumacera*As_metal*(Temp_ac_in_coj-CITmetalempuje))+(FlujoMasico_ac_coj*CP_ac_2*(Temp_ac_in_coj-(x[j-1]+(h*k3)))))/(Masa_ac_coj*CP_ac_2);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];

    emit STempAOC(x[0]);

    return x[0];
}

double Lubricacion_Generador::TempCojineteLiso(double h2,double As_metal2,double CITac_out,double CITmetal_liso,double Viscosidad_AreaContacto2,double Diametro_eje,double Pi,double VelocidadAngular,double EspesorLub,double CP_metal_Masa_metal2)
{
    int j;
    double x[26];
    double h=0.05/100;
    double k1,k2,k3,k4;

    x[0]=CITmetal_liso;

    for(j=1;j<25;j++)
    {
        k1=((h_conv2*As_metal2*(CITac_out-x[j-1]))+((Viscosidad_AreaContacto2*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal2);
        k2=((h_conv2*As_metal2*(CITac_out-(x[j-1]+((h/2)*k1))))+((Viscosidad_AreaContacto2*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal2);
        k3=((h_conv2*As_metal2*(CITac_out-(x[j-1]+((h/2)*k2))))+((Viscosidad_AreaContacto2*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal2);
        k4=((h_conv2*As_metal2*(CITac_out-(x[j-1]+(h*k3))))+((Viscosidad_AreaContacto2*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal2);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];

    emit STempCL(x[0]);

    return x[0];
}

int Lubricacion_Generador::Iniciar()
{
    this->Timer->start(50);
    return 0;
}

int Lubricacion_Generador::Finalizar()
{
    this->Timer->stop();
    return 0;
}

int Lubricacion_Generador::BombaSuministro1()
{
    if(this->ui->checkBox_3->checkState()==2)
    {
        ArranqueBomba1=1;
        emit SBombaON(true);
    }
    else if(this->ui->checkBox_3->checkState()==0)
    {
        ArranqueBomba1=0;
        ArranqueBomba2=0;
        emit SBombaON(false);
    }
    return 0;
}

int Lubricacion_Generador::FallaBomba1()
{
    if(this->ui->checkBox_4->checkState()==2)
    {
        ArranqueBomba1=0;
        ArranqueBomba2=1;
    }
    else if(this->ui->checkBox_4->checkState()==0)
    {
        ArranqueBomba1=1;
        ArranqueBomba2=0;
    }
    return 0;
}

int Lubricacion_Generador::FallaBomba2()
{
    if(this->ui->checkBox_6->checkState()==2)
    {
        ArranqueBomba2=0;
        Fout_TD=0.00028*qSqrt(19.62*CITanqueDescarga);
    }
    else if(this->ui->checkBox_6->checkState()==0)
    {
         ArranqueBomba2=1;
         Fout_TD=0;
    }
    return 0;
}

void Lubricacion_Generador::Modelo()
{
    Fout=CIFBomba_1+CIFBomba_2;                                                             //Condicion de flujo de salida del tanque de suministro

    PresionDif=(((((CIFBomba_1+CIFBomba_2)*0.8)/0.22)*0.039*0.002))/0.000000000030;         //Condicion de presion diferencial en el filtro
    if(PresionDif<0.00001)
    {
        PresionDif=0;
    }

    if(CITanqueDescarga<0)
    {
        CITanqueDescarga=0;
    }
    else if(CITanqueDescarga>=0.9)
    {
        CITanqueDescarga=0.9;
    }
    else
    {
        Nivel_Tanque_Descarga=NivelTanqueDescarga(Fin_TD,Fout_TD,Area_TD,CITanqueDescarga);
    }

    Fin_TD=CIFBomba_1+CIFBomba_2;



    Nivel_Tanque_Suministro=NivelTanqueSuministro(Fin,Fout,Area,CITanqueSum,ArranqueBomba1);
    Temperatura_Tanque=TemperaturaTanqueSuministro(CITin_tanque,((CIFBomba_1)*Densidad_2),CP_ac2,Temp_ac_in,q_elect1,q_elect2,((Area)*(CITanqueSum)*Densidad_2));
    Presion_Bomba_1=PresionBomba_1(ValMaxPre_1,TaoBomba_1,CIBomba_1,ArranqueBomba1);
    Flujo_Bomba_1=FlujoBomba_1(ValMaxFlujo_1,Tao,CIFBomba_1,ArranqueBomba1);
    Presion_Bomba_2=PresionBomba_2(ValMaxPre_2,TaoBomba_2,CIBomba_2,ArranqueBomba2);
    Flujo_Bomba_2=FlujoBomba_2(ValMaxFlujo_2,Tao_2,CIFBomba_2,ArranqueBomba2);
    Tac_out=TempSalidaInter(((UInter)*(AInter)*TAmb),CP_ac,Tac_in,CITemp_ac,((UInter)*AInter),((Masa_ac)*CP_ac),Densidad);
    Presion_HP=PresionBombaLevante_HP(ValMaxPre_HP,TaoBomba_HP,CIBombaLevante_HP,ArranqueBomba1);
    Presion_LP=PresionBombaLevante_LP(ValMaxPre_LP,TaoBomba_LP,CIBombaLevante_LP,ArranqueBomba1);
    Temperatura_CojEmp=TempCojineteEmpuje(h_conv,As_metal,CITac_out,CITmetal_empuje,((Viscosidad)*AreaContacto),Diametro_eje,Pi,VelocidadAngular,EspesorLub,((CP_metal)*Masa_metal));
    Temp_ac_out_coj=TemperaturaAceite_out_coj(W_rotor,UChumacera,As_metal,Temp_ac_in_coj,CITmetal_empuje,((CIFBomba_1+CIFBomba_2+Fout_TD)*Densidad_2),CP_ac_2,Masa_ac_coj,CITac_out);
    Temperatura_CojLiso=TempCojineteLiso(h_conv2,As_metal2,CITac_out,CITmetal_liso,((Viscosidad)*AreaContacto2),Diametro_eje,Pi,VelocidadAngular,EspesorLub,((CP_metal)*Masa_metal2));

    CITanqueSum=Nivel_Tanque_Suministro;
    CITin_tanque=Temperatura_Tanque;
    CIBomba_1=Presion_Bomba_1;
    CIFBomba_1=Flujo_Bomba_1;
    CIBomba_2=Presion_Bomba_2;
    CIFBomba_2=Flujo_Bomba_2;
    CITemp_ac=Tac_out;
    CIBombaLevante_HP=Presion_HP;
    CIBombaLevante_LP=Presion_LP;
    CITanqueDescarga=Nivel_Tanque_Descarga;
    CITmetal_empuje=Temperatura_CojEmp;
    CITac_out=Temp_ac_out_coj;
    CITmetal_liso= Temperatura_CojLiso;
    Tiempo=Tiempo+0.05;

    this->ui->txt1->append(QString::number(CITanqueSum));
    this->ui->txt2->append(QString::number(CITin_tanque));
    this->ui->txt7->append(QString::number(CIBomba_1));
    this->ui->txt8->append(QString::number(CIBomba_2));
    this->ui->txt10->append(QString::number(CITemp_ac));
    this->ui->txt15->append(QString::number(PresionDif));
    this->ui->txt18->append(QString::number(CIBombaLevante_HP));
    this->ui->txt19->append(QString::number(CIBombaLevante_LP));
    this->ui->txt20->append(QString::number(CITanqueDescarga));
    this->ui->txt22->append(QString::number(CITmetal_empuje));
    this->ui->txt26->append(QString::number(CITac_out));
    this->ui->txt24->append(QString::number(CITmetal_liso));
    this->ui->txt28->append(QString::number(Tiempo));

    qDebug()<<Fin_TD<<Fout_TD<<Area_TD<<CITanqueDescarga;

    fprintf(LubGen,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t\t%lf\t\t%lf\t\t%lf\t\t%lf\t\t%lf\n",Tiempo,CITanqueSum,CITin_tanque,CIBomba_1,CIBomba_2,CITemp_ac,PresionDif,CIBombaLevante_HP,CIBombaLevante_LP,CITanqueDescarga,CITmetal_empuje,CITac_out,CITmetal_liso);

}

Lubricacion_Generador::~Lubricacion_Generador()
{
    delete Timer;
    delete LubGen;
    fclose(LubGen);
    delete ui;
}
