#include "wvoltctrl.h"
#include "ui_wvoltctrl.h"

WVoltCtrl::WVoltCtrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WVoltCtrl)
{
    ui->setupUi(this);
}

WVoltCtrl::~WVoltCtrl()
{
    delete ui;
}
void WVoltCtrl::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WVoltCtrl::setLeRetroa(QString s)
{
    ui->leRetroa->setText(s);
    update();
}



QString WVoltCtrl::getLbIP()
{
    return ui->lbIP->text();
}
QString WVoltCtrl::getLeRetroa()
{
    return ui->leRetroa->text();
}
