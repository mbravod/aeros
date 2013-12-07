#include <QtGui>
#include <QDebug>
#include "parametrosinternos.h"
#include "ui_parametrosinternos.h"
#include "Settings/Paths.h"
#define OffsetFallas 15500

ParametrosInternos::ParametrosInternos(QWidget *parent, QString mod) : QDialog(parent),
ui(new Ui::ParametrosInternos)
{
    this->ruta = InstallPath;
    this->mod = mod;
    this->nmb_fil = "LV_";

    if(mod=="PI"){
        this->nmb_fil.prepend("Listas\\Internos\\");
    }
    else if(mod=="PE"){
        this->nmb_fil.prepend("Listas\\Externos\\");
    }

    this->nmb_fil.append(mod);
    this->nmb_fil.append("_");
    this->modSld = 1;
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
//    m_shrdMem = new ShrdMem(this);
    //-----------------------
    this->fallas_act.clear();
    this->NamesList_act.clear();
    this->Descrip_act.clear();
    this->Tipo_act.clear();
    this->ValN_act.clear();
    this->ValF_act.clear();
    for(int i = 0; i < 2000; i++)
        this->ptrsVars[i] = 0;
    //-------------------------------------
    // Condiciones iniciales para tabla1
    //-------------------------------------
    ui->table->setColumnCount(7);
    ui->table->setColumnWidth(0,30);
    ui->table->setColumnWidth(1,180);
    ui->table->setColumnWidth(2,70);
    ui->table->setColumnWidth(3,70);
    ui->table->setColumnWidth(4,430);
    ui->table->setColumnWidth(5,70);
    ui->table->setColumnWidth(6,70);
    QStringList headers;
    headers << "" << "VARIABLE" << "VALOR" << "VALOR (%)" << "DESCRIPCIÓN" << "V. NOR." << "V. MAX.";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    //-------------------------------------
//    connect(m_shrdMem,SIGNAL(varNotFound(QString)),this,SLOT(anuncmnt(QString)));
    connect(ui->table,SIGNAL(cellActivated(int,int)),this,SLOT(showVartoChange(int,int)));
    connect(ui->slider,SIGNAL(sliderMoved(int)),this,SLOT(dialValChanged(int)));
    connect(ui->slider, SIGNAL(valueChanged(int)), this, SLOT(dialValChanged(int)));
    connect(ui->le_val,SIGNAL(textChanged(QString)),this,SLOT(textValChanged(QString)));
    connect(ui->btn_Guardar, SIGNAL(clicked()), this, SLOT(changeVal()));
    connect(ui->btn_Reset, SIGNAL(clicked()), this, SLOT(resetVal()));
    connect(ui->btn_search, SIGNAL(clicked()), this, SLOT(buscarVariable()));
    connect(ui->table, SIGNAL(cellClicked(int,int)), this, SLOT(selectedItem(int,int)));
    //-------------------------------------
    ui->pgrBar->setValue(0);
    ui->pgrBar->setVisible(1);

    QTimer *updateVars = new QTimer(this);
    this->actualizar = false;
    connect(updateVars, SIGNAL(timeout()), this, SLOT(actualizaVars()));
    updateVars->start(100);

    loadSyst();
    ui->SeleccSist->setCurrentIndex(-1);
    clearscr();
    ui->table->hideColumn(2);
}

