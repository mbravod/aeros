#include "wpresbalance.h"
#include "ui_wpresbalance.h"

WPresBalance::WPresBalance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WPresBalance)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WPresBalance::~WPresBalance()
{
    delete ui;
}

void WPresBalance::cerrar()
{
    this->close();
}
void WPresBalance::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wpresbalance);
    }
}
void WPresBalance::idWindow(int id)
{
    emit id;
}
/*

void WPresBalance::setLbPreBALIT(QString s)
{
    ui->lbPreBALIT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresBalance::setLbBALIT_1(QString s)
{
    ui->lbBALIT_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALIT_2(QString s)
{
    ui->lbBALIT_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALI_1(QString s)
{
    ui->lbBALI_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALI_2(QString s)
{
    ui->lbBALI_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WPresBalance::setLbBALIU_1(QString s)
{
    ui->lbBALIU_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WPresBalance::setLbBALIU_2(QString s)
{
    ui->lbBALIU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WPresBalance::getLbBALIU_2()
{
    return ui->lbBALIU_2->text();
}
QString WPresBalance::getLbBALIU_1()
{
    return ui->lbBALIU_1->text();
}

QString WPresBalance::getLbBALI_2()
{
    return ui->lbBALI_2->text();
}
QString WPresBalance::getLbBALI_1()
{
    return ui->lbBALI_1->text();
}
QString WPresBalance::getLbBALIT_2()
{
    return ui->lbBALIT_2->text();
}
QString WPresBalance::getLbBALIT_1()
{
    return ui->lbBALIT_1->text();
}

QString WPresBalance::getLbPreBALIT()
{
    return ui->lbPreBALIT->text();
}*/
