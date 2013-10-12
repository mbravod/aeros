#include "inet_ai_15.h"
#include "ui_inet_ai_15.h"

Inet_AI_15::Inet_AI_15(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_15)
{
    ui->setupUi(this);
}

Inet_AI_15::~Inet_AI_15()
{
    delete ui;
}
