#include <QtGui>
#include <QDebug>
#include "fallas.h"
#include "ui_fallas.h"
#include "Settings/Paths.h"

#define OffsetFallas 15500

Fallas::Fallas(QWidget *parent, QString mod) :
    QDialog(parent),
    ui(new Ui::Fallas)
{
    this->ruta = InstallPath;
    this->mod = mod;
    this->nmb_fil = "LV_";

    if(mod=="F"){
        this->nmb_fil.prepend("Listas\\Fallas\\");
    }
    else if(mod=="FI"){
        this->nmb_fil.prepend("Listas\\FIT\\");
    }
    this->nmb_fil.append(mod);
    this->nmb_fil.append("_");
    this->modSld = 1;
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    shrdMem = new ShrdMem();
    //-----------------------
    this->fallas_act.clear();
    this->fallas_all.clear();
    this->NamesList_act.clear();
    this->NamesList_all.clear();
    for(int i = 0; i < 2000; i++)
    this->ptrsArr[i] = 0;
    //-------------------------------------
    // Condiciones iniciales para tabla1
    //-------------------------------------
    ui->table->setColumnCount(4);
    ui->table->setColumnWidth(0,40);
    ui->table->setColumnWidth(1,200);
    ui->table->setColumnWidth(2,80);
//    ui->table->setColumnWidth(3,380);
    QStringList headers1;
    headers1 << "!" << "VARIABLE" << "VALOR (%)" << "DESCRIPCIÓN";
    ui->table->setHorizontalHeaderLabels(headers1);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    //-------------------------------------
    // Condiciones iniciales para tabla2
    //-------------------------------------
    ui->tableAll->setColumnCount(5);
    ui->tableAll->setColumnWidth(0,40);
    ui->tableAll->setColumnWidth(1,150);
    ui->tableAll->setColumnWidth(2,80);
    ui->tableAll->setColumnWidth(3,510);
    ui->tableAll->setColumnWidth(4,250);
    QStringList headers2;
    headers2 << "!" << "VARIABLE" << "VALOR (%)" << "DESCRIPCIÓN" << "SISTEMA";
    ui->tableAll->setHorizontalHeaderLabels(headers2);
    ui->tableAll->horizontalHeader()->setStretchLastSection(true);
    //-------------------------------------
    connect(shrdMem,SIGNAL(varNotFound(QString)),this,SLOT(anuncmnt(QString)));
    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    connect(ui->tableAll, SIGNAL(cellActivated(int,int)), this, SLOT(showVartoReset(int,int)));
    connect(ui->slider,SIGNAL(sliderMoved(int)),this,SLOT(dialValChanged(int)));
    connect(ui->slider, SIGNAL(valueChanged(int)), this, SLOT(dialValChanged(int)));
    connect(ui->le_val,SIGNAL(textChanged(QString)),this,SLOT(textValChanged(QString)));
    connect(ui->TabWid, SIGNAL(currentChanged(int)), this, SLOT(selTab(int)));
    connect(ui->btn_Guardar, SIGNAL(clicked()), this, SLOT(changeVal()));
    connect(ui->btn_Reset, SIGNAL(clicked()), this, SLOT(resetVal()));
    connect(ui->btn_Reset_All, SIGNAL(clicked()), this, SLOT(resetVal()));
    connect(ui->btn_search, SIGNAL(clicked()), this, SLOT(buscarVariable()));
    connect(ui->btn_searchAll, SIGNAL(clicked()), this, SLOT(buscarVariable()));
    connect(ui->table, SIGNAL(cellClicked(int,int)), this, SLOT(selectedItem(int,int)));
    connect(ui->tableAll, SIGNAL(cellClicked(int,int)), this, SLOT(selectedItem(int,int)));
    connect(ui->btn_ResetAllFails, SIGNAL(clicked()), this, SLOT(resetAllVars()));
    ui->TabWid->setCurrentIndex(0);
    //-------------------------------------
    ui->pgrBar->setValue(0);
    ui->pgrBar->setVisible(1);
    ui->pgrBar_All->setValue(0);
    ui->pgrBar_All->setVisible(1);

    QTimer *updateVars = new QTimer(this);
    this->actualizar = false;
    connect(updateVars, SIGNAL(timeout()), this, SLOT(actualizaVars()));
    updateVars->start(100);

    QTimer *updateVarsAll = new QTimer(this);
    this->actualizar_all = false;
    connect(updateVarsAll, SIGNAL(timeout()), this, SLOT(actualizaVarsAll()));
    updateVarsAll->start(1000);


    this->desp = 1;
    showAll();
    this->desp = 0;

    loadSyst();
    ui->SeleccSist->setCurrentIndex(-1);
    clearscr();
}

// Obtiene el listado de Sistemas
void Fallas::loadSyst()
{
    //qDebug()<<"Se leen los nonbres de los sistemas y se crean en el combobox.";
    QString rtf = this->ruta;
    rtf.append("Listas\\Sistemas\\");
    rtf.append(this->mod);
    rtf.append("_ListadoSistemas.txt");
    for(int i=0; i<rFrStringList(rtf).size(); i++)
    {
        ui->SeleccSist->insertItem(i+1,rFrStringList(rtf).at(i));
    }
    connect(ui->SeleccSist, SIGNAL(activated(QString)), this, SLOT(showVars(QString)));
}

