#include <QtGui>
#include <QDebug>
#include "bitacorai.h"
#include "ui_bitacorai.h"
#include "Bitac/Bitac.h"
#include "Settings/Paths.h"

QString BitacoraI::ruta = InstallPath;

BitacoraI::BitacoraI(QWidget *parent, QString user) :
    QDialog(parent),
    ui(new Ui::BitacoraI)
{
    ui->setupUi(this);
    setAttribute( Qt::WA_DeleteOnClose );
    //-----------------------------------
    this->user = user;
    //qDebug()<<"Recibo como nombre de usurio: "<<this->system;
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
    //ui->le_sys->setText(this->system);
    ui->le_user->setText(this->user);

    showHistorial();
    ui->cb_historial->setCurrentIndex(-1);

    ui->pgrBar->setValue(0);
    ui->pgrBar->setVisible(0);
}

void BitacoraI::showHistorial()
{
    QString rtf = this->ruta;
    QStringList lines;
    rtf.append(this->user);
    rtf.append("\\Bitacora\\Historial.txt");
    lines = rFrStringList(rtf);
    lines.removeLast();

    for(int i = 0; i < lines.size(); i++)
    {
        ui->cb_historial->insertItem(i, lines.at((lines.size()-1)-i));
    }

    connect(ui->cb_historial, SIGNAL(activated(QString)), this, SLOT(showBitacora(QString)));
}

void BitacoraI::showBitacora(QString sistema)
{
    QString rtf = this->ruta;
    QStringList lines;
    QString line;
    int nlines = 0;
    int nt;

    rtf.append(this->user);
    rtf.append("\\Bitacora\\");
    rtf.append(sistema);
    lines = rFrStringList(rtf);

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

    while (nlines < (lines.size() - 1))
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
    ui->pgrBar->setValue(100);
    ui->pgrBar->setVisible(0);
}

QStringList BitacoraI::rFrStringList(QString file)
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

BitacoraI::~BitacoraI()
{
    delete ui;
}
