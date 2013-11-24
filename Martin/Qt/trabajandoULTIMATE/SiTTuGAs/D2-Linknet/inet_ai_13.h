#ifndef INET_AI_13_H
#define INET_AI_13_H

#include <QWidget>
#include <QMouseEvent>

#define _AI_13 3

namespace Ui {
    class Inet_AI_13;
}

class Inet_AI_13 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_13(QWidget *parent = 0);
    ~Inet_AI_13();

private:
    Ui::Inet_AI_13 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_13_H
