#include "sisgascomb.h"
#include "ui_sisgascomb.h"

SisGasComb::SisGasComb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SisGasComb)
{
    ui->setupUi(this);
}

SisGasComb::~SisGasComb()
{
    delete ui;
}
