#include "sisaguares.h"
#include "ui_sisaguares.h"

N2::N2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::SisAguaRes)
{
    ui->setupUi(this);
    activado = false;
    moving = false;
    connect(ui->btnEmergente_1,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_2,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_3,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_4,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
}

N2::~N2()
{
    delete ui;
}

void N2::ventanaEmergente()
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

void N2::ctrVentanaEmergente(bool opt)
{
    activado = opt;

}

void N2::ctrlVentanaMovimiento(bool opt)
{
    moving = opt;

}

void N2::mouseMoveEvent(QMouseEvent *e)
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

void N2::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
    }
}
