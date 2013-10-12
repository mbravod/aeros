#include "lnet_al.h"
#include "ui_lnet_al.h"

LNET_Al::LNET_Al(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Al)
{
    ui->setupUi(this);
}

LNET_Al::~LNET_Al()
{
    delete ui;
}