void Fallas::showVars(QString sistema)
{
    // Declaración de las variables locales a usar
    QStringList lines;
    QString line, name, nameF, descr, tipo, vNorm, vFail, offstr;
    int pos, offset;

    // Desocultamos la Barra de Progreso
    ui->pgrBar->setValue(0);
    ui->pgrBar->setVisible(1);

    // Reseteo de todas la variables implicadas
    this->actualizar = false;

    this->fallas_act.clear();
    this->NamesList_act.clear();
    this->Descrip_act.clear();
    this->Tipo_act.clear();
    this->ValN_act.clear();
    this->ValF_act.clear();

    for (int i=0; i < 2000; i++)
    {
        ptrsVars[i]=0;
    }

    // Obtención de las líneas del archivo de texto vinculado
    QString rtf = this->ruta;
    ///Aki
    rtf.append(this->nmb_fil);
    rtf.append(sistema);
    rtf.append(".txt");
    //qDebug()<<"Obtenemos las líneas del archivo de texto: "<<rtf;
    lines=rFrStringList(rtf);

    // Validación de integridad de líneas
    for(int i = 0; i < lines.size(); i++)
    {
        line = lines.at(i);
        if(line.count("\t",Qt::CaseSensitive)<4)
        {
            QMessageBox::information(this, tr("Error"),tr("Los datos del archivo del sistema \"%1\" son incorrectos.").arg(sistema));
            close();
            return;
        }
    }

    // Si son válidas, se guardan en la lista de fallas actuales.
    this->fallas_act = lines;

    // Reiniciamos cuadros de texto
    clearscr();

    // Se limpia la tabla de renglones, si es que existen.
    while(ui->table->rowCount()!=0)
    {
        ui->table->removeRow(0);
    }

    //Determinación del número de pasos de la ProgressBar
    int totalPGR =  lines.size();
    int pasoPGR = (int) totalPGR/90;
    int acumPGR = 10;
    ui->pgrBar->setValue(10);

    // Comenzamos a crear la tabla
    for(int i = 0; i < this->fallas_act.size(); i++)
    {
        // Para cada elemento de la lista de fallas, se inserta un nuevo renglón.
        ui->table->insertRow(i);
        // Se saca la primera línea de la lista
        line = this->fallas_act.at(i);
        //----------------------
        // Se divide la línea en los componentes a mostrar.
        // Se obtiene el nombre y se agrega en la lista de nombres.
        name = line.split("\t").at(0);
        nameF = name;
        this->NamesList_act.append(name);
        // Descripción...
        descr = line.split("\t").at(1);
        this->Descrip_act.append(descr);
        // Tipo...
        tipo = line.split("\t").at(2);
        this->Tipo_act.append(tipo);
        // Valor Normal...
        vNorm = line.split("\t").at(3);
        this->ValN_act.append(vNorm);
        // Valor Falla...
        vFail = line.split("\t").at(4);
        this->ValF_act.append(vFail);
        //-------------
        // Se determina el offset que implica el nombre.
        offset = 0;
        if(nameF.contains("+"))
        {
            offstr = nameF.split("+").at(1);
            offset = offstr.toInt();
            nameF = nameF.split("+").at(0);
        }

        // La variable nameF, lleva la posición original sin offset.
        pos = shrdMem->getVar(nameF);

        if(pos < 0)
        {
            QMessageBox::information(this, tr("Error"), tr("El nombre de la variable no corresponde con niguno almacenado en la Base de Datos."));
            close();
            return;
        }
        // Se calcula la posición de acuerdo al nombre y al offset, y se guarda en un arreglo.
        pos = pos + offset;
        this->ptrsVars[i] = pos;

        // A este punto, tenemos varias listas conteniendo elos nombres, las descripciones, los tipos, los valores y las posiciones.

        // Columna 0
        QTableWidgetItem *newItem0 = new QTableWidgetItem();
        newItem0->setFlags(Qt::NoItemFlags);
        ui->table->setItem(i, 0, newItem0);

        // Columna 1
        QTableWidgetItem *newItem1 = new QTableWidgetItem(name);
        newItem1->setFlags(Qt::ItemIsEnabled);
        ui->table->setItem(i, 1, newItem1);

        // Columna 2
        QTableWidgetItem *newItem2 = new QTableWidgetItem();
        newItem2->setFlags(Qt::NoItemFlags);
        newItem2->setTextAlignment(Qt::AlignCenter);
        ui->table->setItem(i, 2, newItem2);

        // Columna 3
        QTableWidgetItem *newItem3 = new QTableWidgetItem(descr);
        newItem3->setFlags(Qt::NoItemFlags);
        ui->table->setItem(i, 3,newItem3);

        acumPGR = acumPGR + pasoPGR;
        ui->pgrBar->setValue(acumPGR);
    }

    // Terminada la tabla, se completa la ProgressBar y se borra.
    ui->pgrBar->setValue(100);
    ui->table->scrollToItem(ui->table->item(Row,Column),QAbstractItemView::EnsureVisible);
    ui->table->setCurrentCell(Row,Column,QItemSelectionModel::Select);

    //Activamos la actualización actual
    this->actualizar = true;
    ui->pgrBar->setVisible(1);
}

void Fallas::showAll()
{
    //qDebug()<<"Función ShowAll()";
    // Declaración de las variables locales a usar
    QStringList lines;
    QString line, name, nameF, descr, tipo, vNorm, vFail, offstr, sist;
    int pos, offset;
    int iNorm, iFail, iAct;
    float fNorm, fFail, fAct;

    // Desocultamos la Barra de Progreso
    ui->pgrBar_All->setValue(0);
    ui->pgrBar_All->setVisible(1);

    // Reseteo de todas las variables implicadas
    this->actualizar_all = false;
    this->fallas_all.clear();
    this->NamesList_all.clear();
    this->Descrip_all.clear();
    this->Tipo_all.clear();
    this->ValN_all.clear();
    this->ValF_all.clear();
    this->Sistem_all.clear();

    for(int i = 0; i < 2000; i++)
    {
        this->ptrsArr[i] = 0;
    }

    // Obtención de las líneas del archivo de texto vinculado
    QString rtf = this->ruta;
    rtf.append(this->nmb_fil);
    rtf.append("FallasAll.txt");
    lines = rFrStringList(rtf);
    this->fallas_all = lines;
    //qDebug()<<"El tamaño de la lista Fallas_all es: "<<this->fallas_all.size();

    //Comenzamos con la validación del texto capturado
    for(int i = 0; i < this->fallas_all.size(); i++)
    {
        line = this->fallas_all.at(i);
        if(line.count("\t",Qt::CaseSensitive) < 5)
        {
            QMessageBox::information(this, tr("Error"),tr("Los datos del archivo del sistema \"LV_F_FallasAll\" son incorrectos."));
            close();
            return;
        }
    }
    clearscr();

    while(ui->table->rowCount()!=0)
    {
        ui->table->removeRow(0);
    }

    ui->pgrBar_All->setValue(10);

    //Determinación del número de pasos de la ProgressBar
    int totalPGR =  this->fallas_all.size();
    int pasoPGR = (int) totalPGR/90;
    int acumPGR = 10;

    //qDebug()<<"Antes del For... Fallas_All";

    // Comenzamos a crear la tabla
    for(int i = 0; i < this->fallas_all.size(); i++)
    {
        line = this->fallas_all.at(i);
        name = line.split("\t").at(0);
        nameF = name;
        this->NamesList_all.append(name);
        descr = line.split("\t").at(1);
        this->Descrip_all.append(descr);
        tipo = line.split("\t").at(2);
        this->Tipo_all.append(tipo);
        vNorm = line.split("\t").at(3);
        this->ValN_all.append(vNorm);
        vFail = line.split("\t").at(4);
        this->ValF_all.append(vFail);
        sist = line.split("\t").at(5);
        this->Sistem_all.append(sist);
        //-------------
        offset = 0;
        if(nameF.contains("+"))
        {
            offstr = nameF.split("+").at(1);
            offset = offstr.toInt();
            nameF = nameF.split("+").at(0);
        }

        pos = shrdMem->getVar(nameF);

        if(pos < 0)
        {
            QMessageBox::information(this, tr("Error"), tr("El nombre de la variable no corresponde con niguno almacenado en la Base de Datos."));
            close();
            return;
        }
        pos = pos + offset;
        this->ptrsArr[i] = pos;

        ui->tableAll->insertRow(i);

        //qDebug()<<"Fallas_All... i: "<<i;

        // Columna 0
        QTableWidgetItem *newItem0 = new QTableWidgetItem();
        newItem0->setFlags(Qt::NoItemFlags);
        ui->tableAll->setItem(i, 0, newItem0);

        // Columna 1
        QTableWidgetItem *newItem1 = new QTableWidgetItem(name);
        newItem1->setFlags(Qt::ItemIsEnabled);
        ui->tableAll->setItem(i, 1, newItem1);

        // Columna 2
        QTableWidgetItem *newItem2 = new QTableWidgetItem();
        newItem2->setFlags(Qt::NoItemFlags);
        newItem2->setTextAlignment(Qt::AlignCenter);
        ui->tableAll->setItem(i, 2, newItem2);

        // Columna 3
        QTableWidgetItem *newItem3 = new QTableWidgetItem(descr);
        newItem3->setFlags(Qt::NoItemFlags);
        ui->tableAll->setItem(i, 3,newItem3);

        // Columna 4
        QTableWidgetItem *newItem4 = new QTableWidgetItem(sist);
        newItem4->setFlags(Qt::NoItemFlags);
        newItem4->setTextAlignment(Qt::AlignCenter);
        ui->tableAll->setItem(i, 4, newItem4);

        //---------------------------
        if(tipo == "Int")
        {
            iNorm = vNorm.toInt();
            iFail = vFail.toInt();
            iAct = shrdMem->getI(pos);
            if (iAct != iNorm)
            {
                QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                QLabel *fallaPX = new QLabel();
                //------------------------
                fallaPX->setPixmap(*failPX);
                fallaPX->setAlignment(Qt::AlignCenter);
                ui->tableAll->setCellWidget(i, 0, fallaPX);
            }
            else
            {
                ui->tableAll->removeCellWidget(i,0);
            }

            ui->tableAll->item(i,2)->setText(getPercent((float) iNorm, (float) iFail, (float) iAct));
        }
        else if(tipo == "Float")
        {
            fNorm = vNorm.toFloat();
            fFail = vFail.toFloat();
            fAct = shrdMem->getF(pos);
            if (fAct != fNorm)
            {
                QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                QLabel *fallaPX = new QLabel();
                //------------------------
                fallaPX->setPixmap(*failPX);
                fallaPX->setAlignment(Qt::AlignHCenter);
                ui->tableAll->setCellWidget(i, 0, fallaPX);
            }
            else
            {
                ui->tableAll->removeCellWidget(i,0);
            }

            ui->tableAll->item(i, 2)->setText(getPercent(fNorm, fFail, fAct));
        }
        else
        {
            //qDebug()<<"No corresponden los tipos...";
        }
        acumPGR = acumPGR + pasoPGR;
        ui->pgrBar_All->setValue(acumPGR);
    }
    ui->pgrBar_All->setValue(100);
    ui->pgrBar_All->setVisible(1);
    ui->tableAll->scrollToItem(ui->table->item(Row,Column),QAbstractItemView::EnsureVisible);
    ui->tableAll->setCurrentCell(Row,Column,QItemSelectionModel::Select);
    this->actualizar_all = true;
}

