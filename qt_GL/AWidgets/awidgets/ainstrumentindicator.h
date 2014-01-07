#ifndef AINSTRUMENTINDICATOR_H
#define AINSTRUMENTINDICATOR_H

#include "awmultestatewidget.h"
#include <QColor>
#include <QList>
#include <QDebug>
#include <QMouseEvent>

class AInstrumentIndicator : public AWMultEstateWidget
{
    Q_OBJECT
    Q_PROPERTY (QString UpLabel READ UpLabel WRITE SetUpLabel)
    Q_PROPERTY (QString DownLabel READ DownLabel WRITE SetDownLabel)
    Q_PROPERTY (double LineAngle READ LineAngle WRITE SetLineAngle)
    //Q_PROPERTY (QColor ColorState READ ColorState WRITE SetColorState)

public:
    AInstrumentIndicator(QWidget *parent = 0);

    QString UpLabel()const{return UpLabelTxT;}
    void SetUpLabel(QString s);

    QString DownLabel()const{return DownLabelTxT;}
    void SetDownLabel(QString s);


    double LineAngle()const{return m_lineAngle;}
    void SetLineAngle(double i);

    //QColor ColorState()const{return m_colorState;}
    //void SetColorState(QColor c);

private:
    void init();
protected:

    void AWPaintEvent();
    void mousePressEvent( QMouseEvent *);
    QString UpLabelTxT;
    QString DownLabelTxT;
    double m_lineAngle;
    QList <QColor> m_colorList;

public slots:
    void emiteIdentificador(QString id);
    void Update();
signals:
    void emiteId(QString id);
    void recibeId(QString id);
};

#endif
