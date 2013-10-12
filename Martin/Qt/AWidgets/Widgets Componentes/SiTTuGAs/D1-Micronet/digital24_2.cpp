#include "digital24_2.h"
#include "ui_digital24_2.h"

Digital24_2::Digital24_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24_2)
{
    ui->setupUi(this);
}

Digital24_2::~Digital24_2()
{
    delete ui;
}