void Fallas::actualizaVars()
{
    if(this->actualizar && (this->desp == 0))
    {
        QString vNorm, vFail;
        int iNorm, iFalla, iAct = -1;
        float fNorm, fFalla, fAct = -1;

        //Determinación del número de pasos de la ProgressBar
        ui->pgrBar->setValue(0);
        ui->pgrBar->setVisible(1);
        int totalPGR =  this->fallas_act.size();
        int pasoPGR = (int) totalPGR/100;
        int acumPGR = 0;

        for(int i = 0; i < this->fallas_act.size(); i++)
        {
            vNorm = this->ValN_act.at(i);
            vFail = this->ValF_act.at(i);
            //---------------------------
            if(this->Tipo_act.at(i) == "Int")
            {
                iNorm = vNorm.toInt();
                iFalla = vFail.toInt();
                iAct = shrdMem->getI(this->ptrsVars[i]);
                if (iAct != iNorm)
                {
                    QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                    QLabel *fallaPX = new QLabel();
                    //------------------------
                    fallaPX->setPixmap(*failPX);
                    fallaPX->setAlignment(Qt::AlignCenter);
                    ui->table->setCellWidget(i, 0, fallaPX);
                   // //qDebug()<<"Nombre: "<<this->NamesList_act.at(i)<<" Valor Actual: "<<iAct;
                }
                else
                {
                    ui->table->removeCellWidget(i,0);
                }

                ui->table->item(i,2)->setText(getPercent((float) iNorm, (float) iFalla, (float) iAct));
                ////qDebug()<<"Nombre: "<<this->NamesList_act.at(i)<<" Valor Actual: "<<fAct;
            }
            else if(this->Tipo_act.at(i) == "Float")
            {
                fNorm = vNorm.toFloat();
                fFalla = vFail.toFloat();
                fAct = shrdMem->getF(this->ptrsVars[i]);
                if (fAct != fNorm)
                {
                    QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                    QLabel *fallaPX = new QLabel();
                    //------------------------
                    fallaPX->setPixmap(*failPX);
                    fallaPX->setAlignment(Qt::AlignHCenter);
                    ui->table->setCellWidget(i, 0, fallaPX);
                }
                else
                {
                    ui->table->removeCellWidget(i,0);
                }

                ui->table->item(i,2)->setText(getPercent(fNorm, fFalla, fAct));
            }
            acumPGR = acumPGR + pasoPGR;
            ui->pgrBar->setValue(acumPGR);
        }
        ui->pgrBar->setValue(100);
        ui->pgrBar->setVisible(1);
    }
}

void Fallas::actualizaVarsAll()
{
    if(this->actualizar_all && (this->desp == 1))
    {
        QString vNorm, vFail;
        int iNorm, iFail, iAct = -1;
        float fNorm, fFail, fAct = -1;

        //Determinación del número de pasos de la ProgressBar
        ui->pgrBar_All->setValue(0);
        ui->pgrBar_All->setVisible(1);
        int totalPGR =  this->fallas_all.size();
        int pasoPGR = (int) totalPGR/100;
        int acumPGR = 0;
        int nrow;

        for(int i=0; i < this->fallas_all.size(); i++)
        {
            vNorm = this->ValN_all.at(i);
            vFail = this->ValF_all.at(i);
            //----------------------------
            if(this->Tipo_all.at(i) == "Int")
            {
                iNorm = vNorm.toInt();
                iFail = vFail.toInt();
                iAct = shrdMem->getI(this->ptrsArr[i]);
                //--------------------------------------
                if(iAct != iNorm)
                {
                    if(existeVar(this->NamesList_all.at(i)))
                    {
                        ui->tableAll->item(this->renglon, 2)->setText(getPercent((float)iNorm, (float)iFail, (float)iAct));
                    }
                    else
                    {
                        nrow = ui->tableAll->rowCount();
                        ui->tableAll->insertRow(nrow);

                        // Columna 0
                        QTableWidgetItem *newItem0 = new QTableWidgetItem();
                        newItem0->setFlags(Qt::NoItemFlags);
                        ui->tableAll->setItem(nrow, 0, newItem0);

                        // Columna 1
                        QTableWidgetItem *newItem1 = new QTableWidgetItem(this->NamesList_all.at(i));
                        newItem1->setFlags(Qt::ItemIsEnabled);
                        ui->tableAll->setItem(nrow, 1, newItem1);

                        // Columna 2
                        QTableWidgetItem *newItem2 = new QTableWidgetItem();
                        newItem2->setFlags(Qt::NoItemFlags);
                        newItem2->setTextAlignment(Qt::AlignCenter);
                        ui->tableAll->setItem(nrow, 2, newItem2);

                        // Columna 3
                        QTableWidgetItem *newItem3 = new QTableWidgetItem(this->Descrip_all.at(i));
                        newItem3->setFlags(Qt::NoItemFlags);
                        ui->tableAll->setItem(nrow, 3, newItem3);

                        // Columna 4
                        QTableWidgetItem *newItem4 = new QTableWidgetItem(this->Sistem_all.at(i));
                        newItem4->setFlags(Qt::NoItemFlags);
                        newItem4->setTextAlignment(Qt::AlignCenter);
                        ui->tableAll->setItem(nrow, 4, newItem4);

                        //-------------------------------------------
                        QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                        QLabel *fallaPX = new QLabel();
                        //------------------------
                        fallaPX->setPixmap(*failPX);
                        fallaPX->setAlignment(Qt::AlignHCenter);
                        ui->tableAll->setCellWidget(nrow, 0, fallaPX);

                        ui->tableAll->item(nrow, 2)->setText(getPercent((float)iNorm, (float)iFail, (float)iAct));
                    }
                }
                else
                {
                    if(existeVar(this->NamesList_all.at(i)))
                    {
                        ui->tableAll->removeRow(this->renglon);
                    }
                }
            }
            else if(this->Tipo_all.at(i) == "Float")
            {
                fNorm = vNorm.toFloat();
                fFail = vFail.toFloat();
                fAct = shrdMem->getF(this->ptrsArr[i]);
                //--------------------------------------
                if(fAct != fNorm)
                {
                    if(existeVar(this->NamesList_all.at(i)))
                    {
                        ui->tableAll->item(this->renglon, 2)->setText(getPercent(fNorm, fFail, fAct));
                    }
                    else
                    {
                        nrow = ui->tableAll->rowCount();
                        ui->tableAll->insertRow(nrow);

                        // Columna 0
                        QTableWidgetItem *newItem0 = new QTableWidgetItem();
                        newItem0->setFlags(Qt::NoItemFlags);
                        ui->tableAll->setItem(nrow, 0, newItem0);

                        // Columna 1
                        QTableWidgetItem *newItem1 = new QTableWidgetItem(this->NamesList_all.at(i));
                        newItem1->setFlags(Qt::ItemIsEnabled);
                        ui->tableAll->setItem(nrow, 1, newItem1);

                        // Columna 2
                        QTableWidgetItem *newItem2 = new QTableWidgetItem();
                        newItem2->setFlags(Qt::NoItemFlags);
                        newItem2->setTextAlignment(Qt::AlignCenter);
                        ui->tableAll->setItem(nrow, 2, newItem2);

                        // Columna 3
                        QTableWidgetItem *newItem3 = new QTableWidgetItem(this->Descrip_all.at(i));
                        newItem3->setFlags(Qt::NoItemFlags);
                        ui->tableAll->setItem(nrow, 3, newItem3);

                        // Columna 4
                        QTableWidgetItem *newItem4 = new QTableWidgetItem(this->Sistem_all.at(i));
                        newItem4->setFlags(Qt::NoItemFlags);
                        newItem4->setTextAlignment(Qt::AlignCenter);
                        ui->tableAll->setItem(nrow, 4, newItem4);
                        //-------------------------------------------
                        QPixmap *failPX = new QPixmap(":/resources/fail_th.png");
                        QLabel *fallaPX = new QLabel();
                        //------------------------
                        fallaPX->setPixmap(*failPX);
                        fallaPX->setAlignment(Qt::AlignHCenter);
                        ui->tableAll->setCellWidget(nrow, 0, fallaPX);

                        ui->tableAll->item(nrow, 2)->setText(getPercent(fNorm, fFail, fAct));
                    }
                }
                else
                {
                    if(existeVar(this->NamesList_all.at(i)))
                    {
                        ui->tableAll->removeRow(this->renglon);
                    }
                }
            }
            else
            {
                //qDebug()<<"Error...";
            }
            acumPGR = acumPGR + pasoPGR;
            ui->pgrBar_All->setValue(acumPGR);
        }
        ui->pgrBar_All->setValue(100);
//        ui->pgrBar_All->setVisible(0);
    }
}

