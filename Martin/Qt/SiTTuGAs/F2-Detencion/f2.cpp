#include "f2.h"
#include "ui_f2.h"

F2::F2(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::F2)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "DETENCIÓN NORM/DESACEL A MIN";
    this->clave= "F2";
}

F2::~F2()
{
    delete ui;
}
