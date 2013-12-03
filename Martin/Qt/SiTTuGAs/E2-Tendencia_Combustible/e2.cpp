#include "e2.h"
#include "ui_e2.h"

E2::E2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::E2)
{
    ui->setupUi(this);

    this->title = "TENDENCIA COMBUSTIBLE";
    this->clave= "E2";
}

E2::~E2()
{
    delete ui;
}
