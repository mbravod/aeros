#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->btnAux, SIGNAL(clicked()), this, SLOT(DiClick()));
    connect(this, SIGNAL(BtnActivo(QString)), this, SLOT(OpenDialog(QString)));
}

void Widget::DiClick()
{
    emit this->BtnActivo("MOT 6535");
}

void Widget::OpenDialog(QString title)
{
    QString str = "INTERNOS ";
    // Rutina para abrir el diálogo auxiliar
    str.append(title);
    dialog = new HMDialog(this, title, 1);
    dialog->setWindowTitle(str);
    dialog->open();
}


Widget::~Widget()
{
    delete ui;
}
