#include "westatorv.h"
#include "ui_westatorv.h"

WEstatorV::WEstatorV(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WEstatorV)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WEstatorV::~WEstatorV()
{
    delete ui;
}
void WEstatorV::cerrar()
{
    this->close();
}
void WEstatorV::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(westatorv);
    }
}

void WEstatorV::idWindow(int id)
{
    emit id;
}
/*
void WEstatorV::setLbVsva(QString s)
{
    ui->lbVsva->setText(s);
    update();
}
void WEstatorV::setLbVsvb(QString s)
{
    ui->lbVsvb->setText(s);
    update();
}
void WEstatorV::setLbVsvdmd(QString s)
{
    ui->lbVsvdmd->setText(s);
    update();
}
void WEstatorV::setLbVsvMa(QString s)
{
    ui->lbVsvMa->setText(s);
    update();
}
void WEstatorV::setLbVsvOhms(QString s)
{
    ui->lbVsvOhms->setText(s);
    update();
}
void WEstatorV::setLbVsvsel(QString s)
{
    ui->lbVsvsel->setText(s);
    update();
}
void WEstatorV::setLbVsvaU(QString s)
{
    ui->lbVsvaU->setText(s);
    update();
}
void WEstatorV::setLbVsvbU(QString s)
{
    ui->lbVsvbU->setText(s);
    update();
}
void WEstatorV::setLbVsvdmdU(QString s)
{
    ui->lbVsvdmdU->setText(s);
    update();
}
void WEstatorV::setLbVsvMaU(QString s)
{
    ui->lbVsvMaU->setText(s);
    update();
}
void WEstatorV::setLbVsvOhmsU(QString s)
{
    ui->lbVsvOhmsU->setText(s);
    update();
}
void WEstatorV::setLbVsvselU(QString s)
{
    ui->lbVsvselU->setText(s);
    update();
}
*/

