#include <QtGui>
#include "tablas.h"
#include "ui_tablas.h"
#include <direct.h>

#include "BitaC/BitaC.h"
#include "Settings/Paths.h"

Tablas::Tablas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tablas)
{
    ui->setupUi(this);
    ruta = InstallPath;
    //setAttribute( Qt::WA_DeleteOnClose );
    m_shrdMem = new ShrdMem();
    connect(ui->abrir,SIGNAL(clicked()),this,SLOT(openFile()));
    connect(ui->guardar,SIGNAL(clicked()),this,SLOT(saveFile()));
    connect(ui->guardarcomo,SIGNAL(clicked()),this,SLOT(saveFileAs()));
    connect(ui->genera,SIGNAL(clicked()),this,SLOT(generateTable()));
    connect(ui->detener,SIGNAL(clicked()),this,SLOT(stopTable()));
    updatetimer = new QTimer(this);
    connect(updatetimer, SIGNAL(timeout()), this, SLOT(UpdateHMI()));
}

void Tablas::generateTable(){

    ui->detener->setEnabled(1);
    ui->genera->setEnabled(0);
    ui->abrir->setEnabled(0);
    ui->guardar->setEnabled(0);
    ui->guardarcomo->setEnabled(0);
    initialUpdate();

    if(ui->tiempo->currentText()=="Minutos"){
        updatetimer->start(60000);
    }
    else
        updatetimer->start(1000);

    BitaC::escribeBTC("Inició tabulación");
    //this->close();
}

void Tablas::stopTable(){
    ui->detener->setEnabled(0);
    ui->abrir->setEnabled(1);
    ui->guardar->setEnabled(1);
    ui->guardarcomo->setEnabled(1);

    ui->tiempo->setCurrentIndex(-1);
    ui->root->clear();
    ui->rootD->clear();
    StringList.clear();
    VarType.clear();
    VarNames.clear();
    Description.clear();
    updatetimer->stop();
    BitaC::escribeBTC("Detuvo tabulación");
}

void Tablas::pauseTable(){
    updatetimer->stop();
}

void Tablas::startTable(){
    if(VarNames.isEmpty())return;

    if(ui->tiempo->currentText()=="Minutos"){
        updatetimer->start(60000);
    }
    else
        updatetimer->start(1000);
}

void Tablas::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,"",QString("%0%1\\GruposVariables").arg(ruta).arg(user));

    if (!fileName.isEmpty()) {
        readFromFile(fileName);
    }
    else return;
    ui->guardar->setEnabled(1);
    ui->guardarcomo->setEnabled(1);
}

void Tablas::saveFile()
{
    if(ui->rootD->text().isEmpty()){
        QMessageBox::information(this, tr(""),
        QString("El nombre del archivo es inválido"));
        return;
    }
    QString fileName = QString("%0%1\\GruposTablas\\%2%3").arg(ruta).arg(user).arg(ui->rootD->text()).arg(".csv");
    rootDest=fileName;
    saveTable(fileName);

    ui->genera->setEnabled(1);
}

void Tablas::saveFileAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,"",QString("%0%1\\GruposTablas").arg(ruta).arg(user));
    ui->rootD->setText(fileName);
    rootDest=fileName;
    if (!fileName.isEmpty())
    {
        fileName.append(".txt");
        saveTable(fileName);
    }
    else return;
    ui->genera->setEnabled(1);
}

void Tablas::saveTable(QString fileName)
{
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("No se pudo abrir archivo"), file.errorString());
        return;
    }
}

void Tablas::readFromFile(QString fileName)
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
     getVerticalVarNames();
     getDescription();
}

void Tablas::getVerticalVarNames(){
    int i=0;
    VarNames.clear();
    while(i<StringList.size()){
        VarNames.append(QString(StringList.at(i)).split("\t").at(0));
        i++;
    }
}

void Tablas::getDescription(){
    int i=0;
    Description.clear();
    while(i<StringList.size()){
        Description.append(QString(StringList.at(i)).split("\t").at(2));
        i++;
    }

    i=0;
    VarType.clear();
    while(i<StringList.size()){
        VarType.append(QString(StringList.at(i)).split("\t").at(1));
        i++;
    }
}

void Tablas::initialUpdate(){

    QFile ffile(rootDest);
    if (!ffile.open(QFile::ReadWrite | QFile::Append)) {
        QMessageBox::warning(this, tr(""),
                             tr("No se pudo abrir el archivo %1:\n%2.")
                             .arg(rootDest)
                             .arg(ffile.errorString()));
        return;
    }

    int i=0;
    QString Line;
    Line.clear();
    QTextStream s(&ffile);

    while(i<VarNames.size()){
        Line.append(VarNames.at(i));
        if(!(VarNames.at(i)==VarNames.last())){
            Line.append(QString("%0").arg(","));
        }
        else if(VarNames.at(i)==VarNames.last()){
            Line.append(QString("%0").arg("\r\n"));
        }

        i++;
    }
    s<<Line;
    Line.clear();
    i=0;

    while(i<Description.size()){
        Line.append(Description.at(i));
        if(!(Description.at(i)==Description.last())){
            Line.append(QString("%0").arg(","));
        }
        else if(Description.at(i)==Description.last()){
            Line.append(QString("%0").arg("\r\n"));
        }

        i++;
    }
    s<<Line;

    ffile.close();
}

void Tablas::UpdateHMI(){

    QFile ffile(rootDest);
    if (!ffile.open(QFile::ReadWrite | QFile::Append)) {
        QMessageBox::warning(this, tr(""),
                             tr("No se pudo abrir el archivo %1:\n%2.")
                             .arg(rootDest)
                             .arg(ffile.errorString()));
        return;
    }

    int i=0;

    QString varname;
    QString varSel;
    QString varOffset;

    QString Line;
    Line.clear();
    QTextStream s(&ffile);

    while(i<VarNames.size()){

        varname=VarNames.at(i);

        if(VarType.at(i)=="Float"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(m_shrdMem->getF(m_shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(m_shrdMem->getF(m_shrdMem->getVar(varname.split("+").at(0))));
        }

        else if(VarType.at(i)=="Int"){
            if(varname.contains("+")){
                varOffset=varname.split("+").at(1);
                varSel=ftoa(m_shrdMem->getI(m_shrdMem->getVar(varname.split("+").at(0))+varOffset.toInt()));
            }
            else
            varSel=ftoa(m_shrdMem->getI(m_shrdMem->getVar(varname.split("+").at(0))));
        }


        Line.append(varSel);

        if(!(VarNames.at(i)==VarNames.last())){
            Line.append(QString("%0").arg(","));
        }
        else if(VarNames.at(i)==VarNames.last()){
            Line.append(QString("%0").arg("\r\n"));
        }

        i++;
    }
    s<<Line;
    Line.clear();
}

//Conversion de Flotante a cadena
QString Tablas::ftoa(float f)
{
    QString str = QString("%1").arg(f);
    return str;
}

Tablas::~Tablas()
{
    delete ui;
}