bool Fallas::existeVar(QString name)
{
    QString nmb_var;
    for(int i = 0; i < ui->tableAll->rowCount(); i++)
    {
        nmb_var = ui->tableAll->item(i, 1)->text();
        if ((QString::compare(name, nmb_var, Qt::CaseSensitive)) == 0)
        {
            this->renglon = i;
            return true;
            break;
        }
    }
    return false;
}

//Cambia la variable
void Fallas::showVartoChange(int row, int column)
{
    qDebug()<<"INICIO SELECCIONAR VAR";
    clearscr();

    // Limpiamos el background seleccionado
    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    for(int i=0; i < ui->tableAll->rowCount(); i++)
    {
        for(int j=0; j < ui->tableAll->columnCount(); j++)
        {
            ui->tableAll->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    ui->table->item(row, column)->setBackground(QBrush(QColor(0,129,255,51)));

    QString name;
    int pos;
    //-------------------------------------
    // Obtenemos el renglón/Columna seleccionado
    this->Row = row;
    this->Column = column;
    //--------
    // Obtenemos el nombre seleccionado, y lo mostramos
    name = ui->table->item(row, column)->text();
    this->ptr_name = name;
    ui->le_var->setText(name);

    pos = buscaVars(name, 0);
    if (pos<0)
    {
        QMessageBox::information(this, tr("Error"), tr("El nombre de la variable no corresponde con niguno almacenado en la Base de Datos."));
        close();
        return;
    }

    this->index = pos;

    //Encontrado el indice, se obtienen los demás datos
    this->ptr_tipo = this->Tipo_act.at(pos);
    this->ptr_valNorm = this->ValN_act.at(pos);
    this->ptr_valFail = this->ValF_act.at(pos);
    this->ptr_pos = this->ptrsVars[pos];

    qDebug()<<"Variable seleccionada: "<<name<<" index: "<<pos<<" PTR: "<<this->ptr_pos<<" Tipo: "<<this->ptr_tipo<<" VNorm: "<<this->ptr_valNorm<<" VFail: "<<this->ptr_valFail;

    if (this->ptr_tipo == "Int")
    {
        ui->slider->setMaximum(1);
        this->modSld = 100;
        ui->t_trans->setDisabled(1);
        ui->cb_sm_tra->setDisabled(1);
        ui->t_rep->setDisabled(1);
        ui->cb_sm_rep->setDisabled(1);
    }
    else if (this->ptr_tipo == "Float")
    {
        ui->slider->setMaximum(100);
        this->modSld = 1;
        ui->t_trans->setEnabled(1);;
        ui->cb_sm_tra->setEnabled(1);
        ui->t_rep->setEnabled(1);
        ui->cb_sm_rep->setEnabled(1);;
    }

    // Determinamos las variables de aplicación de la falla, si es que esta aplciada
    QString sval;
    int secuencia, var_ptr, etapa_ptr, val;
    int t_es, t_lb, r, t_esp, t_sub, t_aplic, t_baj;
    bool onfail = false;

    r = 0;

    while((r < 20) && !onfail)
    {
        // Se obtiene la dirección de la falla
        qDebug()<<"Offset es: "<<OffsetFallas;
        secuencia = shrdMem->getI(OffsetFallas+r*5);
        // Se obtiene el puntero a la falla
        var_ptr = secuencia>>16;
        // Se obtiene la etapa de la falla
        etapa_ptr = secuencia&0xffff;

        qDebug()<<"Evaluación... r: "<<r<<" secuencia: "<<secuencia;
        qDebug()<<"     Datos externos... var_ptr = "<<var_ptr<<" etapa_ptr = "<<etapa_ptr;

        if (secuencia != 0)
        {
            // Si la secuencia es distinta a cero... Es decir, si se encuentra en falla";
            // Se compara el puntero seleccionado, y el puntero en falla
            qDebug()<<"Comparación... "<<this->ptr_pos<<" =? "<<var_ptr;
            if(this->ptr_pos == var_ptr)
            {
                //Si son iguales, "onfail" se pone en true...
                onfail = true;
                qDebug()<<"El puntero: "<<this->ptr_pos<<" - "<<this->ptr_name<<" esta en falla...";
                //Se ponen los valores que sean necesarios
                t_es = shrdMem->getI(OffsetFallas+r*5+1); // Tiempo Espera y subida
                t_esp = t_es>>16;
                t_sub = t_es&0xffff;
                //------------------------
                t_lb = shrdMem->getI(OffsetFallas+r*5+2); // Tiepo de long y bajada
                t_aplic = t_lb>>16;
                t_baj = t_lb&0xffff;
                break;
            }
            else
            {
                // Se coloca "onfail false" y se continua con el siguiente puntero...
                onfail = false;
            }
        }
        r++;
    }

    if(onfail)
    {
        qDebug()<<"LA FALLA ACTIVA";
        ui->t_esp->setValue(t_esp);
        ui->t_esp->setDisabled(true);
        ui->cb_sm_ret->setDisabled(true);
        ui->t_trans->setValue(t_sub);
        ui->t_trans->setDisabled(true);
        ui->cb_sm_tra->setDisabled(true);
        ui->t_aplic->setValue(t_aplic);
        ui->t_aplic->setDisabled(true);
        ui->cb_sm_apl->setDisabled(true);
        ui->t_rep->setValue(t_baj);
        ui->t_rep->setDisabled(true);
        ui->cb_sm_rep->setDisabled(true);
    }

    sval = ui->table->item(row, 2)->text();
    sval.remove(QChar(' '), Qt::CaseInsensitive);
    sval.remove(QChar('%'), Qt::CaseInsensitive);
    val = sval.toInt();

    qDebug()<<"Valor de falla aplicada leido: "<<val;

    ui->slider->setValue(val);

    ui->btn_Reset->setEnabled(1);
    ui->btn_Guardar->setEnabled(1);
    qDebug()<<"FIN SELECCIONAR VAR";
}


//Cambia la variable
void Fallas::showVartoReset(int row, int column)
{
    clearscr();
    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    for(int i=0; i < ui->tableAll->rowCount(); i++)
    {
        for(int j=0; j < ui->tableAll->columnCount(); j++)
        {
            ui->tableAll->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    ui->tableAll->item(row, column)->setBackground(QBrush(QColor(0,129,255,51)));

    QString name;
    int pos;
    //-------------------------------------
    this->Row = row;
    this->Column = column;
    //--------
    name = ui->tableAll->item(row, column)->text();
    this->ptr_name = name;
    ui->le_var_All->setText(name);
    pos = buscaVars(name, 1);
    if (pos<0)
    {
        QMessageBox::information(this, tr("Error"), tr("El nombre de la variable no corresponde con niguno almacenado en la Base de Datos."));
        close();
        return;
    }
    this->index = pos;

    //Encontrado el indice, se obtienen los demás datos
    this->ptr_tipo = this->Tipo_all.at(pos);
    this->ptr_valNorm = this->ValN_all.at(pos);
    this->ptr_valFail = this->ValF_all.at(pos);
    this->ptr_pos = this->ptrsArr[pos];

    //qDebug()<<"Variable: "<<name<<" Encontrada en la index: "<<pos<<" PTR: "<<this->ptr_pos<<" Tipo: "<<this->ptr_tipo<<" VNorm: "<<this->ptr_valNorm<<" VFail: "<<this->ptr_valFail;

    //-------------------------------------
    if (this->ptr_tipo == "Int")
    {
        this->modSld = 100;
    }
    else if (this->ptr_tipo == "Float")
    {
        this->modSld = 1;
    }
    //-------------------------------------
    ui->btn_Reset_All->setEnabled(1);
}

void Fallas::changeVal()
{
    int varpos, t_esp, t_sub, t_aplic, t_baj, valNomI, valMaxI, valFailI, ttotal;
    float valNomF, valMaxF, valFailF, prctVal, iAct;
    float escala, severidad, onepercent, fAct;
    QString nmb_falla, str;

    if(!ui->le_var->text().isEmpty() && !ui->le_val->text().isEmpty())
    {
        nmb_falla = ui->le_var->text();
        t_esp = ui->t_esp->value();
        t_sub = ui->t_trans->value();
        t_aplic = ui->t_aplic->value();
        t_baj = ui->t_rep->value();

        str = ui->le_val->text();
        prctVal = str.toInt();

        if (ui->cb_sm_ret->currentIndex() == 1)
            t_esp = t_esp * 60;

        if (ui->cb_sm_tra->currentIndex() == 1)
            t_sub = t_sub * 60;

        if (ui->cb_sm_apl->currentIndex() == 1)
            t_aplic = t_aplic * 60;

        if (ui->cb_sm_rep->currentIndex() == 1)
            t_baj = t_baj * 60;

        ttotal = t_esp + t_sub + t_aplic + t_baj;

        if (nmb_falla == this->ptr_name)
        {
            if(ttotal < 28800)
            {
                if(t_aplic == 11645)
                {
                    t_aplic = t_aplic + 1;
                }
                varpos = this->ptr_pos; // Asignación del puntero

                // Determinamos las variables de aplicación de la falla, si es que esta aplciada
                int secuencia, var_ptr, etapa_ptr;
                int t_es, t_lb, t_vn, t_vf, r;
                bool onfail = false;
                bool failVal = false;

                r = 0;

                while((r < 20) && !onfail)
                {
                    secuencia = shrdMem->getI(OffsetFallas+r*5);
                    var_ptr = secuencia>>16;
                    etapa_ptr = secuencia&&0xffff;

                    if (secuencia != 0)
                    {
                        if(varpos == var_ptr)
                        {
                            //qDebug()<<"Esta en falla";
                            onfail = true;
                            //pon los valores que sean necesarios
                            t_es = shrdMem->getI(OffsetFallas+r*5+1); // Tiempo Espera y subida
                            t_esp = t_es>>16;
                            t_sub = t_es&0xffff;
                            //------------------------
                            t_lb = shrdMem->getI(OffsetFallas+r*5+2); // Tiepo de long y bajada
                            t_aplic = t_lb>>16;
                            t_baj = t_lb&0xffff;
                            t_vn = shrdMem->getI(OffsetFallas+r*5+3); //valor normal
                            t_vf = shrdMem->getI(OffsetFallas+r*5+4); //valor Falla
                            //qDebug()<<"Los valores son: "<<varpos<<" t_es: "<<t_es<<" t_esp: "<<t_esp<<" t_sub: "<<t_sub<<" t_lb "<<t_lb<<"t_aplic"<<t_aplic<<" t_baj: "<<t_baj;
                            break;
                        }
                        else
                        {
                            onfail = false;
                        }
                    }
                    r++;
                }

                //---------------------------
                if(this->ptr_tipo == "Float")
                {
                    //qDebug()<<"Valor de Falla Flotante";
                    valNomF = this->ptr_valNorm.toFloat();  // Valor mínimo
                    valMaxF = this->ptr_valFail.toFloat();  // Valor máximo
                    fAct = shrdMem->getF(varpos);

                    if(fAct != valNomF)
                        failVal = true;

                    valFailF = valNomF;
                    //------------------
                    if(varpos < 16000)
                    {
                        // Obtenemos la escala del porcentaje
                        if (valNomF < valMaxF)
                        {
                            //qDebug()<<"Calculo escala positiva";
                            escala = valMaxF - valNomF;
                            onepercent = escala/100;
                            severidad = onepercent * prctVal;
                            valFailF = valNomF + severidad;
                        }
                        else if (valMaxF < valNomF)
                        {
                            //qDebug()<<"Calculo escala negativa";
                            escala = valNomF - valMaxF;
                            onepercent = escala/100;
                            severidad = onepercent * prctVal;
                            valFailF = valNomF - severidad;
                        }

                        if(!(valFailF == valNomF) || onfail)
                        {
                            qDebug()<<"Se puede aplicar la falla";
                            if((t_esp == 0) && (t_sub == 0) && (t_aplic == 0) && (t_baj == 0))
                            {
                                qDebug()<<"...Directa";
                                shrdMem->setF(valFailF, varpos);
                            }
                            else
                            {
                                qDebug()<<"...Secuencia";
                                if(onfail)
                                {
                                    qDebug()<<"Modificación de la falla...";                                    if(valNomF == valFailF)
                                        resetVal();
                                    else
                                        shrdMem->setMFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, valNomF, valFailF);
                                }
                                else if(failVal && !onfail)
                                {
                                    if (t_esp == 0)
                                        t_esp = 1;

                                    if (t_sub == 0)
                                        t_sub = 1;

                                    if (t_aplic == 0)
                                        t_aplic = 11645;

                                    if (t_baj == 0)
                                        t_baj = 1;

                                    qDebug()<<"Modifica secuencia... Valores:";
                                    qDebug()<<"Espera: "<<t_esp<<" Subida: "<<t_sub<<" Aplicación: "<<t_aplic<<" Bajada: "<<t_baj<<" Pos: "<<varpos<<" Normal: "<<valNomF<<" Falla: "<<valFailF;

                                    if(valNomF == valFailF)
                                        resetVal();
                                    else
                                        shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, fAct, valFailF);
                                }
                                else
                                {
                                    if (t_esp == 0)
                                        t_esp = 1;

                                    if (t_sub == 0)
                                        t_sub = 1;

                                    if (t_aplic == 0)
                                        t_aplic = 11645;

                                    if (t_baj == 0)
                                        t_baj = 1;

                                    qDebug()<<"Aplicación de la falla desde cero";
                                    shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, valNomF, valFailF);
                                }
                            }
                        }
                        else
                        {
                            qDebug()<<"Valor Normal Flotante";
                            if((t_esp != 0)||(t_sub!=0) || (t_aplic != 0) || (t_baj != 0))
                            {
                                if (t_esp == 0)
                                    t_esp = 1;

                                if (t_sub == 0)
                                    t_sub = 1;

                                if (t_aplic == 0)
                                    t_aplic = 11645;

                                if (t_baj == 0)
                                    t_baj = 1;

                                qDebug()<<"Modifica secuencia a cero... Valores:";
                                qDebug()<<"Espera: "<<t_esp<<" Subida: "<<t_sub<<" Aplicación: "<<t_aplic<<" Bajada: "<<t_baj<<" Pos: "<<varpos<<" Normal: "<<valNomF<<" Falla: "<<valFailF;

                                shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, fAct, valFailF);
                            }
                            else
                            {
                                shrdMem->setF(valNomF, varpos);
                            }
                        }
                        //qDebug()<<"Falla Puesta Flotante";
                    }
                    else
                    {
                        QMessageBox::information(this, tr("Error"), tr("Asignación de variable de falla errónea."));
                    }
                }
                else if(this->ptr_tipo == "Int")
                {
                    //qDebug()<<"Valor de Falla Entera";
                    valNomI = this->ptr_valNorm.toInt();  // Valor mínimo
                    valMaxI = this->ptr_valFail.toInt();  // Valor máximo
                    iAct = shrdMem->getI(varpos);

                    if(iAct != valNomI)
                        failVal = true;

                    valFailI = valNomI;

                    // Obtenemos la escala del porcentaje
                    if (valNomI < valMaxI)
                    {
                        //qDebug()<<"Calculo escala positiva";
                        escala = valMaxI - valNomI;
                        onepercent = escala/100;
                        severidad = onepercent * prctVal;
                        valFailI = (int)(valNomI + severidad);
                        //qDebug()<<"Valor de Falla: "<<valFailI;
                    }
                    else if (valMaxI < valNomI)
                    {
                        //qDebug()<<"Calculo escala negativa";
                        escala = valNomI - valMaxI;
                        onepercent = escala/100;
                        severidad = onepercent * prctVal;
                        valFailI = (int)(valNomI - severidad);
                        //qDebug()<<"Valor de Falla: "<<valFailI;
                    }

                    if(!(valFailI == valNomI)|| onfail)
                    {
                        //qDebug()<<"Se puede poner la falla";
                        if((t_esp == 0) && (t_sub == 0) && (t_aplic == 0) && (t_baj == 0))
                        {
                            //qDebug()<<"...Directa";
                            shrdMem->setI(valFailI, varpos);
                        }
                        else
                        {
                            //qDebug()<<"...Secuencia";
                            if(onfail)
                            {
                                //qDebug()<<"Modificación de la falla";
                                if(valNomI == valFailI)
                                    resetVal();
                                else
                                    shrdMem->setMFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, valNomI, valFailI);
                            }
                            else if(failVal && !onfail)
                            {
                                if (t_esp == 0)
                                    t_esp = 1;

                                if (t_sub == 0)
                                    t_sub = 1;

                                if (t_aplic == 0)
                                    t_aplic = 11645;

                                if (t_baj == 0)
                                    t_baj = 1;

                                qDebug()<<"Modifica secuencia... Valores:";
                                qDebug()<<"Espera: "<<t_esp<<" Subida: "<<t_sub<<" Aplicación: "<<t_aplic<<" Bajada: "<<t_baj<<" Pos: "<<varpos<<" Normal: "<<valNomF<<" Falla: "<<valFailF;

                                if(valNomI == valFailI)
                                    resetVal();
                                else
                                    shrdMem->setMFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, iAct, valFailI);
                            }
                            else
                            {
                                if (t_esp == 0)
                                    t_esp = 1;

                                if (t_sub == 0)
                                    t_sub = 1;

                                if (t_aplic == 0)
                                    t_aplic = 11645;

                                if (t_baj == 0)
                                    t_baj = 1;

                                //qDebug()<<"Aplicación de la falla";
                                shrdMem->setFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, valNomI, valFailI);
                            }
                        }
                    }
                    else
                    {
                        if((t_esp != 0)||(t_sub!=0) || (t_aplic != 0) || (t_baj != 0))
                        {
                            if (t_esp == 0)
                                t_esp = 1;

                            if (t_sub == 0)
                                t_sub = 1;

                            if (t_aplic == 0)
                                t_aplic = 11645;

                            if (t_baj == 0)
                                t_baj = 1;

                            qDebug()<<"Modifica secuencia a cero... Valores:";
                            qDebug()<<"Espera: "<<t_esp<<" Subida: "<<t_sub<<" Aplicación: "<<t_aplic<<" Bajada: "<<t_baj<<" Pos: "<<varpos<<" Normal: "<<valNomF<<" Falla: "<<valFailF;

                            shrdMem->setFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, iAct, valFailI);
                        }
                        else
                        {
                            //qDebug()<<"Valor Normal Entero";
                            shrdMem->setI(valNomI, varpos);
                        }
                    }
                    //qDebug()<<"Falla Puesta Entera";
                }
                else
                {
                    //qDebug()<<"Hay un error de coincidencias";
                }
                ui->table->scrollToItem(ui->table->item(Row,Column),QAbstractItemView::EnsureVisible);
                ui->table->setCurrentCell(Row, Column, QItemSelectionModel::Select);
            }
            else
            {
                QMessageBox::information(this, tr("Error"),
                                         tr("El tiempo total de la falla no puede durar más de 8 horas."));
                return;
            }
        }
        else
        {
            QMessageBox::information(this, tr("Error"),
                                     tr("Existe incompatibiliddad entre la variable almacenada y la variable mostrada.\nVuelva a intentarlo..."));
            return;
        }
    }
    else
    {
        QMessageBox::information(this, tr("Error"),
        tr("No se ha seleccionado una variable o un valor válido"));
        return;
    }

    int i;
    int def = OffsetFallas;
    unsigned int st;
    float fo1, fo2;
    int io1, io2;
    unsigned short intwait, intup, intlen, intdown, intvar, intpos;
    for (i=0;i<200;i++)
    {
        st = shrdMem->getI(def+i*5);
        intpos=st/(256*256);
        st = shrdMem->getI(def+i*5);
        intvar = st&0xFFFF;
        st = shrdMem->getI(def+i*5+1);
        intwait = st/(256*256);
        intup = st&0xFFFF;
        st = shrdMem->getI(def+i*5+2);
        intlen = st/(256*256);
        intdown = st&0xFFFF;
        if (intpos!=0)
        {
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            if (intpos>16000)
            {
                //qDebug()<<"BTU I"<<intpos-16000;
                io1=  shrdMem->getI(def+i*5+3);
                io2=  shrdMem->getI(def+i*5+4);
                //qDebug()<<"case WAIT "<<intwait;
                //qDebug()<<"case UP "<<intup;
                //qDebug()<<"case LEN "<<intlen;
                //qDebug()<<"case DOWN "<<intdown;
                //qDebug()<<"case POS "<<intpos;
                //qDebug()<<"case NORM I"<<io1;
                //qDebug()<<"case FAIL I"<<io2;
            }
            else
            {
                //------------------------
                //qDebug()<<"BTU F"<<intpos;
                fo1=  shrdMem->getF(def+i*5+3);
                fo2=  shrdMem->getF(def+i*5+4);
                //------------------------
                //qDebug()<<"case WAIT "<<intwait;
                //qDebug()<<"case UP "<<intup;
                //qDebug()<<"case LEN "<<intlen;
                //qDebug()<<"case DOWN "<<intdown;
                //qDebug()<<"case POS "<<intpos;
                //qDebug()<<"case NORM F"<<fo1;
                //qDebug()<<"case FAIL F"<<fo2;
                //------------------------
            }
        }
    }

    //qDebug()<<"Fin Falla: ";
    clearscr();
    ui->btn_Guardar->setDisabled(1);
    ui->btn_Reset->setDisabled(1);
}

