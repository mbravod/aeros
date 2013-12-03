#ifndef WTEMPESPERA_H
#define WTEMPESPERA_H

#include <QWidget>
#include <QMouseEvent>
#define wtempespera 21

#define wvigb 24
#define wvoltctrl 25

namespace Ui {
    class WTempEspera;
}

class WTempEspera : public QWidget
{
    Q_OBJECT

public:
    explicit WTempEspera(QWidget *parent = 0);
    ~WTempEspera();

    void setLbIP(QString s);
    void setLeDemanda(QString s);
    void setLeRetro(QString s);
    QString getLbIP();
    QString getLeDemanda();
    QString getLeRetro();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WTempEspera *ui;
};

#endif // WTEMPESPERA_H
