#include "a5.h"
#include "ui_a5.h"

A5::A5(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A5)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "PERMISOS DE ARRANQUE DE TURB";
    this->clave= "A5";
}

A5::~A5()
{
    delete ui;
}
