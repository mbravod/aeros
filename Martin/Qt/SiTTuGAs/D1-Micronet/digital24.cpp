#include "digital24.h"
#include "ui_digital24.h"

Digital24::Digital24(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital24)
{
    ui->setupUi(this);
}

Digital24::~Digital24()
{
    delete ui;
}
