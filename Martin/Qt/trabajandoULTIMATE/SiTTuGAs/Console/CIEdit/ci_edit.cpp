#include "ci_edit.h"
#include "ui_ci_edit.h"
#include "BitaC/BitaC.h"

CI_Edit::CI_Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CI_Edit)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    connect(ui->tomar, SIGNAL(clicked()), this, SLOT(takeCI()));
    connect(ui->obtener, SIGNAL(clicked()), this, SLOT(showCISQL()));
    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    connect(ui->table2,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange2(int,int)));
    connect(ui->eliminar, SIGNAL(clicked()), this, SLOT(deleteCI()));
    connect(ui->renombrar, SIGNAL(clicked()), this, SLOT(renameCI()));

    QStringList headers;
    headers << "CONDICIONES INICIALES";
    ui->table->setColumnCount(1);
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);

    headers.clear();
    headers << "CONDICIÓN INICIAL"<<"USUARIO"<<"COMENTARIO";
    ui->table2->setColumnCount(3);
    ui->table2->setHorizontalHeaderLabels(headers);
    ui->table2->horizontalHeader()->setStretchLastSection(true);
    cIn = new CIn();
    login();

    showCI();
}

void CI_Edit::loadedOK(){
    QMessageBox::information(this, tr(""),tr("Fotograma cargado exitosamente"));
    close();
}

void CI_Edit::loadedFail(){
    QMessageBox::information(this, tr(""),tr("No se cargo fotograma"));
    close();
}

void CI_Edit::takeCI(){
    int i;
    char username[25];
    strcpy(username, this->user.toAscii());
    i=cIn->disktosql(ui->varToChange->text().toAscii().data(),ui->varToRename->text().toAscii().data(), username);

    if(i<0)
    {
        QTimer::singleShot(1000, this, SLOT(loadedFail()));
    }
    if(i>=0)
    {
        QTimer::singleShot(1000, this, SLOT(loadedOK()));
    //COINS.ui->tableWidget;
    }
}


void CI_Edit::deleteCI(){
    cIn->disktosql(ui->varToChange_2->text().toAscii().data(),"delete", "delete");
    showCISQL();
}

void CI_Edit::renameCI(){
    cIn->disktosql(ui->varToChange_2->text().toAscii().data(), ui->varToRename_2->text().toAscii().data(),"change");
    showCISQL();
}


void CI_Edit::login(){
    if(cIn->login()!=0)close();
}

void CI_Edit::errorMessage(int error){

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

void CI_Edit::loadCI(){
 //   char *filename= ui->table->item(Row,Column)->text().toAscii().data();
   // cIn->loadtomemfromsql(filename);
}

void CI_Edit::showVartoChange(int row,int column)
{
    Row=row;
    Column=column;
    ui->varToChange->setText(ui->table->item(row,column)->text());
}

void CI_Edit::showVartoChange2(int row,int column)
{
    Row=row;
    Column=column;
    ui->varToChange_2->setText(ui->table2->item(row,column)->text());
}

void CI_Edit::showCI(){
    //if(ui->contenedor->currentIndex()==0){
    //    while(ui->table->rowCount()!=0){ui->table->removeRow(0);}
        getFromDisk('S');
    //}
}

void CI_Edit::showCISQL(){
    while(ui->table2->rowCount()!=0){ui->table2->removeRow(0);}
    getFromSQL('S');

}

void CI_Edit::getFromDisk(char modal){

    cIn->getdirfromdisk(modal);
    xu=cIn->testST();
    while(!cIn->ISREADY()){
        Sleep(1000);
    }
    int i;
    QString Item;

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


void CI_Edit::getFromSQL(char modal){
    cIn->getdirfromsql(modal);
    xu=cIn->testST();
    while(!cIn->ISREADY()){
        Sleep(1000);
    }
    int i;
    QString Item0;
    QString Item1;
    QString Item2;

    xu=cIn->RETRIEVESQLVIRTUALTABLE(&SQLVIRTUALTABLE[0][0]);
    char title[64];
    char comments[64];
    char owner[32];
    int ix;
    QString x;
    int w=0,k=0;
    for (i=0;i<1024*5;i++)
    {
            if (SQLVIRTUALTABLE[i][0]!=0){
                SQLVIRTUALTABLE[i][31]=0;
             SQLVIRTUALTABLE[i][95];
                for (ix=0;ix<32;ix++){
                    comments[ix]=SQLVIRTUALTABLE[i][ix+32];
                     comments[ix+32]=SQLVIRTUALTABLE[i][ix+64];

                    owner[ix]=SQLVIRTUALTABLE[i][ix+96];
                title[ix]=SQLVIRTUALTABLE[i][ix];
                }
                title[31]=0;
                owner[31]=0;
                        comments[63]=0;
                    Item0=title;
                    Item1=owner;
                    Item2=comments;

                    Item1.remove(' ');
                       qDebug()<<Item1;
                       qDebug()<<this->user;

                       x=this->user;
                       x.remove(' ');
                       qDebug()<<"x="<<x;

                       if(((QString::compare(x, Item1, Qt::CaseSensitive)) == 0) /*&& (this->ini_pre==0)*//*|| (this->user == "Default User")*/){
                           qDebug()<<"si entra al if";
                                               if((QString::compare(Item1, "DefaultUser", Qt::CaseSensitive)) == 0)
                                               {
                                                   qDebug()<<"entra al SEGUNDO IF";
                                                   Item1="Default User";

                                               }
                                               createItem2(w,Item0,Item1,Item2);
                                               w++;
                                           }













            }
    }
    Sleep(20);
}

void CI_Edit::createItem2(int row, QString item0 ,QString item1,QString item2){

    ui->table2->insertRow(row);
    qDebug()<<item2;
    QTableWidgetItem *newItem0 = new QTableWidgetItem(item0);
    newItem0->setFlags(Qt::ItemIsEnabled);
    ui->table2->setItem(row,0,newItem0);

    QTableWidgetItem *newItem1 = new QTableWidgetItem(item1);
    newItem1->setFlags(Qt::ItemIsEnabled);
    ui->table2->setItem(row,1,newItem1);

    QTableWidgetItem *newItem2 = new QTableWidgetItem(item2);
    newItem2->setFlags(Qt::ItemIsEnabled);
    ui->table2->setItem(row,2,newItem2);
}

void CI_Edit::createItem(int row, QString item){
    ui->table->insertRow(row);
    QTableWidgetItem *newItem = new QTableWidgetItem(item);
    newItem->setFlags(Qt::ItemIsEnabled);
    ui->table->setItem(row,0,newItem);
}

CI_Edit::~CI_Edit()
{
    delete ui;
}
