#include "analog04.h"
#include "ui_analog04.h"

Analog04::Analog04(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog04)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Analog04::~Analog04()
{
    delete ui;
}

void Analog04::cerrar(){
    this->close();
    emit(mi_id(analog04));
}

void Analog04::idWindow(int id)
{
    emit(id);
}
void Analog04::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog04);
    }
}

