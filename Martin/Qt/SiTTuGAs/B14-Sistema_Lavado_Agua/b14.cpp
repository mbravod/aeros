#include "b14.h"
#include "ui_b14.h"

B14::B14(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
        Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B14)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "SISTEMA DE LAVADO CON AGUA";
    this->clave= "B14";
}

void B14::NivelT(int n)
{
}

void B14::Val01(bool b)
{
}

void B14::Val02(bool b)
{
}

void B14::Val03(bool b)
{
}

void B14::Val04(bool b)
{

}

void B14:: Tiempo(double t)
{
}

void B14::EjecutaModelo()
{
}

B14::~B14()
{
}
