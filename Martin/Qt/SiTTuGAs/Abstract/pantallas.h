#ifndef PANTALLAS_H
#define PANTALLAS_H

#include <QString>
#include <QtGui>
#include <QObject>
#include "awidget.h"
#include "Base.h"

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
        SiTTuGAs *m_SiTTuGAs;
        QList<AWidget *> allAWWidget;
        QList<Base *> allComponents;

    protected slots:
//        void Update();
};

#endif // PANTALLAS_H
