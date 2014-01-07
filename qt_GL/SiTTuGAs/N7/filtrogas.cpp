#include "filtrogas.h"
#include "ui_filtrogas.h"

N7::N7(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::filtroGas)
{
    ui->setupUi(this);
    activado = false;
    moving = false;
    connect(ui->btnleAlarma_1,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarma_2,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarma_3,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarma_4,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarma_5,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarma_6,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
}

N7::~N7()
{
    delete ui;
}

void N7::ventanaEmergente()
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

void N7::ctrVentanaEmergente(bool opt)
{
       activado = opt;
}

void N7::ctrlVentanaMovimiento(bool opt)
{
        moving = opt;
}

void N7::mouseMoveEvent(QMouseEvent *e)
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

void N7::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
    }
}
