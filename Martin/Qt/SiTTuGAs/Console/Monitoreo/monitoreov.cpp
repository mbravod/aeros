#include <QtGui>
#include "monitoreov.h"
#include "ui_monitoreov.h"
#include <direct.h>
#include "BitaC/BitaC.h"
#include "Settings/Paths.h"
MonitoreoV::MonitoreoV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MonitoreoV)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    ruta = InstallPath;
    shrdMem = new ShrdMem();
    ///Condiciones iniciales para tabla
    ui->table->setColumnCount(4);
    QStringList headers;
    headers << "VARIABLE"<<"VALOR"<<"TIPO"<<"DESCRIPCIÓN";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    connect(ui->abrir,SIGNAL(clicked()),this,SLOT(openFile()));

    updatetimer = new QTimer(this);
    connect(updatetimer, SIGNAL(timeout()), this, SLOT(UpdateHMI()));
}

void MonitoreoV::openFile()
{
//    mkdir(user.toAscii().data());
//    mkdir(QString("%0%1/GruposVariables").arg(ruta).arg(user).toAscii().data());
    QString fileName = QFileDialog::getOpenFileName(this,"",QString("%0%1\\GruposVariables").arg(ruta).arg(user));
        if (!fileName.isEmpty()) {
        readFromFile(fileName);
    }
}

void MonitoreoV::readFromFile(QString fileName)
{

    QFile file(fileName);

     if (!file.open(QIODevice::ReadOnly)) {
         QMessageBox::information(this, tr("No se pudo abrir archivo"),
             file.errorString());
         return;
     }

     ui->root->setText(fileName);
     QDataStream in(&file);
     in >> StringList;

     while(ui->table->rowCount()!=0){ui->table->removeRow(0);}
     int iList=0;

     while(iList<StringList.size()){
         ui->table->insertRow(ui->table->rowCount());
         for(int i=0,j=0;i<=2;i++,j++){
             QTableWidgetItem *newItem = new QTableWidgetItem(QString(StringList.at(iList)).split("\t").at(i));

             if(i==1){
                 QTableWidgetItem *newItem2 = new QTableWidgetItem("");
                 ui->table->setItem(ui->table->rowCount()-1,i,newItem2);
                 j++;
             }
             ui->table->setItem(ui->table->rowCount()-1,j,newItem);

         }
     iList++;
     }
    updatetimer->start(1000);
    BitaC::escribeBTC("Inició monitoreo de variables");
}

void MonitoreoV::UpdateHMI(){
    int i=0;
    QString varname;
    QString varSel;
    QString varOffset;


    while(i<ui->table->rowCount()){

        varname=ui->table->item(i,0)->text();

        if(ui->table->item(i,2)->text()=="Float"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))));
        }

        else if(ui->table->item(i,2)->text()=="Int"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))));
        }

        ui->table->item(i,1)->setText(varSel);
        i++;
    }
}

//Conversion de Flotante a cadena
QString MonitoreoV::ftoa(float f)
{
    QString str = QString("%1").arg(f);
    return str;
}

MonitoreoV::~MonitoreoV()
{
    delete ui;
}