void Fallas::resetVal()
{
    int varpos, valNomI, valMaxI, su, bu;
    float valNomF, valMaxF;
    unsigned short intvar;
    QString nmb_falla;

    if((!ui->le_var->text().isEmpty() && !ui->le_val->text().isEmpty()) || (!ui->le_var_All->text().isEmpty()))
    {
        //qDebug()<<"Entro a la función de Reset";
        if(this->desp == 0)
        {
            nmb_falla = ui->le_var->text();
        }
        else if(this->desp == 1)
        {
            nmb_falla = ui->le_var_All->text();
        }
        else
        {
            //qDebug()<<"ERROR en la asignación del nombre de falla...";
            return;
        }

        if (nmb_falla == this->ptr_name)
        {
            varpos = this->ptr_pos;
            //---------------------------
            if(this->ptr_tipo == "Float")
            {
                valNomF = this->ptr_valNorm.toFloat();
                valMaxF = this->ptr_valFail.toFloat();
                //------------------
                //Intento resetear la falla
                shrdMem->setF(valNomF, varpos);

                //qDebug()<<"Resetea la falla en: "<<varpos<<"Valor Normal: "<<valNomF<<"Valor Falla: "<<valMaxF;

                su=1;

                for (int i=0; i<200; i++)
                {
                    bu = shrdMem->getI(OffsetFallas+i*5);
                    intvar = bu>>16;
                    if (intvar == varpos)
                    {
                        //pon los valores que sean necesarios
                        // si es flotante
                        shrdMem->setF(valNomF,OffsetFallas+i*5+3);
                        shrdMem->setF(valMaxF,OffsetFallas+i*5+4);
                        shrdMem->setI(0*256*256+16000,OffsetFallas+i*5);
                        su=0;
                        shrdMem->setF(valNomF, varpos);
                    }
                }
                if (su==1)
                {
                    //qDebug()<<"FAIK F";
                }
            }
            else if(this->ptr_tipo == "Int")
            {
                valNomI = this->ptr_valNorm.toInt();
                valMaxI = this->ptr_valFail.toInt();

                shrdMem->setI(valNomI, varpos);
                //qDebug()<<"Resetea la falla: "<<valMaxI;

                for (int i=0; i<200; i++)
                {
                    bu = shrdMem->getI(OffsetFallas+i*5);
                    intvar=bu>>16;
                    if (intvar==varpos+16000)
                    {
                        //pon los valores que sean necesarios
                        // si es entero
                        shrdMem->setI(valNomI,OffsetFallas+i*5+3);
                        shrdMem->setI(valMaxI,OffsetFallas+i*5+4);
                        shrdMem->setI(0*256*256+16000,OffsetFallas+i*5);
                        su=0;
                        shrdMem->setI(valNomI, varpos);
                    }
                }
                if (su==1)
                {
                    //qDebug()<<"FAIK F";
                }
            }
            else
            {
                QMessageBox::information(this, tr("Error"),
                                         tr("El tipo de la variable es erróneo o no está permitido"));
                //qDebug()<<"Hay un error de coincidencias";
                return;
            }
        }
        else
        {
            QMessageBox::information(this, tr("Error"),
                                     tr("El tipo de la variable es erróneo o no está permitido"));
            //qDebug()<<"Hay un error de coincidencias";
            return;
        }
    }
    else
    {
        QMessageBox::information(this, tr("Error"),
                                 tr("El nombre de la variable es incongruente con el almacenado.\nvuelva a intentarlo."));
        //qDebug()<<"Hay un error de coincidencias";
        return;
    }
    clearscr();
    ui->btn_Guardar->setDisabled(1);
    ui->btn_Reset->setDisabled(1);
    ui->btn_Reset_All->setDisabled(1);
}

