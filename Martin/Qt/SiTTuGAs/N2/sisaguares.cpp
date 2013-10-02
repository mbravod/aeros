#include "sisaguares.h"
#include "ui_sisaguares.h"

SisAguaRes::SisAguaRes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SisAguaRes)
{
    ui->setupUi(this);
}

SisAguaRes::~SisAguaRes()
{
    delete ui;
}
