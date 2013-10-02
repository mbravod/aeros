#include "inet_ai_18.h"
#include "ui_inet_ai_18.h"

Inet_AI_18::Inet_AI_18(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_18)
{
    ui->setupUi(this);
}

Inet_AI_18::~Inet_AI_18()
{
    delete ui;
}
