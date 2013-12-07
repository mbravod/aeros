#include "sistaguacontrain.h"
#include "ui_sistaguacontrain.h"

N8::N8(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::SistAguaContrain)
{
    ui->setupUi(this);
    ui->setupUi(this);
    activado = false;
    moving = false;

    activado1 = false;
    moving1 = false;

    connect(ui->btnleAlarm,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarm_2,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarm_3,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarm_4,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarm_5,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));
    connect(ui->btnleAlarm_6,SIGNAL(clicked()),this,SLOT(ventanaEmergente()));

    connect(ui->btnleAlarm_7,SIGNAL(clicked()),this,SLOT(ventanaEmergente1()));
    connect(ui->btnleAlarm_8,SIGNAL(clicked()),this,SLOT(ventanaEmergente1()));
}

N8::~N8()
{
    delete ui;
}

void N8::ventanaEmergente()
{
    if(!activado){
        v_emergente = new BOB_DIGITAL_PF(this);
        v_emergente->setGeometry(493,450,350,110);
        v_emergente->show();
        connect(v_emergente,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente(bool)));
        connect(v_emergente,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento(bool)));
        activado = true;
    }
}

void N8::ctrVentanaEmergente(bool opt)
{
    activado = opt;
}

void N8::ctrlVentanaMovimiento(bool opt)
{
    moving = opt;
}

void N8::ventanaEmergente1()
{
    if(!activado1){
        v_emergente1 = new BOB_DIGITAL_PF1(this);
        v_emergente1->setGeometry(493,450,350,110);
        v_emergente1->show();
        connect(v_emergente1,SIGNAL(cerrarVentana(bool)),this,SLOT(ctrVentanaEmergente1(bool)));
        connect(v_emergente1,SIGNAL(clicked(bool)),this,SLOT(ctrlVentanaMovimiento1(bool)));
        activado1 = true;
    }
}

void N8::ctrVentanaEmergente1(bool opt)
{
       activado1 = opt;
}

void N8::ctrlVentanaMovimiento1(bool opt)
{
     moving1 = opt;
}

void N8::mouseMoveEvent(QMouseEvent *e)
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
}

void N8::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        //Fijamos el identificador como no seleccionado
        moving = false;
        moving1 = false;
    }
}
