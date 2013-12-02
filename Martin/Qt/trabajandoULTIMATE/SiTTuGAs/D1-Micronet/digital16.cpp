#include "digital16.h"
#include "ui_digital16.h"

Digital16::Digital16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital16)
{
    flag = 0;
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btnCerrar_2,SIGNAL(clicked()),this,SLOT(cerrar()));
    connect(ui->btnProx_2,SIGNAL(clicked()),this,SLOT(siguiente()));

}

Digital16::~Digital16()
{
    delete ui;
}

void Digital16::cerrar()
{
    this->close();
    emit(mi_id(digital16));
}
void Digital16::idWindow(int id)
{
    emit(id);
}

void Digital16::siguiente()
{
    switch(flag){
        case 0:
                ui->panel1->setVisible(true);
                ui->panel2->setVisible(false);
                ui->panel3->setVisible(false);
                ui->panel4->setVisible(false);
                flag = 1;
         break;
    case 1:
            ui->panel1->setVisible(false);
            ui->panel2->setVisible(true);
            ui->panel3->setVisible(false);
            ui->panel4->setVisible(false);
            flag = 2;
     break;
    case 2:
            ui->panel1->setVisible(false);
            ui->panel2->setVisible(false);
            ui->panel3->setVisible(true);
            ui->panel4->setVisible(false);
            flag = 3;
     break;
    case 3:
            ui->panel1->setVisible(false);
            ui->panel2->setVisible(false);
            ui->panel3->setVisible(false);
            ui->panel4->setVisible(true);
            flag = 0;
     break;
    }
    update();
}
void Digital16::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(digital16);
    }
}
