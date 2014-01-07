#include "sisgascomb.h"
#include "ui_sisgascomb.h"


N3::N3(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
       Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::SisGasComb)
{
    ui->setupUi(this);
    activado = false;
    moving = false;
    activado1 = false;
    moving1 = false;
    activado2 = false;
    moving2 = false;
    activado3 = false;
    moving3 = false;

    connect(ui->btnleAlarma_1,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));

    connect(ui->btnleAlarma_01,SIGNAL(clicked()),this,SLOT(ventanaEmergente1()));
    connect(ui->btnleAlarma_02,SIGNAL(clicked()),this,SLOT(ventanaEmergente1()));

    connect(ui->btnleAlarma_03,SIGNAL(clicked()),this,SLOT(ventanaEmergente2()));
    connect(ui->btnleAlarma_04,SIGNAL(clicked()),this,SLOT(ventanaEmergente2()));

    connect(ui->btnDisparo,SIGNAL(clicked()),this,SLOT(ventanaEmergente3()));
}

N3::~N3()
{
    delete ui;
}

void N3::ventanaEmergente()
{
    if(!activado){
        v_emergente = new BOB_DIGITAL_PF(this);
        v_emergente->setGeometry(493,450,350,110);
        v_emergente->show();
        moving = true;
        connect(v_emergente,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente(bool)));
        connect(v_emergente,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento(bool)));
        activado = true;
    }
}

void N3::ctrVentanaEmergente(bool opt)
{
     activado = opt;
}

void N3::ctrlVentanaMovimiento(bool opt)
{
    moving = opt;
}

void N3::ventanaEmergente1()
{
    if(!activado1){
        v_emergente1 = new BOB_DIGITAL_PF1(this);
        v_emergente1->setGeometry(493,450,350,110);
        v_emergente1->show();
        moving1 = true;
        connect(v_emergente1,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente1(bool)));
        connect(v_emergente1,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento1(bool)));
        activado1 = true;
    }
}

void N3::ctrVentanaEmergente1(bool opt)
{
    activado1 = opt;
}

void N3::ctrlVentanaMovimiento1(bool opt)
{
    moving1 = opt;
}

void N3::ventanaEmergente2()
{
    if(!activado2){
        v_emergente2 = new DESC1(this);
        v_emergente2->setGeometry(493,450,350,110);
        v_emergente2->show();
        moving2 = true;
        connect(v_emergente2,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente2(bool)));
        connect(v_emergente2,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento2(bool)));
        activado2 = true;
    }
}

void N3::ctrVentanaEmergente2(bool opt)
{
      activado2 = opt;
}

void N3::ctrlVentanaMovimiento2(bool opt)
{
      moving2 = opt;
}

void N3::ventanaEmergente3()
{
    if(!activado3){
        v_emergente3 = new DESC_2(this);
        v_emergente3->setGeometry(493,450,350,110);
        v_emergente3->show();
        moving3 = true;
        connect(v_emergente3,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente3(bool)));
        connect(v_emergente3,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento3(bool)));
        activado3 = true;
    }
}

void N3::ctrVentanaEmergente3(bool opt)
{
      activado3 = opt;
}

void N3::ctrlVentanaMovimiento3(bool opt)
{
      moving3 = opt;
}

void N3::mouseMoveEvent(QMouseEvent *e)
{
    if(activado){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            if(moving){
                v_emergente->move((posX- (v_emergente->width()/2)),posY);
            }
        }
    }

    if(activado1){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            if(moving1){
                v_emergente1->move((posX- (v_emergente1->width()/2)),posY);
            }
        }
    }

    if(activado2){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            if(moving2){
                v_emergente2->move((posX- (v_emergente2->width()/2)),posY);
            }
        }
    }
    if(activado3){
        //Dimensiones de la ventana
        posX = e->x();
        posY = e->y();
        //Validamos que la ventana no se salga fuera de un rango preestablecido (de acuerdo a la usabilidad del sistema)
        if(80 <= posX && posX <= 940 && 0 <= posY  && posY <= 520)
        {
            if(moving3){
                v_emergente3->move((posX- (v_emergente3->width()/2)),posY);
            }
        }
    }
}

void N3::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
        moving1 = false;
        moving2 = false;
        moving3 = false;
    }
}
