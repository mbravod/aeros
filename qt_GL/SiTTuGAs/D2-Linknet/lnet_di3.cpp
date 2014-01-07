#include "lnet_di3.h"
#include "ui_lnet_di3.h"

LNET_DI3::LNET_DI3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_DI3)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_DI3::~LNET_DI3()
{
    delete ui;
}

void LNET_DI3::idWindow(int id)
{
    emit id;
}

void LNET_DI3::cerrar()
{
    this->close();
    emit (mi_id(_DI3));
}

void LNET_DI3::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_DI3));
    }
}
