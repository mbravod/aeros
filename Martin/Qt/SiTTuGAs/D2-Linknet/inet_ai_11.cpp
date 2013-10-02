#include "inet_ai_11.h"
#include "ui_inet_ai_11.h"

Inet_AI_11::Inet_AI_11(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inet_AI_11)
{
    ui->setupUi(this);
}

Inet_AI_11::~Inet_AI_11()
{
    delete ui;
}
