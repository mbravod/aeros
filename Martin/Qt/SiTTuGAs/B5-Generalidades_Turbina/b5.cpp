#include "b5.h"
#include "ui_b5.h"

B5::B5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B5)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "GENERALIDADES DE LA TURB";
    this->clave= "B5";
}

B5::~B5()
{
    delete ui;
}
