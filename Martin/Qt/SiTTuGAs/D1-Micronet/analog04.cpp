#include "analog04.h"
#include "ui_analog04.h"

Analog04::Analog04(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog04)
{
    ui->setupUi(this);
}

Analog04::~Analog04()
{
    delete ui;
}
