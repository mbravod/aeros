#include "lnet_di.h"
#include "ui_lnet_di.h"

LNET_DI::LNET_DI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_DI)
{
    ui->setupUi(this);
}

LNET_DI::~LNET_DI()
{
    delete ui;
}
