#include "lnet_al.h"
#include "ui_lnet_al.h"


LNET_Al::LNET_Al(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}


LNET_Al::~LNET_Al()
{
    delete ui;
}

void LNET_Al::idWindow(int id)
{
    emit id;
}

void LNET_Al::cerrar()
{
    this->close();
    emit (mi_id(_AL));
}

void LNET_Al::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AL));
    }
}
