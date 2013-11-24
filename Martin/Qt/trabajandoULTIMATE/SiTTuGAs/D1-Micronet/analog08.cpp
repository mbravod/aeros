#include "analog08.h"
#include "ui_analog08.h"

Analog08::Analog08(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog08)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Analog08::~Analog08()
{
    delete ui;
}

void Analog08::cerrar()
{
    this->close();
    emit(mi_id(analog08));
}
void Analog08::idWindow(int id)
{
    emit(id);
}

void Analog08::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog08);
    }
}
