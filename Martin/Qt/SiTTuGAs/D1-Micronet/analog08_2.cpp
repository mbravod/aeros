#include "analog08_2.h"
#include "ui_analog08_2.h"

Analog08_2::Analog08_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog08_2)
{
    ui->setupUi(this);
}

Analog08_2::~Analog08_2()
{
    delete ui;
}
