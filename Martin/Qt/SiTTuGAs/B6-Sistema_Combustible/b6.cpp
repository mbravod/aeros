#include "b6.h"
#include "ui_b6.h"

B6::B6(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B6)
{
    ui->setupUi(this);

    this->title = "SISTEMA DE COMBUSTIBLE";
    this->clave= "B6";
    header = new Header(this);
}

B6::~B6()
{
    delete ui;
}
