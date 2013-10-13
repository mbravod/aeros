#ifndef WVOLTCTRL_H
#define WVOLTCTRL_H

#include <QWidget>
#include <QMouseEvent>
#define wvoltctrl 25

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
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::WVoltCtrl *ui;
};

#endif // WVOLTCTRL_H
