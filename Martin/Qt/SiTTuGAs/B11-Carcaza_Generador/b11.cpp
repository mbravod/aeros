#include "b11.h"
#include "ui_b11.h"

B11::B11(SiTTuGAs *siTTuGAs, HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B11)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "CARCAZA DEL GENERADOR";
    this->clave= "B11";
}

B11::~B11()
{
    delete ui;
}

void B11::setLbTem_9(QString s)
{
    ui->lbTem_9->setText(s);
    update();
}
void B11::setLbTem_1(QString s)
{
    ui->lbTem_1->setText(s);
    update();
}

void B11::setLbTem_2(QString s)
{
    ui->lbTem_1->setText(s);
    update();
}

void B11::setLbTem_3(QString s)
{
    ui->lbTem_3->setText(s);
    update();
}

void B11::setLbTem_4(QString s)
{
    ui->lbTem_4->setText(s);
    update();
}

void B11::setLbTem_5(QString s)
{
    ui->lbTem_5->setText(s);
    update();
}

void B11::setLbTem_6(QString s)
{
    ui->lbTem_6->setText(s);
    update();
}

void B11::setLbTem_7(QString s)
{
    ui->lbTem_7->setText(s);
    update();
}

void B11::setLbTem_8(QString s)
{
    ui->lbTem_8->setText(s);
    update();
}

void B11::setLbTem_10(QString s)
{
    ui->lbTem_10->setText(s);
    update();
}

void B11::setLbUniT3(QString s)
{
    ui->lbUniT3->setText(s);
    update();
}

void B11::setLbGenT(QString s)
{
    ui->lbGenT->setText(s);
    update();
}

void B11::setLbGen_1(QString s)
{
    ui->lbGen_1->setText(s);
    update();
}

void B11::setLbGenU_1(QString s)
{
    ui->lbGenU_1->setText(s);
    update();
}

void B11::setLbGen_2(QString s)
{
    ui->lbGenU_2->setText(s);
    update();
}

void B11::setLbGenU_2(QString s)
{
    ui->lbGenU_2->setText(s);
    update();
}
void B11::setLbGen_3(QString s)
{
    ui->lbGen_3->setText(s);
    update();
}

void B11::setLbGenU_3(QString s)
{
    ui->lbGenU_3->setText(s);
    update();
}

void B11::setLbVenGEN(QString s)
{
    ui->lbVenGEN->setText(s);
    update();
}

void B11::setLbVenESP_1(QString s)
{
    ui->lbVenESP_1->setText(s);
    update();
}

void B11::setLbVenSER_1(QString s)
{
    ui->lbVenSER_1->setText(s);
    update();
}

void B11::setLbVen_1(QString s)
{
    ui->lbVen_1->setText(s);
    update();
}

void B11::setLbSER_1(QString s)
{
    ui->lbSER_1->setText(s);
    update();
}

void B11::setLbVEnU_2(QString s)
{
    ui->lbVenU_2->setText(s);
    update();
}

void B11::setLbSERU_1(QString s)
{
    ui->lbSERU_1->setText(s);
    update();
}

void B11::setLbGenT_3(QString s)
{
    ui->lbGenT_3->setText(s);
    update();
}
