#ifndef WCTRLCARGA_H
#define WCTRLCARGA_H

#include <QWidget>
#include <QMouseEvent>
#define wctrlcarga 6


namespace Ui {
    class WCtrlCarga;
}

class WCtrlCarga : public QWidget
{
    Q_OBJECT

public:
    explicit WCtrlCarga(QWidget *parent = 0);
    ~WCtrlCarga();

    void setLbIP(QString s);
    void setLbHabilitado(QString s);
    void setLbRemLoc(QString s);
    void setLeConf(QString s);
    void setLeDemanda(QString s);
    void setLeReal(QString s);
    QString getLbIP();
    QString setLbHabilitado();
    QString setLbRemLoc();
    QString setLeConf();
    QString setLeDemanda();
    QString setLeReal();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WCtrlCarga *ui;
};

#endif // WCTRLCARGA_H
