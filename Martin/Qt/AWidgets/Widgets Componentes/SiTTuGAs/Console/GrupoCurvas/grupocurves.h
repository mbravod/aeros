#ifndef GRUPOCURVES_H
#define GRUPOCURVES_H

#include <QDialog>
#include "SharedMemory/shrdmem.h"
class ShrdMem;

namespace Ui {
    class GrupoCurves;
}

class GrupoCurves : public QDialog
{
    Q_OBJECT

public:
    GrupoCurves(QWidget *parent = 0);
    ~GrupoCurves();
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
    Ui::GrupoCurves *ui;
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

#endif // GRUPOCURVES_H
