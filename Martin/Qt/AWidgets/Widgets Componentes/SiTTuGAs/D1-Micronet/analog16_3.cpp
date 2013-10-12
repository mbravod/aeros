#include "analog16_3.h"
#include "ui_analog16_3.h"

Analog16_3::Analog16_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog16_3)
{
    ui->setupUi(this);
}

Analog16_3::~Analog16_3()
{
    delete ui;
}
