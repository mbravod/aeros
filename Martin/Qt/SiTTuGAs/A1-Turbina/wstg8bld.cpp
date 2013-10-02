#include "wstg8bld.h"
#include "ui_wstg8bld.h"

WSTG8BLD::WSTG8BLD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSTG8BLD)
{
    ui->setupUi(this);
}

WSTG8BLD::~WSTG8BLD()
{
    delete ui;
}

void WSTG8BLD::setLbSTGBT(QString s)
{
    ui->lbSTGBT->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBT_1(QString s)
{
    ui->lbSTGBT_1->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBT_2(QString s)
{
    ui->lbSTGBT_2->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGBT_3(QString s)
{
    ui->lbSTGBT_3->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBT_4(QString s)
{
    ui->lbSTGBT_4->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBT_5(QString s)
{
    ui->lbSTGBT_5->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGBT_6(QString s)
{
    ui->lbSTGBT_6->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGB_1(QString s)
{
    ui->lbSTGB_1->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGB_2(QString s)
{
    ui->lbSTGB_2->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGB_3(QString s)
{
    ui->lbSTGB_3->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGB_4(QString s)
{
    ui->lbSTGB_4->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGB_5(QString s)
{
    ui->lbSTGB_5->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGB_6(QString s)
{
    ui->lbSTGB_6->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBU_1(QString s)
{
    ui->lbSTGBU_1->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBU_2(QString s)
{
    ui->lbSTGBU_2->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGBU_3(QString s)
{
    ui->lbSTGBU_3->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBU_4(QString s)
{
    ui->lbSTGBU_4->setText(s);
    //Refrescamos en la GUI
    update();

}

void WSTG8BLD::setLbSTGBU_5(QString s)
{
    ui->lbSTGBU_5->setText(s);
    //Refrescamos en la GUI
    update();

}
void WSTG8BLD::setLbSTGBU_6(QString s)
{
    ui->lbSTGBU_6->setText(s);
    //Refrescamos en la GUI
    update();

}

QString WSTG8BLD::getLbSTGBU_6()
{
    return ui->lbSTGBU_6->text();
}


QString WSTG8BLD::getLbSTGBU_5()
{
    return ui->lbSTGBU_5->text();
}

QString WSTG8BLD::getLbSTGBU_4()
{
    return ui->lbSTGBU_4->text();
}


QString WSTG8BLD::getLbSTGBU_3()
{
    return ui->lbSTGBU_3->text();
}


QString WSTG8BLD::getLbSTGBU_2()
{
    return ui->lbSTGBU_2->text();
}

QString WSTG8BLD::getLbSTGBU_1()
{
    return ui->lbSTGBU_1->text();
}
QString WSTG8BLD::getLbSTGB_6()
{
    return ui->lbSTGB_6->text();
}


QString WSTG8BLD::getLbSTGB_5()
{
    return ui->lbSTGB_5->text();
}

QString WSTG8BLD::getLbSTGB_4()
{
    return ui->lbSTGB_4->text();
}


QString WSTG8BLD::getLbSTGB_3()
{
    return ui->lbSTGB_3->text();
}


QString WSTG8BLD::getLbSTGB_2()
{
    return ui->lbSTGB_2->text();
}

QString WSTG8BLD::getLbSTGB_1()
{
    return ui->lbSTGB_1->text();
}
QString WSTG8BLD::getLbSTGBT_6()
{
    return ui->lbSTGBT_6->text();
}


QString WSTG8BLD::getLbSTGBT_5()
{
    return ui->lbSTGBT_5->text();
}

QString WSTG8BLD::getLbSTGBT_4()
{
    return ui->lbSTGBT_4->text();
}


QString WSTG8BLD::getLbSTGBT_3()
{
    return ui->lbSTGBT_3->text();
}


QString WSTG8BLD::getLbSTGBT_2()
{
    return ui->lbSTGBT_2->text();
}

QString WSTG8BLD::getLbSTGBT_1()
{
    return ui->lbSTGBT_1->text();
}

QString WSTG8BLD::getLbSTGBT()
{
    return ui->lbSTGBT->text();
}
