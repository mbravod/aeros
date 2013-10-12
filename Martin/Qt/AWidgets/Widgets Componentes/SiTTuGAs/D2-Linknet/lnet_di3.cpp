#include "lnet_di3.h"
#include "ui_lnet_di3.h"

LNET_DI3::LNET_DI3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_DI3)
{
    ui->setupUi(this);
}

LNET_DI3::~LNET_DI3()
{
    delete ui;
}
