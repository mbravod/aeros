#ifndef GRUPOVARS_H
#define GRUPOVARS_H

#include <QDialog>
#include "SharedMemory/shrdmem.h"
class ShrdMem;

namespace Ui {
    class GrupoVars;
}

class GrupoVars : public QDialog
{
    Q_OBJECT

public:
    GrupoVars(QWidget *parent = 0);
    ~GrupoVars();
    QString ftoa(float f);
    QString user;
public slots:
    void showVariables(QString system);
    void deleteVar(int row,int column);
    void showVartoChange(int row,int column);
    void showVariablesE();
    void deleteVarE(int row,int column);
    void showVartoChangeE(int row,int column);

    void saveFile();
    void saveFileAs();
    void saveFileE();
    void saveGroup(QString fileName);
    void verifyVariable();
private slots:
    void anuncmnt(QString strings);
    void openFile();

private:
    Ui::GrupoVars *ui;
    QStringList rFrStringList(QString file);
    QStringList rTrStringList();
    QStringList StringList;
    QStringList StringListE;
    QString String;
    QString StringE;
    int Row;
    int Column;
    ShrdMem *shrdMem;
    void readFromFile(QString fileName);
    void loadSyst();
    QString ruta;
};

#endif // GRUPOVARS_H
