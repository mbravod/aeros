#include "inet_ai_6.h"
#include "ui_inet_ai_6.h"

Inet_AI_6::Inet_AI_6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_6)
{
    ui->setupUi(this);
}

Inet_AI_6::~Inet_AI_6()
{
    delete ui;
}
