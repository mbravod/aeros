#include "digital16.h"
#include "ui_digital16.h"

Digital16::Digital16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Digital16)
{
    ui->setupUi(this);
}

Digital16::~Digital16()
{
    delete ui;
}
