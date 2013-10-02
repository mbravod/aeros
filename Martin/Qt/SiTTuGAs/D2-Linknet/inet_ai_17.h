#ifndef INET_AI_17_H
#define INET_AI_17_H

#include <QWidget>

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
};

#endif // INET_AI_17_H
