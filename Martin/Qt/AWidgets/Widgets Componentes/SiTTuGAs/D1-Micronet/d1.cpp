#include "d1.h"
#include "ui_d1.h"

D1::D1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem) :
    Pantallas(siTTuGAs,shrdMem),
    ui(new Ui::D1)
{
    ui->setupUi(this);
    header = new Header(this);
    this->title = "MICRONET I/O";
    this->clave= "D1";
}

D1::~D1()
{
    delete ui;
}

void D1::setLbInd_1(QString s)
{
    ui->lbInd_1->setText(s);
    update();
}

void D1::setLbInd_2(QString s)
{
    ui->lbInd_2->setText(s);
    update();
}

void D1::setLbInd_3(QString s)
{
    ui->lbInd_3->setText(s);
    update();
}

void D1::setLbInd_4(QString s)
{
    ui->lbInd_4->setText(s);
    update();
}

void D1::setLbInd_5(QString s)
{
    ui->lbInd_5->setText(s);
    update();
}

void D1::setLbInd_6(QString s)
{
    ui->lbInd_6->setText(s);
    update();
}

void D1::setLbInd_7(QString s)
{
    ui->lbInd_7->setText(s);
    update();
}

void D1::setLbInd_8(QString s)
{
    ui->lbInd_8->setText(s);
    update();
}

void D1::setLbInd_9(QString s)
{
    ui->lbInd_9->setText(s);
    update();
}

void D1::setLbInd_10(QString s)
{
    ui->lbInd_10->setText(s);
    update();
}

void D1::setLbInd_11(QString s)
{
    ui->lbInd_11->setText(s);
    update();
}

void D1::setLbInd_12(QString s)
{
    ui->lbInd_12->setText(s);
    update();
}

void D1::setLbInd_13(QString s)
{
    ui->lbInd_13->setText(s);
    update();
}
void D1::setLbInd_14(QString s)
{
    ui->lbInd_14->setText(s);
    update();
}

void D1::setLbInd_15(QString s)
{
    ui->lbInd_15->setText(s);
    update();
}

void D1::setLbInd_16(QString s)
{
    ui->lbInd_16->setText(s);
    update();
}

void D1::setLbInd_17(QString s)
{
    ui->lbInd_17->setText(s);
    update();
}

void D1::setLbInd_18(QString s)
{
    ui->lbInd_18->setText(s);
    update();
}

void D1::setLbInd_19(QString s)
{
    ui->lbInd_19->setText(s);
    update();
}

void D1::setLbInd_20(QString s)
{
    ui->lbInd_20->setText(s);
    update();
}

void D1::setLbInd_21(QString s)
{
    ui->lbInd_21->setText(s);
    update();
}

void D1::setLbInd_22(QString s)
{
    ui->lbInd_22->setText(s);
    update();
}

void D1::setLbInd_23(QString s)
{
    ui->lbInd_23->setText(s);
    update();
}

void D1::setLbInd_24(QString s)
{
    ui->lbInd_24->setText(s);
    update();
}
void D1::setLbInd_25(QString s)
{
    ui->lbInd_25->setText(s);
    update();
}

void D1::setLbInd_26(QString s)
{
    ui->lbInd_26->setText(s);
    update();
}

void D1::setLbInd_27(QString s)
{
    ui->lbInd_27->setText(s);
    update();
}

void D1::setLbInd_28(QString s)
{
    ui->lbInd_28->setText(s);
    update();
}

void D1::setLbInd_29(QString s)
{
    ui->lbInd_29->setText(s);
    update();
}

void D1::setLbInd_30(QString s)
{
    ui->lbInd_30->setText(s);
    update();
}

void D1::setLbInd_31(QString s)
{
    ui->lbInd_31->setText(s);
    update();
}

void D1::setLbInd_32(QString s)
{
    ui->lbInd_32->setText(s);
    update();
}