// Obtiene el listado de Sistemas
void ParametrosInternos::loadSyst()
{
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

void ParametrosInternos::showVars(QString sistema)
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
    rtf.append(this->nmb_fil);
    rtf.append(sistema);
    rtf.append(".txt");
    lines=rFrStringList(rtf);

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

    this->fallas_act = lines;

    // Reiniciamos cuadros de texto
    clearscr();

    while(ui->table->rowCount()!=0)
    {
        ui->table->removeRow(0);
    }

    ui->pgrBar->setValue(10);

    //Determinación del número de pasos de la ProgressBar
    int totalPGR =  lines.size();
    int pasoPGR = (int) totalPGR/90;
    int acumPGR = 10;

    // Comenzamos a crear la tabla
    for(int i = 0; i < this->fallas_act.size(); i++)
    {
        ui->table->insertRow(i);
        line = this->fallas_act.at(i);
        //----------------------
        name = line.split("\t").at(0);
        nameF = name;
        this->NamesList_act.append(name);
        descr = line.split("\t").at(1);
        this->Descrip_act.append(descr);
        tipo = line.split("\t").at(2);
        this->Tipo_act.append(tipo);
        vNorm = line.split("\t").at(3);
        this->ValN_act.append(vNorm);
        vFail = line.split("\t").at(4);
        this->ValF_act.append(vFail);
        //-------------
        offset = 0;
        if(nameF.contains("+"))
        {
            offstr = nameF.split("+").at(1);
            offset = offstr.toInt();
            nameF = nameF.split("+").at(0);
        }

        pos = m_shrdMem->getVar(nameF);

        if(pos < 0)
        {
            QMessageBox::information(this, tr("Error"), tr("El nombre de la variable no corresponde con niguno almacenado en la Base de Datos."));
            close();
            return;
        }
        pos = pos + offset;
        this->ptrsVars[i] = pos;

        // Columna 0 - Icono
        QTableWidgetItem *newItem0 = new QTableWidgetItem();
        newItem0->setFlags(Qt::NoItemFlags);
        ui->table->setItem(i, 0, newItem0);

        QPixmap *failPX = new QPixmap(":/resources/gear.png");
        QLabel *fallaPX = new QLabel();
        //------------------------
        fallaPX->setPixmap(*failPX);
        fallaPX->setAlignment(Qt::AlignCenter);
        ui->table->setCellWidget(i, 0, fallaPX);

        // Columna 1 - Nombre
        QTableWidgetItem *newItem1 = new QTableWidgetItem(this->NamesList_act.at(i));
        newItem1->setFlags(Qt::ItemIsEnabled);
        ui->table->setItem(i, 1, newItem1);

        // Columna 2 - V. Actual
        QTableWidgetItem *newItem2 = new QTableWidgetItem();
        newItem2->setFlags(Qt::NoItemFlags);
        newItem2->setTextAlignment(Qt::AlignCenter);
        ui->table->setItem(i, 2, newItem2);

        // Columna 3 - V. %
        QTableWidgetItem *newItem3 = new QTableWidgetItem();
        newItem3->setFlags(Qt::NoItemFlags);
        newItem3->setTextAlignment(Qt::AlignCenter);
        ui->table->setItem(i, 3, newItem3);

        // Columna 4 - Descripción
        QTableWidgetItem *newItem4 = new QTableWidgetItem(this->Descrip_act.at(i));
        newItem4->setFlags(Qt::NoItemFlags);
        ui->table->setItem(i, 4, newItem4);

        // Columna 5 - V. N.
        QTableWidgetItem *newItem5 = new QTableWidgetItem(this->ValN_act.at(i));
        newItem5->setFlags(Qt::NoItemFlags);
        newItem5->setTextAlignment(Qt::AlignCenter);
        ui->table->setItem(i, 5, newItem5);

        // Columna 6 - V. M.
        QTableWidgetItem *newItem6 = new QTableWidgetItem(this->ValF_act.at(i));
        newItem6->setFlags(Qt::NoItemFlags);
        newItem6->setTextAlignment(Qt::AlignCenter);
        ui->table->setItem(i, 6, newItem6);

        acumPGR = acumPGR + pasoPGR;
        ui->pgrBar->setValue(acumPGR);
   }
    ui->pgrBar->setValue(100);
    ui->table->scrollToItem(ui->table->item(Row,Column),QAbstractItemView::EnsureVisible);
    ui->table->setCurrentCell(Row,Column,QItemSelectionModel::Select);
    this->actualizar = true;
    ui->pgrBar->setVisible(1);
}

void ParametrosInternos::actualizaVars()
{
    if(this->actualizar)
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
                iAct = m_shrdMem->getI(this->ptrsVars[i]);

                ui->table->item(i,2)->setText(ftoa(iAct));
                ui->table->item(i,3)->setText(getPercent((float) iNorm, (float) iFalla, (float) iAct));
            }
            else if(this->Tipo_act.at(i) == "Float")
            {
                fNorm = vNorm.toFloat();
                fFalla = vFail.toFloat();
                fAct = m_shrdMem->getF(this->ptrsVars[i]);

                ui->table->item(i,2)->setText(ftoa(fAct));
                ui->table->item(i,3)->setText(getPercent(fNorm, fFalla, fAct));
            }
            acumPGR = acumPGR + pasoPGR;
            ui->pgrBar->setValue(acumPGR);
        }
        ui->pgrBar->setValue(100);
        ui->pgrBar->setVisible(1);
    }
}

