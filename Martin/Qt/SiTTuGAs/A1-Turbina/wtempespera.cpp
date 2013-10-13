#include "wtempespera.h"
#include "ui_wtempespera.h"

WTempEspera::WTempEspera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempEspera)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WTempEspera::~WTempEspera()
{
    delete ui;
}

void WTempEspera::cerrar()
{
    this->close();
}
void WTempEspera::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wtempespera);
    }
}

void WTempEspera::idWindow(int id)
{
    emit id;
}
/*
void WTempEspera::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WTempEspera::setLeDemanda(QString s)
{
    ui->leDemanda->setText(s);
    update();
}
void WTempEspera::setLeRetro(QString s)
{
    ui->leRetro->setText(s);
    update();
}


QString WTempEspera::getLbIP()
{
    return ui->lbIP->text();
}
QString WTempEspera::getLeDemanda()
{
    return ui->leDemanda->text();
}
QString WTempEspera::getLeRetro()
{
    return ui->leRetro->text();
}
*/
