#ifndef INET_AI_19_H
#define INET_AI_19_H

#include <QWidget>

namespace Ui {
    class Inet_AI_19;
}

class Inet_AI_19 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_19(QWidget *parent = 0);
    ~Inet_AI_19();

private:
    Ui::Inet_AI_19 *ui;
};

#endif // INET_AI_19_H
