#include "lnet_al6.h"
#include "ui_lnet_al6.h"

LNET_Al6::LNET_Al6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al6)
{
    ui->setupUi(this);
}

LNET_Al6::~LNET_Al6()
{
    delete ui;
}
