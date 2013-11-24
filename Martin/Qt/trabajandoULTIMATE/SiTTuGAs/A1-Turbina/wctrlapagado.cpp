#include "wctrlapagado.h"
#include "ui_wctrlapagado.h"

WCtrlApagado::WCtrlApagado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlApagado)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btcerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WCtrlApagado::~WCtrlApagado()
{
    delete ui;

}

void WCtrlApagado::cerrar()
{
    this->close();
    emit (mi_id(wctrlapagado));
}
void WCtrlApagado::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wctrlapagado);
    }
}

void WCtrlApagado::idWindow(int id)
{
    emit id;
}
/*
void WCtrlApagado::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WCtrlApagado::setLeApagFun(QString s)
{
    ui->leApagFun->setText(s);
    update();
}

QString WCtrlApagado::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlApagado::getLeApagFun()
{
    return ui->leApagFun->text();
}
*/
