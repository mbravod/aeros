#include "a2.h"
#include "ui_a2.h"

A2::A2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::A2)
{
    ui->setupUi(this);
    header = new Header(this);
    timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(ActivarSimulacion()));
    connect(ui->btnIMPPant,SIGNAL(clicked()),this,SLOT(Iniciar()));
    valuenew = 1.0;
    this->title = "GENERADOR";
    this->clave= "A2";
}

A2::~A2()
{
    delete ui;
}

void A2::ActivarSimulacion()
{

    valuenew += valuenew*1.2;
}

void A2::Iniciar()
{
    timer->start(1500);
}
