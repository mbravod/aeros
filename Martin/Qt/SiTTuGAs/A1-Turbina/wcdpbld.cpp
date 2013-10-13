#include "wcdpbld.h"
#include "ui_wcdpbld.h"

WCDPBLD::WCDPBLD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WCDPBLD)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WCDPBLD::~WCDPBLD()
{
    delete ui;
}

void WCDPBLD::cerrar()
{
    this->close();
}
void WCDPBLD::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wcdpbld);
    }
}

void WCDPBLD::idWindow(int id)
{
    emit id;
}
/**/
/*
void WCDPBLD::setLbCDPBT(QString s)
{
    ui->lbCDPBT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBT_1(QString s)
{
    ui->lbCDPBT_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBT_2(QString s)
{
    ui->lbCDPBT_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPBT_3(QString s)
{
    ui->lbCDPBT_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBT_4(QString s)
{
    ui->lbCDPBT_4->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPBT_5(QString s)
{
    ui->lbCDPBT_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBT_6(QString s)
{
    ui->lbCDPBT_6->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPB_1(QString s)
{
    ui->lbCDPB_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPB_2(QString s)
{
    ui->lbCDPB_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPB_3(QString s)
{
    ui->lbCDPB_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPB_4(QString s)
{
    ui->lbCDPB_4->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPB_5(QString s)
{
    ui->lbCDPB_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPB_6(QString s)
{
    ui->lbCDPB_6->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBU_1(QString s)
{
    ui->lbCDPBU_1->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBU_2(QString s)
{
    ui->lbCDPBU_2->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPBU_3(QString s)
{
    ui->lbCDPBU_3->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBU_4(QString s)
{
    ui->lbCDPBU_4->setText(s);
    //Refrescamos en la GUI
    update();
}
void WCDPBLD::setLbCDPBU_5(QString s)
{
    ui->lbCDPBU_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WCDPBLD::setLbCDPBU_6(QString s)
{
    ui->lbCDPBU_6->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WCDPBLD::getLbCDPBU_6()
{
    return ui->lbCDPBU_6->text();
}
QString WCDPBLD::getLbCDPBU_5()
{
    return ui->lbCDPBU_5->text();
}

QString WCDPBLD::getLbCDPBU_4()
{
    return ui->lbCDPBU_4->text();
}
QString WCDPBLD::getLbCDPBU_3()
{
    return ui->lbCDPBU_3->text();
}

QString WCDPBLD::getLbCDPBU_2()
{
    return ui->lbCDPBU_2->text();
}

QString WCDPBLD::getLbCDPBU_1()
{
    return ui->lbCDPBU_1->text();
}

QString WCDPBLD::getLbCDPB_6()
{
    return ui->lbCDPB_6->text();
}
QString WCDPBLD::getLbCDPB_5()
{
    return ui->lbCDPB_5->text();
}

QString WCDPBLD::getLbCDPB_4()
{
    return ui->lbCDPB_4->text();
}
QString WCDPBLD::getLbCDPB_3()
{
    return ui->lbCDPB_3->text();
}

QString WCDPBLD::getLbCDPB_2()
{
    return ui->lbCDPB_2->text();
}

QString WCDPBLD::getLbCDPB_1()
{
    return ui->lbCDPB_1->text();
}

QString WCDPBLD::getLbCDPBT_6()
{
    return ui->lbCDPBT_6->text();
}
QString WCDPBLD::getLbCDPBT_5()
{
    return ui->lbCDPBT_5->text();
}

QString WCDPBLD::getLbCDPBT_4()
{
    return ui->lbCDPBT_4->text();
}
QString WCDPBLD::getLbCDPBT_3()
{
    return ui->lbCDPBT_3->text();
}

QString WCDPBLD::getLbCDPBT_2()
{
    return ui->lbCDPBT_2->text();
}

QString WCDPBLD::getLbCDPBT_1()
{
    return ui->lbCDPBT_1->text();
}

QString WCDPBLD::getLbCDPBT()
{
    return ui->lbCDPBT->text();
}
*/
