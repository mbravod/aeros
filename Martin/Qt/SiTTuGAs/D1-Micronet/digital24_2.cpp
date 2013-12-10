#include "digital24_2.h"
#include "ui_digital24_2.h"

Digital24_2::Digital24_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24_2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
    connect(ui->btProx,SIGNAL(clicked()),this,SLOT(siguiente()));
    flag = 1;
}

Digital24_2::~Digital24_2()
{
    delete ui;
}

void Digital24_2::cerrar()
{
    this->close();
    emit(mi_id(digital24_2));
}
void Digital24_2::idWindow(int id)
{
    emit(id);
}

void Digital24_2::siguiente()
{
    switch(flag){

    case 1:
            ui->panel1->setVisible(false);
            ui->panel2->setVisible(true);
            ui->panel3->setVisible(false);
            flag = 2;
     break;
    case 2:
            ui->panel1->setVisible(false);
            ui->panel2->setVisible(false);
            ui->panel3->setVisible(true);
            flag = 0;
     break;
    default:
            ui->panel1->setVisible(true);
            ui->panel2->setVisible(false);
            ui->panel3->setVisible(false);
            flag = 1;
    }
    update();

}
void Digital24_2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(digital24_2);
    }
}
