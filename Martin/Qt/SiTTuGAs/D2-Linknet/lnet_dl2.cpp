#include "lnet_dl2.h"
#include "ui_lnet_dl2.h"

LNET_Dl2::LNET_Dl2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Dl2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

LNET_Dl2::~LNET_Dl2()
{
    delete ui;
}

void LNET_Dl2::idWindow(int id)
{
    emit id;
}

void LNET_Dl2::cerrar()
{
    this->close();
    emit (mi_id(_DL2));
}

void LNET_Dl2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_DL2));
    }
}
