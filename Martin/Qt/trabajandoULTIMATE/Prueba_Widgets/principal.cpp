#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
    connect(ui->btnAlarma,SIGNAL(clicked()),this,SLOT(conectaAlarma()));
    connect(ui->btnNormal,SIGNAL(clicked()),this,SLOT(conectaNormal()));
    connect(ui->aInstrumentIndicator,SIGNAL(recibeId(QString)),this,SLOT(referencia(QString)));
}

Principal::~Principal()
{
    delete ui;
}


void Principal::conectaAlarma(){
    ui->aInstrumentIndicator->setValue(1);
    //
    update();
}

void Principal::conectaNormal()
{
}

void Principal::referencia(QString id)
{
    ui->aInstrumentIndicator->hide();
    qDebug()<< id;
}
