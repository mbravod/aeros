#include "sistema_vibraciones.h"
#include "ui_sistema_vibraciones.h"

SISTEMA_VIBRACIONES::SISTEMA_VIBRACIONES(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SISTEMA_VIBRACIONES)
{
    ui->setupUi(this);

    Tiempo=0;

    A=0.03;
    B=0.00672;
    C=400;
    CIDesplazamiento=0.00111427;
    CIVelocidad=0;

    A2=0.021;
    B2=0.000317;
    C2=984;
    CIDesplazamiento2=0.0018;
    CIVelocidad2=0.0002;

    A3=0.024;
    B3=0.00672;
    C3=728.6;
    CIDesplazamiento3=0.00499435;
    CIVelocidad3=0;

    A4=0.018;
    B4=0.000672;
    C4=984;
    CIDesplazamiento4=0.0001876;
    CIVelocidad4=0.00007;

    A5=0.001;
    B5=0.00672;
    C5=100;
    CIDesplazamiento5=0.21;
    CIVelocidad5=0.09;

    A6=0.001;
    B6=0.0096;
    C6=24;
    CIDesplazamiento6=0.12;
    CIVelocidad6=0;

    A7=9.741;
    B7=7.672;
    C7=185;
    CIDesplazamiento7=2.6148972;
    CIVelocidad7=2;

    A8=22.947;
    B8=1.0672;
    C8=984;
    CIDesplazamiento8=1.9;
    CIVelocidad8=3;

    A9=50.1278;
    B9=1.058;
    C9=984;
    CIDesplazamiento9=1.03256;
    CIVelocidad9=1.001;

    A10=18.356874;
    B10=8;
    C10=984;
    CIDesplazamiento10=1;
    CIVelocidad10=1.2;

    A11=36.147895;
    B11=1.5;
    C11=984;
    CIDesplazamiento11=1.02;
    CIVelocidad11=2.4587;

    A12=15.4238;
    B12=1;
    C12=984;
    CIDesplazamiento12=2;
    CIVelocidad12=1;

    SISTEMA_VIBRACIONES::Timer=new QTimer(this);
    connect(this->ui->btn1,SIGNAL(clicked()),this,SLOT(Iniciar()));
    connect(this->ui->btn2,SIGNAL(clicked()),this,SLOT(Finalizar()));
    connect(Timer,SIGNAL(timeout()),this,SLOT(Modelo()));
}

