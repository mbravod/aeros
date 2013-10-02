#ifndef SISAGUARES_H
#define SISAGUARES_H

#include <QWidget>

namespace Ui {
class SisAguaRes;
}

class SisAguaRes : public QWidget
{
    Q_OBJECT
    
public:
    explicit SisAguaRes(QWidget *parent = 0);
    ~SisAguaRes();
    
private:
    Ui::SisAguaRes *ui;
};

#endif // SISAGUARES_H
