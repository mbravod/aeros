#include "analog24.h"
#include "ui_analog24.h"

Analog24::Analog24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog24)
{
    ui->setupUi(this);
}

Analog24::~Analog24()
{
    delete ui;
}
