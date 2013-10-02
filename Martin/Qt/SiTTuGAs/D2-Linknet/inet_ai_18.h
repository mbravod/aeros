#ifndef INET_AI_18_H
#define INET_AI_18_H

#include <QWidget>

namespace Ui {
    class Inet_AI_18;
}

class Inet_AI_18 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_18(QWidget *parent = 0);
    ~Inet_AI_18();

private:
    Ui::Inet_AI_18 *ui;
};

#endif // INET_AI_18_H
