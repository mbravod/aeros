#ifndef INET_AI_10_H
#define INET_AI_10_H

#include <QWidget>
#include <QMouseEvent>

#define _AI_10 0


namespace Ui {
    class Inet_AI_10;
}

class Inet_AI_10 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_10(QWidget *parent = 0);
    ~Inet_AI_10();

private:
    Ui::Inet_AI_10 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_10_H
