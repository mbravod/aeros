#include "wpurgav.h"
#include "ui_wpurgav.h"

WPurgaV::WPurgaV(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPurgaV)
{
    ui->setupUi(this);
}

WPurgaV::~WPurgaV()
{
    delete ui;
}
void WPurgaV::setLbVsva(QString s)
{
    ui->lbVbva->setText(s);
    update();
}
void WPurgaV::setLbVsvb(QString s)
{
    ui->lbVbvB->setText(s);
    update();
}
void WPurgaV::setLbVsvdmd(QString s)
{
    ui->lbVbvdmd->setText(s);
    update();
}
void WPurgaV::setLbVsvMa(QString s)
{
    ui->lbVbvMa->setText(s);
    update();
}
void WPurgaV::setLbtbvohms(QString s)
{
    ui->lbVbvOhms->setText(s);
    update();
}
void WPurgaV::setLbVsvsel(QString s)
{
    ui->lbVbvsel->setText(s);
    update();
}
void WPurgaV::setLbVsvaU(QString s)
{
    ui->lbVbvaU->setText(s);
    update();
}
void WPurgaV::setLbVsvbU(QString s)
{
    ui->lbVbvBU->setText(s);
    update();
}
void WPurgaV::setLbVsvdmdU(QString s)
{
    ui->lbVbvdmdU->setText(s);
    update();
}
void WPurgaV::setLbVsvMaU(QString s)
{
    ui->lbVbvMaU->setText(s);
    update();
}
void WPurgaV::setLbtbvohmsU(QString s)
{
    ui->lbVbvOhmsU->setText(s);
    update();
}
void WPurgaV::setLbVsvselU(QString s)
{
    ui->lbVbvselU->setText(s);
    update();
}
