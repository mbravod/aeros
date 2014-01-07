#include "b12.h"
#include "ui_b12.h"

B12::B12(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B12)
{
    ui->setupUi(this);
    this->title = "PROTECCIÓN CONTRA INCENDIOS";
    this->clave= "B12";
    header = new Header(this);
}

B12::~B12()
{
    delete ui;
}
