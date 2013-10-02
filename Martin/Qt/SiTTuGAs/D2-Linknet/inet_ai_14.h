#ifndef INET_AI_14_H
#define INET_AI_14_H

#include <QWidget>

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
};

#endif // INET_AI_14_H
