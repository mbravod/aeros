#include "d3.h"
#include "ui_d3.h"

D3::D3(SiTTuGAs *siTTuGAs, ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D3)
{
    ui->setupUi(this);
    header = new Header(this);

    this->title = "LINKNET I/O";
    this->clave= "D3";
}

D3::~D3()
{
    delete ui;
}
