#include "inet_ai_6.h"
#include "ui_inet_ai_6.h"

Inet_AI_6::Inet_AI_6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_6)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

Inet_AI_6::~Inet_AI_6()
{
    delete ui;
}

void Inet_AI_6::idWindow(int id)
{
    emit id;
}

void Inet_AI_6::cerrar()
{
    this->close();
    emit (mi_id(_AI_6));
}

void Inet_AI_6::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit (clicked(_AI_6));
    }
}
