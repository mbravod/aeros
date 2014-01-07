#include "lnet_ai8.h"
#include "ui_lnet_ai8.h"

LNET_AI8::LNET_AI8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI8)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_AI8::~LNET_AI8()
{
    delete ui;
}

void LNET_AI8::idWindow(int id)
{
    emit id;
}

void LNET_AI8::cerrar()
{
    this->close();
    emit (mi_id(_AI8));
}

void LNET_AI8::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI8));
    }
}
