#include "c2.h"
#include "ui_c2.h"

C2::C2(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::C2)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "TEMP DE ENTRADA DE LA TURB";
    this->clave= "C2";
}

C2::~C2()
{
    delete ui;
}
