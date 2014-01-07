#ifndef INET_AI_19_H
#define INET_AI_19_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_19 9

namespace Ui {
    class Inet_AI_19;
}

class Inet_AI_19 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_19(QWidget *parent = 0);
    ~Inet_AI_19();

private:
    Ui::Inet_AI_19 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_19_H
