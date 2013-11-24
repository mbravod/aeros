#include "internosdg.h"
#include "ui_internosdg.h"

InternosDG::InternosDG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InternosDG)
{
    ui->setupUi(this);
}

InternosDG::~InternosDG()
{
    delete ui;
}
