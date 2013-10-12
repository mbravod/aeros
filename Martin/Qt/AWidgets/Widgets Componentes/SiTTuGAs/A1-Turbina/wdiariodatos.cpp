#include "wdiariodatos.h"
#include "ui_wdiariodatos.h"

WDiarioDatos::WDiarioDatos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WDiarioDatos)
{
    ui->setupUi(this);
}

WDiarioDatos::~WDiarioDatos()
{
    delete ui;
}
void WDiarioDatos::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WDiarioDatos::setLeAlto(QString s)
{
    ui->leAlto->setText(s);
    update();
}
void WDiarioDatos::setLeInicio(QString s)
{
    ui->leInicio->setText(s);
    update();
}

QString WDiarioDatos::getLbIP()
{
    return ui->lbIP->text();
}
QString WDiarioDatos::getLeInicio()
{
    return ui->leInicio->text();
}
QString WDiarioDatos::getLeAlto()
{
    return ui->leAlto->text();
}
