#include "wtempcompa2.h"
#include "ui_wtempcompa2.h"

WTempCompA2::WTempCompA2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WTempCompA2)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WTempCompA2::~WTempCompA2()
{
    delete ui;
}

void WTempCompA2::cerrar()
{
    this->close();
}
void WTempCompA2::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wtempcompa2);
    }
}

void WTempCompA2::idWindow(int id)
{
    emit id;
}
/*
void WTempCompA2::setLbTemCOMA2T(QString s)
{
    ui->lbTemCOMA2T->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2T_1(QString s)
{
    ui->lbCOMA2T_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2T_2(QString s)
{
    ui->lbCOMA2T_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2T_3(QString s)
{
    ui->lbCOMA2T_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2T_4(QString s)
{
    ui->lbCOMA2T_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2_1(QString s)
{
    ui->lbCOMA2_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2_2(QString s)
{
    ui->lbCOMA2_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2_3(QString s)
{
    ui->lbCOMA2_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2_4(QString s)
{
    ui->lbCOMA2_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2U_1(QString s)
{
    ui->lbCOMA2U_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WTempCompA2::setLbCOMA2U_2(QString s)
{
    ui->lbCOMA2U_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2U_3(QString s)
{
    ui->lbCOMA2U_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WTempCompA2::setLbCOMA2U_4(QString s)
{
    ui->lbCOMA2U_4->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WTempCompA2::getLbCOMA2U_4()
{
    return ui->lbCOMA2U_4->text();
}

QString WTempCompA2::getLbCOMA2U_3()
{
    return ui->lbCOMA2U_3->text();
}

QString WTempCompA2::getLbCOMA2U_2()
{
    return ui->lbCOMA2U_2->text();
}
QString WTempCompA2::getLbCOMA2U_1()
{
    return ui->lbCOMA2U_1->text();
}

QString WTempCompA2::getLbCOMA2_4()
{
    return ui->lbCOMA2_4->text();
}

QString WTempCompA2::getLbCOMA2_3()
{
    return ui->lbCOMA2_3->text();
}

QString WTempCompA2::getLbCOMA2_2()
{
    return ui->lbCOMA2_2->text();
}
QString WTempCompA2::getLbCOMA2_1()
{
    return ui->lbCOMA2_1->text();
}

QString WTempCompA2::getLbCOMA2T_4()
{
    return ui->lbCOMA2T_4->text();
}

QString WTempCompA2::getLbCOMA2T_3()
{
    return ui->lbCOMA2T_3->text();
}

QString WTempCompA2::getLbCOMA2T_2()
{
    return ui->lbCOMA2T_2->text();
}
QString WTempCompA2::getLbCOMA2T_1()
{
    return ui->lbCOMA2T_1->text();
}

QString WTempCompA2::getLbTemCOMA2T()
{
    return ui->lbTemCOMA2T->text();
}*/
