#ifndef INET_AI_6_H
#define INET_AI_6_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_6  10

namespace Ui {
    class Inet_AI_6;
}

class Inet_AI_6 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_6(QWidget *parent = 0);
    ~Inet_AI_6();

private:
    Ui::Inet_AI_6 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_6_H
