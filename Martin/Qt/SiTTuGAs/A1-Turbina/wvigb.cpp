#include "wvigb.h"
#include "ui_wvigb.h"

WVIGB::WVIGB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WVIGB)
{
    ui->setupUi(this);
    //Activamos el seguimiento del raton, solo interesan los eventos al dar click izquierdo
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
    connect(ui->btCerrar,SIGNAL(clicked()),this,SLOT(cerrar()));

}

WVIGB::~WVIGB()
{
    delete ui;
}

void WVIGB::cerrar()
{
    this->close();
    emit(mi_id(wvigb));
}
void WVIGB::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wvigb);
    }
}

void WVIGB::idWindow(int id)
{
    emit id;
}
/*
void WVIGB::setLbVIGVT(QString s)
{
    ui->lbVIGVT->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVT_1(QString s)
{
    ui->lbVIGVT_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGVT_2(QString s)
{
    ui->lbVIGVT_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVT_3(QString s)
{
    ui->lbVIGVT_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGVT_4(QString s)
{
    ui->lbVIGVT_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVT_5(QString s)
{
    ui->lbVIGVT_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVT_6(QString s)
{
    ui->lbVIGVT_6->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGV_1(QString s)
{
    ui->lbVIGV_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGV_2(QString s)
{
    ui->lbVIGV_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGV_3(QString s)
{
    ui->lbVIGV_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGV_4(QString s)
{
    ui->lbVIGV_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGV_5(QString s)
{
    ui->lbVIGV_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGV_6(QString s)
{
    ui->lbVIGV_6->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVU_1(QString s)
{
    ui->lbVIGVU_1->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGVU_2(QString s)
{
    ui->lbVIGVU_2->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVU_3(QString s)
{
    ui->lbVIGVU_3->setText(s);
    //Refrescamos en la GUI
    update();
}
void WVIGB::setLbVIGVU_4(QString s)
{
    ui->lbVIGVU_4->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVU_5(QString s)
{
    ui->lbVIGVU_5->setText(s);
    //Refrescamos en la GUI
    update();
}

void WVIGB::setLbVIGVU_6(QString s)
{
    ui->lbVIGVU_6->setText(s);
    //Refrescamos en la GUI
    update();
}

QString WVIGB::getLbVIGVU_6()
{
    return ui->lbVIGVU_6->text();
}
QString WVIGB::getLbVIGVU_5()
{
    return ui->lbVIGVU_5->text();
}
QString WVIGB::getLbVIGVU_4()
{
    return ui->lbVIGVU_4->text();
}

QString WVIGB::getLbVIGVU_3()
{
    return ui->lbVIGVU_3->text();
}

QString WVIGB::getLbVIGVU_2()
{
    return ui->lbVIGVU_2->text();
}

QString WVIGB::getLbVIGVU_1()
{
    return ui->lbVIGVU_1->text();
}



QString WVIGB::getLbVIGV_6()
{
    return ui->lbVIGV_6->text();
}
QString WVIGB::getLbVIGV_5()
{
    return ui->lbVIGV_5->text();
}
QString WVIGB::getLbVIGV_4()
{
    return ui->lbVIGV_4->text();
}

QString WVIGB::getLbVIGV_3()
{
    return ui->lbVIGV_3->text();
}

QString WVIGB::getLbVIGV_2()
{
    return ui->lbVIGV_2->text();
}

QString WVIGB::getLbVIGV_1()
{
    return ui->lbVIGV_1->text();
}

QString WVIGB::getLbVIGVT_6()
{
    return ui->lbVIGVT_6->text();
}
QString WVIGB::getLbVIGVT_5()
{
    return ui->lbVIGVT_5->text();
}
QString WVIGB::getLbVIGVT_4()
{
    return ui->lbVIGVT_4->text();
}

QString WVIGB::getLbVIGVT_3()
{
    return ui->lbVIGVT_3->text();
}

QString WVIGB::getLbVIGVT_2()
{
    return ui->lbVIGVT_2->text();
}

QString WVIGB::getLbVIGVT_1()
{
    return ui->lbVIGVT_1->text();
}

QString WVIGB::getLbVIGVT()
{
    return ui->lbVIGVT->text();
}*/
