#include "wcrakctrl.h"
#include "ui_wcrakctrl.h"

WCrakCtrl::WCrakCtrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCrakCtrl)
{
    ui->setupUi(this);
}

WCrakCtrl::~WCrakCtrl()
{
    delete ui;
}

/*
void WCrakCtrl::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WCrakCtrl::setLbcrankperm(QString s)
{
    ui->lbcrankperm->setText(s);
    update();
}
void WCrakCtrl::setLehighspd(QString s)
{
    ui->lehighspd->setText(s);
    update();
}
void WCrakCtrl::setLestop(QString s)
{
    ui->leStop->setText(s);
    update();
}
QString WCrakCtrl::getLbIP()
{
    return ui->lbIP->text();
}
QString WCrakCtrl::getLbcrankperm()
{
    return ui->lbcrankperm->text();
}
QString WCrakCtrl::getLehighspd()
{
    return ui->lehighspd->text();
}
QString WCrakCtrl::getLeStop()
{
    return ui->leStop->text();
}
*/
