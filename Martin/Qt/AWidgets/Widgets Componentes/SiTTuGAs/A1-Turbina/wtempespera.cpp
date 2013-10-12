#include "wtempespera.h"
#include "ui_wtempespera.h"

WTempEspera::WTempEspera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempEspera)
{
    ui->setupUi(this);
}

WTempEspera::~WTempEspera()
{
    delete ui;
}
void WTempEspera::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WTempEspera::setLeDemanda(QString s)
{
    ui->leDemanda->setText(s);
    update();
}
void WTempEspera::setLeRetro(QString s)
{
    ui->leRetro->setText(s);
    update();
}


QString WTempEspera::getLbIP()
{
    return ui->lbIP->text();
}
QString WTempEspera::getLeDemanda()
{
    return ui->leDemanda->text();
}
QString WTempEspera::getLeRetro()
{
    return ui->leRetro->text();
}


