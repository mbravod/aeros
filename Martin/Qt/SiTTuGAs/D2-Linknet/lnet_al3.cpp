#include "lnet_al3.h"
#include "ui_lnet_al3.h"

LNET_Al3::LNET_Al3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al3)
{
    ui->setupUi(this);
}

LNET_Al3::~LNET_Al3()
{
    delete ui;
}
