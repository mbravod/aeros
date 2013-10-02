#include "inet_ai_16.h"
#include "ui_inet_ai_16.h"

Inet_AI_16::Inet_AI_16(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_16)
{
    ui->setupUi(this);
}

Inet_AI_16::~Inet_AI_16()
{
    delete ui;
}
