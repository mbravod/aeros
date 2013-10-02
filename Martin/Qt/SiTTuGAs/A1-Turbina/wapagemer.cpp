#include "wapagemer.h"
#include "ui_wapagemer.h"

WApagEmer::WApagEmer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WApagEmer)
{
    ui->setupUi(this);
    setMouseTracking( false );
    //Emitimos una señal para identificar a cada widget cuando este sea clickeado por el usuario
    connect(this,SIGNAL(clicked(int )),this,SLOT(idWindow(int)));
}

WApagEmer::~WApagEmer()
{
    delete ui;
}

void WApagEmer::setLbIP(QString s)
{
    ui->lbIP->setText(s);
    update();
}

void WApagEmer::setLeCde(QString s)
{
    ui->leCde->setText(s);
    update();
}
QString WApagEmer::getLeCde()
{
    return ui->leCde->text();
}
QString WApagEmer::getLbIP()
{
    return ui->lbIP->text();
}

void WApagEmer::idWindow(int id)
{
    emit id;
}



void WApagEmer::mousePressEvent(QMouseEvent *event)
{
    //Validamos click izquierdo
    if(event->button() == Qt::LeftButton){
        emit clicked(wapagemer);
    }
}
