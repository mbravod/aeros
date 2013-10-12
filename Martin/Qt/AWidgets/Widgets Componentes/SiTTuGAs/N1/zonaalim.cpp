#include "zonaalim.h"
#include "ui_zonaalim.h"

N1::N1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::zonaAlim)
{
    ui->setupUi(this);
    this->title = "ZONA DE ALIMENTACIÓN";
    this->clave= "N1";

   // ui->BUTTON->setStyleSheet("background : green");
}

N1::~N1()
{
    delete ui;
}
