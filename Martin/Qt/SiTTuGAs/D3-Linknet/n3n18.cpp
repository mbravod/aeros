#include "n3n18.h"
#include "ui_n3n18.h"

N3N18::N3N18(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::N3N18)
{
    ui->setupUi(this);   //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}



void N3N18::cerrar(){
    this->close();
    emit(mi_id(analog04));
}

void N3N18::idWindow(int id)
{
    emit(id);
}
void N3N18::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog04);
    }
}

N3N18::~N3N18()
{
    delete ui;
}
