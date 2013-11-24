#include "d6.h"
#include "ui_d6.h"

D6::D6(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D6)
{
    ui->setupUi(this);

    this->title = "DATOS TURBINA";
    this->clave= "D6";
}

D6::~D6()
{
    delete ui;
}
