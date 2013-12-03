#include "wprescompb.h"
#include "ui_wprescompb.h"

WPresCompB::WPresCompB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPresCompB)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WPresCompB::~WPresCompB()
{
    delete ui;
}

void WPresCompB::cerrar()
{
    this->close();
    emit (mi_id(wprescompb));
}
void WPresCompB::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wprescompb);
    }
}

void WPresCompB::idWindow(int id)
{
    emit id;
}
/*
void WPresCompB::setLbPreP25T(QString s)
{
    ui->lbPreP25T->setText(s);
    //Refrescamos en la GUI
    update();
}


void WPresCompB::setLbP25T_1(QString s)
{
    ui->lbP25T_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresCompB::setLbP25T_2(QString s)
{
    ui->lbP25T_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresCompB::setLbP25_1(QString s)
{
    ui->lbP25_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresCompB::setLbP25_2(QString s)
{
    ui->lbP25_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresCompB::setLbP25U_1(QString s)
{
    ui->lbP25U_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresCompB::setLbP25U_2(QString s)
{
    ui->lbP25U_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WPresCompB::getLbP25U_2()
{
    return ui->lbP25U_2->text();
}

QString WPresCompB::getLbP25U_1()
{
    return ui->lbP25U_1->text();
}
QString WPresCompB::getLbP25_2()
{
    return ui->lbP25_2->text();
}

QString WPresCompB::getLbP25_1()
{
    return ui->lbP25_1->text();
}

QString WPresCompB::getLbP25T_2()
{
    return ui->lbP25T_2->text();
}

QString WPresCompB::getLbP25T_1()
{
    return ui->lbP25T_1->text();
}

QString WPresCompB::getLbPreP25T()
{
    return ui->lbPreP25T->text();
}
*/
