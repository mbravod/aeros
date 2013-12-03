#include <QtGui>
#include "grupovars.h"
#include "ui_grupovars.h"
#include <direct.h>
#include "BitaC/BitaC.h"
#include "Settings/Paths.h"

GrupoVars::GrupoVars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GrupoVars)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    ruta = InstallPath;

    shrdMem = new ShrdMem();
    connect(shrdMem,SIGNAL(varNotFound(QString)),this,SLOT(anuncmnt(QString)));


    ///Condiciones iniciales para tabla
    ui->table->setColumnCount(3);
    ui->table2->setColumnCount(3);
    ui->table3->setColumnCount(3);
    ui->table4->setColumnCount(3);
    QStringList headers;
    headers << "VARIABLE" <<"TIPO"<<"DESCRIPCIÓN";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);

    ui->table2->setHorizontalHeaderLabels(headers);
    ui->table2->horizontalHeader()->setStretchLastSection(true);

    ui->table3->setHorizontalHeaderLabels(headers);
    ui->table3->horizontalHeader()->setStretchLastSection(true);

    ui->table4->setHorizontalHeaderLabels(headers);
    ui->table4->horizontalHeader()->setStretchLastSection(true);

    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    connect(ui->table2,SIGNAL(cellActivated(int,int)),this,SLOT(deleteVar(int,int)));

    connect(ui->table3,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChangeE(int,int)));
    connect(ui->table4,SIGNAL(cellActivated(int,int)),this,SLOT(deleteVarE(int,int)));
    ///Boton Guardar
    connect(ui->guardar,SIGNAL(clicked()),this,SLOT(saveFile()));
    connect(ui->guardarcomo,SIGNAL(clicked()),this,SLOT(saveFileAs()));
    connect(ui->guardarE,SIGNAL(clicked()),this,SLOT(saveFileE()));
    connect(ui->abrir,SIGNAL(clicked()),this,SLOT(openFile()));


    ui->guardar->setEnabled(0);
    ui->guardarcomo->setEnabled(0);
    ui->guardarE->setEnabled(0);

    loadSyst();//Llenar ComboBox
    ui->SeleccSist->setCurrentIndex(-1);//Indice inicial del ComboBox
}

//Lenar ComboBox
void GrupoVars::loadSyst()
{
    for(int i=0;i<rFrStringList(ruta+"Listas\\Sistemas\\ListadoSistemas.txt").size();i++){
        ui->SeleccSist->insertItem(i+1,rFrStringList(ruta+"Listas\\Sistemas\\ListadoSistemas.txt").at(i));
    }
    connect(ui->SeleccSist,SIGNAL(activated(QString)),this,SLOT(showVariables(QString)));
}


void GrupoVars::openFile()
{
//    mkdir(user.toAscii().data());
//    mkdir(QString("%0%1/GruposVariables").arg(ruta).arg(user).toAscii().data());
    QString fileName = QFileDialog::getOpenFileName(this,"",QString("%0%1\\GruposVariables").arg(ruta).arg(user));
    if (!fileName.isEmpty()) {
        readFromFile(fileName);
    }
}

void GrupoVars::readFromFile(QString fileName)
{

    QFile file(fileName);

     if (!file.open(QIODevice::ReadOnly)) {
         QMessageBox::information(this, tr("No se pudo abrir archivo"),
             file.errorString());
         return;
     }

     ui->root->setText(fileName);
     QDataStream in(&file);
     in >> StringListE;

     while(ui->table4->rowCount()!=0){ui->table4->removeRow(0);}
     int iList=0;
     while(iList<StringListE.size()){
         ui->table4->insertRow(ui->table4->rowCount());
         for(int i=0;i<=2;i++){
             QTableWidgetItem *newItem = new QTableWidgetItem(QString(StringListE.at(iList)).split("\t").at(i));

             if(!i){
                 newItem->setFlags(Qt::ItemIsEnabled);
             }
             else {
                 newItem->setFlags(Qt::NoItemFlags);
             }

             ui->table4->setItem(ui->table4->rowCount()-1,i,newItem);
         }
     iList++;
     }

}

QStringList GrupoVars::rTrStringList()
{
    return StringList;
}

void  GrupoVars::saveGroup(QString fileName)
{
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("No se pudo abrir archivo"), file.errorString());
        return;
    }
    QDataStream out(&file);
    //out << rTrStringList();
    out << StringList;
    BitaC::escribeBTC("Grupo de variables creado");

}

void GrupoVars::saveFile()
{
    if(ui->rootD->text().isEmpty()){
        QMessageBox::information(this, tr(""),
        QString("El nombre del archivo es inválido"));
        return;
    }

//    mkdir(user.toAscii().data());
//    mkdir(QString("%0%1/GruposVariables").arg(ruta).arg(user).toAscii().data());
    QString fileName = QString("%0%1\\GruposVariables\\%2%3").arg(ruta).arg(user).arg(ui->rootD->text()).arg(".txt");
    qDebug()<<fileName;
    saveGroup(fileName);
    close();
}

