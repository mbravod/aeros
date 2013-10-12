#ifndef WCRAKCTRL_H
#define WCRAKCTRL_H

#include <QWidget>

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


private:
    Ui::WCrakCtrl *ui;
};

#endif // WCRAKCTRL_H
