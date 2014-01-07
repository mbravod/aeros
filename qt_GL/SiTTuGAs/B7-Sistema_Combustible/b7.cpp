#include "b7.h"
#include "ui_b7.h"

B7::B7(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B7)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "SISTEMA DE COMBUSTIBLE";
    this->clave= "B7";
}

B7::~B7()
{
    delete ui;
}
