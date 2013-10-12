#ifndef DIGITAL24_2_H
#define DIGITAL24_2_H

#include <QWidget>

namespace Ui {
    class Digital24_2;
}

class Digital24_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital24_2(QWidget *parent = 0);
    ~Digital24_2();

private:
    Ui::Digital24_2 *ui;
};

#endif // DIGITAL24_2_H
