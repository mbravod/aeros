#include "zonaalim.h"
#include "ui_zonaalim.h"

N1::N1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::zonaAlim)
{
    ui->setupUi(this);
    this->title = "ZONA DE ALIMENTACIÓN";
    this->clave= "N1";
    activado = false;
    moving = false;
    connect(ui->btRelay1,SIGNAL(clicked()),SLOT(ventanaTablaRelay()));
    connect(ui->btnEmergente_03,SIGNAL(clicked()),SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_04,SIGNAL(clicked()),SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_06,SIGNAL(clicked()),SLOT(ventanaEmergente()));
    connect(ui->btnEmergente_07,SIGNAL(clicked()),SLOT(ventanaEmergente()));
}

N1::~N1()
{
    delete ui;
}

void N1::ventanaTablaRelay()
{
    //Por implementar esta función que despliega una ventana una tabla para relay
}

void N1::ventanaEmergente()
{
    if(!activado){
        v_emergente = new DESC_2(this);
        v_emergente->setGeometry(493,450,350,110);
        v_emergente->show();
        moving = true;
        connect(v_emergente,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente(bool)));
        connect(v_emergente,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento(bool)));
        activado = true;
    }
}

void N1::ctrVentanaEmergente(bool opt)
{
        activado = opt;
}

void N1::ctrlVentanaMovimiento(bool opt)
{
        moving = opt;
}

void N1::mouseMoveEvent(QMouseEvent *e)
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

void N1::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
    }
}
