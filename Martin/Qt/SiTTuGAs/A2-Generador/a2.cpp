#include "a2.h"
#include "ui_a2.h"

A2::A2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A2)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "GENERADOR";
    this->clave= "A2";
}

A2::~A2()
{
    delete ui;
}
