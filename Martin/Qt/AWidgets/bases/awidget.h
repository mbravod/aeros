#ifndef AWIDGET_H
#define AWIDGET_H

#include <QWidget>
#include "../SharedMemory/shrdmem.h"
//#include "SharedMemory/shrdmem.h"   //or "shrdmem.h"
//#include "shrdmem.h"

class AWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY (int intID READ intID WRITE setIntID);
    Q_PROPERTY (QString strID READ strID WRITE setStrID);
    Q_PROPERTY (bool isUpdateable READ isUpdateable WRITE setUpdateable);
public:
    AWidget(QWidget *parent = 0);

    int intID()const{return m_intid;}
    void setIntID(int id);
    QString strID()const{return m_strid;}
    void setStrID(QString id);

    bool isUpdateable()const{return m_isUpdateable;}
    void setUpdateable(bool u);

    void setShrdMem(ShrdMem *s){m_ShrdMem=s;}
    virtual void Update();
protected:
        int m_intid;
        QString m_strid;
        ShrdMem *m_ShrdMem;
        bool m_isUpdateable;
        void paintEvent(QPaintEvent *);
        virtual void AWPaintEvent();
public slots:

signals:
};

#endif // AWIDGET_H
