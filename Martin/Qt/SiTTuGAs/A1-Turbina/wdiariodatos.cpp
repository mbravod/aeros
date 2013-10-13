#include "wdiariodatos.h"
#include "ui_wdiariodatos.h"

WDiarioDatos::WDiarioDatos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WDiarioDatos)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WDiarioDatos::~WDiarioDatos()
{
    delete ui;
}
void WDiarioDatos::cerrar()
{
    this->close();
}
void WDiarioDatos::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wdiariodatos);
    }
}

void WDiarioDatos::idWindow(int id)
{
    emit id;
}

/*
void WDiarioDatos::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WDiarioDatos::setLeAlto(QString s)
{
    ui->leAlto->setText(s);
    update();
}
void WDiarioDatos::setLeInicio(QString s)
{
    ui->leInicio->setText(s);
    update();
}

QString WDiarioDatos::getLbIP()
{
    return ui->lbIP->text();
}
QString WDiarioDatos::getLeInicio()
{
    return ui->leInicio->text();
}
QString WDiarioDatos::getLeAlto()
{
    return ui->leAlto->text();
}

*/
