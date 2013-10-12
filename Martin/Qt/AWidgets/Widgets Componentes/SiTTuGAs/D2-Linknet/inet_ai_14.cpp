#include "inet_ai_14.h"
#include "ui_inet_ai_14.h"

Inet_AI_14::Inet_AI_14(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_14)
{
    ui->setupUi(this);
}

Inet_AI_14::~Inet_AI_14()
{
    delete ui;
}
