#include <QtGui>
#include <QDebug>
#include <stdio.h>
#include <string.h>
#include <tchar.h>
#include <stdlib.h>
#include "bitacorao.h"
#include "ui_bitacorao.h"
#include "Bitac/Bitac.h"
#include "Settings/Paths.h"
#include "Settings/settings.h"

QString BitacoraO::ruta = InstallPath;

BitacoraO::BitacoraO(Console *parent, QString user) :
    QDialog(parent),
    ui(new Ui::BitacoraO)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    //-----------------------------------
    this->user = user;
    c = parent;
    ///Condiciones iniciales para tabla
    ui->table->setColumnCount(4);
    ui->table->setColumnWidth(0,150);
    ui->table->setColumnWidth(1,150);
    ui->table->setColumnWidth(2,280);
    ui->table->setColumnWidth(3,150);
    QStringList headers;
    headers << "FECHA - HORA" << "USUARIO" << "EVENTO"<< "FOTO";
    ui->table->setHorizontalHeaderLabels(headers);
    ui->table->horizontalHeader()->setStretchLastSection(true);
    ui->le_user->setText(this->user);
    connect(ui->cb_Operador, SIGNAL(currentIndexChanged(int)), this, SLOT(evtOpr(int)));
    connect(ui->cb_historial, SIGNAL(currentIndexChanged(int)), this, SLOT(evtHst(int)));
    connect(ui->btn_selOp, SIGNAL(clicked()), this, SLOT(selectOperador()));
    connect(ui->btn_selBit, SIGNAL(clicked()), this, SLOT(selectBitacora()));

    ui->pgrBar->setValue(0);
    ui->pgrBar->setVisible(0);
    this->opOK = false;
    this->histOK = false;

    this->indexOP = -1;
    this->indexBTC = -1;

    showOperadores();
}

void BitacoraO::showOperadores()
{
    qDebug()<<"Vamos a recolectar ips";
    QString str;
//    QString rtf = BitacoraO::ruta;
//    QStringList ips;
    int i = 0, j = 0;
//    rtf.append("ips.txt");
//    ips = rFrStringList(rtf);

    this->ipsOp.clear();

//    ipSRV = ips.at(0);


    ipIns =c->settings->m_firstSettings.ip_ci;
    ipsOp.append(c->settings->m_firstSettings.ip_op1);
    ipsOp.append(c->settings->m_firstSettings.ip_op2);
    ipsOp.append(c->settings->m_firstSettings.ip_op3);
    ipsOp.append(c->settings->m_firstSettings.ip_op4);


    qDebug()<<"A punto de meterme al primer for";

    for(i = 0; i < ipsOp.size(); i++)
    {
        str = QString("Operador %1 - %2").arg(i+1).arg(ipsOp.at(i));
        qDebug()<<str;
        ui->cb_Operador->insertItem(i, str);
    }

    qDebug()<<"Saliendo del primer for";

    if (ipsOp.size() != 0)
    {
        this->opOK = true;
        qDebug()<<"Validación del tamaño "<<ipsOp.size()<<" edo: "<<this->opOK;
        ui->btn_selOp->setEnabled(1);
    }

    qDebug()<<"Validación del tamaño"<<ipsOp.size();

    ui->cb_Operador->setCurrentIndex(-1);
    qDebug()<<"FIN recolectar ips";
}

