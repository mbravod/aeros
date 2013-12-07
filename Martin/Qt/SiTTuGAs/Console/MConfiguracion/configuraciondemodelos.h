#ifndef CONFIGURACIONDEMODELOS_H
#define CONFIGURACIONDEMODELOS_H

#include <QDialog>
#include "SharedMemory/httprequest.h"

namespace Ui {
    class ConfiguracionDeModelos;
}

class ConfiguracionDeModelos : public QDialog {
    Q_OBJECT
public:
    ConfiguracionDeModelos(QWidget *parent = 0);
    ~ConfiguracionDeModelos();
    QString ftoa(float f);
public slots:
    void showVariables(QString system);
    void showVartoChange(int row,int column);
    void verifyVariable();
       void buscavalor();
protected:
    void changeEvent(QEvent *e);
private slots:
    void anuncmnt(QString strings);

private:
    Ui::ConfiguracionDeModelos *ui;
    void loadSyst();
    QStringList rFrStringList(QString file);
    QString rFrStringVarsNum(QString var);
    int Row;
    int Column;
    HTTPRequest *shrdMem;
    QString ruta;
};

#endif // CONFIGURACIONDEMODELOS_H
