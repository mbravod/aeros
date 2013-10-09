#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(conectaBoton()));
    connect(ui->aInstrumentIndicator,SIGNAL(recibeId(QString)),this,SLOT(referencia(QString)));
}

Principal::~Principal()
{
    delete ui;
}


void Principal::conectaBoton(){
    //ui->aInstrumentIndicator->setValue(1);
    //
    update();
}

void Principal::referencia(QString id)
{
    ui->aInstrumentIndicator->hide();
    qDebug()<< id;
}
