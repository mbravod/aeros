#ifndef WDIARIODATOS_H
#define WDIARIODATOS_H

#include <QWidget>

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

private:
    Ui::WDiarioDatos *ui;
};

#endif // WDIARIODATOS_H
