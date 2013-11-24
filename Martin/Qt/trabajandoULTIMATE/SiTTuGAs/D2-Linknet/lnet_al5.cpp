#include "lnet_al5.h"
#include "ui_lnet_al5.h"

LNET_Al5::LNET_Al5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al5)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_Al5::~LNET_Al5()
{
    delete ui;
}

void LNET_Al5::idWindow(int id)
{
    emit id;
}

void LNET_Al5::cerrar()
{
    this->close();
    emit (mi_id(_AL15));
}

void LNET_Al5::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AL15));
    }
}