//Cambia la variable
void ParametrosInternos::showVartoChange(int row, int column)
{
    clearscr();

    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    ui->table->item(row, column)->setBackground(QBrush(QColor(0,129,255,51)));

    QString name;
    int pos;
    //-------------------------------------
    this->Row = row;
    this->Column = column;
    //--------
    name = ui->table->item(row, column)->text();
    this->ptr_name = name;
    ui->le_var->setText(name);
    pos = buscaVars(name);
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

    qDebug()<<"Variable: "<<name<<" Encontrada en la index: "<<pos<<" PTR: "<<this->ptr_pos<<" Tipo: "<<this->ptr_tipo<<" VNorm: "<<this->ptr_valNorm<<" VFail: "<<this->ptr_valFail;

    if (this->ptr_tipo == "Int")
    {
        ui->slider->setMaximum(1);
        this->modSld = 100;
        ui->t_trans->setDisabled(1);
        ui->cb_sm_tra->setDisabled(1);
    }
    else if (this->ptr_tipo == "Float")
    {
        ui->slider->setMaximum(100);
        this->modSld = 1;
        ui->t_trans->setEnabled(1);;
        ui->cb_sm_tra->setEnabled(1);
    }


    // Determinamos las variables de aplicación de la falla, si es que esta aplciada
    QString sval;
    int secuencia, var_ptr, etapa_ptr, val;
    int t_es, t_lb, r, t_esp, t_sub, t_aplic, t_baj;
    bool onfail = false;

    r = 0;

    while((r < 20) && !onfail)
    {
        secuencia = m_shrdMem->getI(OffsetFallas+r*5);
        var_ptr = secuencia>>16;
        etapa_ptr = secuencia&0xffff;

        if (secuencia != 0)
        {
            if(this->ptr_pos == var_ptr)
            {
                onfail = true;
                qDebug()<<"Esta en falla";
                //pon los valores que sean necesarios
                t_es = m_shrdMem->getI(OffsetFallas+r*5+1); // Tiempo Espera y subida
                t_esp = t_es>>16;
                t_sub = t_es&0xffff;
                //------------------------
                t_lb = m_shrdMem->getI(OffsetFallas+r*5+2); // Tiepo de long y bajada
                t_aplic = t_lb>>16;
                t_baj = t_lb&0xffff;
                break;
            }
            else
            {
                onfail = false;
            }
        }
        r++;
    }

    if(onfail)
    {
        qDebug()<<"Falla Activa";
        ui->t_esp->setValue(t_esp);
        ui->t_esp->setDisabled(true);
        ui->cb_sm_ret->setDisabled(true);
        ui->t_trans->setValue(t_sub);
        ui->t_trans->setDisabled(true);
        ui->cb_sm_tra->setDisabled(true);
    }

    sval = ui->table->item(row, 2)->text();
    sval.remove(QChar(' '), Qt::CaseInsensitive);
    sval.remove(QChar('%'), Qt::CaseInsensitive);
    val = sval.toInt();

    qDebug()<<"Valor leido: "<<val;

    ui->slider->setValue(val);

    ui->btn_Reset->setEnabled(1);
    ui->btn_Guardar->setEnabled(1);
}

void ParametrosInternos::changeVal()
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

         t_aplic = 0;
         t_baj = 0;

        str = ui->le_val->text();
        prctVal = str.toInt();

        if (ui->cb_sm_ret->currentIndex() == 1)
            t_esp = t_esp * 60;

        if (ui->cb_sm_tra->currentIndex() == 1)
            t_sub = t_sub * 60;

//        if (ui->cb_sm_apl->currentIndex() == 1)
//            t_aplic = t_aplic * 60;

