#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class N4 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N4(QWidget *parent = 0);
    ~N4();
    
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
