#include "c3.h"
#include "ui_c3.h"

C3::C3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::C3)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "BOBINADO ESTATOR DEL GEN";
    this->clave= "C3";
}

C3::~C3()
{
    delete ui;
}
