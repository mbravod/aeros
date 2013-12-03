#include "lavado_compresor.h"
#include "ui_lavado_compresor.h"

Lavado_Compresor::Lavado_Compresor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lavado_Compresor)
{
    ui->setupUi(this);
    Lavado=fopen("Lavado Compresor.txt","a");
    fprintf(Lavado,"Tiempo\tNivel Tanque\tFlujo Bomba\tPresión Bomba\n");

    LG6520 = 0;
    LS6543 = 0;
    TAH1620 = 0;
    FMOT6535 = 0;
    SOV6540 = 0;
    SOV6516 = 0;
    PI6538 = 0;
    SOV6504 = 0;
    ValBol1 = 0;
    ValBol2 = 0;
    ValBol3 = 0;
    ValBol4 = 0;
    OpSOV6540 = 0;
    ClSOV6540 = 1;
    OpSOV6516 = 0;
    ClSOV6516 = 1;
    OpSOV6504 = 0;
    ClSOV6504 = 1;
    Local_Remoto_WWash = 0;
    StartHS6505 = 0;
    StopHS6505 = 0;
    StartRemoto = 0;
    StopRemoto = 0;
    FallaMOT6535 = 1;
    FallaSOV6516 = 1;
    FallaSOV6540 = 1;
    FallaSOV6504 = 1;
    CIFMOT6535 = 0;
    NivelTank = 0;
    CINivelTank = 0;
    OnMOT6535 = 0;
    OffMOT6535 = 0;
    Tiempo = 0;
    qoutTank = 0;
    PMOT6535 = 0;
    CIPMOT6535 = 0;
    ResetFuga = 0;
    FugaTank = 0;

    Lavado_Compresor::Timer=new QTimer(this);
    connect(this->ui->Btn1,SIGNAL(clicked()),this,SLOT(Encendido()));
    connect(this->ui->Btn2,SIGNAL(clicked()),this,SLOT(Apagado()));
    connect(this->ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(Check_ParoL()));
    connect(this->ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(Check_ArranqueR()));
    connect(this->ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(Check_ParoR()));
    connect(this->ui->checkBox_4,SIGNAL(clicked(bool)),this,SLOT(Check_VInQuimico()));
    connect(this->ui->checkBox_5,SIGNAL(clicked(bool)),this,SLOT(Check_VInAgua()));
    connect(this->ui->checkBox_6,SIGNAL(clicked(bool)),this,SLOT(Check_VDrenado()));
    connect(this->ui->checkBox_7,SIGNAL(clicked(bool)),this,SLOT(Check_VSuccion()));
    connect(this->ui->checkBox_8,SIGNAL(clicked(bool)),this,SLOT(Check_ArranqueL()));
    connect(this->ui->checkBox_9,SIGNAL(clicked(bool)),this,SLOT(Check_OPurga()));
    connect(this->ui->checkBox_10,SIGNAL(clicked(bool)),this,SLOT(Check_CPurga()));
    connect(this->ui->checkBox_11,SIGNAL(clicked(bool)),this,SLOT(Check_OLavadoIn()));
    connect(this->ui->checkBox_12,SIGNAL(clicked(bool)),this,SLOT(Check_CLavadoIn()));
    connect(this->ui->checkBox_13,SIGNAL(clicked(bool)),this,SLOT(Check_OLavadoOut()));
    connect(this->ui->checkBox_14,SIGNAL(clicked(bool)),this,SLOT(Check_CLavadoOut()));
    connect(this->ui->checkBox_15,SIGNAL(clicked(bool)),this,SLOT(Check()));
    connect(this->ui->checkBox_16,SIGNAL(clicked(bool)),this,SLOT(Check_FBomba()));
    connect(this->ui->checkBox_17,SIGNAL(clicked(bool)),this,SLOT(Check_FVLavadoIn()));
    connect(this->ui->checkBox_18,SIGNAL(clicked(bool)),this,SLOT(Check_FVPurga()));
    connect(this->ui->checkBox_19,SIGNAL(clicked(bool)),this,SLOT(Check_FVLavadoOut()));
    connect(this->ui->checkBox_20,SIGNAL(clicked(bool)),this,SLOT(Check_FFuga()));
    connect(this->ui->checkBox_21,SIGNAL(clicked(bool)),this,SLOT(Check_ResetFuga()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

double Lavado_Compresor::Motobomba(int Segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double x[25];
    double h=0.05/25;
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<25;j++)
    {
        k1=((Segnal*Falla*ValMax)-(x[j-1]))/Tao;
        k2=((Segnal*Falla*ValMax)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((Segnal*Falla*ValMax)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((Segnal*Falla*ValMax)-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];

}

double Lavado_Compresor::NivelTanqueRectangular(double FlujoIn, double FlujoOut, double CINivel, double Largo, double Ancho)
{
    int j;
    double x[25];
    double h=0.05/25;
    double k1,k2,k3,k4;
    double Area;

    Area=Largo*Ancho;

    x[0]=CINivel;


    for(j=1;j<25;j++)
    {
        k1 = (FlujoIn - FlujoOut) / Area;
        k2 = ((FlujoIn - FlujoOut) + ((h / 2) * k1)) / Area;
        k3 = ((FlujoIn - FlujoOut) + ((h / 2) * k2)) / Area;
        k4 = ((FlujoIn - FlujoOut) + (h * k3)) / Area;

        x[j] = x[j-1] + ((h / 6) * (k1 + (2 * k2) + (2 * k3) + k4));
    }

    x[0]=x[j-1];

    double n = x[0] * 10;
    int ni = (int)n;
    emit SNivelT(ni);

    return x[0];
}

int Lavado_Compresor::Encendido()
{
    this->Timer->start(50);
    return 0;
}

int Lavado_Compresor::Apagado()
{
    this->Timer->stop();
    return 0;
}

int Lavado_Compresor::Check()
{
    if(this->ui->checkBox_15->checkState()==2)
    {
        this->ui->textB5->setText("Remoto");
        Local_Remoto_WWash=1;
    }
    else if(this->ui->checkBox_15->checkState()==0)
    {
        this->ui->textB5->setText("Local");
        Local_Remoto_WWash=0;
    }
    return 0;
}

int Lavado_Compresor::Check_ArranqueL()
{
    if(this->ui->checkBox_8->checkState()==2)
    {
        StartHS6505=1;
    }
    else if(this->ui->checkBox_8->checkState()==0)
    {
        StartHS6505=0;
    }
    return 0;
}

int Lavado_Compresor::Check_ParoL()
{
    if(this->ui->checkBox->checkState()==2)
    {
        StopHS6505=1;
    }
    else if(this->ui->checkBox->checkState()==0)
    {
        StopHS6505=0;
    }
    return 0;
}

int Lavado_Compresor::Check_ArranqueR()
{
    if(this->ui->checkBox_2->checkState()==2)
    {
        StartRemoto=1;
    }
    else if(this->ui->checkBox_2->checkState()==0)
    {
        StartRemoto=0;
    }
    return 0;
}

int Lavado_Compresor::Check_ParoR()
{
    if(this->ui->checkBox_3->checkState()==2)
    {
        StopRemoto=1;
    }
    else if(this->ui->checkBox_3->checkState()==0)
    {
        StopRemoto=0;
    }
    return 0;
}

int Lavado_Compresor::Check_VInQuimico()
{
    if(this->ui->checkBox_4->checkState()==2)
    {
        ValBol1=1;
        emit SVal01(true);
    }
    else if(this->ui->checkBox_4->checkState()==0)
    {
        ValBol1=0;
        emit SVal01(false);
    }
    return 0;
}

int Lavado_Compresor::Check_VInAgua()
{
    if(this->ui->checkBox_5->checkState()==2)
    {
        ValBol2=1;
        emit SVal02(true);
    }
    else if(this->ui->checkBox_5->checkState()==0)
    {
        ValBol2=0;
        emit SVal02(false);
    }
    return 0;
}

int Lavado_Compresor::Check_VDrenado()
{
    if(this->ui->checkBox_6->checkState()==2)
    {
        ValBol3=1;
        emit SVal03(true);
    }
    else if(this->ui->checkBox_6->checkState()==0)
    {
        ValBol3=0;
        emit SVal03(false);
    }
    return 0;
}

int Lavado_Compresor::Check_VSuccion()
{
    if(this->ui->checkBox_7->checkState()==2)
    {
        ValBol4=1;
        emit SVal04(true);
    }
    else if(this->ui->checkBox_7->checkState()==0)
    {
        ValBol4=0;
        emit SVal04(false);
    }
    return 0;
}

int Lavado_Compresor::Check_OPurga()
{
    if(this->ui->checkBox_9->checkState()==2)
    {
        OpSOV6540=1;
    }
    else if(this->ui->checkBox_9->checkState()==0)
    {
        OpSOV6540=0;
    }
    return 0;
}

int Lavado_Compresor::Check_CPurga()
{
    if(this->ui->checkBox_10->checkState()==2)
    {
        ClSOV6540=1;
    }
    else if(this->ui->checkBox_10->checkState()==0)
    {
        ClSOV6540=0;
    }
    return 0;
}

int Lavado_Compresor::Check_OLavadoIn()
{
    if(this->ui->checkBox_11->checkState()==2)
    {
        OpSOV6516=1;
    }
    else if(this->ui->checkBox_11->checkState()==0)
    {
        OpSOV6516=0;
    }
    return 0;
}

int Lavado_Compresor::Check_CLavadoIn()
{
    if(this->ui->checkBox_12->checkState()==2)
    {
        ClSOV6516=1;
    }
    else if(this->ui->checkBox_12->checkState()==0)
    {
        ClSOV6516=0;
    }
    return 0;
}

int Lavado_Compresor::Check_OLavadoOut()
{
    if(this->ui->checkBox_13->checkState()==2)
    {
        OpSOV6504=1;
    }
    else if(this->ui->checkBox_13->checkState()==0)
    {
        OpSOV6504=0;
    }
    return 0;
}

int Lavado_Compresor::Check_CLavadoOut()
{
    if(this->ui->checkBox_14->checkState()==2)
    {
        ClSOV6504=1;
    }
    else if(this->ui->checkBox_14->checkState()==0)
    {
        ClSOV6504=0;
    }
    return 0;
}

int Lavado_Compresor::Check_FBomba()
{
    if(this->ui->checkBox_16->checkState()==2)
    {
        FallaMOT6535=0;
    }
    else if(this->ui->checkBox_16->checkState()==0)
    {
        FallaMOT6535=1;
    }
    return 0;
}

int Lavado_Compresor::Check_FVLavadoIn()
{
    if(this->ui->checkBox_17->checkState()==2)
    {
        FallaSOV6516=0;
    }
    else if(this->ui->checkBox_17->checkState()==0)
    {
        FallaSOV6516=1;
    }
    return 0;
}

int Lavado_Compresor::Check_FVLavadoOut()
{
    if(this->ui->checkBox_19->checkState()==2)
    {
        FallaSOV6504=0;
    }
    else if(this->ui->checkBox_19->checkState()==0)
    {
        FallaSOV6504=1;
    }
    return 0;
}

int Lavado_Compresor::Check_FVPurga()
{
    if(this->ui->checkBox_18->checkState()==2)
    {
        FallaSOV6540=0;
    }
    else if(this->ui->checkBox_18->checkState()==0)
    {
        FallaSOV6540=1;
    }
    return 0;
}

int Lavado_Compresor::Check_FFuga()
{
    if(this->ui->checkBox_20->checkState()==2)
    {
        FugaTank=0.005;
    }

    return 0;
}

int Lavado_Compresor::Check_ResetFuga()
{
    if(this->ui->checkBox_21->checkState()==2)
    {
        FugaTank=0;
    }
    return 0;
}

void Lavado_Compresor::Modelo()
{
    FlujoInAgua = 0.0025 * ValBol1;
    FlujoInQuimico = 0.000833 * ValBol2;
    qDren = ((qSqrt(2*9.81*CINivelTank))*((3.141516*0.0254*0.0254)/4)) * ValBol3;

    if(OpSOV6540==1)
    {
        SOV6540=1;
    }
    else if(ClSOV6540==0)
    {
        SOV6540=0;
    }

    if(OpSOV6516==1)
    {
        SOV6516=1;
    }
    else if(ClSOV6516==0)
    {
        SOV6516=0;
    }

    if(OpSOV6504==1)
    {
        SOV6504=1;
    }
    else if(ClSOV6504==0)
    {
        SOV6504=0;
    }

    if (NivelTank > 0.72 && ValBol2==1 && ValBol1==0)
    {
        qOverflow = 0.000833;
    }
    else if (NivelTank>0.72 && ValBol1==1 && ValBol2==0)
    {
        qOverflow = 0.0025;
    }
    else if (NivelTank>0.72 && ValBol1==1 && ValBol2==1)
    {
        qOverflow = 0.003333;
    }
    else
    {
        qOverflow = 0;
    }

    if (OpSOV6540 == 1)
    {
        qAire = 0.004719475;
    }
    else if (ClSOV6540 == 1)
    {
        qAire = 0;
    }

    if ((Local_Remoto_WWash == 1 && StartRemoto == 1) || (Local_Remoto_WWash == 0 && StartHS6505 == 1))
    {
        OnMOT6535 = 1;
    }
    else if ((Local_Remoto_WWash == 1 && StopRemoto == 1) || (Local_Remoto_WWash == 0 && StopHS6505 == 1))
    {
        OnMOT6535 = 0;
    }


    qoutTank = CIFMOT6535 + qDren + qOverflow + FugaTank;



    if (NivelTank < 0)
    {
        NivelTank = 0;
        CIFMOT6535 = 0;
    }
    else
    {
        NivelTank = NivelTanqueRectangular((FlujoInAgua + FlujoInQuimico), qoutTank, CINivelTank, 0.8, 0.6);
    }

    if ((SOV6504 == 0) && (SOV6516 == 0))
    {
        PMOT6535 = 0;
        FMOT6535 = 0;
    }
    else if ((SOV6504 == 1))
    {
        PMOT6535 = Motobomba(OnMOT6535, 827000, 0.35, CIPMOT6535, FallaMOT6535) * ValBol4;
        FMOT6535 = Motobomba(OnMOT6535, 0.0005, 0.35, CIFMOT6535, FallaMOT6535) * ValBol4;
    }
    else if ((SOV6516 == 1))
    {
        PMOT6535 = Motobomba(OnMOT6535, 827000, 0.35, CIPMOT6535, FallaMOT6535) * ValBol4;
        FMOT6535 = Motobomba(OnMOT6535, 0.0003166, 0.35, CIFMOT6535, FallaMOT6535) * ValBol4;
    }


    CIPMOT6535 = PMOT6535;
    CIFMOT6535 = FMOT6535;
    PI6538 = CIPMOT6535;
    CINivelTank = NivelTank;
    Tiempo = Tiempo + 0.05;
    emit STiempo(Tiempo);

    this->ui->textB1->append(QString::number(CINivelTank));
    this->ui->textB2->append(QString::number(CIFMOT6535));
    this->ui->textB3->append(QString::number(CIPMOT6535));
    this->ui->textB4->append(QString::number(Tiempo));

    fprintf(Lavado,"%lf\t%lf\t%lf\t%lf\n",Tiempo,CINivelTank,CIFMOT6535,CIPMOT6535);

}

Lavado_Compresor::~Lavado_Compresor()
{
    delete Timer;
    delete Lavado;
    fclose(Lavado);
    delete ui;
}
