#include "wveln25.h"
#include "ui_wveln25.h"

WVelN25::WVelN25(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WVelN25)
{
    ui->setupUi(this);
    //this->setFlag(Qt::WA_Hover);
    //Desactivamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int)),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));



}

WVelN25::~WVelN25()
{
    delete ui;
}
void WVelN25::idWindow(int id)
{
    emit id;
}

void WVelN25::cerrar()
{
    this->close();
}

void WVelN25::mousePressEvent( QMouseEvent *event )
{

    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wveln25);
    }
}

/*
void WVelN25::setLbN25T_1(QString s)
{
    ui->lbN25T_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVelN25::setLbN25T_2(QString s)
{
    ui->lbN25T_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelN25::setLbN25_1(QString s)
{
    ui->lbN25_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelN25::setLbN25_2(QString s)
{
    ui->lbN25_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelN25::setLbN25U_1(QString s)
{
    ui->lbN25U_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelN25::setLbN25U_2(QString s)
{
    ui->lbN25U_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WVelN25::getLbN25U_2()
{
    return ui->lbN25U_2->text();
}

QString WVelN25::getLbN25U_1()
{
    return ui->lbN25U_1->text();
}

QString WVelN25::getLbN25_2()
{
    return ui->lbN25_2->text();
}

QString WVelN25::getLbN25_1()
{
    return ui->lbN25_1->text();
}

QString WVelN25::getLbN25T_2()
{
    return ui->lbN25T_2->text();
}

QString WVelN25::getLbN25T_1()
{
    return ui->lbN25T_1->text();
}
*/



