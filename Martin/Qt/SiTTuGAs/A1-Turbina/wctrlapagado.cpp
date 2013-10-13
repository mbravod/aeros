#include "wctrlapagado.h"
#include "ui_wctrlapagado.h"

WCtrlApagado::WCtrlApagado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlApagado)
{
    ui->setupUi(this);
}

WCtrlApagado::~WCtrlApagado()
{
    delete ui;
}
/*
void WCtrlApagado::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WCtrlApagado::setLeApagFun(QString s)
{
    ui->leApagFun->setText(s);
    update();
}

QString WCtrlApagado::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlApagado::getLeApagFun()
{
    return ui->leApagFun->text();
}
*/
