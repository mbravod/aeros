#include "b9.h"
#include "ui_b9.h"

B9::B9(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B9)
{
    ui->setupUi(this);
    this->title = "CARCAZA DE TURBINA";
    this->clave= "B9";
    header = new Header(this);
}

B9::~B9()
{
    delete ui;
}
