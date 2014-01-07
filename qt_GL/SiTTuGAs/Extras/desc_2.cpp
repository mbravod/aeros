#include "desc_2.h"
#include "ui_desc_2.h"

DESC_2::DESC_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DESC_2)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(cerrar()));
}

DESC_2::~DESC_2()
{
    delete ui;
}

void DESC_2::cerrar()
{
    this->close();
    emit (cerrarVentana(false));
}

void DESC_2::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        emit (clicked(true));
    }
}


