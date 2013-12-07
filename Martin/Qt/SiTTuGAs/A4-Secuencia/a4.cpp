#include "a4.h"
#include "ui_a4.h"

A4::A4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A4)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "SECUENCIA";
    this->clave= "A4";
}

A4::~A4()
{
    delete ui;
}
