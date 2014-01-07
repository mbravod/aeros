#ifndef WCRAKCTRL_H
#define WCRAKCTRL_H

#include <QWidget>
#include <QMouseEvent>

#define wcrakctrl 3
namespace Ui {
    class WCrakCtrl;
}

class WCrakCtrl : public QWidget
{
    Q_OBJECT

public:
    explicit WCrakCtrl(QWidget *parent = 0);
    ~WCrakCtrl();
    void setLbIP(QString s);
    void setLbcrankperm(QString s);
    void setLehighspd(QString s);
    void setLestop(QString s);
    QString getLbcrankperm();
    QString getLehighspd();
    QString getLeStop();
    QString getLbIP();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);


private:
    Ui::WCrakCtrl *ui;
};

#endif // WCRAKCTRL_H
