#include "wctrlarranque.h"
#include "ui_wctrlarranque.h"

WCtrlArranque::WCtrlArranque(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlArranque)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una se�al para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WCtrlArranque::~WCtrlArranque()
{
    delete ui;
}

void WCtrlArranque::cerrar()
{
    this->close();
    emit (mi_id(wctrlarranque));

}
void WCtrlArranque::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wctrlarranque);
    }
}

void WCtrlArranque::idWindow(int id)
{
    emit id;
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