double SISTEMA_VIBRACIONES::Vibraciones(double A,double B,double C,double CIDesplazamiento,double CIVelocidad)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento;
    x1[0]=CIVelocidad;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A*(qSin(377*Tiempo))-(B*x1[j-1])-(C*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A*(qSin(377*Tiempo))-(B*(x1[j-1]+(0.5*l1)))-(C*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A*(qSin(377*Tiempo))-(B*(x1[j-1]+(0.5*l2)))-(C*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A*(qSin(377*Tiempo))-(B*(x1[j-1]+l3))-(C*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];

}

double SISTEMA_VIBRACIONES::Vibraciones2(double A2,double B2,double C2,double CIDesplazamiento2,double CIVelocidad2)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento2;
    x1[0]=CIVelocidad2;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A2*(qSin(377*Tiempo))-(B2*x1[j-1])-(C2*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A2*(qSin(377*Tiempo))-(B2*(x1[j-1]+(0.5*l1)))-(C2*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A2*(qSin(377*Tiempo))-(B2*(x1[j-1]+(0.5*l2)))-(C2*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A2*(qSin(377*Tiempo))-(B2*(x1[j-1]+l3))-(C2*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones3(double A3,double B3,double C3,double CIDesplazamiento3,double CIVelocidad3)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento3;
    x1[0]=CIVelocidad3;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A3*(qSin(377*Tiempo))-(B3*x1[j-1])-(C3*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A3*(qSin(377*Tiempo))-(B3*(x1[j-1]+(0.5*l1)))-(C3*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A3*(qSin(377*Tiempo))-(B3*(x1[j-1]+(0.5*l2)))-(C3*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A3*(qSin(377*Tiempo))-(B3*(x1[j-1]+l3))-(C3*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones4(double A4,double B4,double C4,double CIDesplazamiento4,double CIVelocidad4)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento4;
    x1[0]=CIVelocidad4;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A4*(qSin(377*Tiempo))-(B4*x1[j-1])-(C4*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A4*(qSin(377*Tiempo))-(B4*(x1[j-1]+(0.5*l1)))-(C4*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A4*(qSin(377*Tiempo))-(B4*(x1[j-1]+(0.5*l2)))-(C4*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A4*(qSin(377*Tiempo))-(B4*(x1[j-1]+l3))-(C4*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones5(double A5,double B5,double C5,double CIDesplazamiento5,double CIVelocidad5)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento5;
    x1[0]=CIVelocidad5;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A5*(qSin(377*Tiempo))-(B5*x1[j-1])-(C5*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A5*(qSin(377*Tiempo))-(B5*(x1[j-1]+(0.5*l1)))-(C5*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A5*(qSin(377*Tiempo))-(B5*(x1[j-1]+(0.5*l2)))-(C5*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A5*(qSin(377*Tiempo))-(B5*(x1[j-1]+l3))-(C5*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

        qDebug()<<CIDesplazamiento5;
    }
    x[0]=x[j-1];
    x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones6(double A6,double B6,double C6,double CIDesplazamiento6,double CIVelocidad6)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento6;
    x1[0]=CIVelocidad6;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A6*(qSin(377*Tiempo))-(B6*x1[j-1])-(C6*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A6*(qSin(377*Tiempo))-(B6*(x1[j-1]+(0.5*l1)))-(C6*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A6*(qSin(377*Tiempo))-(B6*(x1[j-1]+(0.5*l2)))-(C6*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A6*(qSin(377*Tiempo))-(B6*(x1[j-1]+l3))-(C6*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones7(double A7,double B7,double C7,double CIDesplazamiento7,double CIVelocidad7)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento7;
    x1[0]=CIVelocidad7;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A7*(qSin(377*Tiempo))-(B7*x1[j-1])-(C7*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A7*(qSin(377*Tiempo))-(B7*(x1[j-1]+(0.5*l1)))-(C7*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A7*(qSin(377*Tiempo))-(B7*(x1[j-1]+(0.5*l2)))-(C7*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A7*(qSin(377*Tiempo))-(B7*(x1[j-1]+l3))-(C7*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones8(double A8,double B8,double C8,double CIDesplazamiento8,double CIVelocidad8)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento8;
    x1[0]=CIVelocidad8;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A8*(qSin(377*Tiempo))-(B8*x1[j-1])-(C8*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A8*(qSin(377*Tiempo))-(B8*(x1[j-1]+(0.5*l1)))-(C8*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A8*(qSin(377*Tiempo))-(B8*(x1[j-1]+(0.5*l2)))-(C8*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A8*(qSin(377*Tiempo))-(B8*(x1[j-1]+l3))-(C8*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones9(double A9,double B9,double C9,double CIDesplazamiento9,double CIVelocidad9)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento9;
    x1[0]=CIVelocidad9;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A9*(qSin(377*Tiempo))-(B9*x1[j-1])-(C9*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A9*(qSin(377*Tiempo))-(B9*(x1[j-1]+(0.5*l1)))-(C9*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A9*(qSin(377*Tiempo))-(B9*(x1[j-1]+(0.5*l2)))-(C9*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A9*(qSin(377*Tiempo))-(B9*(x1[j-1]+l3))-(C9*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones10(double A10,double B10,double C10,double CIDesplazamiento10,double CIVelocidad10)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento10;
    x1[0]=CIVelocidad10;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A10*(qSin(377*Tiempo))-(B10*x1[j-1])-(C10*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A10*(qSin(377*Tiempo))-(B10*(x1[j-1]+(0.5*l1)))-(C10*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A10*(qSin(377*Tiempo))-(B10*(x1[j-1]+(0.5*l2)))-(C10*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A10*(qSin(377*Tiempo))-(B10*(x1[j-1]+l3))-(C10*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones11(double A11,double B11,double C11,double CIDesplazamiento11,double CIVelocidad11)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento11;
    x1[0]=CIVelocidad11;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A11*(qSin(377*Tiempo))-(B11*x1[j-1])-(C11*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A11*(qSin(377*Tiempo))-(B11*(x1[j-1]+(0.5*l1)))-(C11*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A11*(qSin(377*Tiempo))-(B11*(x1[j-1]+(0.5*l2)))-(C11*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A11*(qSin(377*Tiempo))-(B11*(x1[j-1]+l3))-(C11*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

double SISTEMA_VIBRACIONES::Vibraciones12(double A12,double B12,double C12,double CIDesplazamiento12,double CIVelocidad12)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/100;
    double k1,k2,k3,k4,l1,l2,l3,l4;

    x[0]=CIDesplazamiento12;
    x1[0]=CIVelocidad12;

    for(j=1;j<25;j++)
    {
        k1=h*x1[j-1];
        l1=h*(A12*(qSin(377*Tiempo))-(B12*x1[j-1])-(C12*x[j-1]));
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*(A12*(qSin(377*Tiempo))-(B12*(x1[j-1]+(0.5*l1)))-(C12*(x[j-1]+(0.5*k1))));
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(A12*(qSin(377*Tiempo))-(B12*(x1[j-1]+(0.5*l2)))-(C12*(x[j-1]+(0.5*k2))));
        k4=h*(x1[j-1]+l3);
        l4=h*(A12*(qSin(377*Tiempo))-(B12*(x1[j-1]+l3))-(C12*(x[j-1]+k3)));

        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);
        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);

    }
    x[0]=x[j-1];
    //x1[0]=x1[j-1];

    return x[0];
    return x1[0];
}

int SISTEMA_VIBRACIONES::Iniciar()
{
    this->Timer->start(50);
    return 0;
}

int SISTEMA_VIBRACIONES::Finalizar()
{
    this->Timer->stop();
    return 0;
}

void SISTEMA_VIBRACIONES::Modelo()
{
    Tiempo=Tiempo+0.05;

    Desplazamiento=Vibraciones(A,B,C,CIDesplazamiento,CIVelocidad);
    Desplazamiento2=Vibraciones2(A2,B2,C2,CIDesplazamiento2,CIVelocidad2);
    Desplazamiento3=Vibraciones3(A3,B3,C3,CIDesplazamiento3,CIVelocidad3);
    Desplazamiento4=Vibraciones4(A4,B4,C4,CIDesplazamiento4,CIVelocidad4);
    Desplazamiento5=Vibraciones5(A5,B5,C5,CIDesplazamiento5,CIVelocidad5);
    Desplazamiento6=Vibraciones6(A6,B6,C6,CIDesplazamiento6,CIVelocidad6);
    Desplazamiento7=Vibraciones7(A7,B7,C7,CIDesplazamiento7,CIVelocidad7);
    Desplazamiento8=Vibraciones8(A8,B8,C8,CIDesplazamiento8,CIVelocidad8);
    Desplazamiento9=Vibraciones9(A9,B9,C9,CIDesplazamiento9,CIVelocidad9);
    Desplazamiento10=Vibraciones10(A10,B10,C10,CIDesplazamiento10,CIVelocidad10);
    Desplazamiento11=Vibraciones11(A11,B11,C11,CIDesplazamiento11,CIVelocidad11);
    Desplazamiento12=Vibraciones12(A12,B12,C12,CIDesplazamiento12,CIVelocidad12);

    CIDesplazamiento=Desplazamiento;
    CIDesplazamiento2=Desplazamiento2;
    CIDesplazamiento3=Desplazamiento3;
    CIDesplazamiento4=Desplazamiento4;
    CIDesplazamiento5=Desplazamiento5;
    CIDesplazamiento6=Desplazamiento6;
    CIDesplazamiento7=Desplazamiento7;
    CIDesplazamiento8=Desplazamiento8;
    CIDesplazamiento9=Desplazamiento9;
    CIDesplazamiento10=Desplazamiento10;
    CIDesplazamiento11=Desplazamiento11;
    CIDesplazamiento12=Desplazamiento12;

    this->ui->txt1->append(QString::number(CIDesplazamiento));
    this->ui->txt2->append(QString::number(CIDesplazamiento2));
    this->ui->txt3->append(QString::number(CIDesplazamiento3));
    this->ui->txt4->append(QString::number(CIDesplazamiento4));
    this->ui->txt5->append(QString::number(CIDesplazamiento5));
    this->ui->txt6->append(QString::number(CIDesplazamiento6));
    this->ui->txt7->append(QString::number(CIDesplazamiento7));
    this->ui->txt8->append(QString::number(CIDesplazamiento8));
    this->ui->txt9->append(QString::number(CIDesplazamiento9));
    this->ui->txt10->append(QString::number(CIDesplazamiento10));
    this->ui->txt11->append(QString::number(CIDesplazamiento11));
    this->ui->txt12->append(QString::number(CIDesplazamiento12));
    this->ui->txt13->append(QString::number(Tiempo));

    emit SVibra01(CIDesplazamiento);
    emit SVibra02(CIDesplazamiento2);
    emit SVibra03(CIDesplazamiento3);
    emit SVibra04(CIDesplazamiento4);
    emit SVibra05(CIDesplazamiento5);
    emit SVibra06(CIDesplazamiento6);
    emit SVibra07(CIDesplazamiento7);
    emit SVibra08(CIDesplazamiento8);
    emit SVibra09(CIDesplazamiento9);
    emit SVibra10(CIDesplazamiento10);
    emit SVibra11(CIDesplazamiento11);
    emit SVibra12(CIDesplazamiento12);
}


SISTEMA_VIBRACIONES::~SISTEMA_VIBRACIONES()
{
    delete ui;
    delete Timer;
}
