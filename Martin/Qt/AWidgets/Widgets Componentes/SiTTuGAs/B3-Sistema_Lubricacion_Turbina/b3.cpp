#include "b3.h"
#include "ui_b3.h"

B3::B3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B3)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "SISTEMA DE LUB. DE LA TURB.";
    this->clave= "B3";
}

void B3::Model()
{
}

void B3::STemp1(double t)
{

}

void B3::STemp2(double t)
{
}

void B3::STemp3(double t)
{
}

void B3::STemp4(double t)
{
}

void B3::STemp5(double t)
{
}

void B3::STemp6(double t)
{
}

void B3::STemp7(double t)
{

}

B3::~B3()
{
    delete ui;
}
