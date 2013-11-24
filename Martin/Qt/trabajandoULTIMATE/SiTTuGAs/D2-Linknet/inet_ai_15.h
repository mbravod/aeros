#ifndef INET_AI_15_H
#define INET_AI_15_H

#include <QWidget>
#include <QMouseEvent>

#define _AI_15 5

namespace Ui {
    class Inet_AI_15;
}

class Inet_AI_15 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_15(QWidget *parent = 0);
    ~Inet_AI_15();

private:
    Ui::Inet_AI_15 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_15_H
