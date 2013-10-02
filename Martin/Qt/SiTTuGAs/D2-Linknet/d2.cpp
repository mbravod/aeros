#include "d2.h"
#include "ui_d2.h"

D2::D2(SiTTuGAs *siTTuGAs, ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D2)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "LINKNET I/O";
    this->clave= "D2";
}

D2::~D2()
{
    delete ui;
}
