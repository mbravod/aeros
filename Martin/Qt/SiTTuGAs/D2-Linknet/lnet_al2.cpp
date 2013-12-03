#include "lnet_al2.h"
#include "ui_lnet_al2.h"

lnet_al2::lnet_al2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lnet_al2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

lnet_al2::~lnet_al2()
{
    delete ui;
}

void lnet_al2::idWindow(int id)
{
    emit id;
}

void lnet_al2::cerrar()
{
    this->close();
    emit (mi_id(_AL2));
}

void lnet_al2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AL2));
    }
}
