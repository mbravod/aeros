#include "desc1.h"
#include "ui_desc1.h"

DESC1::DESC1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DESC1)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(cerrar()));
}

DESC1::~DESC1()
{
    delete ui;
}

void DESC1::cerrar()
{
    this->close();
    emit (cerrarVentana(false));
}

void DESC1::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        emit (clicked(true));
    }
}



