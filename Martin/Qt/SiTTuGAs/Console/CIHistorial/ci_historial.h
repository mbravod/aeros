#ifndef CI_HISTORIAL_H
#define CI_HISTORIAL_H

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <QDialog>
#include "../CIClass/cin.h"


namespace Ui {
    class COINS;
}


namespace Ui {
    class CI_Historial;
}

class CI_Historial : public QDialog {
    Q_OBJECT
public:

    CI_Historial(QWidget *parent = 0);
    ~CI_Historial();
    Ui::CI_Historial *ui;
    int Row;
    int Column;
    QString user;

private slots:
    void showCI();
    void loadCI();
    void showIntervals(QString interval);
    void showVartoChange(int row,int column);
    void deleteCI();
    void loadedOK();
    void loadedFail();
protected:
    void changeEvent(QEvent *e);

private:

    void login();
    char SQLVIRTUALTABLE[1024*5][128];
    char FILESVIRTUALTABLE[1024*20][32];
    int xu;
    void errorMessage(int error);
    void  createItem(int row, QString Item);
    void getFromDisk(char modal);
    CIn *cIn;
};

#endif // CI_HISTORIAL_H
