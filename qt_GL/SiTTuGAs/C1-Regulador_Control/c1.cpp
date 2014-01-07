#include "c1.h"
#include "ui_c1.h"

C1::C1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::C1)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "REGULADOR DE CONTROL";
    this->clave= "C1";
}

C1::~C1()
{
    delete ui;
}
