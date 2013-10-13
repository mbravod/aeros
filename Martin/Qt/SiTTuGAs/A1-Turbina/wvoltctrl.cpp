#include "wvoltctrl.h"
#include "ui_wvoltctrl.h"

WVoltCtrl::WVoltCtrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WVoltCtrl)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WVoltCtrl::~WVoltCtrl()
{
    delete ui;
}

void WVoltCtrl::cerrar()
{
    this->close();
}

void WVoltCtrl::idWindow(int id)
{
   emit id;
}
void WVoltCtrl::mousePressEvent( QMouseEvent *event )
{

    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wvoltctrl);
    }
}
/*
void WVoltCtrl::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WVoltCtrl::setLeRetroa(QString s)
{
    ui->leRetroa->setText(s);
    update();
}



QString WVoltCtrl::getLbIP()
{
    return ui->lbIP->text();
}
QString WVoltCtrl::getLeRetroa()
{
    return ui->leRetroa->text();
}*/
