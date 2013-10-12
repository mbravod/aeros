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
    connect(ui->btnIMPPant_2,SIGNAL(clicked()),this,SLOT(comenzarAnimacion()));
    connect(ui->btnIMPPant,SIGNAL(clicked()),this,SLOT(detenerAnimacion()));
}

B8::~B8()
{
    delete ui;
}

void B8::comenzarAnimacion()
{
    ui->ventilador->setActivar(true);
    ui->ventilador1->setActivar(true);
    ui->ventilador2->setActivar(true);
    ui->ventilador3->setActivar(true);
    ui->ventilador4->setActivar(true);
    ui->ventilador5->setActivar(true);
    ui->ventilador6->setActivar(true);
    ui->ventilador7->setActivar(true);
    ui->ventilador8->setActivar(true);
    ui->ventilador9->setActivar(true);
    ui->ventilador10->setActivar(true);
    ui->ventilador11->setActivar(true);
    ui->ventilador12->setActivar(true);
    ui->ventilador13->setActivar(true);
    ui->ventilador14->setActivar(true);
}

void B8::detenerAnimacion()
{
    ui->ventilador->setActivar(false);
    ui->ventilador1->setActivar(false);
    ui->ventilador2->setActivar(false);
    ui->ventilador3->setActivar(false);
    ui->ventilador4->setActivar(false);
    ui->ventilador5->setActivar(false);
    ui->ventilador6->setActivar(false);
    ui->ventilador7->setActivar(false);
    ui->ventilador8->setActivar(false);
    ui->ventilador9->setActivar(false);
    ui->ventilador10->setActivar(false);
    ui->ventilador11->setActivar(false);
    ui->ventilador12->setActivar(false);
    ui->ventilador13->setActivar(false);
    ui->ventilador14->setActivar(false);
}
