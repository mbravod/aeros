#ifndef MONITOREOV_H
#define MONITOREOV_H

#include <QDialog>
#include "SharedMemory/httprequest.h"
//class ShrdMem;

namespace Ui {
    class MonitoreoV;
}

class MonitoreoV : public QDialog
{
    Q_OBJECT

public:
    explicit MonitoreoV(QWidget *parent = 0);
    ~MonitoreoV();
    QString user;
private slots:
    void openFile();
    void UpdateHMI();
private:
    Ui::MonitoreoV *ui;
    void readFromFile(QString fileName);
    QStringList StringList;
    QTimer *updatetimer;
    HTTPRequest *shrdMem;
    QString ftoa(float f);
    QString ruta;

};

#endif // MONITOREOV_H
