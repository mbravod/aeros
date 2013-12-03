#ifndef INET_AI_12_H
#define INET_AI_12_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_12 2

namespace Ui {
    class Inet_AI_12;
}

class Inet_AI_12 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_12(QWidget *parent = 0);
    ~Inet_AI_12();

private:
    Ui::Inet_AI_12 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_12_H
