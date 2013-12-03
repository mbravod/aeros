#include "b4.h"
#include "ui_b4.h"

B4::B4(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B4)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "ARRANCADOR HIDRAULICO";
    this->clave= "B4";
}

B4::~B4()
{
    delete ui;
}
