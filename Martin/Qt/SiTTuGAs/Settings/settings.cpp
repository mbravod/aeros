#include "settings.h"
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include "Settings/Paths.h"
#include "Settings/modsel.h"

Settings::Settings(QObject *parent):
        QObject(parent)
{
    m_firstSettings.mode = Consola;
    strcpy(m_firstSettings.ip_ci , "127.0.0.1");
    strcpy(m_firstSettings.ip_op1 , "0.0.0.1");
    strcpy(m_firstSettings.ip_op2 , "0.0.0.1");
    strcpy(m_firstSettings.ip_op3 , "0.0.0.1");
    strcpy(m_firstSettings.ip_op4 , "0.0.0.1");
    strcpy(m_firstSettings.valido , "Valido");

    m_firstSettings.isVisible_TBMando=false;
    m_firstSettings.isVisible_TBEstadosIn=false;
    m_firstSettings.isVisible_TBParametrosOp=false;
    m_firstSettings.isVisible_TBMonitoreo=false;
    m_firstSettings.isVisible_TBHistoriales=false;
    m_firstSettings.isVisible_TBMantenimiento=false;
}

bool Settings::loadFirstSettings(){

    QString dir,file,str;

    dir.append(InstallPath).append(ConfigFileDir);
    file.append(dir).append(ConfigFileName);
    str ="No existe el Archivo: ";
    str.append(file);

    if(!QFile::exists(file))
    {        
        int messageBox = ShowMessageOKCancel(str,"Reset para ajustes predeterminados, Ok para realizar ajustes");
        if(messageBox==QMessageBox::Reset){
            QDir path;
            if(!path.exists(dir)){
                if(path.mkpath(dir.remove(dir.size()-1,1))){
                    qDebug("Se creo directorio %s",qPrintable(dir));
                }
                else{
                    qDebug("No se pudo crear directorio %s",qPrintable(dir));
                    ShowMessage("No se pudieron crear ajustes");
                    return false;
                }
            }

            if(!saveFirstSettings(file,m_firstSettings)){
                ShowMessage("No se crearon los ajustes");
                return false;
            }
        }
        else if(messageBox==QMessageBox::Ok){
            MODSEL m(0,this);
            if(m.exec()){
                m.close();
                return true;
            }
            else{
                m.close();
                ShowMessage("No se pudieron crear ajustes");
                return false;
            }
        }
        else{return false;}
    }
    else{
        FILE *arc;
        arc = fopen(file.toAscii(),"r");
        if(arc == NULL){
            qDebug("No se pudieron abrir ajustes");
            ShowMessage("No se pudieron abrir ajustes");
        }
        else{
            if(fread(&m_firstSettings, sizeof(FirstSettings), 1, arc) == 1){
                qDebug("Se cargaron Ajustes");
                return true;
            }
            else{
                qDebug("No se cargaron Ajustes");
                ShowMessage("No se cargaron Ajustes");
                return false;
            }
        }
    }
}

bool Settings::save(){
    QString dir,file,str;

    dir.append(InstallPath).append(ConfigFileDir);
    file.append(dir).append(ConfigFileName);
    return saveFirstSettings(file,m_firstSettings);
}

bool Settings::saveFirstSettings(const QString &s, const FirstSettings &fs){


    QString dir;
    dir.append(InstallPath).append(ConfigFileDir);
    QDir path;

    if(!path.exists(dir)){
        if(path.mkpath(dir.remove(dir.size()-1,1))){
            qDebug("Se creo directorio %s",qPrintable(dir));
        }
        else{
            qDebug("No se pudo crear directorio %s",qPrintable(dir));
            ShowMessage("No se pudieron crear ajustes");
            return false;
        }
    }

    FILE *arc;
    arc = fopen(s.toAscii(), "w");
    if(arc == NULL){
        qDebug("No se pudo crear %s",qPrintable(s));
        ShowMessage("No se pudieron crear ajustes");
        return false;
    }
    else{
        if(fwrite(&fs, sizeof(FirstSettings), 1, arc) == 1)
        {
            qDebug("Se escribieron Ajustes Predeterminados");
            fclose(arc);
            return true;
        }
        else{
            qDebug("No se pudo escribir Ajustes Predeterminados");
            fclose(arc);
            ShowMessage("No se pudieron crear ajustes");
            return false;
        }
    }
}

void Settings::ShowMessage(const QString &s){
    QMessageBox msgBox;
    msgBox.setText(s);
    msgBox.exec();
}

int Settings::ShowMessageOKCancel(const QString &s, const QString &t){
    QMessageBox msgBox;
    msgBox.setText(s);
    msgBox.setInformativeText(t);
    msgBox.setStandardButtons(QMessageBox::Reset | QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
   return msgBox.exec();
}

