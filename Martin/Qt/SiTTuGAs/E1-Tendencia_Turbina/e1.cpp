#include "e1.h"
#include "ui_e1.h"

E1::E1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::E1)
{
    ui->setupUi(this);

    this->title = "TENDENCIA TURBINA";
    this->clave= "E1";
}

E1::~E1()
{
    delete ui;
}
