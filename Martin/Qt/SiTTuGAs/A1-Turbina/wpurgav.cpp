#include "wpurgav.h"
#include "ui_wpurgav.h"

WPurgaV::WPurgaV(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPurgaV)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WPurgaV::~WPurgaV()
{
    delete ui;
}

void WPurgaV::cerrar()
{
    this->close();
}
void WPurgaV::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wpurgav);
    }
}

void WPurgaV::idWindow(int id)
{
    emit id;
}
/*
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
*/
