#include "manauto.h"
#include "ui_manauto.h"

ManAuto::ManAuto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManAuto)
{
    ui->setupUi(this);
}

ManAuto::~ManAuto()
{
    delete ui;
}
