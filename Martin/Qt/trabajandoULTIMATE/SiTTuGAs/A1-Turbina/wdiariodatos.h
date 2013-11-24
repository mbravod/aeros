#ifndef WDIARIODATOS_H
#define WDIARIODATOS_H

#include <QWidget>
#include <QMouseEvent>
#define wdiariodatos 8


namespace Ui {
    class WDiarioDatos;
}

class WDiarioDatos : public QWidget
{
    Q_OBJECT

public:
    explicit WDiarioDatos(QWidget *parent = 0);
    ~WDiarioDatos();

    void setLbIP(QString s);
    void setLeAlto(QString s);
    void setLeInicio(QString s);
    QString getLbIP();
    QString getLeInicio();
    QString getLeAlto();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WDiarioDatos *ui;
};

#endif // WDIARIODATOS_H
