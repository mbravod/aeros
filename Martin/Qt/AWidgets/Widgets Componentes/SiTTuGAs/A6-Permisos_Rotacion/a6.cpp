#include "a6.h"
#include "ui_a6.h"

A6::A6(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A6)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "PERMISOS DE ROTACIÓN Y LAVDO DE AGUA";
    this->clave= "A6";
}

A6::~A6()
{
    delete ui;
}
