#ifndef INET_AI_14_H
#define INET_AI_14_H

#define _AI_14 4

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class Inet_AI_14;
}

class Inet_AI_14 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_14(QWidget *parent = 0);
    ~Inet_AI_14();

private:
    Ui::Inet_AI_14 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_14_H
