#ifndef PANTALLAS_H
#define PANTALLAS_H

#include <QString>
#include <QtGui>
#include <QObject>
#include "awidget.h"

class HTTPRequest;
class SiTTuGAs;

class Pantallas : public QWidget
{
    Q_OBJECT
    public:
        Pantallas(SiTTuGAs *siTTuGAs, HTTPRequest *shrdMem);

        QString getTitle();
        QString getClave();

        void setUpdateableChildrenList();
    protected:
        QString title;
        QString clave;
        HTTPRequest *m_shrdMem;

    protected slots:
//        void Update();

private:
        SiTTuGAs *m_SiTTuGAs;
        QList<AWidget *> allAWWidget;
};

#endif // PANTALLAS_H
