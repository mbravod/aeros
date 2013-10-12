#include "inet_ai_10.h"
#include "ui_inet_ai_10.h"

Inet_AI_10::Inet_AI_10(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_10)
{
    ui->setupUi(this);
}

Inet_AI_10::~Inet_AI_10()
{
    delete ui;
}
