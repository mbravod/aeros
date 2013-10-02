#include "analog24_s2.h"
#include "ui_analog24_s2.h"

Analog24_S2::Analog24_S2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog24_S2)
{
    ui->setupUi(this);
}

Analog24_S2::~Analog24_S2()
{
    delete ui;
}
