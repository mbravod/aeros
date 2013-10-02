#include "wbalancei.h"
#include "ui_wbalancei.h"

WBalanceI::WBalanceI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBalanceI)
{
    ui->setupUi(this);
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
}

WBalanceI::~WBalanceI()
{
    delete ui;
}

void WBalanceI::setLbtbva(QString s)
{
    ui->lbtbva->setText(s);
    update();
}
void WBalanceI::setLbtbvb(QString s)
{
    ui->lbtbvb->setText(s);
    update();
}
void WBalanceI::setLbtbvdmd(QString s)
{
    ui->lbtbvdmd->setText(s);
    update();
}
void WBalanceI::setLbtbvma(QString s)
{
    ui->lbtbvma->setText(s);
    update();
}
void WBalanceI::setLbtbvohms(QString s)
{
    ui->lbtbvohms->setText(s);
    update();
}
void WBalanceI::setLbtbvsel(QString s)
{
    ui->lbtbvsel->setText(s);
    update();
}
void WBalanceI::setLbtbvaU(QString s)
{
    ui->lbtbvaU->setText(s);
    update();
}
void WBalanceI::setLbtbvbU(QString s)
{
    ui->lbtbvbU->setText(s);
    update();
}
void WBalanceI::setLbtbvdmdU(QString s)
{
    ui->lbtbvdmdU->setText(s);
    update();
}
void WBalanceI::setLbtbvmaU(QString s)
{
    ui->lbtbvmaU->setText(s);
    update();
}
void WBalanceI::setLbtbvohmsU(QString s)
{
    ui->lbtbvohmsU->setText(s);
    update();
}
void WBalanceI::setLbtbvselU(QString s)
{
    ui->lbtbvselU->setText(s);
    update();
}

void WBalanceI::idWindow(int id)
{
    emit id;
}


void WBalanceI::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wbalancei);
    }
}
