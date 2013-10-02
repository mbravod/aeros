#include "inet_ai_13.h"
#include "ui_inet_ai_13.h"

Inet_AI_13::Inet_AI_13(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_13)
{
    ui->setupUi(this);
}

Inet_AI_13::~Inet_AI_13()
{
    delete ui;
}
