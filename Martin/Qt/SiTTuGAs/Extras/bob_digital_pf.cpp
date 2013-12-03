#include "bob_digital_pf.h"
#include "ui_bob_digital_pf.h"

BOB_DIGITAL_PF::BOB_DIGITAL_PF(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BOB_DIGITAL_PF)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(cerrar()));
}

BOB_DIGITAL_PF::~BOB_DIGITAL_PF()
{
    delete ui;
}

void BOB_DIGITAL_PF::cerrar()
{
    this->close();
    emit (cerrarVentana(false));
}

void BOB_DIGITAL_PF::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        emit (clicked(true));
    }
}

