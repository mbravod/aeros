#include "analog16.h"
#include "ui_analog16.h"

Analog16::Analog16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog16)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Analog16::~Analog16()
{
    delete ui;
}

void Analog16::cerrar()
{
    this->close();
    emit(mi_id(analog16));
}
void Analog16::idWindow(int id)
{
    emit(id);
}
void Analog16::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog16);
    }
}
