#include <QtGui>
#include <QDebug>
#include "configuraciondemodelos.h"
#include "ui_configuraciondemodelos.h"
#include "Settings/Paths.h"

ConfiguracionDeModelos::ConfiguracionDeModelos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiguracionDeModelos)
{
    ui->setupUi(this);
    this->ruta = InstallPath;
    setAttribute( Qt::WA_DeleteOnClose );
//    shrdMem = new ShrdMem();
//    connect(shrdMem,SIGNAL(varNotFound(QString)),this,SLOT(anuncmnt(QString)));

///Condiciones iniciales para tabla
    ui->table->setColumnCount(4);
    QStringList headers;
    headers << "VARIABLE" <<"VALOR"<<"TIPO"<< "DESCRIPCIÓN";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);


    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
connect(ui->bbuscar,SIGNAL(clicked()),this,SLOT(buscavalor()));

///Condiciones iniciales para ComboBox
    loadSyst();//Llenar ComboBox
    ui->SeleccSist->setCurrentIndex(-1);//Indice inicial del ComboBox
///Boton Guardar
    connect(ui->guardar,SIGNAL(clicked()),this,SLOT(verifyVariable()));
}


void ConfiguracionDeModelos::buscavalor(){


    int i,j;

    for(i=0;i<ui->table->rowCount();i++)
    { //1
        for(j=0;j<ui->table->columnCount();j++){ //2
        ui->table->item(i,j)->setBackground(QBrush(Qt::white));

        }

    }

    //int pos;
    QString str1=ui->textobuscar->text().toLower();
    //int post = 0;
    QIntValidator v(0, 1, this);
    QDoubleValidator v2(0, 100,2, this);

    if(ui->textobuscar->text().isEmpty() ){
        QMessageBox::information(this, tr("Error"),
        tr("No se ha seleccionado una variable o un valor válido"));
        return;
    }


    int result=0;
    qDebug()<<"ui->table->rowCount()="<<ui->table->rowCount();
    qDebug()<<"ui->table->columnCount()="<<ui->table->columnCount();
    for(int i=0;i<ui->table->rowCount();i++)
    { //1
        for(int j=0;j<ui->table->columnCount();j++){ //2
        QString str=ui->table->item(i,j)->text().toLower();
        if(str.contains(str1,Qt::CaseSensitive))
        { //3

    //ui->table->item(i,j)->setForeground(QBrush(Qt::red));
     ui->table->item(i,j)->setBackground(QBrush(QColor(0,129,255,51)));
        ui->table->scrollToItem(ui->table->item(i,0),QAbstractItemView::EnsureVisible);

        //ui->table->paintingActive();
               // ui->table->item(i,0)->setSelected(true);
       //temp QMessageBox::information(this, tr("Encontrado"),tr("Valor encontrado en celda %1").arg(i+1));
               result=1;
               // return;

    } //3

    } //2

    }//1

    if(result==0)
    {
     QMessageBox::information(this, tr("Error"),tr("Valor no encontrado"));
    }




}




void ConfiguracionDeModelos::verifyVariable()
{
    int pos;
    QString str=ui->inNuevoValor->text();

    if(ui->varToChange->text().isEmpty() || ui->inNuevoValor->text().isEmpty()){
        QMessageBox::information(this, tr("Error"),
        tr("No se ha seleccionado una variable o un valor válido"));
        return;
    }

    QString varOffset;

    //Escritura de nuevo valor
    if(ui->table->item(Row,Column+2)->text()=="Float"){

        if(ui->varToChange->text().contains("+")){
            //pos=rFrStringVarsNum(ui->varToChange->text().split("+").at(0)).toInt();
            pos=shrdMem->getVar(ui->varToChange->text().split("+").at(0));
            varOffset=ui->varToChange->text().split("+").at(1);
            shrdMem->setF(ui->inNuevoValor->text().toFloat(),pos+varOffset.toInt());
        }
        else{
            //pos=rFrStringVarsNum(ui->varToChange->text()).toInt();
            pos=shrdMem->getVar(ui->varToChange->text().split("+").at(0));
            shrdMem->setF(ui->inNuevoValor->text().toFloat(),pos);
        }
    }

    else if(ui->table->item(Row,Column+2)->text()=="Int"){

        if(ui->varToChange->text().contains("+")){
            //pos=rFrStringVarsNum(ui->varToChange->text().split("+").at(0)).toInt();
            pos=shrdMem->getVar(ui->varToChange->text().split("+").at(0));
            varOffset=ui->varToChange->text().split("+").at(1);
            shrdMem->setI(ui->inNuevoValor->text().toInt(),pos+varOffset.toInt());
        }
        else{
            //pos=rFrStringVarsNum(ui->varToChange->text()).toInt();
            pos=shrdMem->getVar(ui->varToChange->text().split("+").at(0));
            shrdMem->setI(ui->inNuevoValor->text().toInt(),pos);
        }
    }
    showVariables(ui->SeleccSist->currentText());
     ui->table->scrollToItem(ui->table->item(Row,Column),QAbstractItemView::EnsureVisible);
}


