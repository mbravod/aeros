#include "compresorgas.h"
#include "ui_compresorgas.h"

CompresorGas::CompresorGas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompresorGas)
{
    ui->setupUi(this);
}

CompresorGas::~CompresorGas()
{
    delete ui;
}
