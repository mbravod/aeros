#include "e3.h"
#include "ui_e3.h"

E3::E3(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::E3)
{
    ui->setupUi(this);

    this->title = "TENDENCIA ACEITE";
    this->clave= "E3";
}

E3::~E3()
{
    delete ui;
}