void Fallas::resetAllVars()
{
    QString nmb_falla, tipo, valNorm, valFail, nmb;
    int varpos, valNomI, valMaxI, su, bu;
    float valNomF, valMaxF;
    unsigned short intvar;

//    this->actualizar_all = false;

    for(int i = 0; i < this->fallas_all.size(); i++)
    {
        nmb_falla = this->NamesList_all.at(i);
        tipo = this->Tipo_all.at(i);
        valNorm = this->ValN_all.at(i);
        valFail = this->ValF_all.at(i);
        varpos = this->ptrsArr[i];
        //------------------------------------
        if(tipo == "Int")
        {
            valNomI = valNorm.toInt();
            valMaxI = valFail.toInt();

            shrdMem->setI(valNomI, varpos);
            //qDebug()<<"Resetea la falla: "<<nmb_falla<<" en: "<<varpos<<" VMax: "<<valMaxI<<" VNorm: "<<valNomI;

            for (int i=0; i<20; i++)
            {
                bu = shrdMem->getI(OffsetFallas+i*5);
                intvar=bu>>16;
                if (intvar==varpos+16000)
                {
                    //pon los valores que sean necesarios
                    // si es entero
                    shrdMem->setI(valNomI,OffsetFallas+i*5+3);
                    shrdMem->setI(valMaxI,OffsetFallas+i*5+4);
                    shrdMem->setI(0*256*256+15000,OffsetFallas+i*5);
                    su=0;
                    shrdMem->setI(valNomI, varpos);
                }
            }
            if (su==1)
            {
                //qDebug()<<"FAIK F";
            }
        }
        else if(tipo == "Float")
        {
            valNomF = valNorm.toFloat();
            valMaxF = valFail.toFloat();
            //------------------
            //Intento resetear la falla
            shrdMem->setF(valNomF, varpos);

            //qDebug()<<"Resetea la falla: "<<nmb_falla<<" en: "<<varpos<<"Valor Normal: "<<valNomF<<"Valor Falla: "<<valMaxF;

            su=1;

            for (int i=0; i<20; i++)
            {
                bu = shrdMem->getI(OffsetFallas+i*5);
                intvar = bu>>16;
                if (intvar == varpos)
                {
                    //pon los valores que sean necesarios
                    // si es flotante
                    shrdMem->setF(valNomF,OffsetFallas+i*5+3);
                    shrdMem->setF(valMaxF,OffsetFallas+i*5+4);
                    shrdMem->setI(0*256*256+15000,OffsetFallas+i*5);
                    su=0;
                    shrdMem->setF(valNomF, varpos);
                }
            }
            if (su==1)
            {
                //qDebug()<<"FAIK F";
            }
        }
        else
        {
            QMessageBox::information(this, tr("Error"),
                                     tr("El tipo de la variable es erróneo o no está permitido"));
            //qDebug()<<"Hay un error de coincidencias";
            return;
        }
    }
    this->actualizar_all = true;
    clearscr();
    ui->btn_Guardar->setDisabled(1);
    ui->btn_Reset->setDisabled(1);
    ui->btn_Reset_All->setDisabled(1);
}

