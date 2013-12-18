#include "clock.h"
#include "ui_clock.h"

Clock::Clock(HTTPRequest *http, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
    this->shrdMem = http;

    animado = false;
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(Funcionando()));

    // Fijamos el color gris
    this->setHour(0);
    ActivarClock(false);
    ChangeColor(0);
}

void Clock::ChangeColor(int color)
{
    QString colorS;
    if(color == 1)
        colorS = "color: rgb(0, 0, 255);";
    else if(color == 2)
        colorS = "color: rgb(255, 0, 0);";
    else
        colorS = "color: rgb(113, 113, 113);";

    ui->lbHours->setStyleSheet(colorS);
    ui->lb1->setStyleSheet(colorS);
    ui->lbMins->setStyleSheet(colorS);
    ui->lb2->setStyleSheet(colorS);
    ui->lbSegs->setStyleSheet(colorS);
}

void Clock::setHour(unsigned int nsegs)
{
    this->segs = nsegs;
    unsigned int seg, min, hor;
    unsigned int t1, t2, t3;
    seg = nsegs%60;
    t1 = nsegs - seg;
    t2 = t1/60;
    t3 = t2/60;
    min = t2%60;
    hor = t3%60;

    qDebug()<<"Total de segundos: "<< seg;

    qDebug()<<"Total de minutos: "<< min;
    qDebug()<<"Total de horas: "<< hor;
    DrawSeg(seg);
    DrawMin(min);
    DrawHor(hor);
}

void Clock::DrawSeg(int s)
{
    if(s < 10)
        ui->lbSegs->setText(QString("0%1").arg(QString::number(s)));
    else
        ui->lbSegs->setText(QString::number(s));
}

void Clock::DrawMin(int s)
{
    if(s < 10)
        ui->lbMins->setText(QString("0%1").arg(QString::number(s)));
    else
        ui->lbMins->setText(QString::number(s));
}

void Clock::DrawHor(int s)
{
    if(s < 10)
        ui->lbHours->setText(QString("0%1").arg(QString::number(s)));
    else
        ui->lbHours->setText(QString::number(s));
}

void Clock::ActivarClock(bool b)
{
    animado = true;
    if(b)
    {
        ChangeColor(1);
        timer->start();
    }
    else
    {
        timer->stop();
        ChangeColor(2);
    }
}

void Clock::setShrdMem(HTTPRequest *m)
{
    this->shrdMem = m;
}

void Clock::AjustaTiempo(int ms)
{
    if(0 < ms)
    {
        timer->setInterval(ms);
    }
}

void Clock::ResetTime()
{
    this->ActivarClock(false);
    this->segs = 0;
    DrawSeg(0);
    DrawMin(0);
    DrawHor(0);
    this->ActivarClock(false);
    ChangeColor(0);
}

void Clock::Funcionando()
{
    // Consultamos la shrdMem
    shrdMem->GetValor();
    unsigned int seg, min, hor;
    unsigned int t1, t2, t3;
    // Aumentamos los segundos
    this->segs = this->segs + 1;
    // Calculamos la hora...
    seg = this->segs%60;
    t1 = this->segs - seg;
    t2 = t1/60;
    t3 = t2/60;
    min = t2%60;
    hor = t3%60;
    DrawSeg(seg);
    DrawMin(min);
    DrawHor(hor);
    // Si existe la shrdMem, la actualizamos
    if(this->shrdMem != NULL)
        this->shrdMem->setI(this->segs, 400);
}

Clock::~Clock()
{
    delete ui;
}