//        if (ui->cb_sm_rep->currentIndex() == 1)
//            t_baj = t_baj * 60;

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
                int t_es, t_lb, r;
                bool onfail = false;
                bool failVal = false;

                r = 0;

                while((r < 20) && !onfail)
                {
                    secuencia = m_shrdMem->getI(OffsetFallas+r*5);
                    var_ptr = secuencia>>16;
                    etapa_ptr = secuencia&&0xffff;

                    if (secuencia != 0)
                    {
                        if(varpos == var_ptr)
                        {
                            qDebug()<<"Esta en falla";
                            onfail = true;
                            //pon los valores que sean necesarios
                            t_es = m_shrdMem->getI(OffsetFallas+r*5+1); // Tiempo Espera y subida
                            t_esp = t_es>>16;
                            t_sub = t_es&0xffff;
                            //------------------------
                            t_lb = m_shrdMem->getI(OffsetFallas+r*5+2); // Tiepo de long y bajada
                            t_aplic = t_lb>>16;
                            t_baj = t_lb&0xffff;
                            qDebug()<<"Los valores son: "<<varpos<<" t_es: "<<t_es<<" t_esp: "<<t_esp<<" t_sub: "<<t_sub<<" t_lb "<<t_lb<<"t_aplic"<<t_aplic<<" t_baj: "<<t_baj;
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
                    qDebug()<<"Valor de Falla Flotante";
                    valNomF = this->ptr_valNorm.toFloat();  // Valor mínimo
                    valMaxF = this->ptr_valFail.toFloat();  // Valor máximo
                    fAct = m_shrdMem->getF(varpos);

                    if(fAct != valNomF)
                        failVal = true;

                    valFailF = valNomF;
                    //------------------
                    if(varpos < 16000)
                    {
                        // Obtenemos la escala del porcentaje
                        if (valNomF < valMaxF)
                        {
                            qDebug()<<"Calculo escala positiva";
                            escala = valMaxF - valNomF;
                            onepercent = escala/100;
                            severidad = onepercent * prctVal;
                            valFailF = valNomF + severidad;
                        }
                        else if (valMaxF < valNomF)
                        {
                            qDebug()<<"Calculo escala negativa";
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
                                m_shrdMem->setF(valFailF, varpos);
                            }
                            else
                            {
                                qDebug()<<"...Secuencia";
                                if(onfail)
                                {
                                    qDebug()<<"Modificación de la falla";
                                    if(valNomF == valFailF)
                                        resetVal();
//                                    else
//                                        m_shrdMem->setMFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, valNomF, valFailF);
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
//                                    else
//                                        m_shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, fAct, valFailF);
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

                                    qDebug()<<"Aplicación de la falla";
//                                    m_shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, valNomF, valFailF);
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

//                                m_shrdMem->setFAULTF(t_esp, t_sub, t_aplic, t_baj, varpos, fAct, valFailF);
                            }
                            else
                            {
                                m_shrdMem->setF(valNomF, varpos);
                            }
                        }
                        qDebug()<<"Falla Puesta Flotante";
                    }
                    else
                    {
                        QMessageBox::information(this, tr("Error"), tr("Asignación de variable de falla errónea."));
                    }
                }
                else if(this->ptr_tipo == "Int")
                {
                    qDebug()<<"Valor de Falla Entera";
                    valNomI = this->ptr_valNorm.toInt();  // Valor mínimo
                    valMaxI = this->ptr_valFail.toInt();  // Valor máximo
                    iAct = m_shrdMem->getI(varpos);

                    if(iAct != valNomI)
                        failVal = true;

                    valFailI = valNomI;

                    // Obtenemos la escala del porcentaje
                    if (valNomI < valMaxI)
                    {
                        qDebug()<<"Calculo escala positiva";
                        escala = valMaxI - valNomI;
                        onepercent = escala/100;
                        severidad = onepercent * prctVal;
                        valFailI = (int)(valNomI + severidad);
                        qDebug()<<"Valor de Falla: "<<valFailI;
                    }
                    else if (valMaxI < valNomI)
                    {
                        qDebug()<<"Calculo escala negativa";
                        escala = valNomI - valMaxI;
                        onepercent = escala/100;
                        severidad = onepercent * prctVal;
                        valFailI = (int)(valNomI - severidad);
                        qDebug()<<"Valor de Falla: "<<valFailI;
                    }

                    if(!(valFailI == valNomI) || onfail)
                    {
                        qDebug()<<"Se puede poner la falla";
                        if((t_esp == 0) && (t_sub == 0) && (t_aplic == 0) && (t_baj == 0))
                        {
                            qDebug()<<"...Directa";
                            m_shrdMem->setI(valFailI, varpos);
                        }
                        else
                        {
                            qDebug()<<"...Secuencia";
                            if(onfail)
                            {
                                qDebug()<<"Modificación de la falla";
                                if(valNomI == valFailI)
                                    resetVal();
//                                else
//                                    m_shrdMem->setMFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, valNomI, valFailI);
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
//                                else
//                                    m_shrdMem->setMFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, iAct, valFailI);
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

                                qDebug()<<"Aplicación de la falla";
//                                m_shrdMem->setFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, valNomI, valFailI);
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

//                            m_shrdMem->setFAULTI(t_esp, t_sub, t_aplic, t_baj, varpos, iAct, valFailI);
                        }
                        else
                        {
                            //qDebug()<<"Valor Normal Entero";
                            m_shrdMem->setI(valNomI, varpos);
                        }
                    }
                    qDebug()<<"Falla Puesta Entera";
                }
                else
                {
                    qDebug()<<"Hay un error de coincidencias";
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
        st = m_shrdMem->getI(def+i*5);
        intpos=st/(256*256);
        st = m_shrdMem->getI(def+i*5);
        intvar = st&0xFFFF;
        st = m_shrdMem->getI(def+i*5+1);
        intwait = st/(256*256);
        intup = st&0xFFFF;
        st = m_shrdMem->getI(def+i*5+2);
        intlen = st/(256*256);
        intdown = st&0xFFFF;
        if (intpos!=0)
        {
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            if (intpos>16000)
            {
                qDebug()<<"BTU I"<<intpos-16000;
                io1=  m_shrdMem->getI(def+i*5+3);
                io2=  m_shrdMem->getI(def+i*5+4);
                qDebug()<<"case WAIT "<<intwait;
                qDebug()<<"case UP "<<intup;
                qDebug()<<"case LEN "<<intlen;
                qDebug()<<"case DOWN "<<intdown;
                qDebug()<<"case POS "<<intpos;
                qDebug()<<"case NORM I"<<io1;
                qDebug()<<"case FAIL I"<<io2;
            }
            else
            {
                //------------------------
                qDebug()<<"BTU F"<<intpos;
                fo1=  m_shrdMem->getF(def+i*5+3);
                fo2=  m_shrdMem->getF(def+i*5+4);
                //------------------------
                qDebug()<<"case WAIT "<<intwait;
                qDebug()<<"case UP "<<intup;
                qDebug()<<"case LEN "<<intlen;
                qDebug()<<"case DOWN "<<intdown;
                qDebug()<<"case POS "<<intpos;
                qDebug()<<"case NORM F"<<fo1;
                qDebug()<<"case FAIL F"<<fo2;
                //------------------------
            }
        }
    }
    clearscr();
    ui->btn_Guardar->setDisabled(1);
    ui->btn_Reset->setDisabled(1);
}

void ParametrosInternos::resetVal()
{
    int varpos, valNomI, valMaxI, su, bu;
    float valNomF, valMaxF;
    unsigned short intvar;
    QString nmb_falla;

    if(!ui->le_var->text().isEmpty() && !ui->le_val->text().isEmpty())
    {
        qDebug()<<"Entro a la función de Reset";
        nmb_falla = ui->le_var->text();

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
                m_shrdMem->setF(valNomF, varpos);

                qDebug()<<"Resetea la falla en: "<<varpos<<"Valor Normal: "<<valNomF<<"Valor Falla: "<<valMaxF;

                su=1;

                for (int i=0; i<20; i++)
                {
                    bu = m_shrdMem->getI(OffsetFallas+i*5);
                    intvar = bu>>16;
                    if (intvar == varpos)
                    {
                        //pon los valores que sean necesarios
                        // si es flotante
                        m_shrdMem->setF(valNomF,OffsetFallas+i*5+3);
                        m_shrdMem->setF(valMaxF,OffsetFallas+i*5+4);
                        m_shrdMem->setI(0*256*256+16000,OffsetFallas+i*5);
                        su=0;
                        m_shrdMem->setF(valNomF, varpos);
                    }
                }
                if (su==1)
                {
                    qDebug()<<"FAIK F";
                }
            }
            else if(this->ptr_tipo == "Int")
            {
                valNomI = this->ptr_valNorm.toInt();
                valMaxI = this->ptr_valFail.toInt();

                m_shrdMem->setI(valNomI, varpos);
                qDebug()<<"Resetea la falla: "<<valMaxI;

                for (int i=0; i<20; i++)
                {
                    bu = m_shrdMem->getI(OffsetFallas+i*5);
                    intvar=bu>>16;
                    if (intvar==varpos+16000)
                    {
                        //pon los valores que sean necesarios
                        // si es entero
                        m_shrdMem->setI(valNomI,OffsetFallas+i*5+3);
                        m_shrdMem->setI(valMaxI,OffsetFallas+i*5+4);
                        m_shrdMem->setI(0*256*256+16000,OffsetFallas+i*5);
                        su=0;
                        m_shrdMem->setI(valNomI, varpos);
                    }
                }
                if (su==1)
                {
                    qDebug()<<"FAIK F";
                }
            }
            else
            {
                QMessageBox::information(this, tr("Error"),
                                         tr("El tipo de la variable es erróneo o no está permitido"));
                qDebug()<<"Hay un error de coincidencias";
                return;
            }
        }
        else
        {
            QMessageBox::information(this, tr("Error"),
                                     tr("El tipo de la variable es erróneo o no está permitido"));
            qDebug()<<"Hay un error de coincidencias";
            return;
        }
    }
    else
    {
        QMessageBox::information(this, tr("Error"),
                                 tr("El nombre de la variable es incongruente con el almacenado.\nvuelva a intentarlo."));
        qDebug()<<"Hay un error de coincidencias";
        return;
    }
    clearscr();
    ui->btn_Guardar->setDisabled(1);
    ui->btn_Reset->setDisabled(1);
}

