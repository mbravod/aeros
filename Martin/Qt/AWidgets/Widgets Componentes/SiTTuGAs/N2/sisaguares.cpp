#include "sisaguares.h"
#include "ui_sisaguares.h"

N2::N2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SisAguaRes)
{
    ui->setupUi(this);
}

N2::~N2()
{
    delete ui;
}
