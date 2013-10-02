#ifndef WCTRLAPAGADO_H
#define WCTRLAPAGADO_H

#include <QWidget>

namespace Ui {
    class WCtrlApagado;
}

class WCtrlApagado : public QWidget
{
    Q_OBJECT

public:
    explicit WCtrlApagado(QWidget *parent = 0);
    ~WCtrlApagado();
    void setLbIP(QString s);
    void setLeApagFun(QString s);
    QString getLbIP();
    QString getLeApagFun();


private:
    Ui::WCtrlApagado *ui;
};

#endif // WCTRLAPAGADO_H
