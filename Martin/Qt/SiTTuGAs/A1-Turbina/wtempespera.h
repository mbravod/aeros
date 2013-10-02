#ifndef WTEMPESPERA_H
#define WTEMPESPERA_H

#include <QWidget>

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

private:
    Ui::WTempEspera *ui;
};

#endif // WTEMPESPERA_H
