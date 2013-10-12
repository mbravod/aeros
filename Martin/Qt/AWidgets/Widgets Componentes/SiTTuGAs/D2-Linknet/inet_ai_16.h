#ifndef INET_AI_16_H
#define INET_AI_16_H

#include <QWidget>

namespace Ui {
    class Inet_AI_16;
}

class Inet_AI_16 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_16(QWidget *parent = 0);
    ~Inet_AI_16();

private:
    Ui::Inet_AI_16 *ui;
};

#endif // INET_AI_16_H
