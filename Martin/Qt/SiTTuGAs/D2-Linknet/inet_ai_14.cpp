#include "inet_ai_14.h"
#include "ui_inet_ai_14.h"

Inet_AI_14::Inet_AI_14(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_14)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}


Inet_AI_14::~Inet_AI_14()
{
    delete ui;
}

void Inet_AI_14::idWindow(int id)
{
    emit id;
}

void Inet_AI_14::cerrar()
{
    this->close();
    emit (mi_id(_AI_14));
}

void Inet_AI_14::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI_14));
    }
}
