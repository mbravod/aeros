#ifndef TABLAS_H
#define TABLAS_H

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <QDialog>

#include "SharedMemory/httprequest.h"
//class ShrdMem;

namespace Ui {
    class Tablas;
}

class Tablas : public QDialog
{
    Q_OBJECT

public:
    explicit Tablas(QWidget *parent = 0);
    ~Tablas();
    QString user;

public slots:
    void stopTable();
    void startTable();
    void pauseTable();
private slots:
    void openFile();
    void saveFile();
    void saveFileAs();
    void UpdateHMI();
    void generateTable();
private:
    Ui::Tablas *ui;
    void readFromFile(QString fileName);
    void getVerticalVarNames();
    void getDescription();
    QStringList StringList;
    QStringList VarType;
    QStringList VarNames;
    QStringList Description;
    QTimer *updatetimer;
    QString ftoa(float f);
    QString rootDest;
    void saveTable(QString fileName);
    void  initialUpdate();
    HTTPRequest *m_shrdMem;
    QString ruta;
};

#endif // TABLAS_H
