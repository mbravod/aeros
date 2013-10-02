#ifndef WPURGAV_H
#define WPURGAV_H

#include <QWidget>

namespace Ui {
    class WPurgaV;
}

class WPurgaV : public QWidget
{
    Q_OBJECT

public:
    explicit WPurgaV(QWidget *parent = 0);
    ~WPurgaV();

    void setLbVsva(QString s);
    void setLbVsvb(QString s);
    void setLbVsvdmd(QString s);
    void setLbVsvMa(QString s);
    void setLbtbvohms(QString s);
    void setLbVsvsel(QString s);
    void setLbVsvaU(QString s);
    void setLbVsvbU(QString s);
    void setLbVsvdmdU(QString s);
    void setLbVsvMaU(QString s);
    void setLbtbvohmsU(QString s);
    void setLbVsvselU(QString s);

private:
    Ui::WPurgaV *ui;
};

#endif // WPURGAV_H
