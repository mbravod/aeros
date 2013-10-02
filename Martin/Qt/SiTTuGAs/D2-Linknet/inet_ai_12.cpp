#include "inet_ai_12.h"
#include "ui_inet_ai_12.h"

Inet_AI_12::Inet_AI_12(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_12)
{
    ui->setupUi(this);
}

Inet_AI_12::~Inet_AI_12()
{
    delete ui;
}
