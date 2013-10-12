#include "wrotorturb.h"
#include "ui_wrotorturb.h"

WRotorTurb::WRotorTurb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WRotorTurb)
{
    ui->setupUi(this);
}

WRotorTurb::~WRotorTurb()
{
    delete ui;
}
void WRotorTurb::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
/*void WRotorTurb::setLeOper(QString s)
{
    ui->leOper->setText(s);
    update();
}
void WRotorTurb::setLeCntr(QString s)
{
    ui->->leCntr->setText(s);
    update();
}*/
void WRotorTurb::setLbVel(QString s)
{
    ui->lbVel->setText(s);
    update();
}
void WRotorTurb::setLbRef(QString s)
{
    ui->lbRef->setText(s);
    update();
}
void WRotorTurb::setLbEmicion(QString s)
{
    ui->lbEmicion->setText(s);
    update();
}
void WRotorTurb::setLbVelU(QString s)
{
    ui->lbVelU->setText(s);
    update();
}
void WRotorTurb::setLbRefU(QString s)
{
    ui->lbRefU->setText(s);
    update();
}
void WRotorTurb::setLbEmicionU(QString s)
{
    ui->lbEmicionU->setText(s);
    update();
}

QString WRotorTurb::getLbIP()
{
    return ui->lbIP->text();
}
/*QString WRotorTurb::setLeOper()
{
    return ui->leOper->text();
}
QString WRotorTurb::setLeCntr()
{
    return ui->leCntr->text();
}*/
QString WRotorTurb::setLbVel()
{
    return ui->lbVel->text();
}
QString WRotorTurb::setLbRef()
{
    return ui->lbRef->text();
}
QString WRotorTurb::setLbEmicion()
{
    return ui->lbEmicion->text();
}
QString WRotorTurb::setLbVelU()
{
    return ui->lbVelU->text();
}
QString WRotorTurb::setLbRefU()
{
    return ui->lbRefU->text();
}
QString WRotorTurb::setLbEmicionU()
{
    return ui->lbEmicionU->text();
}
