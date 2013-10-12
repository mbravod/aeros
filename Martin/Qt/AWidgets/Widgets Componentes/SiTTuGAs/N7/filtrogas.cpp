#include "filtrogas.h"
#include "ui_filtrogas.h"

N7::N7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::filtroGas)
{
    ui->setupUi(this);
}

N7::~N7()
{
    delete ui;
}
