#include "menu.h"
#include "ui_menu.h"
#include <qDebug>

Menu::Menu(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    this->title = "MENÚ PRINCIPAL";
    this->clave= "MENU";

    connect(ui->lb_A1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_A2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_A3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_A4_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_A5_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_A6_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));


    connect(ui->lb_B1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B4_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B5_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B6_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B7_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B8_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B9_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    //B10 no es un enlace del menu
    connect(ui->lb_B11_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_B12_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    //B13 no es un enlace del menu
    connect(ui->lb_B14_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));


    connect(ui->lb_C1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_C2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_C3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_C4_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_C5_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));



    connect(ui->lb_D1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D4_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D5_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D6_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D7_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D8_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_D9_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));


    connect(ui->lb_E1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_E2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_E3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));



    connect(ui->lb_F1_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_F2_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_F3_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_F4_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));
    connect(ui->lb_F5_1, SIGNAL(clicked(QString)), this, SLOT(ActivaLabel(QString)));




}

//Considero que podria mejorar si incorporamos una tabla de saltos *(switch), dado que podriamos hacer una sola etiqueta
//en vez de dos como esta actualmente en la GUI *(id/Etiqueta)
void Menu::ActivaLabel(QString n)
{
    if(n.compare(n,"lb_A1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(1); //"A1"
    else if(n.compare(n,"lb_A2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(2); //"A2"
    else if(n.compare(n,"lb_A3_1", Qt::CaseInsensitive)  == 0)
        emit ActivaInterfaz(3); //"A3"
    else if(n.compare(n,"lb_A4_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(4); //"A4"
    else if(n.compare(n,"lb_A5_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(5); //"A5"
    else if(n.compare(n,"lb_A6_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(6);//"A6"
    else if(n.compare(n,"lb_B1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(7);//"B1"
    else if(n.compare(n,"lb_B2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(8); //"B2"
    else if(n.compare(n,"lb_B3_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(9); //"B3"
    else if(n.compare(n,"lb_B4_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(10); //"B4"
    else if(n.compare(n,"lb_B5_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(11); //"B5"
    else if(n.compare(n,"lb_B6_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(12); //"B6"
    else if(n.compare(n,"lb_B7_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(13); //"B7"
    else if(n.compare(n,"lb_B8_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(14); //"B8"
    else if(n.compare(n,"lb_B9_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(15); //"B9"
    else if(n.compare(n,"lb_B11_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(16);//"B11"
    else if(n.compare(n,"lb_B12_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(17); //"B12"
    else if(n.compare(n,"lb_B14_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(18); //"B14"
    else if(n.compare(n,"lb_C1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(19); //"C1"
    else if(n.compare(n,"lb_C2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(20);//"C2"
    else if(n.compare(n,"lb_C3_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(21);//"C3"
    else if(n.compare(n,"lb_C4_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(22); //"C4"
    else if(n.compare(n,"lb_C5_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(23); //"C5"
    else if(n.compare(n,"lb_D1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(24); //"D1"
    else if(n.compare(n,"lb_D2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(25); //"D2"
    else if(n.compare(n,"lb_D3_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(26); //"D3"
    else if(n.compare(n,"lb_D4_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(27); //"D4"
    else if(n.compare(n,"lb_D5_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(28); //"D5"
    else if(n.compare(n,"lb_D6_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(29); //"D6"
    else if(n.compare(n,"lb_D7_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(30); //"D7"
    else if(n.compare(n,"lb_D8_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(31); //"D8"
    else if(n.compare(n,"lb_D9_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(32); //"D9"
    else if(n.compare(n,"lb_E1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(33); //"E1"
    else if(n.compare(n,"lb_E2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(34); //"E2"
    else if(n.compare(n,"lb_E3_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(35); //"E3"
    else if(n.compare(n,"lb_F1_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(36); //"F1"
    else if(n.compare(n,"lb_F2_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(37); //"F2"
    else if(n.compare(n,"lb_F3_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(38);//"F3"
    else if(n.compare(n,"lb_F4_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(39); //"F4"
    else if(n.compare(n,"lb_F5_1", Qt::CaseInsensitive) == 0)
        emit ActivaInterfaz(40);//"F5"
}

Menu::~Menu()
{
    delete ui;
}
