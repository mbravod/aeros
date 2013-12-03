#ifndef INET_AI_11_H
#define INET_AI_11_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_11 1


namespace Ui {
    class Inet_AI_11;
}

class Inet_AI_11 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_11(QWidget *parent = 0);
    ~Inet_AI_11();

private:
    Ui::Inet_AI_11 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_11_H
