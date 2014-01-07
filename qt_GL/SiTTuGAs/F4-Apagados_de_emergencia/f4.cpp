#include "f4.h"
#include "ui_f4.h"

F4::F4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::F4)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "APAGADOS DE EMERGENCIA";
    this->clave= "F4";
}

F4::~F4()
{
    delete ui;
}
