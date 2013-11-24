#include "a3.h"
#include "ui_a3.h"

A3::A3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A3)
{
    ui->setupUi(this);
    header = new Header(this);


    this->title = "SECUENCIA";
    this->clave= "A3";
}

A3::~A3()
{
    delete ui;
}