void Fallas::buscarVariable()
{
    int i, j;

    if(this->desp == 0)
    {
        for(i=0;i <ui->table->rowCount(); i++)
        {
            for(j=0;j<ui->table->columnCount();j++)
            {
                ui->table->item(i,j)->setBackground(QBrush(Qt::white));
            }
        }

        if(ui->le_search->text().isEmpty())
        {
            QMessageBox::information(this, tr("Error"), tr("No se ha introducido texto para buscar..."));
        }
        else
        {
            int result = 0;
            QString str1=ui->le_search->text().toLower();
            for(int i=0;i<ui->table->rowCount(); i++)
            {
                for(int j=1; j< ui->table->columnCount(); j++)
                {
                    QString str=ui->table->item(i, j)->text().toLower();
                    if(str.contains(str1, Qt::CaseSensitive))
                    {
                        ui->table->item(i,j)->setBackground(QBrush(QColor(0,129,255,51)));
                        ui->table->scrollToItem(ui->table->item(i,0),QAbstractItemView::EnsureVisible);
                        result = 1;
                    }
                }
            }

            if(result==0)
            {
                QMessageBox::information(this, tr("Error"),tr("Valor no encontrado"));
            }
        }
    }
    else if(this->desp == 1)
    {
        for(i=0; i < ui->tableAll->rowCount(); i++)
        {
            for(j=0; j < ui->tableAll->columnCount(); j++)
            {
                ui->tableAll->item(i,j)->setBackground(QBrush(Qt::white));
            }
        }

        if(ui->le_searchAll->text().isEmpty())
        {
            QMessageBox::information(this, tr("Error"), tr("No se ha introducido texto para buscar..."));
        }
        else
        {
            int result = 0;
            QString str1=ui->le_searchAll->text().toLower();
            for(int i=0; i < ui->tableAll->rowCount(); i++)
            {
                for(int j=1; j < ui->tableAll->columnCount(); j++)
                {
                    QString str=ui->tableAll->item(i, j)->text().toLower();
                    if(str.contains(str1, Qt::CaseSensitive))
                    {
                        ui->tableAll->item(i,j)->setBackground(QBrush(QColor(0,129,255,51)));
                        ui->tableAll->scrollToItem(ui->tableAll->item(i,0),QAbstractItemView::EnsureVisible);
                        result = 1;
                    }
                }
            }

            if(result==0)
            {
                QMessageBox::information(this, tr("Error"),tr("Valor no encontrado"));
            }
        }
    }
}


