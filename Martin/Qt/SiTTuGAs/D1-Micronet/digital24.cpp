#include "digital24.h"
#include "ui_digital24.h"

Digital24::Digital24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24)
{
    flag = 0;
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
    connect(ui->btProx,SIGNAL(clicked()),this,SLOT(siguiente()));



}

Digital24::~Digital24()
{
    delete ui;
}

void Digital24::cerrar()
{
    this->close();
    emit(mi_id(digital24));
}
void Digital24::idWindow(int id)
{
    emit(id);
}

void Digital24::siguiente()
{
    switch(flag){
        case 0:
            ui->panel1->setVisible(true);
            ui->panel1_2->setVisible(false);
            ui->panel1_3->setVisible(false);
            flag = 1;
        break;
        case 1:
            ui->panel1->setVisible(false);
            ui->panel1_2->setVisible(true);
            ui->panel1_3->setVisible(false);
            flag = 2;
        break;
        case 2:
            ui->panel1->setVisible(false);
            ui->panel1_2->setVisible(false);
            ui->panel1_3->setVisible(true);
            flag = 0;
        break;
    }
    update();
}
void Digital24::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(digital24);
    }
}
