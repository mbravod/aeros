#include "d4.h"
#include "ui_d4.h"

D4::D4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D4)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "CONDICIÓN/UTILERIAS ";
    this->clave= "D4";
}

D4::~D4()
{
    delete ui;
}
