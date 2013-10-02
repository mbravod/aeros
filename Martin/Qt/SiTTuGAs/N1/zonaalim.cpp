#include "zonaalim.h"
#include "ui_zonaalim.h"

zonaAlim::zonaAlim(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::zonaAlim)
{
    ui->setupUi(this);
    this->title = "ZONA DE ALIMENTACIÓN";
    this->clave= "N1";

   // ui->BUTTON->setStyleSheet("background : green");
}

zonaAlim::~zonaAlim()
{
    delete ui;
}
