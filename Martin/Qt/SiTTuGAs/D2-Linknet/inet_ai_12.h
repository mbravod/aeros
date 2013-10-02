#ifndef INET_AI_12_H
#define INET_AI_12_H

#include <QWidget>

namespace Ui {
    class Inet_AI_12;
}

class Inet_AI_12 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_12(QWidget *parent = 0);
    ~Inet_AI_12();

private:
    Ui::Inet_AI_12 *ui;
};

#endif // INET_AI_12_H
