#include "widget.h"
#include "ui_widget.h"

N4::N4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

N4::~N4()
{
    delete ui;
}
