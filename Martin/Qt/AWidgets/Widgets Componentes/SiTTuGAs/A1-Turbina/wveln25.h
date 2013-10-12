#ifndef WVELN25_H
#define WVELN25_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
#define wveln25 22


namespace Ui {
    class WVelN25;
}

class WVelN25 : public QWidget
{
    Q_OBJECT
    /*Setters y getters
    Q_PROPERTY(QString lbVelN25T READ getLbVelN25T WRITE setLbVelN25T);
    Q_PROPERTY(QString lbN25T_1 READ getLbN25T_1 WRITE setLbN25T_1);
    Q_PROPERTY(QString lbN25T_2 READ getLbN25T_2 WRITE setLbN25T_2);
    Q_PROPERTY(QString lbN25_1 READ getLbN25_1 WRITE setLbN25_1);
    Q_PROPERTY(QString lbN25_2 READ getLbN25_2 WRITE setLbN25_2);
    Q_PROPERTY(QString lbN25U_1 READ getLbN25U_1 WRITE setLbN25U_1);
    Q_PROPERTY(QString lbN25U_2 READ getLbN25U_2 WRITE setLbN25U_2);
    */

public:
    explicit WVelN25(QWidget *parent = 0);
    ~WVelN25();
    void setLbVelN25T(QString s);
    void setLbN25T_1(QString s);
    void setLbN25T_2(QString s);
    void setLbN25_1(QString s);
    void setLbN25_2(QString s);
    void setLbN25U_1(QString s);
    void setLbN25U_2(QString s);
    QString getLbN25U_2();
    QString getLbN25U_1();
    QString getLbN25_2();
    QString getLbN25_1();
    QString getLbN25T_1();
    QString getLbN25T_2();
    QString getLbVelN25T();

private:
    Ui::WVelN25 *ui;

public slots:
    void idWindow(int id);

signals:
    void clicked (int id);

protected:
    void mousePressEvent(QMouseEvent *);

};

#endif // WVELN25_H
