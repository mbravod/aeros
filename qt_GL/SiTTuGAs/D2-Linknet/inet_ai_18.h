#ifndef INET_AI_18_H
#define INET_AI_18_H

#include <QWidget>
#include <QMouseEvent>
#define _AI_18 8

namespace Ui {
    class Inet_AI_18;
}

class Inet_AI_18 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_18(QWidget *parent = 0);
    ~Inet_AI_18();

private:
    Ui::Inet_AI_18 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // INET_AI_18_H
