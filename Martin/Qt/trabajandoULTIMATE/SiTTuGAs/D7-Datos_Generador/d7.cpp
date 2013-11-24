#include "d7.h"
#include "ui_d7.h"

D7::D7(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D7)
{
    ui->setupUi(this);

    this->title = "DATOS DEL GENERADOR";
    this->clave= "D7";
}

D7::~D7()
{
    delete ui;
}
