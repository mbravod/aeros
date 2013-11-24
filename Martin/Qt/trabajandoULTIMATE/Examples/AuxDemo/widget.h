#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "internosdg.h"
#include "hmdialog.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    

public slots:
    void DiClick();
    void OpenDialog(QString title);

signals:
    void BtnActivo(QString);

private:
    Ui::Widget *ui;
    HMDialog *dialog;
};

#endif // WIDGET_H
