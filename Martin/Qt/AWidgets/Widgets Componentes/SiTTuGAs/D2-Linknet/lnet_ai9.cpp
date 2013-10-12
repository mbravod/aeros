#include "lnet_ai9.h"
#include "ui_lnet_ai9.h"

LNET_AI9::LNET_AI9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI9)
{
    ui->setupUi(this);
}

LNET_AI9::~LNET_AI9()
{
    delete ui;
}
