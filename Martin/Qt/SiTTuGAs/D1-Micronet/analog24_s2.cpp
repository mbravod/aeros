#include "analog24_s2.h"
#include "ui_analog24_s2.h"

Analog24_S2::Analog24_S2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog24_S2)
{
    flag = 0;
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btnCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
    connect(ui->btnProx,SIGNAL(clicked()),this,SLOT(siguiente()));


}

Analog24_S2::~Analog24_S2()
{
    delete ui;
}

void Analog24_S2::cerrar()
{
    this->close();
    emit(mi_id(analog25_s2));
}
void Analog24_S2::siguiente()
{
    if(flag == 0){
        ui->panel2->setVisible(true);
        ui->panel1->setVisible(false);
        flag = 1;
    }else{
        ui->panel1->setVisible(false);
        ui->panel2->setVisible(true);
        flag = 0;
    }
}
void Analog24_S2::idWindow(int id)
{
    emit(id);
}
void Analog24_S2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(analog25_s2);
    }
}
