#include "wtempadm.h"
#include "ui_wtempadm.h"

WTempADM::WTempADM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempADM)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WTempADM::~WTempADM()
{
    delete ui;
}

void WTempADM::cerrar()
{
    this->close();
    emit(mi_id(wtempadm));
}
void WTempADM::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wtempadm);
    }
}

void WTempADM::idWindow(int id)
{
    emit id;
}
/*
void WTempADM::setLbTemADMT(QString s)
{
    ui->lbTemADMT->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempADM::setLbADMT_1(QString s)
{
    ui->lbADMT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempADM::setLbADMT_2(QString s)
{
    ui->lbADMT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempADM::setLbADM_1(QString s)
{
    ui->lbADM_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempADM::setLbADM_2(QString s)
{
    ui->lbADM_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempADM::setLbADMU_1(QString s)
{
    ui->lbADMU_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempADM::setLbADMU_2(QString s)
{
    ui->lbADMU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WTempADM::getLbADMU_2()
{
    return ui->lbADMU_2->text();
}

QString WTempADM::getLbADMU_1()
{
    return ui->lbADMU_1->text();
}

QString WTempADM::getLbADM_2()
{
    return ui->lbADM_2->text();
}

QString WTempADM::getLbADM_1()
{
    return ui->lbADM_1->text();
}


QString WTempADM::getLbADMT_2()
{
    return ui->lbADMT_2->text();
}

QString WTempADM::getLbADMT_1()
{
    return ui->lbADMT_1->text();
}


QString WTempADM::getLbTemADMT()
{
    return ui->lbTemADMT->text();
}*/
