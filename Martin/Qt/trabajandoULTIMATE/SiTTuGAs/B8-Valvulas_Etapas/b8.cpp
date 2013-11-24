#include "b8.h"
#include "ui_b8.h"

B8::B8(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::B8)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "VÁLVULAS DE ETAPAS";
    this->clave= "B8";

    connect(ui->btnIMPPant,SIGNAL(clicked()),this,SLOT(detenerAnimacion()));
    connect(ui->btnHabDes,SIGNAL(clicked()),this,SLOT(comenzarAnimacion()));
    ui->flama_SectorA->setValue(0);
    ui->flama_SectorB->setValue(0);
    ui->flama_SectorC->setValue(0);
    ui->flama_SectorD->setValue(0);
    ui->flama_SectorE->setValue(0);
    ui->flama_SectorF->setValue(0);
    ui->flama_SectorG->setValue(0);
    ui->flama_SectorH->setValue(0);
    ui->flama_SectorI->setValue(0);
    ui->flama_SectorJ->setValue(0);
    ui->flama_SectorK->setValue(0);
    ui->flama_SectorL->setValue(0);
}

B8::~B8()
{
    delete ui;
}

void B8::comenzarAnimacion()
{
    //De la memoria compartida llega un 1 (encendido)
    ui->flama_SectorA->setValue(1);
    ui->flama_SectorB->setValue(1);
    ui->flama_SectorC->setValue(1);
    ui->flama_SectorD->setValue(1);
    ui->flama_SectorE->setValue(1);
    ui->flama_SectorF->setValue(1);
    ui->flama_SectorG->setValue(1);
    ui->flama_SectorH->setValue(1);
    ui->flama_SectorI->setValue(1);
    ui->flama_SectorJ->setValue(1);
    ui->flama_SectorK->setValue(1);
    ui->flama_SectorL->setValue(1);


}

void B8::detenerAnimacion()
{
    //De la memoria compartida llega un 0 (apagado)
    ui->flama_SectorA->setValue(0);
    ui->flama_SectorB->setValue(0);
    ui->flama_SectorC->setValue(0);
    ui->flama_SectorD->setValue(0);
    ui->flama_SectorE->setValue(0);
    ui->flama_SectorF->setValue(0);
    ui->flama_SectorG->setValue(0);
    ui->flama_SectorH->setValue(0);
    ui->flama_SectorI->setValue(0);
    ui->flama_SectorJ->setValue(0);
    ui->flama_SectorK->setValue(0);
    ui->flama_SectorL->setValue(0);

}
