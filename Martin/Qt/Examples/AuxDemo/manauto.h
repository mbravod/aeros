#ifndef MANAUTO_H
#define MANAUTO_H

#include <QWidget>

namespace Ui {
class ManAuto;
}

class ManAuto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ManAuto(QWidget *parent = 0);
    ~ManAuto();
    
private:
    Ui::ManAuto *ui;
};

#endif // MANAUTO_H
