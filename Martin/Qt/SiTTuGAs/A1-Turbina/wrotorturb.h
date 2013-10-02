#ifndef WROTORTURB_H
#define WROTORTURB_H

#include <QWidget>

namespace Ui {
    class WRotorTurb;
}

class WRotorTurb : public QWidget
{
    Q_OBJECT

public:
    explicit WRotorTurb(QWidget *parent = 0);
    ~WRotorTurb();

    void setLbIP(QString s);
    void setLeOper(QString s);
    void setLeCntr(QString s);
    void setLbVel(QString s);
    void setLbRef(QString s);
    void setLbEmicion(QString s);
    void setLbVelU(QString s);
    void setLbRefU(QString s);
    void setLbEmicionU(QString s);
    QString getLbIP();
    QString setLeOper();
    QString setLeCntr();
    QString setLbVel();
    QString setLbRef();
    QString setLbEmicion();
    QString setLbVelU();
    QString setLbRefU();
    QString setLbEmicionU();

private:
    Ui::WRotorTurb *ui;
};

#endif // WROTORTURB_H
