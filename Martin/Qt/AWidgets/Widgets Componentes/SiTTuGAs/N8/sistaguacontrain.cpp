#include "sistaguacontrain.h"
#include "ui_sistaguacontrain.h"

N8::N8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SistAguaContrain)
{
    ui->setupUi(this);
}

N8::~N8()
{
    delete ui;
}
