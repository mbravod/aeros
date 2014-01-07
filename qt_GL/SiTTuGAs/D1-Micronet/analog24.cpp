#include "analog24.h"
#include "ui_analog24.h"
#include <QDebug>

Analog24::Analog24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog24)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
    connect(ui->btnProx,SIGNAL(clicked()),this,SLOT(siguiente()));
    flag = 0;
}

Analog24::~Analog24()
{
    delete ui;
}

void Analog24::cerrar()
{
    this->close();
    emit(mi_id(analog24));
}
void Analog24::siguiente()
{
    if(flag == 0){
        ui->panel2->setVisible(true);
        ui->panel1->setVisible(false);
        flag = 1;
    }else{
        ui->panel1->setVisible(true);
        ui->panel2->setVisible(false);
        flag = 0;
    }
}
void Analog24::idWindow(int id)
{
    emit(id);
}
void Analog24::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog24);
    }
}
