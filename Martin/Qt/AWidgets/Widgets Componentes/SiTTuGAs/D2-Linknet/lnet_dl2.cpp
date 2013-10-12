#include "lnet_dl2.h"
#include "ui_lnet_dl2.h"

LNET_Dl2::LNET_Dl2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LNET_Dl2)
{
    ui->setupUi(this);
}

LNET_Dl2::~LNET_Dl2()
{
    delete ui;
}
