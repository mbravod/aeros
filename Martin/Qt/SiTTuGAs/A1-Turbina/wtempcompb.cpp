#include "wtempcompb.h"
#include "ui_wtempcompb.h"

WTempCompB::WTempCompB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempCompB)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WTempCompB::~WTempCompB()
{
    delete ui;
}

void WTempCompB::cerrar()
{
    this->close();
}
void WTempCompB::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wtempcompb);
    }
}

void WTempCompB::idWindow(int id)
{
    emit id;
}
/*
void WTempCompB::setLbTemCOMBT(QString s)
{
    ui->lbTemCOMBT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_1(QString s)
{
    ui->lbCOMBT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_2(QString s)
{
    ui->lbCOMBT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_3(QString s)
{
    ui->lbCOMBT_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_4(QString s)
{
    ui->lbCOMBT_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_5(QString s)
{
    ui->lbCOMBT_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_6(QString s)
{
    ui->lbCOMBT_6->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_7(QString s)
{
    ui->lbCOMBT_7->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBT_8(QString s)
{
    ui->lbCOMBT_8->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_1(QString s)
{
    ui->lbCOMB_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_2(QString s)
{
    ui->lbCOMB_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_3(QString s)
{
    ui->lbCOMB_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_4(QString s)
{
    ui->lbCOMB_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_5(QString s)
{
    ui->lbCOMB_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_6(QString s)
{
    ui->lbCOMB_6->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_7(QString s)
{
    ui->lbCOMB_7->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMB_8(QString s)
{
    ui->lbCOMB_8->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_1(QString s)
{
    ui->lbCOMBU_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_2(QString s)
{
    ui->lbCOMBU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_3(QString s)
{
    ui->lbCOMBU_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_4(QString s)
{
    ui->lbCOMBU_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_5(QString s)
{
    ui->lbCOMBU_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_6(QString s)
{
    ui->lbCOMBU_6->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_7(QString s)
{
    ui->lbCOMBU_7->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompB::setLbCOMBU_8(QString s)
{
    ui->lbCOMBU_8->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WTempCompB::getLbCOMBU_8()
{
    return ui->lbCOMBU_8->text();
}
QString WTempCompB::getLbCOMBU_7()
{
    return ui->lbCOMBU_7->text();
}

QString WTempCompB::getLbCOMBU_6()
{
    return ui->lbCOMBU_6->text();
}

QString WTempCompB::getLbCOMBU_5()
{
    return ui->lbCOMBU_5->text();
}
QString WTempCompB::getLbCOMBU_4()
{
    return ui->lbCOMBU_4->text();
}

QString WTempCompB::getLbCOMBU_3()
{
    return ui->lbCOMBU_3->text();
}

QString WTempCompB::getLbCOMBU_2()
{
    return ui->lbCOMBU_2->text();
}

QString WTempCompB::getLbCOMBU_1()
{
    return ui->lbCOMBU_1->text();
}

QString WTempCompB::getLbCOMB_8()
{
    return ui->lbCOMB_8->text();
}
QString WTempCompB::getLbCOMB_7()
{
    return ui->lbCOMB_7->text();
}

QString WTempCompB::getLbCOMB_6()
{
    return ui->lbCOMB_6->text();
}

QString WTempCompB::getLbCOMB_5()
{
    return ui->lbCOMB_5->text();
}
QString WTempCompB::getLbCOMB_4()
{
    return ui->lbCOMB_4->text();
}

QString WTempCompB::getLbCOMB_3()
{
    return ui->lbCOMB_3->text();
}

QString WTempCompB::getLbCOMB_2()
{
    return ui->lbCOMB_2->text();
}

QString WTempCompB::getLbCOMB_1()
{
    return ui->lbCOMB_1->text();
}
QString WTempCompB::getLbCOMBT_8()
{
    return ui->lbCOMBT_8->text();
}
QString WTempCompB::getLbCOMBT_7()
{
    return ui->lbCOMBT_7->text();
}

QString WTempCompB::getLbCOMBT_6()
{
    return ui->lbCOMBT_6->text();
}

QString WTempCompB::getLbCOMBT_5()
{
    return ui->lbCOMBT_5->text();
}
QString WTempCompB::getLbCOMBT_4()
{
    return ui->lbCOMBT_4->text();
}

QString WTempCompB::getLbCOMBT_3()
{
    return ui->lbCOMBT_3->text();
}

QString WTempCompB::getLbCOMBT_2()
{
    return ui->lbCOMBT_2->text();
}

QString WTempCompB::getLbCOMBT_1()
{
    return ui->lbCOMBT_1->text();
}

QString WTempCompB::getLbTemCOMBT()
{
    return ui->lbTemCOMBT->text();
}*/
