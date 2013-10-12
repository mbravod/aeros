#include "wnivel2.h"
#include "ui_wnivel2.h"

WNivel2::WNivel2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WNivel2)
{
    ui->setupUi(this);
}

WNivel2::~WNivel2()
{
    delete ui;
}


void WNivel2::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WNivel2::setLbNivGTGT(QString s)
{
    ui->lbNivGTGT->setText(s);
    update();
}

void WNivel2::setLbAceCT(QString s)
{
    ui->lbAcceptT->setText(s);
    update();
}

void WNivel2::setLbPerA(QString s)
{
    ui->lbPerA->setText(s);
    update();
}

void WNivel2::setLbTodP(QString s)
{
    ui->lbTodP->setText(s);
    update();
}

void WNivel2::setLbNivL(QString s)
{
    ui->lbNivL->setText(s);
    update();
}

void WNivel2::setLbEthC(QString s)
{
    ui->lbEthC->setText(s);
    update();
}
void WNivel2::setLbPassT(QString s)
{
    ui->lbPassT->setText(s);
    update();
}

void WNivel2::setLbPasCT(QString s)
{
    ui->lbPasCT->setText(s);
    update();
}

QString WNivel2::getLbPasCT()
{
    return ui->lbPasCT->text();
}

QString WNivel2::getLbPassT()
{
    return ui->lbPassT->text();
}

QString WNivel2::getLbEthC()
{
    return ui->lbEthC->text();
}

QString WNivel2::getLbNivL()
{
    return ui->lbNivL->text();
}

QString WNivel2::getLbTodP()
{
    return ui->lbTodP->text();
}

QString WNivel2::getLbPerA()
{
    return ui->lbPerA->text();
}

QString WNivel2::getLbAceCT()
{
    return ui->lbAceCT->text();
}

QString WNivel2::getLbNivGTGT()
{
    return ui->lbNivGTGT->text();
}

QString WNivel2::getLbIP()
{
    return ui->lbIP->text();
}
