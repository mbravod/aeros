#include "wctrlcarga.h"
#include "ui_wctrlcarga.h"

WCtrlCarga::WCtrlCarga(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlCarga)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WCtrlCarga::~WCtrlCarga()
{
    delete ui;
}
void WCtrlCarga::cerrar()
{
    this->close();
}
void WCtrlCarga::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wctrlcarga);
    }
}

void WCtrlCarga::idWindow(int id)
{
    emit id;
}
/*
void WCtrlCarga::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WCtrlCarga::setLbHabilitado(QString s)
{
    ui->lbHabilitado->setText(s);
    update();
}
void WCtrlCarga::setLbRemLoc(QString s)
{
    ui->lbRemLoc->setText(s);
    update();
}
void WCtrlCarga::setLeConf(QString s)
{
    ui->leConf->setText(s);
    update();
}
void WCtrlCarga::setLeDemanda(QString s)
{
    ui->leDemanda->setText(s);
    update();
}
void WCtrlCarga::setLeReal(QString s)
{
    ui->leReal->setText(s);
    update();
}


QString WCtrlCarga::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlCarga::setLbHabilitado()
{
    return ui->lbHabilitado->text();
}
QString WCtrlCarga::setLbRemLoc()
{
    return ui->lbRemLoc->text();
}
QString WCtrlCarga::setLeConf()
{
    return ui->leConf->text();
}
QString WCtrlCarga::setLeDemanda()
{
    return ui->leDemanda->text();
}
QString WCtrlCarga::setLeReal()
{
    return ui->leReal->text();
}*/


