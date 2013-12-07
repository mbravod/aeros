#include "c4.h"
#include "ui_c4.h"

C4::C4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::C4)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "VIBRACIONES";
    this->clave= "C4";
}

C4::~C4()
{
    delete ui;
}
