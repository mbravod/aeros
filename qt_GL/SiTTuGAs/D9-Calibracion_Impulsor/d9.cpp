#include "d9.h"
#include "ui_d9.h"

D9::D9(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D9)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "CALIBRAC IMPULSOR";
    this->clave= "D9";
}

D9::~D9()
{
    delete ui;
}
