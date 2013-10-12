#include "condicionesiniciales.h"
#include "ui_condicionesiniciales.h"
#include "BitaC/BitaC.h"

CondicionesIniciales::CondicionesIniciales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CondicionesIniciales)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    connect(ui->cargar, SIGNAL(clicked()), this, SLOT(loadCI()));
    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    QStringList headers;
    headers << "CONDICIÓN INICIAL"<<"USUARIO"<<"COMENTARIO";
    ui->table->setColumnCount(3);
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    this->ini_pre=0;

    //Aqui va la seleccion de CI_PRE CI_INS

    cIn = new CIn();

    login();

    QTimer::singleShot(1000, this, SLOT(showCISQL()));
}

void CondicionesIniciales::login(){
    if(cIn->login()!=0)close();
}

void CondicionesIniciales::showCISQL(){
    while(ui->table->rowCount()!=0){ui->table->removeRow(0);}
        getFromSQL('S');
}

void CondicionesIniciales::loadedOK(){
    QMessageBox::information(this, tr(""),tr("Fotograma cargado exitosamente"));
    emit valsToCoins(ui->table->item(Row,0)->text(), ui->table->item(Row, 2)->text());
    close();
}

void CondicionesIniciales::loadedFail(){
    QMessageBox::information(this, tr(""),tr("No se cargo fotograma"));
    sendToTable();
    close();
}

void CondicionesIniciales::sendToTable(){

    QString Item0,Item2;
    Item0=ui->table->item(Row,Column)->text().remove(' ');
    Item2=ui->table->item(Row,Column+1)->text().remove(' ');
}

void CondicionesIniciales::loadCI()
{

    if(ui->varToChange->text().isEmpty()){QMessageBox::information(this, tr(""),tr("No se ha seleccionado un fotograma"));return;}

    char filename[50];
    int I;

    this->setVisible(0);
    for (I=0; I<ui->table->item(Row,Column)->text().length(); I++){
        filename[I]=ui->table->item(Row,Column)->text().at(I).toAscii();}
    filename[I]=0;

    int i;
    i=cIn->loadtomemfromsql(filename);
    i=cIn->loadtomemfromsql(filename);
    if(i<0){
    QTimer::singleShot(1000, this, SLOT(loadedFail()));
    }
    //---------------------------------------------------
    if(i>=0)
    {
        QTimer::singleShot(1000, this, SLOT(loadedOK()));
    }
    //---------------------------------------------------

}

void CondicionesIniciales::showVartoChange(int row,int column)
{
    Row=row;
    Column=column;
    ui->varToChange->setText(ui->table->item(row,column)->text());
}

CondicionesIniciales::~CondicionesIniciales()
{
    delete ui;
}

void CondicionesIniciales::getFromSQL(char modal){
    cIn->getdirfromsql(modal);
    xu=cIn->testST();
    while(!cIn->ISREADY()){
        Sleep(1000);
    }
    int i;
    QString Item0;
    QString Item1;
    QString Item2;

    Item0.clear();
    Item1.clear();
    Item2.clear();

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
                        qDebug()<<"Item1="<<Item1;
                        qDebug()<<"this->user="<<this->user;

                            x=this->user;
                            x.remove(' ');
                            qDebug()<<"x="<<x;
                        if(((QString::compare(x, Item1, Qt::CaseSensitive)) == 0) && (this->ini_pre==0)/*|| (this->user == "Default User")*/){
                            qDebug()<<"si entra al if";
                                                if((QString::compare(Item1, "DefaultUser", Qt::CaseSensitive)) == 0)
                                                {
                                                    qDebug()<<"entra al SEGUNDO IF";
                                                    Item1="Default User";

                                                }
                                                createItem(w,Item0,Item1,Item2);
                                                w++;
                                            }

                                if((this->ini_pre==1) && (Item1=="DefaultUser")) //si la ventana que se va a crear es la predefinida
                                    {
                                               // qDebug()<<"resultado compare"<<!((QString::compare(x, "DefaultUser", Qt::CaseSensitive)) == 0);
                                    qDebug()<<"¿Item1==DefaultUser?"<<(Item1=="DefaultUser");
                                                qDebug()<<"entra al TERCER IF";
                                        Item1="Default User";
                                        createItem(w,Item0,Item1,Item2);
                                        w++;

                                }

            }
    }
    Sleep(20);
}


void CondicionesIniciales::createItem(int row, QString item0 ,QString item1,QString item2){
 qDebug()<<"row_before="<<row;
    ui->table->insertRow(row);
    qDebug()<<item2;
    qDebug()<<"row_after="<<row;
    QTableWidgetItem *newItem0 = new QTableWidgetItem(item0);
    newItem0->setFlags(Qt::ItemIsEnabled);
    ui->table->setItem(row,0,newItem0);

    QTableWidgetItem *newItem1 = new QTableWidgetItem(item1);
    newItem1->setFlags(Qt::NoItemFlags);
    ui->table->setItem(row,1,newItem1);

    QTableWidgetItem *newItem2 = new QTableWidgetItem(item2);
    newItem2->setFlags(Qt::NoItemFlags);
    ui->table->setItem(row,2,newItem2);
}


void CondicionesIniciales::changeEvent(QEvent *e)
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
