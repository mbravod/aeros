#ifndef ANALOG04_H
#define ANALOG04_H

#include <QWidget>

namespace Ui {
    class Analog04;
}

class Analog04 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog04(QWidget *parent = 0);
    ~Analog04();

private:
    Ui::Analog04 *ui;
};

#endif // ANALOG04_H
