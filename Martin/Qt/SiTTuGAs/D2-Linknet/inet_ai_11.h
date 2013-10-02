#ifndef INET_AI_11_H
#define INET_AI_11_H

#include <QWidget>

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
};

#endif // INET_AI_11_H
