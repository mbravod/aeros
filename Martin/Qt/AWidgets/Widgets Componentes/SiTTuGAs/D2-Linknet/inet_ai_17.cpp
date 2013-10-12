#include "inet_ai_17.h"
#include "ui_inet_ai_17.h"

Inet_AI_17::Inet_AI_17(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_17)
{
    ui->setupUi(this);
}

Inet_AI_17::~Inet_AI_17()
{
    delete ui;
}
