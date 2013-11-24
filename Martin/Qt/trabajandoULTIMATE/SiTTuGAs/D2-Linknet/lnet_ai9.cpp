#include "lnet_ai9.h"
#include "ui_lnet_ai9.h"

LNET_AI9::LNET_AI9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI9)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}
LNET_AI9::~LNET_AI9()
{
    delete ui;
}

void LNET_AI9::idWindow(int id)
{
       emit id;
}

void LNET_AI9::cerrar()
{
    this->close();
    emit (mi_id(_AI9));
}

void LNET_AI9::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI9));
    }
}
