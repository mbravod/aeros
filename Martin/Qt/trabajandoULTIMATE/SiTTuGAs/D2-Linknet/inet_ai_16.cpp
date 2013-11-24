#include "inet_ai_16.h"
#include "ui_inet_ai_16.h"

Inet_AI_16::Inet_AI_16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_16)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

Inet_AI_16::~Inet_AI_16()
{
    delete ui;
}

void Inet_AI_16::idWindow(int id)
{
    emit id;
}

void Inet_AI_16::cerrar()
{
    this->close();
    emit (mi_id(_AI_16));
}

void Inet_AI_16::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI_16));
    }
}
