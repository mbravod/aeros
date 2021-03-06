#include "wbalancei.h"
#include "ui_wbalancei.h"

WBalanceI::WBalanceI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBalanceI)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una se�al para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WBalanceI::~WBalanceI()
{
    delete ui;
}

void WBalanceI::idWindow(int id)
{
    emit id;
}

void WBalanceI::cerrar()
{
    this->close();
    emit (mi_id(wbalancei));

}


void WBalanceI::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wbalancei);
    }
}
/*
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
*/
