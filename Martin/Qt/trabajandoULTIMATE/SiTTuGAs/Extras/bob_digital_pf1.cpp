#include "bob_digital_pf1.h"
#include "ui_bob_digital_pf1.h"

BOB_DIGITAL_PF1::BOB_DIGITAL_PF1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BOB_DIGITAL_PF1)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(cerrar()));
}

BOB_DIGITAL_PF1::~BOB_DIGITAL_PF1()
{
    delete ui;
}

void BOB_DIGITAL_PF1::cerrar()
{
    this->close();
    emit (cerrarVentana(false));

}

void BOB_DIGITAL_PF1::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        emit (clicked(true));
    }
}


