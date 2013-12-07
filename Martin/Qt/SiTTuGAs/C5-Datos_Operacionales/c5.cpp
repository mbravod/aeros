#include "c5.h"
#include "ui_c5.h"

C5::C5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::C5)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "DATOS OPERACIONALES";
    this->clave= "C5";
}

C5::~C5()
{
    delete ui;
}
