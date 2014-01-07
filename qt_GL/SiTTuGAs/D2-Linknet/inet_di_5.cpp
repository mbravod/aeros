#include "inet_di_5.h"
#include "ui_inet_di_5.h"

Inet_DI_5::Inet_DI_5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_DI_5)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

Inet_DI_5::~Inet_DI_5()
{
    delete ui;
}

void Inet_DI_5::idWindow(int id)
{
    emit id;
}

void Inet_DI_5::cerrar()
{
    this->close();
    emit (mi_id(_DI_5));
}

void Inet_DI_5::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_DI_5));
    }
}
