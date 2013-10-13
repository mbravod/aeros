#include "wcrakctrl.h"
#include "ui_wcrakctrl.h"

WCrakCtrl::WCrakCtrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCrakCtrl)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btcerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WCrakCtrl::~WCrakCtrl()
{
    delete ui;
}

void WCrakCtrl::cerrar()
{
    this->close();
}
void WCrakCtrl::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wcrakctrl);
    }
}

void WCrakCtrl::idWindow(int id)
{
    emit id;
}

/*
void WCrakCtrl::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WCrakCtrl::setLbcrankperm(QString s)
{
    ui->lbcrankperm->setText(s);
    update();
}
void WCrakCtrl::setLehighspd(QString s)
{
    ui->lehighspd->setText(s);
    update();
}
void WCrakCtrl::setLestop(QString s)
{
    ui->leStop->setText(s);
    update();
}
QString WCrakCtrl::getLbIP()
{
    return ui->lbIP->text();
}
QString WCrakCtrl::getLbcrankperm()
{
    return ui->lbcrankperm->text();
}
QString WCrakCtrl::getLehighspd()
{
    return ui->lehighspd->text();
}
QString WCrakCtrl::getLeStop()
{
    return ui->leStop->text();
}
*/
