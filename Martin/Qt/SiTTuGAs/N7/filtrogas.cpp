#include "filtrogas.h"
#include "ui_filtrogas.h"

filtroGas::filtroGas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::filtroGas)
{
    ui->setupUi(this);
}

filtroGas::~filtroGas()
{
    delete ui;
}
