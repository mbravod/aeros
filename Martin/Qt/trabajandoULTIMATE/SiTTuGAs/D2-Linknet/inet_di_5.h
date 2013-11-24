#ifndef INET_DI_5_H
#define INET_DI_5_H

#define _DI_5  12
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class Inet_DI_5;
}

class Inet_DI_5 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_DI_5(QWidget *parent = 0);
    ~Inet_DI_5();

private:
    Ui::Inet_DI_5 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // INET_DI_5_H
