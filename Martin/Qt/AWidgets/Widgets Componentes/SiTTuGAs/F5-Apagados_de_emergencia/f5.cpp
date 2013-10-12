#include "f5.h"
#include "ui_f5.h"

F5::F5(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::F5)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "APAGADOS DE EMERGENCIA";
    this->clave= "F5";
}

F5::~F5()
{
    delete ui;
}
