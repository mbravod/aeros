#include "lnet_al2.h"
#include "ui_lnet_al2.h"

lnet_al2::lnet_al2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lnet_al2)
{
    ui->setupUi(this);
}

lnet_al2::~lnet_al2()
{
    delete ui;
}
