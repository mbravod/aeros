#include "wpresdescc.h"
#include "ui_wpresdescc.h"

WPresDescC::WPresDescC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPresDescC)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WPresDescC::~WPresDescC()
{
    delete ui;
}

void WPresDescC::cerrar()
{
    this->close();
}
void WPresDescC::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wpresdescc);
    }
}

void WPresDescC::idWindow(int id)
{
    emit id;
}
/*
void WPresDescC::setLbPreDESCT(QString s)
{
    ui->lbPreDESCT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESCT_1(QString s)
{
    ui->lbDESCT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESCT_2(QString s)
{
    ui->lbDESCT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESC_1(QString s)
{
    ui->lbDESC_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESC_2(QString s)
{
    ui->lbDESC_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESCU_1(QString s)
{
    ui->lbDESCU_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresDescC::setLbDESCU_2(QString s)
{
    ui->lbDESCU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WPresDescC::getLbDESCU_2()
{
    return ui->lbDESCU_2->text();
}

QString WPresDescC::getLbDESCU_1()
{
    return ui->lbDESCU_1->text();
}

QString WPresDescC::getLbDESC_2()
{
    return ui->lbDESC_2->text();
}

QString WPresDescC::getLbDESC_1()
{
    return ui->lbDESC_1->text();
}

QString WPresDescC::getLbDESCT_2()
{
    return ui->lbDESCT_2->text();
}

QString WPresDescC::getLbDESCT_1()
{
    return ui->lbDESCT_1->text();
}

QString WPresDescC::getLbPreDESCT()
{
    return ui->lbPreDESCT->text();
}*/