void ConfiguracionDeModelos::showVartoChange(int row,int column)
{
    Row=row;
    Column=column;
    ui->varToChange->setText(ui->table->item(row,column)->text());
}

void ConfiguracionDeModelos::loadSyst()
{  
    for(int i=0;i<rFrStringList("Listas\\Sistemas\\ListadoSistemas.txt").size();i++){
        ui->SeleccSist->insertItem(i+1,rFrStringList("Listas\\Sistemas\\ListadoSistemas.txt").at(i));
    }
    connect(ui->SeleccSist,SIGNAL(activated(QString)),this,SLOT(showVariables(QString)));
}


void ConfiguracionDeModelos::showVariables(QString system)
{
    while(ui->table->rowCount()!=0){ui->table->removeRow(0);}

    QStringList lines=rFrStringList(tr("%0Listas\\Reparametrizacion\\LV_R_%1%2").arg(ruta).arg(system).arg(".txt"));

    int nlines = 0;//Inicia el contador de filas de txt, en este caso va a contar los elementos de "lines"
    while (nlines < lines.count()) {
        QString line=lines.at(nlines);
        ui->table->insertRow(nlines);

//Verifica que la linea este en estado adecuado de lectura
        if(line.count("\t",Qt::CaseSensitive)<2){
            QMessageBox::information(this, tr("Error"),tr("Los datos del archivo '%1' son incorrectos").arg(system));
            return;
        }
///
        QTableWidgetItem *newItem = new QTableWidgetItem(line.split(QString("\t")).at(0));
        newItem->setFlags(Qt::ItemIsEnabled);
        ui->table->setItem(nlines,0,newItem);

//Lectura de BD y escritura en columna
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

        QTableWidgetItem *newItem2 = new QTableWidgetItem(varSel);
        newItem2->setFlags(Qt::NoItemFlags);
        ui->table->setItem(nlines,1,newItem2);

        // Tercer columna en tabla
        QTableWidgetItem *newItem3 = new QTableWidgetItem(line.split(QString("\t")).at(1));
        newItem3->setFlags(Qt::NoItemFlags);
        ui->table->setItem(nlines,3,newItem3);

        //Lectura de BD si la variable es Int o Double
        QTableWidgetItem *newItem4 = new QTableWidgetItem(line.split(QString("\t")).at(2));
        newItem4->setFlags(Qt::NoItemFlags);
        ui->table->setItem(nlines,2,newItem4);

        nlines++;
      }
    ui->table->sortByColumn(0,Qt::AscendingOrder);
    //Reiniciar cuadros de texto
    ui->varToChange->setText("");
    ui->inNuevoValor->setText("");
}


QStringList ConfiguracionDeModelos::rFrStringList(QString file)
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

QString ConfiguracionDeModelos::rFrStringVarsNum(QString var)
{
    QString file="Vars_Num.txt";
    QString NumName;
    QFile VarsFile(file);
    if (!VarsFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::information(this, tr("Error"),
        tr("No se encontró el archivo '%1'").arg(file));
        NumName.clear();
        return NumName;
    }
    QString DataFile = VarsFile.readLine();
    if (DataFile.isEmpty()) {
        QMessageBox::information(this, tr("Error"),
        tr("El archivo '%1' no contiene datos").arg(file));
        NumName.clear();
        return NumName;
    }

    QTextStream in(&VarsFile);
         while (!in.atEnd()) {
            NumName=in.readLine();
            if(NumName.split("\t").at(0)==var){break;}
         }
         return NumName.split("\t").at(1);
}

//Conversion de Flotante a cadena
QString ConfiguracionDeModelos::ftoa(float f)
{
    QString str = QString("%1").arg(f);
    return str;
}

//Anuncio
void ConfiguracionDeModelos::anuncmnt(QString strings)
{
    qDebug()<<strings;
    close();
    QMessageBox::information(this, tr("Error"),
    tr("No se encontro la variable: '%1'").arg(strings));
}

//Propias de la ventana
ConfiguracionDeModelos::~ConfiguracionDeModelos()
{
    delete ui;
}

void ConfiguracionDeModelos::changeEvent(QEvent *e)
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
