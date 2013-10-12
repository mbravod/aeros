#include "compresorgas.h"
#include "ui_compresorgas.h"

N6::N6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompresorGas)
{
    ui->setupUi(this);
}

N6::~N6()
{
    delete ui;
}
