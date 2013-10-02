#include "analog08.h"
#include "ui_analog08.h"

Analog08::Analog08(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Analog08)
{
    ui->setupUi(this);
}

Analog08::~Analog08()
{
    delete ui;
}
