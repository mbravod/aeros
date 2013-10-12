#include "enfriador.h"
#include "ui_enfriador.h"

N5::N5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ENFRIADOR)
{
    ui->setupUi(this);
}

N5::~N5()
{
    delete ui;
}
