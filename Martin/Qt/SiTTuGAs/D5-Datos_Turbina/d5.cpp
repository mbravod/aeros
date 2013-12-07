#include "d5.h"
#include "ui_d5.h"

D5::D5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D5)
{
    ui->setupUi(this);

    this->title = "DATOS TURBINA";
    this->clave= "D5";
}

D5::~D5()
{
    delete ui;
}
