#include "wctrlarranque.h"
#include "ui_wctrlarranque.h"

WCtrlArranque::WCtrlArranque(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlArranque)
{
    ui->setupUi(this);
}

WCtrlArranque::~WCtrlArranque()
{
    delete ui;
}

/*
void WCtrlArranque::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WCtrlArranque::setLbpermturbina(QString s)
{
    ui->lbpermturbina->setText(s);
    update();
}
void WCtrlArranque::setLeArranque(QString s)
{
    ui->leArranque->setText(s);
    update();
}
void WCtrlArranque::setLeDetecion(QString s)
{
    ui->leDetecion->setText(s);
    update();
}

QString WCtrlArranque::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlArranque::getLbpermturbina()
{
    return ui->lbpermturbina->text();
}
QString WCtrlArranque::getLeArranque()
{
    return ui->leArranque->text();
}
QString WCtrlArranque::getLeDetecion()
{
    return ui->leDetecion->text();
}
*/
