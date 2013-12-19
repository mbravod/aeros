#include "hmdialog.h"
#include "ui_hmdialog.h"

HMDialog::HMDialog(QWidget *parent, QString title, QString varLocal, QString varManA, QString varEdo, int tipo, HTTPRequest *shrd) :
    QDialog(parent),
    ui(new Ui::HMDialog)
{
    ui->setupUi(this);

    // Ajustamos las variables
    this->tipo = tipo;
    this->shrd = shrd;
    this->varID = title;

    // Y ahora, buscamos el indice
    if(shrd != NULL)
    {
        indexLocal = shrd->getVar(varLocal);
        indexManual = shrd->getVar(varManA);
        indexEdo = shrd->getVar(varEdo);
        if(indexLocal < 0 || indexManual < 0 || indexEdo < 0)
            qDebug()<<"Alguna de las variables no están definidas...";
    }

    strLR = "LOCAL/REMOTO";
    strMA = "MANUAL/AUTOMÁTICO";
    strOP = "ESTADO";

    // Ponemos el título
    ui->lbTitle->setText(this->varID);

    // Ajustamos el paso
    this->paso1 = false;
    this->paso2 = false;
    this->paso3 = false;

    // Ocultamos todos los Frames
    SeeFrame(0);

    // Agrupamos los botones
    btnsLR = new QButtonGroup();
    btnsLR->addButton(ui->rdb_LR_Local);
    btnsLR->addButton(ui->rdb_LR_Remoto);

    btnsMA = new QButtonGroup();
    btnsMA->addButton(ui->rdb_MA_Auto);
    btnsMA->addButton(ui->rdb_MA_Manual);

    btnsEDO_1 = new QButtonGroup();
    btnsEDO_1->addButton(ui->rdb_EDO1_Open);
    btnsEDO_1->addButton(ui->rdb_EDO1_Close);

    btnsEDO_2 = new QButtonGroup();
    btnsEDO_2->addButton(ui->rdb_EDO2_Open);
    btnsEDO_2->addButton(ui->rdb_EDO2_Close);

    // Creamos los "Connects"
    connect(ui->btnLR, SIGNAL(clicked()), this, SLOT(ShowLR()));
    connect(ui->btnMA, SIGNAL(clicked()), this, SLOT(ShowMA()));
    connect(ui->btnEA, SIGNAL(clicked()), this, SLOT(ShowEDO()));

    connect(ui->rdb_LR_Local, SIGNAL(clicked(bool)), this, SLOT(SetLocal(bool)));
    connect(ui->rdb_LR_Remoto, SIGNAL(clicked(bool)), this, SLOT(SetRemoto(bool)));

    connect(ui->rdb_MA_Manual, SIGNAL(clicked(bool)), this, SLOT(SetManual(bool)));
    connect(ui->rdb_MA_Auto, SIGNAL(clicked(bool)), this, SLOT(SetAuto(bool)));

    if(tipo == 1)
    {
        connect(ui->rdb_EDO2_Open, SIGNAL(clicked(bool)), this, SLOT(SetOpen(bool)));
        connect(ui->rdb_EDO2_Close, SIGNAL(clicked(bool)), this, SLOT(SetClose(bool)));
    }
    else
    {
        connect(ui->rdb_EDO1_Open, SIGNAL(clicked(bool)), this, SLOT(SetOpen(bool)));
        connect(ui->rdb_EDO1_Close, SIGNAL(clicked(bool)), this, SLOT(SetClose(bool)));
    }
}

void HMDialog::SeeFrame(int n)
{
    // Primero, ocultamos todos los frames
    ui->Frame_Content->setVisible(false);
    ui->Frame_EDO_1->setVisible(false);
    ui->Frame_EDO_2->setVisible(false);
    ui->Frame_LR->setVisible(false);
    ui->Frame_MA->setVisible(false);
    ui->lbSub->setText("");

    // Dependiendo del número que recibamos, mostramos uno u otro
    if(n == 1)
    {
        // Ajustamos el subtitulo
        ui->lbSub->setText(this->strLR);
        ui->Frame_LR->setVisible(true);
    }
    else if(n == 2)
    {
        // Ajustamos el subtitulo
        ui->lbSub->setText(this->strMA);
        ui->Frame_MA->setVisible(true);
    }
    else if(n == 3)
    {
        // Ajustamos el subtitulo
        ui->lbSub->setText(this->strOP);
        if(tipo == 0)
        {
            ui->Frame_EDO_1->setVisible(true);
        }
        else
        {
            ui->Frame_EDO_2->setVisible(true);
        }
    }
    else
    {
        ui->lbSub->setText("");
        ui->Frame_Content->setVisible(true);
    }
//    ui->lbSub->repaint();
}

void HMDialog::SetPaso()
{
    if(paso2)
    {
        ui->btnLR->setEnabled(true);
        ui->btnMA->setEnabled(true);
        ui->btnEA->setEnabled(true);
    }
    else
    {
        ui->btnLR->setEnabled(true);
        ui->btnMA->setEnabled(true);
        ui->btnEA->setEnabled(false);
    }

    // Habilitamos, según el paso
    if(paso1)
    {
        ui->btnLR->setEnabled(true);
        ui->btnMA->setEnabled(true);
    }
    else
    {
        ui->btnLR->setEnabled(true);
        ui->btnMA->setEnabled(false);
        ui->btnEA->setEnabled(false);
    }
}

void HMDialog::ShowLR()
{
    SeeFrame(1);
}

void HMDialog::ShowMA()
{
    SeeFrame(2);
}

void HMDialog::ShowEDO()
{
    SeeFrame(3);
}

void HMDialog::SetLocal(bool e)
{
    // Ajustamos localmente la variable
    qDebug()<<"Ajuste Local";
    // Ajustamos el paso 1 en OK
    this->paso1 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexLocal != -1)
        shrd->setI(0, this->indexLocal);
}

void HMDialog::SetRemoto(bool e)
{
    // Ajustamos remotamente la variable
    qDebug()<<"Ajuste Remoto";
    // Ajustamos el paso 1 en OK
    this->paso1 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexLocal != -1)
        shrd->setI(1, this->indexLocal);
}

void HMDialog::SetManual(bool e)
{
    // Ajustamos manualmente la variable
    qDebug()<<"Ajuste Manual";
    // Ajustamos el paso 2 en OK
    this->paso2 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexManual != -1)
        shrd->setI(0, this->indexManual);
}

void HMDialog::SetAuto(bool e)
{
    // Ajustamos automáticamente la variable
    qDebug()<<"Ajuste Auto";
    // Ajustamos el paso 2 en OK
    this->paso2 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexManual != -1)
        shrd->setI(1, this->indexManual);
}

void HMDialog::SetOpen(bool e)
{
    // AAbrimos la variable
    qDebug()<<"Ajuste Abierto";
    // Ajustamos el paso 3 en OK
    this->paso3 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexEdo != -1)
        shrd->setI(1, indexEdo);
}

void HMDialog::SetClose(bool e)
{
    // Cerramos la variable
    qDebug()<<"Ajuste Cerrado";
    // Ajustamos el paso 3 en OK
    this->paso3 = true;
    // Verificamos los pasos
    SetPaso();
    // Regresamos a la anterior
    SeeFrame(0);
    if(this->indexEdo != -1)
        shrd->setI(0, indexEdo);
}

HMDialog::~HMDialog()
{
    delete ui;
    delete btnsLR;
    delete btnsMA;
    delete btnsEDO_1;
    delete btnsEDO_2;
}