void GrupoVars::saveFileAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,"",QString("%0%1\\GruposVariables").arg(ruta).arg(user));
    if (!fileName.isEmpty()) {
        fileName.append(".txt");
        saveGroup(fileName);
        close();
    }

}

void GrupoVars::saveFileE()
{

    QMessageBox msgBox;
    msgBox.setText("El archivo se sobreescribirá");
    msgBox.setInformativeText("Desea continuar?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();

    if(ret==QMessageBox::No){
        return;
    }

    QFile file(ui->root->text());

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("No se pudo abrir archivo"), file.errorString());
        return;
    }
    QDataStream out(&file);
    out << StringListE;
    close();
    BitaC::escribeBTC("Grupo de variables editado");
}

void  GrupoVars::verifyVariable()
{
    if(!ui->table2->rowCount()){
        ui->guardar->setEnabled(0);
        ui->guardarcomo->setEnabled(0);
    }
    else{
        ui->guardar->setEnabled(1);
        ui->guardarcomo->setEnabled(1);
    }
    if(!ui->table4->rowCount())
        ui->guardarE->setEnabled(0);
    else
        ui->guardarE->setEnabled(1);
}

void  GrupoVars::showVartoChange(int row,int column)
{
    Row=row;
    Column=column;
    String.clear();
    ui->table2->insertRow(ui->table2->rowCount());
    for(int i=0;i<=2;i++){
        QTableWidgetItem *newItem = new QTableWidgetItem(ui->table->item(Row,Column+i)->text());

        if(!i){
            newItem->setFlags(Qt::ItemIsEnabled);
        }
        else {
            newItem->setFlags(Qt::NoItemFlags);
        }
        String.append(ui->table->item(Row,Column+i)->text());
        if(i!=2)
            String.append("\t");
        ui->table2->setItem(ui->table2->rowCount()-1,i,newItem);
    }

    StringList.append(String);
    ui->table->removeRow(Row);
    verifyVariable();
}

void  GrupoVars::deleteVar(int row,int column)
{
  Row=row;
  Column=column;

  ui->table->insertRow(ui->table->rowCount());
  for(int i=0;i<=2;i++){
      QTableWidgetItem *newItem = new QTableWidgetItem(ui->table2->item(Row,Column+i)->text());

      if(!i){
          newItem->setFlags(Qt::ItemIsEnabled);
      }
      else {
          newItem->setFlags(Qt::NoItemFlags);
      }

      ui->table->setItem(ui->table->rowCount()-1,i,newItem);
  }

  StringList.removeAt(Row);
  ui->table2->removeRow(Row);
  verifyVariable();
}


void  GrupoVars::showVariables(QString system)
{
    while(ui->table->rowCount()!=0){ui->table->removeRow(0);}
    while(ui->table3->rowCount()!=0){ui->table3->removeRow(0);}
    QStringList lines=rFrStringList(tr("%0Listas\\Graficas\\LV_G_%1%2").arg(ruta).arg(system).arg(".txt"));

    int nlines = 0;//Inicia el contador de filas de txt, en este caso va a contar los elementos de "lines"
    while (nlines < lines.count()) {
        QString line=lines.at(nlines);
        ui->table->insertRow(nlines);
        ui->table3->insertRow(nlines);

//Verifica que la linea este en estado adecuado de lectura
        if(line.count("\t",Qt::CaseSensitive)<2){
            QMessageBox::information(this, tr("Error"),tr("Los datos del archivo '%0%1' son incorrectos").arg(ruta).arg("LV_General.txt"));
            return;
        }


        QTableWidgetItem *newItem = new QTableWidgetItem(line.split(QString("\t")).at(0));
        newItem->setFlags(Qt::ItemIsEnabled);
        ui->table->setItem(nlines,0,newItem);
        QTableWidgetItem *newItemB = new QTableWidgetItem(line.split(QString("\t")).at(0));
        newItemB->setFlags(Qt::ItemIsEnabled);
        ui->table3->setItem(nlines,0,newItemB);
//Lectura de BD y escritura en columna 2
        QString varname=line.split(QString("\t")).at(0);
        QString varSel;
        QString varOffset;


        if(line.split(QString("\t")).at(2)=="Float"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))));
        }

        else if(line.split(QString("\t")).at(2)=="Int"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))));
        }
// Tercer columna en tabla
        QTableWidgetItem *newItem3 = new QTableWidgetItem(line.split(QString("\t")).at(1));
        newItem3->setFlags(Qt::NoItemFlags);
        ui->table->setItem(nlines,2,newItem3);
        QTableWidgetItem *newItem3B = new QTableWidgetItem(line.split(QString("\t")).at(1));
        newItem3B->setFlags(Qt::NoItemFlags);
        ui->table3->setItem(nlines,2,newItem3B);

