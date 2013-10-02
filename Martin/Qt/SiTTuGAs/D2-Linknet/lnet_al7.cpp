#include "lnet_al7.h"
#include "ui_lnet_al7.h"

LNET_Al7::LNET_Al7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al7)
{
    ui->setupUi(this);
}

LNET_Al7::~LNET_Al7()
{
    delete ui;
}
