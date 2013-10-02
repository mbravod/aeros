#include "lnet_al5.h"
#include "ui_lnet_al5.h"

LNET_Al5::LNET_Al5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al5)
{
    ui->setupUi(this);
}

LNET_Al5::~LNET_Al5()
{
    delete ui;
}