//Lectura de BD si la variable es Int o Double
        QTableWidgetItem *newItem4 = new QTableWidgetItem(line.split(QString("\t")).at(2));
        newItem4->setFlags(Qt::NoItemFlags);
        ui->table->setItem(nlines,1,newItem4);
        QTableWidgetItem *newItem4B = new QTableWidgetItem(line.split(QString("\t")).at(2));
        newItem4B->setFlags(Qt::NoItemFlags);
        ui->table3->setItem(nlines,1,newItem4B);
        nlines++;
      }
    ui->table->sortByColumn(0,Qt::AscendingOrder);
    ui->table3->sortByColumn(0,Qt::AscendingOrder);
    //Reiniciar cuadros de texto
 //   ui->inNuevoValor->setText("");

}


QStringList GrupoVars::rFrStringList(QString file)
{
    QStringList SystFile;
    QFile ListFile(file);
    if (!ListFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::information(this, tr("Error"),
        tr("No se encontró el archivo '%1'").arg(file));
        SystFile.clear();
        return SystFile;
    }
    QString DataFile = ListFile.readAll();
    if (DataFile.isEmpty()) {
        QMessageBox::information(this, tr("Error"),
        tr("El archivo '%1' no contiene datos").arg(file));
        SystFile.clear();
        return SystFile;
    }
    SystFile= DataFile.split(QString("\n"));
    return SystFile;

}


void  GrupoVars::showVariablesE()
{
    QStringList lines=rFrStringList(ruta+"LV_General.txt");

    int nlines = 0;//Inicia el contador de filas de txt, en este caso va a contar los elementos de "lines"
    while (nlines < lines.count()) {
        QString line=lines.at(nlines);
        ui->table3->insertRow(nlines);

//Verifica que la linea este en estado adecuado de lectura
        if(line.count("\t",Qt::CaseSensitive)<2){
            QMessageBox::information(this, tr("Error"),tr("Los datos del archivo '%0%1' son incorrectos").arg(ruta).arg("LV_General.txt"));
            return;
        }

        QTableWidgetItem *newItem = new QTableWidgetItem(line.split(QString("\t")).at(0));
        newItem->setFlags(Qt::ItemIsEnabled);
        ui->table3->setItem(nlines,0,newItem);

//Lectura de BD y escritura en columna 2
        QString varname=line.split(QString("\t")).at(0);
        QString varSel;
        QString varOffset;


        if(line.split(QString("\t")).at(2)=="Float"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getF(shrdMem->getVar(varname.split("+").at(0))));
        }

        else if(line.split(QString("\t")).at(2)=="Int"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(shrdMem->getI(shrdMem->getVar(varname.split("+").at(0))));
        }
// Tercer columna en tabla
        QTableWidgetItem *newItem3 = new QTableWidgetItem(line.split(QString("\t")).at(1));
        newItem3->setFlags(Qt::NoItemFlags);
        ui->table3->setItem(nlines,2,newItem3);

//Lectura de BD si la variable es Int o Double
        QTableWidgetItem *newItem4 = new QTableWidgetItem(line.split(QString("\t")).at(2));
        newItem4->setFlags(Qt::NoItemFlags);
        ui->table3->setItem(nlines,1,newItem4);

        nlines++;
      }
    ui->table3->sortByColumn(0,Qt::AscendingOrder);
    //Reiniciar cuadros de texto
 //   ui->inNuevoValor->setText("");

}

void  GrupoVars::showVartoChangeE(int row,int column)
{
    Row=row;
    Column=column;
    StringE.clear();
    ui->table4->insertRow(ui->table4->rowCount());
    for(int i=0;i<=2;i++){
        QTableWidgetItem *newItem = new QTableWidgetItem(ui->table3->item(Row,Column+i)->text());

        if(!i){
            newItem->setFlags(Qt::ItemIsEnabled);
        }
        else {
            newItem->setFlags(Qt::NoItemFlags);
        }
        StringE.append(ui->table3->item(Row,Column+i)->text());
        if(i!=2)
            StringE.append("\t");
        ui->table4->setItem(ui->table4->rowCount()-1,i,newItem);
    }

    StringListE.append(StringE);
    ui->table3->removeRow(Row);
    verifyVariable();
}

void  GrupoVars::deleteVarE(int row,int column)
{
    Row=row;
    Column=column;

    ui->table3->insertRow(ui->table3->rowCount());
    for(int i=0;i<=2;i++){
        QTableWidgetItem *newItem = new QTableWidgetItem(ui->table4->item(Row,Column+i)->text());

        if(!i){
            newItem->setFlags(Qt::ItemIsEnabled);
        }
        else {
            newItem->setFlags(Qt::NoItemFlags);
        }

        ui->table3->setItem(ui->table3->rowCount()-1,i,newItem);
    }

    StringListE.removeAt(Row);
    ui->table4->removeRow(Row);
    verifyVariable();
}

//Conversion de Flotante a cadena
QString  GrupoVars::ftoa(float f)
{
    QString str = QString("%1").arg(f);
    return str;

}
//Anuncio
void  GrupoVars::anuncmnt(QString strings)
{
    qDebug()<<strings;
    close();
    QMessageBox::information(this, tr("Error"),
    tr("No se encontro la variable: '%1'").arg(strings));
}
//Propias de la ventana

GrupoVars::~GrupoVars()
{
    delete ui;
}

