#include "digital24_2.h"
#include "ui_digital24_2.h"

Digital24_2::Digital24_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24_2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

Digital24_2::~Digital24_2()
{
    delete ui;
}

void Digital24_2::cerrar()
{
    this->close();
    emit(mi_id(digital24_2));
}
void Digital24_2::idWindow(int id)
{
    emit(id);
}
void Digital24_2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(digital24_2);
    }
}
