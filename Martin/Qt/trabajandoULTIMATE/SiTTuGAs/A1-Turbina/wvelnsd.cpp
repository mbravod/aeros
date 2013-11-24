#include "wvelnsd.h"
#include "ui_wvelnsd.h"

WVelNSD::WVelNSD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WVelNSD)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));


}

WVelNSD::~WVelNSD()
{
    delete ui;
}

void WVelNSD::idWindow(int id)
{
    emit id;
}

void WVelNSD::cerrar()
{
    this->close();

    emit(mi_id(wvelnsd));
}

void WVelNSD::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
            emit clicked(wvelnsd);
    }
}
/*
void WVelNSD::setLbVelNSDT(QString s)
{
    ui->lbVelNSDT->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVelNSD::setLbNSDT_1(QString s)
{
    ui->lbNSDT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelNSD::setLbNSDT_2(QString s)
{
    ui->lbNSDT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelNSD::setLbNSD_1(QString s)
{
    ui->lbNSDT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelNSD::setLbNSD_2(QString s)
{
    ui->lbNSDT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVelNSD::setLbNSDU_1(QString s)
{
    ui->lbNSDU_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVelNSD::setLbNSDU_2(QString s)
{
    ui->lbNSDU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WVelNSD::getLbNSDU_2()
{
    return ui->lbNSDU_2->text();
}

QString WVelNSD::getLbNSDU_1()
{
    return ui->lbNSDU_1->text();
}


QString WVelNSD::getLbNSD_2()
{
    return ui->lbNSDT_2->text();
}

QString WVelNSD::getLbNSD_1()
{
    return ui->lbNSDT_1->text();
}

QString WVelNSD::getLbNSDT_2()
{
    return ui->lbNSDT_2->text();
}

QString WVelNSD::getLbNSDT_1()
{
    return ui->lbNSDT_1->text();
}

QString WVelNSD::getLbVelNSDT()
{
    return ui->lbVelNSDT->text();
}
*/
