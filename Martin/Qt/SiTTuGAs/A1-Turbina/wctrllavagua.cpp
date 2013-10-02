#include "wctrllavagua.h"
#include "ui_wctrllavagua.h"

WCtrlLavAgua::WCtrlLavAgua(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlLavAgua)
{
    ui->setupUi(this);
}

WCtrlLavAgua::~WCtrlLavAgua()
{
    delete ui;
}
void WCtrlLavAgua::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WCtrlLavAgua::setLbPermLav(QString s)
{
    ui->lbPermLav->setText(s);
    update();
}
void WCtrlLavAgua::setLbDeLinea(QString s)
{
    ui->lbDeLinea->setText(s);
    update();
}
void WCtrlLavAgua::setLbEnLinea(QString s)
{
    ui->lbEnLinea->setText(s);
    update();
}

QString WCtrlLavAgua::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlLavAgua::getLbPermLav()
{
    return ui->lbPermLav->text();
}
QString WCtrlLavAgua::getLbDeLinea()
{
    return ui->lbDeLinea->text();
}
QString WCtrlLavAgua::getLbEnLinea()
{
    return ui->lbEnLinea->text();
}
