#ifndef INET_AI_13_H
#define INET_AI_13_H

#include <QWidget>

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
};

#endif // INET_AI_13_H
