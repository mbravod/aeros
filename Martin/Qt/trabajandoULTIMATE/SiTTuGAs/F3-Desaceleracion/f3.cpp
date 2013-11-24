#include "f3.h"
#include "ui_f3.h"

F3::F3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::F3)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "DESACEL A MIN/PASO A RALENTÍ";
    this->clave= "F3";
}

F3::~F3()
{
    delete ui;
}
