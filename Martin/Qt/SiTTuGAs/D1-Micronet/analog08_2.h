#ifndef ANALOG08_2_H
#define ANALOG08_2_H

#include <QWidget>

namespace Ui {
    class Analog08_2;
}

class Analog08_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog08_2(QWidget *parent = 0);
    ~Analog08_2();

private:
    Ui::Analog08_2 *ui;
};

#endif // ANALOG08_2_H
