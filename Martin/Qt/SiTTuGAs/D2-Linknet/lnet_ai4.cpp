#include "lnet_ai4.h"
#include "ui_lnet_ai4.h"

LNET_AI4::LNET_AI4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI4)
{
    ui->setupUi(this);
}

LNET_AI4::~LNET_AI4()
{
    delete ui;
}
