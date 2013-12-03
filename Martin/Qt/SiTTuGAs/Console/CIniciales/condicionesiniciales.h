#ifndef CONDICIONESINICIALES_H
#define CONDICIONESINICIALES_H

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <QDialog>
#include "Console/CIClass/cin.h"

namespace Ui {
    class CondicionesIniciales;
}

class CondicionesIniciales : public QDialog {
    Q_OBJECT
public:
    CondicionesIniciales(QWidget *parent = 0);
    ~CondicionesIniciales();
    QString user;
    QString foto;
    QString desc;
    int ini_pre; //ini=2 , pre=1;
private slots:
    void showCISQL();
    void loadCI();
    void showVartoChange(int row,int column);
    void loadedOK();
    void loadedFail();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::CondicionesIniciales *ui;
    int Row;
    int Column;
    void login();
    char SQLVIRTUALTABLE[1024*5][128];
    char FILESVIRTUALTABLE[1024*20][32];
    int xu;
    void errorMessage(int error);
    void  createItem(int row, QString item0 ,QString item1,QString item2);
    void  createItem2(int row, QString Item);
    void sendToTable();
    void getFromDisk(char modal);
    void getFromSQL(char modal);
    CIn *cIn;

signals:
    void valsToCoins(QString foto, QString coment);
};

#endif // CONDICIONESINICIALES_H
