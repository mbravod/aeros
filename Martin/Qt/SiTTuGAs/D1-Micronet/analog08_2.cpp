#include "analog08_2.h"
#include "ui_analog08_2.h"

Analog08_2::Analog08_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog08_2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Analog08_2::~Analog08_2()
{
    delete ui;
}

void Analog08_2::cerrar()
{
    this->close();
    emit(mi_id(analog08_2));
}
void Analog08_2::idWindow(int id)
{
    emit(id);
}
void Analog08_2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog08_2);
    }
}
