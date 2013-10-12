#ifndef WVOLTCTRL_H
#define WVOLTCTRL_H

#include <QWidget>

namespace Ui {
    class WVoltCtrl;
}

class WVoltCtrl : public QWidget
{
    Q_OBJECT

public:
    explicit WVoltCtrl(QWidget *parent = 0);
    ~WVoltCtrl();
    void setLbIP(QString s);
    void setLeRetroa(QString s);
    QString getLbIP();
    QString getLeRetroa();

private:
    Ui::WVoltCtrl *ui;
};

#endif // WVOLTCTRL_H
