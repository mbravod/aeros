#include "inet_di_4.h"
#include "ui_inet_di_4.h"

Inet_DI_4::Inet_DI_4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_DI_4)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

Inet_DI_4::~Inet_DI_4()
{
    delete ui;
}

void Inet_DI_4::idWindow(int id)
{
    emit id;
}

void Inet_DI_4::cerrar()
{
    this->close();
    emit (mi_id(_DI_4));
}

void Inet_DI_4::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_DI_4));
    }
}
