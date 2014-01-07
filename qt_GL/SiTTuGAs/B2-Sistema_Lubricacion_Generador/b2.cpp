#include "b2.h"
#include "ui_b2.h"

B2::B2(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B2)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "SISTEMA DE LUB DEL GEN";
    this->clave= "B2";
}

B2::~B2()
{
    delete ui;
}
