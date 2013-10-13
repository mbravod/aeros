#ifndef WCTRLAPAGADO_H
#define WCTRLAPAGADO_H

#include <QWidget>
#include <QMouseEvent>
#define wctrlapagado 4




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
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WCtrlApagado *ui;
};

#endif // WCTRLAPAGADO_H
