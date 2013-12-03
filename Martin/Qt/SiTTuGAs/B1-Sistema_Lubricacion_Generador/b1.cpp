#include "b1.h"
#include "ui_b1.h"

B1::B1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B1)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "SISTEMA DE LUB. DEL GEN.";
    this->clave= "B1";
    //qDebug()<<ui->aIndicador_15->getId();
}

B1::~B1()
{
    delete ui;
}
