#include <QtGui>

#include "ci_historial.h"
#include "ui_ci_historial.h"
#include <QDebug>
#include "BitaC/BitaC.h"

CI_Historial::CI_Historial(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::CI_Historial)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    connect(ui->obtener, SIGNAL(clicked()), this, SLOT(showCI()));
    connect(ui->cargar, SIGNAL(clicked()), this, SLOT(loadCI()));
    connect(ui->tiempo,SIGNAL(activated(QString)),this,SLOT(showIntervals(QString)));
    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    QStringList headers;
    headers << "CONDICIONES INICIALES";
    ui->table->setColumnCount(1);
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    ui->cargar->setEnabled(false);

    cIn = new CIn ();
    login();
}

void CI_Historial::login(){
    if(cIn->login()!=0)close();
}

void CI_Historial::errorMessage(int error){

    QString message;

    switch(error)
    {
    case 1: return;
    case -1002:
        message="Escena no encontrada";
        break;
    case -860:
        message="El usuario no está autentificado";
        break;
    case -1001:
        message="Autentificación inválida, verifique usuario y/o contraseña";
        break;
    default: message=tr("Error: %1").arg(error);
    }
    QMessageBox::information(this, tr("Error"),message);
    close();
}

void CI_Historial::deleteCI(){

}


void CI_Historial::loadedOK(){
    QMessageBox::information(this, tr(""),tr("Fotograma cargado exitosamente"));
    close();
}

void CI_Historial::loadedFail(){
    QMessageBox::information(this, tr(""),tr("No se cargo fotograma"));
    close();
}

void CI_Historial::loadCI(){
    char filename[50];
    int I;
    for (I=0; I<ui->table->item(Row,Column)->text().length(); I++){
        filename[I]=ui->table->item(Row,Column)->text().at(I).toAscii();}
    filename[I]=0;

    int i;
    i=cIn->loadtomemfromdisk(filename);


    if(i<0){
    QTimer::singleShot(1000, this, SLOT(loadedFail()));
    }
    if(i>=0){

    QTimer::singleShot(1000, this, SLOT(loadedOK()));

    }
}

void CI_Historial::showVartoChange(int row,int column)
{
    Row=row;
    Column=column;
    ui->varToChange->setText(ui->table->item(row,column)->text());
}

void CI_Historial::showCI(){



    while(ui->table->rowCount()!=0){ui->table->removeRow(0);}

    if (ui->tiempo->currentText()=="Horas"){
        getFromDisk('H');
}

    if (ui->tiempo->currentText()=="Minutos"){
        getFromDisk('M');
    }

    if (ui->tiempo->currentText()=="Segundos"){
        getFromDisk('S');
    }
    ui->cargar->setEnabled(true);
}

void CI_Historial::getFromDisk(char modal){

    cIn->getdirfromdisk(modal);
    xu=cIn->testST();
    while(!cIn->ISREADY()){
        Sleep(1000);
    }
    int i;
    QString Item;
    qDebug()<<"ReadingTable";

    xu=cIn->RETRIEVEFILESVIRTUALTABLE(&FILESVIRTUALTABLE[0][0]);

    for (i=0;i<1024*20;i++)
    {
            if (FILESVIRTUALTABLE[i][0]!=0){
                FILESVIRTUALTABLE[i][31]=0;
                    Item=FILESVIRTUALTABLE[i];
                    qDebug(FILESVIRTUALTABLE[i]);

                    createItem(i,Item);
            }
    }
    Sleep(20);

}

void CI_Historial::createItem(int row, QString item){

    ui->table->insertRow(row);
    QTableWidgetItem *newItem = new QTableWidgetItem(item);
    newItem->setFlags(Qt::ItemIsEnabled);
    ui->table->setItem(row,0,newItem);
}

void CI_Historial::showIntervals(QString interval)
{
 /*   while(ui->table->rowCount()!=0){ui->table->removeRow(0);}

    if(interval=="Horas" || interval==""){
        ui->intervalos->clear();
    }

    else if(interval=="Minutos"){
        ui->intervalos->clear();
        ui->intervalos->insertItem(0,"0-24 horas");
        ui->intervalos->insertItem(1,"24-48 horas");
    }

    else if (interval=="Segundos"){
        ui->intervalos->clear();
        ui->intervalos->insertItem(0,"0-30 minutos");
        ui->intervalos->insertItem(1,"30-60 minutos");
        ui->intervalos->insertItem(2,"60-90 minutos");
        ui->intervalos->insertItem(3,"90-120 minutos");
    }*/
}

CI_Historial::~CI_Historial()
{
    delete ui;
}

void CI_Historial::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
