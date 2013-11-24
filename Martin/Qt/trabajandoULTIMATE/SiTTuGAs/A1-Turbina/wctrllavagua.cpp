#include "wctrllavagua.h"
#include "ui_wctrllavagua.h"

WCtrlLavAgua::WCtrlLavAgua(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCtrlLavAgua)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));
}

WCtrlLavAgua::~WCtrlLavAgua()
{
    delete ui;


}
void WCtrlLavAgua::cerrar()
{
    this->close();
    emit (mi_id(wctrllavagua));
}
void WCtrlLavAgua::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wctrllavagua);
    }
}

void WCtrlLavAgua::idWindow(int id)
{
    emit id;
}
/*
void WCtrlLavAgua::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}
void WCtrlLavAgua::setLbPermLav(QString s)
{
    ui->lbPermLav->setText(s);
    update();
}
void WCtrlLavAgua::setLbDeLinea(QString s)
{
    ui->lbDeLinea->setText(s);
    update();
}
void WCtrlLavAgua::setLbEnLinea(QString s)
{
    ui->lbEnLinea->setText(s);
    update();
}

QString WCtrlLavAgua::getLbIP()
{
    return ui->lbIP->text();
}
QString WCtrlLavAgua::getLbPermLav()
{
    return ui->lbPermLav->text();
}
QString WCtrlLavAgua::getLbDeLinea()
{
    return ui->lbDeLinea->text();
}
QString WCtrlLavAgua::getLbEnLinea()
{
    return ui->lbEnLinea->text();
}
*/

