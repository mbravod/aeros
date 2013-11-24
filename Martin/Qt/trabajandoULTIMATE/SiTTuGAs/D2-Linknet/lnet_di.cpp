#include "lnet_di.h"
#include "ui_lnet_di.h"

LNET_DI::LNET_DI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_DI)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_DI::~LNET_DI()
{
    delete ui;
}

void LNET_DI::idWindow(int id)
{
    emit id;
}

void LNET_DI::cerrar()
{
    this->close();
    emit (mi_id(_DI));
}

void LNET_DI::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_DI));
    }
}
