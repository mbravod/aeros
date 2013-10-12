#include "wtempcompa1.h"
#include "ui_wtempcompa1.h"

WTempCompA1::WTempCompA1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempCompA1)
{
    ui->setupUi(this);
}

WTempCompA1::~WTempCompA1()
{
    delete ui;
}
void WTempCompA1::setLbTemCOMAT(QString s)
{
    ui->lbTemCOMAT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA1::setLbCOMAT_1(QString s)
{
    ui->lbCOMAT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA1::setLbCOMAT_2(QString s)
{
    ui->lbCOMAT_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA1::setLbCOMA_1(QString s)
{
    ui->lbCOMA_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA1::setLbCOMA_2(QString s)
{
    ui->lbCOMA_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA1::setLbCOMAU_1(QString s)
{
    ui->lbCOMAU_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA1::setLbCOMAU_2(QString s)
{
    ui->lbCOMAU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WTempCompA1::getLbCOMAU_2()
{
    return ui->lbCOMAU_2->text();
}

QString WTempCompA1::getLbCOMAU_1()
{
    return ui->lbCOMAU_1->text();
}

QString WTempCompA1::getLbCOMA_2()
{
    return ui->lbCOMA_2->text();
}

QString WTempCompA1::getLbCOMA_1()
{
    return ui->lbCOMA_1->text();
}
QString WTempCompA1::getLbCOMAT_2()
{
    return ui->lbCOMAT_2->text();
}

QString WTempCompA1::getLbCOMAT_1()
{
    return ui->lbCOMAT_1->text();
}

QString WTempCompA1::getLbTemCOMAT()
{
    return ui->lbTemCOMAT->text();
}
