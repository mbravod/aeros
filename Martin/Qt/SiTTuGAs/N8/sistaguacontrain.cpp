#include "sistaguacontrain.h"
#include "ui_sistaguacontrain.h"

SistAguaContrain::SistAguaContrain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SistAguaContrain)
{
    ui->setupUi(this);
}

SistAguaContrain::~SistAguaContrain()
{
    delete ui;
}
