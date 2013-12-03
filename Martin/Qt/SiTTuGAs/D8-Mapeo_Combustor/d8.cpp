#include "d8.h"
#include "ui_d8.h"

D8::D8(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D8)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "MAPEO COMBUSTOR";
    this->clave= "D8";
}

D8::~D8()
{
    delete ui;
}
