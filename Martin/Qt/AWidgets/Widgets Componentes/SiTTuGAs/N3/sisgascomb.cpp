#include "sisgascomb.h"
#include "ui_sisgascomb.h"

N3::N3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SisGasComb)
{
    ui->setupUi(this);
}

N3::~N3()
{
    delete ui;
}
