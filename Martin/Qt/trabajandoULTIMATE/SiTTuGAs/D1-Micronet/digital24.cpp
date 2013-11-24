#include "digital24.h"
#include "ui_digital24.h"

Digital24::Digital24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Digital24::~Digital24()
{
    delete ui;
}

void Digital24::cerrar()
{
    this->close();
    emit(mi_id(digital24));
}
void Digital24::idWindow(int id)
{
    emit(id);
}
void Digital24::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(digital24);
    }
}
