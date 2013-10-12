#include "analog16.h"
#include "ui_analog16.h"

Analog16::Analog16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog16)
{
    ui->setupUi(this);
}

Analog16::~Analog16()
{
    delete ui;
}
