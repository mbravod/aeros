#ifndef INET_AI_17_H
#define INET_AI_17_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_17 7

namespace Ui {
    class Inet_AI_17;
}

class Inet_AI_17 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_17(QWidget *parent = 0);
    ~Inet_AI_17();

private:
    Ui::Inet_AI_17 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // INET_AI_17_H
