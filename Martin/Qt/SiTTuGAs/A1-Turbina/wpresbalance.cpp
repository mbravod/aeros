#include "wpresbalance.h"
#include "ui_wpresbalance.h"

WPresBalance::WPresBalance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPresBalance)
{
    ui->setupUi(this);
}

WPresBalance::~WPresBalance()
{
    delete ui;
}

void WPresBalance::setLbPreBALIT(QString s)
{
    ui->lbPreBALIT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresBalance::setLbBALIT_1(QString s)
{
    ui->lbBALIT_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALIT_2(QString s)
{
    ui->lbBALIT_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALI_1(QString s)
{
    ui->lbBALI_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALI_2(QString s)
{
    ui->lbBALI_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresBalance::setLbBALIU_1(QString s)
{
    ui->lbBALIU_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALIU_2(QString s)
{
    ui->lbBALIU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WPresBalance::getLbBALIU_2()
{
    return ui->lbBALIU_2->text();
}
QString WPresBalance::getLbBALIU_1()
{
    return ui->lbBALIU_1->text();
}

QString WPresBalance::getLbBALI_2()
{
    return ui->lbBALI_2->text();
}
QString WPresBalance::getLbBALI_1()
{
    return ui->lbBALI_1->text();
}
QString WPresBalance::getLbBALIT_2()
{
    return ui->lbBALIT_2->text();
}
QString WPresBalance::getLbBALIT_1()
{
    return ui->lbBALIT_1->text();
}

QString WPresBalance::getLbPreBALIT()
{
    return ui->lbPreBALIT->text();
}
