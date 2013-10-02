#ifndef INET_AI_6_H
#define INET_AI_6_H

#include <QWidget>

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
};

#endif // INET_AI_6_H
