#include "mi_prueba.h"
#include "ui_mi_prueba.h"

Mi_Prueba::Mi_Prueba(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mi_Prueba)
{
    ui->setupUi(this);
}

Mi_Prueba::~Mi_Prueba()
{
    delete ui;
}