void BitacoraO::selectOperador()
{
    qDebug()<<"FCN para seleccionar operador... "<<this->opOK;
    if(this->opOK)
    {
        ui->pgrBar->setValue(0);
        ui->pgrBar->setVisible(1);
        //----------------------
        QString rtf, str;
        QStringList lines;
        bool error = true;
        int index = ui->cb_Operador->currentIndex();
        if(index<0)return;
        this->ipAct = this->ipsOp.at(index);
        qDebug()<<"La IP activa es: "<<ipAct;
        rtf = this->ruta;
        //str = this->ruta;
        str="\\Operador\\Bitacora\\Historial.txt";
        rtf.append(QString("fileclient \"%1\" \"%2\"").arg(str).arg(this->ipAct));

        try
        {
            system(rtf.toAscii());
            error = false;
        }
        catch(...)
        {
            QMessageBox::information(this, tr("Error"),
            tr("No fue posible establecer la conexión.\n%1").arg(rtf));
            error = true;
        }

        if(!error)
        {
            //----------------------
            ui->pgrBar->setValue(15);
            //----------------------
            rtf = this->ruta;
            rtf.append("Operador\\Bitacora\\Historial.txtt");
            //----------------------
            lines = rFrStringList(rtf);

            if(1 < lines.size())
            {
                lines.removeLast();

                //----------------------
                ui->pgrBar->setValue(30);
                int totalsteps = lines.size();
                int paso = int(70/totalsteps);
                int acum = 0;
                //----------------------

                for(int i = 0; i < lines.size(); i++)
                {
                    ui->cb_historial->insertItem(i, lines.at((lines.size()-1)-i));
                    acum = acum + paso;
                    ui->pgrBar->setValue(acum);
                }

                ui->pgrBar->setValue(100);
                ui->pgrBar->setVisible(0);
                this->histOK = false;
                ui->cb_historial->setCurrentIndex(-1);
            }
            else
            {
                ui->pgrBar->setValue(100);
                ui->pgrBar->setVisible(0);
            }
        }
        else
        {
            ui->pgrBar->setValue(100);
            ui->pgrBar->setVisible(0);
        }
    }
    qDebug()<<"FIN FCN para seleccionar operador... ";
}

void BitacoraO::selectBitacora()
{
    if(this->histOK)
    {
        QString rtf, str, btc;
        QStringList lines;
        QString line;
        bool error = true;
        int nlines = 0;
        int nt;

        rtf = this->ruta;
        //str = this->ruta;

        btc = ui->cb_historial->currentText();

        str.append("\\Operador\\Bitacora\\");
        str.append(btc);
        qDebug()<<str;

        rtf.append(QString("fileclient \"%1\" \"%2\"").arg(str).arg(this->ipAct));

        try
        {
            qDebug()<<rtf.toAscii();
            system(rtf.toAscii());
            error = false;
        }
        catch(...)
        {
            QMessageBox::information(this, tr("Error"),
            tr("No fue posible establecer la conexión.\n%1").arg(rtf));
            error = true;
        }

        if(!error)
        {
            //----------------------
            ui->pgrBar->setValue(15);
            //----------------------
            rtf = this->ruta;
            rtf.append("Operador\\Bitacora\\");
            rtf.append(btc);
            rtf.append("t");
            qDebug()<<rtf;

            //----------------------
            lines = rFrStringList(rtf);
            if(1 < lines.size())
            {
                lines.removeLast();

                ui->pgrBar->setValue(0);
                ui->pgrBar->setVisible(1);

                while(ui->table->rowCount()!=0)
                {
                    ui->table->removeRow(0);
                }

                ui->pgrBar->setValue(10);

                int totalp = lines.size() - 1;
                int paso = int(totalp/90);
                int acum = 0;

                while (nlines < lines.size())
                {
                    line = lines.at(nlines);
                    ui->table->insertRow(nlines);

                    nt = line.count("\t",Qt::CaseSensitive);

                    for(int i = 0; i <= nt; i++)
                    {
                        QTableWidgetItem *newItem = new QTableWidgetItem(line.split(QString("\t")).at(i));
                        newItem->setFlags(Qt::NoItemFlags);
                        ui->table->setItem(nlines, i , newItem);
                    }
                    acum = acum + paso;
                    ui->pgrBar->setValue(acum);
                    nlines++;
                }
            }
            ui->pgrBar->setValue(100);
            ui->pgrBar->setVisible(0);
        }
        else
        {
            ui->pgrBar->setValue(100);
            ui->pgrBar->setVisible(0);
        }
    }
}

void BitacoraO::evtOpr(int i)
{
    if(this->indexOP != i)
    {
        this->opOK = true;
        this->indexOP = i;
    }
    else if (this->indexOP == -1)
    {
        this->opOK = false;
    }
    else
    {
        this->opOK = true;
    }
}

void BitacoraO::evtHst(int i)
{
    if(this->indexBTC != i)
    {
        this->indexBTC = i;
        this->histOK = true;
    }
    else if (this->indexBTC == -1)
    {
        this->histOK = false;
    }
    else
    {
        this->histOK = true;
    }
}


QStringList BitacoraO::rFrStringList(QString file)
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

BitacoraO::~BitacoraO()
{
    delete ui;

}
