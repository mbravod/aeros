#ifndef CI_EDIT_H
#define CI_EDIT_H

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <QDialog>
#include "Console/CIClass/cin.h"


namespace Ui {
    class CI_Edit;
}

class CI_Edit : public QDialog
{
    Q_OBJECT

public:
    explicit CI_Edit(QWidget *parent = 0);
    ~CI_Edit();
    QString user;
private slots:
    void showCI();
    void showCISQL();
    void loadCI();
    void showVartoChange(int row,int column);
    void showVartoChange2(int row,int column);
    void deleteCI();
    void takeCI();
    void renameCI();
    void loadedOK();
    void loadedFail();
private:
    Ui::CI_Edit *ui;
    int Row;
    int Column;
    void login();
    char SQLVIRTUALTABLE[1024*5][128];
    char FILESVIRTUALTABLE[1024*20][32];
    int xu;
    void errorMessage(int error);
    void  createItem(int row, QString Item);
    void  createItem2(int row, QString item0 ,QString item1,QString item2);
    void getFromDisk(char modal);
    void getFromSQL(char modal);
    CIn *cIn;
};

#endif // CI_EDIT_H
