#include "inet_di_4.h"
#include "ui_inet_di_4.h"

Inet_DI_4::Inet_DI_4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_DI_4)
{
    ui->setupUi(this);
}

Inet_DI_4::~Inet_DI_4()
{
    delete ui;
}