void ParametrosInternos::buscarVariable()
{
    int i, j;
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


// Limpia los cuadros de texto
void ParametrosInternos::clearscr()
{
    ui->le_var->setText("");
    ui->le_val->setText("0");
    ui->t_esp->setValue(0);
    ui->t_trans->setValue(0);
    ui->cb_sm_ret->setCurrentIndex(0);
    ui->cb_sm_tra->setCurrentIndex(0);
    ui->t_esp->setEnabled(1);
    ui->cb_sm_ret->setEnabled(1);
    ui->lb_Ttrans->setEnabled(1);
    ui->t_trans->setEnabled(1);
    ui->cb_sm_tra->setEnabled(1);
/*    ui->t_aplic->setEnabled(1);
    ui->cb_sm_apl->setEnabled(1);
    ui->lb_Trep->setEnabled(1);
    ui->t_rep->setEnabled(1);
    ui->cb_sm_rep->setEnabled(1);
*/
    ui->btn_Reset->setEnabled(0);
    ui->btn_Guardar->setEnabled(0);

    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }
}

// Captura las lineas del txt;
QStringList ParametrosInternos::rFrStringList(QString file)
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
int ParametrosInternos::buscaVars(QString name)
{
    QStringList lst_buscar;
    int index=-1;

    lst_buscar = this->NamesList_act;

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
bool ParametrosInternos::verificaC(QString str1, QString str2)
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
QString ParametrosInternos::ftoa(float f)
{
    return QString::number(f,'f',2);
}

// Conversion de Entero a Cadena
QString ParametrosInternos::ftoa(int i)
{
    return QString::number(i,10);
}

QString ParametrosInternos::getPercent(float vi, float vm, float va)
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

    str = ftoa(prct);
    str.append(" %");
    return str;
}

// Actualiza el valor del TextSlider
void ParametrosInternos::dialValChanged(int ival)
{
    ui->le_val->setText(ftoa(ival*this->modSld));
}

// Actualiza el valor del Slider
void ParametrosInternos::textValChanged(QString sval)
{
    ui->slider->setValue((sval.toInt())/this->modSld);
}

void ParametrosInternos::selectedItem(int row, int col)
{
    for(int i=0; i < ui->table->rowCount(); i++)
    {
        for(int j=0; j < ui->table->columnCount(); j++)
        {
            ui->table->item(i, j)->setBackground(QBrush(Qt::white));
        }
    }

    ui->table->item(row, col)->setBackground(QBrush(QColor(0,129,255,51)));
    ui->table->scrollToItem(ui->table->item(row,0),QAbstractItemView::EnsureVisible);
}

// Anuncio de error con el fichero y la shareMemory
void ParametrosInternos::anuncmnt(QString strings)
{
    this->actualizar = false;
    QMessageBox::information(this, tr("Error"),
    tr("No se encontro la variable: '%1'").arg(strings));
    close();
}

//Propias de la ventana
ParametrosInternos::~ParametrosInternos()
{
    delete ui;
}

void ParametrosInternos::changeEvent(QEvent *e)
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
