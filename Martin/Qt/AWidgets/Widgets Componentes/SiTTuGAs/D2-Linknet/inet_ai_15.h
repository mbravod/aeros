#ifndef INET_AI_15_H
#define INET_AI_15_H

#include <QWidget>

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
};

#endif // INET_AI_15_H
