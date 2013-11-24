#include "analog16_3.h"
#include "ui_analog16_3.h"

Analog16_3::Analog16_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog16_3)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Analog16_3::~Analog16_3()
{
    delete ui;
}

void Analog16_3::cerrar()
{
    this->close();
    emit(mi_id(analog16_3));
}
void Analog16_3::idWindow(int id)
{
    emit(id);
}
void Analog16_3::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog16_3);
    }
}
