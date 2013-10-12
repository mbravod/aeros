#ifndef INET_AI_10_H
#define INET_AI_10_H

#include <QWidget>

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
};

#endif // INET_AI_10_H
