#include "inet_di_5.h"
#include "ui_inet_di_5.h"

Inet_DI_5::Inet_DI_5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_DI_5)
{
    ui->setupUi(this);
}

Inet_DI_5::~Inet_DI_5()
{
    delete ui;
}