// Limpia los cuadros de texto
void Fallas::clearscr()
{
    ui->le_var->setText("");
    ui->le_val->setText("0");
    ui->t_esp->setValue(0);
    ui->t_trans->setValue(0);
    ui->t_aplic->setValue(0);
    ui->t_rep->setValue(0);
    ui->le_var_All->setText("");
    ui->cb_sm_ret->setCurrentIndex(0);
    ui->cb_sm_tra->setCurrentIndex(0);
    ui->cb_sm_apl->setCurrentIndex(0);
    ui->cb_sm_rep->setCurrentIndex(0);
    ui->t_esp->setEnabled(1);
    ui->cb_sm_ret->setEnabled(1);
    ui->lb_Ttrans->setEnabled(1);
    ui->t_trans->setEnabled(1);
    ui->cb_sm_tra->setEnabled(1);
    ui->t_aplic->setEnabled(1);
    ui->cb_sm_apl->setEnabled(1);
    ui->lb_Trep->setEnabled(1);
    ui->t_rep->setEnabled(1);
    ui->cb_sm_rep->setEnabled(1);

    ui->btn_Reset->setEnabled(0);
    ui->btn_Guardar->setEnabled(0);
    ui->btn_Reset_All->setEnabled(0);

    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    for(int i=0; i < ui->tableAll->rowCount(); i++)
    {
        for(int j=0; j < ui->tableAll->columnCount(); j++)
        {
            ui->tableAll->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }
}

// Captura las lineas del txt;
QStringList Fallas::rFrStringList(QString file)
{
    QStringList SystFile;
    QFile ListFile(file);
    if (!ListFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(this, tr("Error"), tr("No se encontró el archivo '%1'").arg(file));
        SystFile.clear();
        return SystFile;
    }

    QString DataFile = ListFile.readAll();
    if (DataFile.isEmpty())
    {
        QMessageBox::information(this, tr("Error"), tr("El archivo '%1' no contiene datos").arg(file));
        SystFile.clear();
        return SystFile;
    }

    SystFile= DataFile.split(QString("\n"));
    return SystFile;
}

// Busqueda de variables
int Fallas::buscaVars(QString name, int lista)
{
    QStringList lst_buscar;
    int index=-1;

    if(this->desp == 0 || lista == 0)
        lst_buscar = this->NamesList_act;
    else
        lst_buscar = this->NamesList_all;

    for(int i = 0; i < lst_buscar.size(); i++)
    {
        if(lst_buscar.at(i) == name)
        {
            index = i;
            break;
        }
    }

    return index;
}


// Comparador de cadenas
bool Fallas::verificaC(QString str1, QString str2)
{
    if((QString::compare(str1, str2, Qt::CaseSensitive)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Conversion de Flotante a Cadena
QString Fallas::ftoa(float f)
{
    return QString::number(f,'f',2);
}

// Conversion de Entero a Cadena
QString Fallas::ftoa(int i)
{
    return QString::number(i,10);
}

QString Fallas::getPercent(float vi, float vm, float va)
{
    // vi: es nuestro 0%
    // vm: es nuestro 100%
    float escala, onepercent, prct, ajuste;
    QString str;

    if(vi < vm)
    {
        escala = vm - vi;
        onepercent = escala/100;
        ajuste = va - vi;
        prct = ajuste/onepercent;
    }
    else if(vm < vi)
    {
        escala = vi - vm;
        onepercent = escala/100;
        ajuste = vi - va;
        prct = ajuste/onepercent;
    }
    else
        prct = 0;

    str = ftoa((int)prct);
    str.append(" %");
    return str;
}

// Actualiza el valor del TextSlider
void Fallas::dialValChanged(int ival)
{
    ui->le_val->setText(ftoa(ival*this->modSld));
}

// Actualiza el valor del Slider
void Fallas::textValChanged(QString sval)
{
    ui->slider->setValue((sval.toInt())/this->modSld);
}

// Indica el Tab seleccionado
void Fallas::selTab(int desp)
{
    this->desp = desp;
    if(desp == 0)
    {
        this->actualizar = true;
        this->actualizar_all = false;
    }
    else
    {
        this->actualizar = false;
        this->actualizar_all = true;
    }
    clearscr();
}

void Fallas::selectedItem(int row, int col)
{
    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    for(int i=0; i < ui->tableAll->rowCount(); i++)
    {
        for(int j=0; j < ui->tableAll->columnCount(); j++)
        {
            ui->tableAll->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    if(this->desp == 0)
    {
        ui->table->item(row, col)->setBackground(QBrush(QColor(0,129,255,51)));
        ui->table->scrollToItem(ui->table->item(row,0),QAbstractItemView::EnsureVisible);
    }
    else if(this->desp == 1)
    {
        ui->tableAll->item(row, col)->setBackground(QBrush(QColor(0,129,255,51)));
        ui->tableAll->scrollToItem(ui->table->item(row,0),QAbstractItemView::EnsureVisible);
    }
    else
    {
        for(int i=0; i < ui->table->rowCount(); i++)
        {
            for(int j=0; j < ui->table->columnCount(); j++)
            {
                ui->table->item(i, j)->setBackground(QBrush(Qt::white));
            }
        }

        for(int i=0; i < ui->tableAll->rowCount(); i++)
        {
            for(int j=0; j < ui->tableAll->columnCount(); j++)
            {
                ui->tableAll->item(i, j)->setBackground(QBrush(Qt::white));
            }
        }
    }
}

// Anuncio de error con el fichero y la shareMemory
void Fallas::anuncmnt(QString strings)
{
    this->actualizar = false;
    QMessageBox::information(this, tr("Error"),
    tr("No se encontro la variable: '%1'").arg(strings));
    close();
}

// Listener de eventos
void Fallas::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);

    switch (e->type())
    {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
    }
}

// Destructor
Fallas::~Fallas()
{
    delete ui;
}
