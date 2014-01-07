#include "lnet_al3.h"
#include "ui_lnet_al3.h"

LNET_Al3::LNET_Al3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al3)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_Al3::~LNET_Al3()
{
    delete ui;
}

void LNET_Al3::idWindow(int id)
{
    emit id;
}

void LNET_Al3::cerrar()
{
    this->close();
    emit (mi_id(_AL3));
}

void LNET_Al3::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AL3));
    }
}
