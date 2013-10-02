#include "inet_ai_19.h"
#include "ui_inet_ai_19.h"

Inet_AI_19::Inet_AI_19(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_19)
{
    ui->setupUi(this);
}

Inet_AI_19::~Inet_AI_19()
{
    delete ui;
}
