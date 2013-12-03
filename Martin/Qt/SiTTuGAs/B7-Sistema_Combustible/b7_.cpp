#include "b7.h"
#include "ui_b7.h"

B7::B7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::B7)
{
    ui->setupUi(this);

    this->title = "SISTEMA DE COMBUSTIBLE";
    this->clave= "B7";
}

B7::~B7()
{
    delete ui;
}
