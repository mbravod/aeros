#include "lnet_al6.h"
#include "ui_lnet_al6.h"

LNET_Al6::LNET_Al6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al6)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_Al6::~LNET_Al6()
{
    delete ui;
}

void LNET_Al6::idWindow(int id)
{
    emit id;
}

void LNET_Al6::cerrar()
{
    this->close();
    emit (mi_id(_AL16));
}

void LNET_Al6::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AL16));
    }
}
