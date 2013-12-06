#ifndef PANTALLAS_H
#define PANTALLAS_H

#include <QString>
#include <QtGui>
#include <QObject>
#include "awidget.h"

class ShrdMem;
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

    protected slots:
//        void Update();

private:
        ShrdMem *m_shrdMem;
        SiTTuGAs *m_SiTTuGAs;
        QList<AWidget *> allAWWidget;
};

#endif // PANTALLAS_H
