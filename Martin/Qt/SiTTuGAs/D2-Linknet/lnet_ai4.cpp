#include "lnet_ai4.h"
#include "ui_lnet_ai4.h"

LNET_AI4::LNET_AI4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI4)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_AI4::~LNET_AI4()
{
    delete ui;
}

void LNET_AI4::idWindow(int id)
{
    emit id;
}

void LNET_AI4::cerrar()
{
    this->close();
    emit (mi_id(_AI4));
}

void LNET_AI4::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI4));
    }
}
