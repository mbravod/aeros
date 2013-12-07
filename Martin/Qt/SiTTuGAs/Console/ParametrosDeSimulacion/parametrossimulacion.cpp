#include "parametrossimulacion.h"
#include "ui_parametrossimulacion.h"
#include "BitaC/BitaC.h"

ParametrosSimulacion::ParametrosSimulacion(QWidget *parent,HTTPRequest *s) :
    QDialog(parent),
    ui(new Ui::ParametrosSimulacion)
{

    ui->setupUi(this);
//    m_shrdMem = s;
    connect(ui->slider,SIGNAL(sliderMoved(int)),this,SLOT(sliderValChanged(int)));
    //updateSlider(shrdMem->getI(PlayPauseConst));
}

void ParametrosSimulacion::updateSlider(int pos){
    switch(pos){

    case 997:
        break;
    case 998:
        break;
    case 999:
        break;
    case 3:
        break;
    case 1002:
        break;
    case 1003:
        break;
    case 1004:
        break;
    }
}

void ParametrosSimulacion::sliderValChanged(int ival){
    switch (ival){
    case -3:
        ui->sliderval->setText("1/8");
        break;
    case -2:
        ui->sliderval->setText("1/4");
        break;
    case -1:
        ui->sliderval->setText("1/2");
        break;
    case 0:
        ui->sliderval->setText("1");
        break;
    case 1:
        ui->sliderval->setText("2");
        break;
    case 2:
        ui->sliderval->setText("3");
        break;
    case 3:
        ui->sliderval->setText("4");
        break;
    }
}

//Conversion de Flotante a cadena
QString ParametrosSimulacion::ftoa(float f)
{
    QString str = QString("%1").arg(f);
    return str;
}

ParametrosSimulacion::~ParametrosSimulacion()
{
    delete ui;
}

void ParametrosSimulacion::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
