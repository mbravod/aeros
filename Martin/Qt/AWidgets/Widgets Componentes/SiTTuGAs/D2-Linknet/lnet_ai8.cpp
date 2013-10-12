#include "lnet_ai8.h"
#include "ui_lnet_ai8.h"

LNET_AI8::LNET_AI8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_AI8)
{
    ui->setupUi(this);
}

LNET_AI8::~LNET_AI8()
{
    delete ui;
}
