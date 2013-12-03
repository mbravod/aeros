#include "compresorgas.h"
#include "ui_compresorgas.h"



N6::N6(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::CompresorGas)
{
    ui->setupUi(this);
    activado = false;
    moving = false;
    connect(ui->btnleAlam,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlam2,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlam3,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
}

N6::~N6()
{
    delete ui;
}

void N6::ventanaEmergente()
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

void N6::ctrVentanaEmergente(bool opt)
{
    activado = opt;
}

void N6::ctrlVentanaMovimiento(bool opt)
{
    moving = opt;
}

void N6::mouseMoveEvent(QMouseEvent *e)
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
}

void N6::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
    }
}
