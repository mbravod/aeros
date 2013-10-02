#include "enfriador.h"
#include "ui_enfriador.h"

ENFRIADOR::ENFRIADOR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ENFRIADOR)
{
    ui->setupUi(this);
}

ENFRIADOR::~ENFRIADOR()
{
    delete ui;
}
