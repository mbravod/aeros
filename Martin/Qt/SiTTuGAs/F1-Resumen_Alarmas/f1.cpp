#include "f1.h"
#include "ui_f1.h"

F1::F1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::F1)
{
    ui->setupUi(this);
    this->title = "RESUMEN DE ALARMAS";
    this->clave= "F1";
    header = new Header(this);

}

F1::~F1()
{
    delete ui;
}
