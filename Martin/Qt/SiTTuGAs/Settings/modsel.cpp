#include "modsel.h"
#include "ui_modsel.h"
#include <QDir>
#include "Console/Login/login.h"
#include "Settings/Paths.h"

MODSEL::MODSEL(QWidget *parent,Settings * s) :
    QDialog(parent),
    ui(new Ui::MODSEL)
{
    ui->setupUi(this);
    m_settings=s;

    connect(ui->rdbtn_Operador, SIGNAL(clicked()), this, SLOT(operador()));
    connect(ui->rdbtn_Instructor, SIGNAL(clicked()), this, SLOT(instructor()));
    connect(ui->btn_SITTUGAS, SIGNAL(released()), this, SLOT(passSITTUGAS()));

    operador();
}

void MODSEL::instructor(){
    ui->le_op1_ip01->setEnabled(1);
    ui->le_op1_ip02->setEnabled(1);
    ui->le_op1_ip03->setEnabled(1);
    ui->le_op1_ip04->setEnabled(1);

    ui->le_op2_ip01->setEnabled(1);
    ui->le_op2_ip02->setEnabled(1);
    ui->le_op2_ip03->setEnabled(1);
    ui->le_op2_ip04->setEnabled(1);

    ui->le_op3_ip01->setEnabled(1);
    ui->le_op3_ip02->setEnabled(1);
    ui->le_op3_ip03->setEnabled(1);
    ui->le_op3_ip04->setEnabled(1);

    ui->le_op4_ip01->setEnabled(1);
    ui->le_op4_ip02->setEnabled(1);
    ui->le_op4_ip03->setEnabled(1);
    ui->le_op4_ip04->setEnabled(1);
}
void MODSEL::operador(){

    ui->le_op1_ip01->setEnabled(0);
    ui->le_op1_ip02->setEnabled(0);
    ui->le_op1_ip03->setEnabled(0);
    ui->le_op1_ip04->setEnabled(0);
    ui->le_op1_ip01->setText("");
    ui->le_op1_ip02->setText("");
    ui->le_op1_ip03->setText("");
    ui->le_op1_ip04->setText("");

    ui->le_op2_ip01->setEnabled(0);
    ui->le_op2_ip02->setEnabled(0);
    ui->le_op2_ip03->setEnabled(0);
    ui->le_op2_ip04->setEnabled(0);
    ui->le_op2_ip01->setText("");
    ui->le_op2_ip02->setText("");
    ui->le_op2_ip03->setText("");
    ui->le_op2_ip04->setText("");

    ui->le_op3_ip01->setEnabled(0);
    ui->le_op3_ip02->setEnabled(0);
    ui->le_op3_ip03->setEnabled(0);
    ui->le_op3_ip04->setEnabled(0);
    ui->le_op3_ip01->setText("");
    ui->le_op3_ip02->setText("");
    ui->le_op3_ip03->setText("");
    ui->le_op3_ip04->setText("");

    ui->le_op4_ip01->setEnabled(0);
    ui->le_op4_ip02->setEnabled(0);
    ui->le_op4_ip03->setEnabled(0);
    ui->le_op4_ip04->setEnabled(0);
    ui->le_op4_ip01->setText("");
    ui->le_op4_ip02->setText("");
    ui->le_op4_ip03->setText("");
    ui->le_op4_ip04->setText("");

}
void MODSEL::passSITTUGAS(){

    if(ui->rdbtn_Instructor->isChecked()){
        // Función que valida la correcta integración de parámetros.
        bool pass = true, passb=true, passc=true;
        // Si la máquina trabajará como Consola de Instructor...
        // Validamos todos los campos.
        QString ip_op1 = "", ip_op2 = "", ip_op3 = "", ip_op4 = "", src = "";
        int num;

        //Recolectamos la IP del Operador 1
        src = ui->le_op1_ip01->text();
        num = src.toInt(0);
        ip_op1.append(QString::number(num,10));
        ip_op1.append(".");

        src = ui->le_op1_ip02->text();
        num = src.toInt(0);
        ip_op1.append(QString::number(num,10));
        ip_op1.append(".");

        src = ui->le_op1_ip03->text();
        num = src.toInt(0);
        ip_op1.append(QString::number(num,10));
        ip_op1.append(".");

        src = ui->le_op1_ip04->text();
        num = src.toInt(0);
        ip_op1.append(QString::number(num,10));

        //Recolectamos la IP del Operador 2
        src = ui->le_op2_ip01->text();
        num = src.toInt(0);
        ip_op2.append(QString::number(num,10));
        ip_op2.append(".");

        src = ui->le_op2_ip02->text();
        num = src.toInt(0);
        ip_op2.append(QString::number(num,10));
        ip_op2.append(".");

        src = ui->le_op2_ip03->text();
        num = src.toInt(0);
        ip_op2.append(QString::number(num,10));
        ip_op2.append(".");

        src = ui->le_op2_ip04->text();
        num = src.toInt(0);
        ip_op2.append(QString::number(num,10));

        //Recolectamos la IP del Operador 3
        src = ui->le_op3_ip01->text();
        num = src.toInt(0);
        ip_op3.append(QString::number(num,10));
        ip_op3.append(".");

        src = ui->le_op3_ip02->text();
        num = src.toInt(0);
        ip_op3.append(QString::number(num,10));
        ip_op3.append(".");

        src = ui->le_op3_ip03->text();
        num = src.toInt(0);
        ip_op3.append(QString::number(num,10));
        ip_op3.append(".");

        src = ui->le_op3_ip04->text();
        num = src.toInt(0);
        ip_op3.append(QString::number(num,10));

        //Recolectamos la IP del Operador 4
        src = ui->le_op4_ip01->text();
        num = src.toInt(0);
        ip_op4.append(QString::number(num,10));
        ip_op4.append(".");

        src = ui->le_op4_ip02->text();
        num = src.toInt(0);
        ip_op4.append(QString::number(num,10));
        ip_op4.append(".");

        src = ui->le_op4_ip03->text();
        num = src.toInt(0);
        ip_op4.append(QString::number(num,10));
        ip_op4.append(".");

        src = ui->le_op4_ip04->text();
        num = src.toInt(0);
        ip_op4.append(QString::number(num,10));


        //INTENTAR GUARDAR AJUSTES
        m_settings->m_firstSettings.mode = Settings::Consola;
        strcpy(m_settings->m_firstSettings.ip_op1,ip_op1.toAscii());
        strcpy(m_settings->m_firstSettings.ip_op2,ip_op2.toAscii());
        strcpy(m_settings->m_firstSettings.ip_op3,ip_op3.toAscii());
        strcpy(m_settings->m_firstSettings.ip_op4,ip_op4.toAscii());

        QDir path;
        path.mkpath(QString("%1%2").arg(InstallPath).arg("Default User").toAscii().data());
        path.mkpath(QString("%1%2/Bitacora").arg(InstallPath).arg("Default User").toAscii().data());
        path.mkpath(QString("%1%2/GruposCurvas").arg(InstallPath).arg("Default User").toAscii().data());
        path.mkpath(QString("%1%2/GruposTablas").arg(InstallPath).arg("Default User").toAscii().data());
        path.mkpath(QString("%1%2/GruposVariables").arg(InstallPath).arg("Default User").toAscii().data());
    }


    else{
        m_settings->m_firstSettings.mode = Settings::Operador;
        QDir path;
        path.mkpath(QString("%1%2").arg(InstallPath).arg("Operador").toAscii().data());
        path.mkpath(QString("%1%2/Bitacora").arg(InstallPath).arg("Operador").toAscii().data());
        path.mkpath(QString("%1%2/GruposCurvas").arg(InstallPath).arg("Operador").toAscii().data());
        path.mkpath(QString("%1%2/GruposTablas").arg(InstallPath).arg("Operador").toAscii().data());
        path.mkpath(QString("%1%2/GruposVariables").arg(InstallPath).arg("Operador").toAscii().data());
    }

    if(m_settings->save()){
        this->accept();
    }
    else this->reject();

}

MODSEL::~MODSEL()
{
    delete ui;
}
