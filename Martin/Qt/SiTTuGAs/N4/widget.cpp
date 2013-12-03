#include "widget.h"
#include "ui_widget.h"

N4::N4(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

N4::~N4()
{
    delete ui;
}
