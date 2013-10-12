#ifndef WCTRLLAVAGUA_H
#define WCTRLLAVAGUA_H

#include <QWidget>

namespace Ui {
    class WCtrlLavAgua;
}

class WCtrlLavAgua : public QWidget
{
    Q_OBJECT

public:
    explicit WCtrlLavAgua(QWidget *parent = 0);
    ~WCtrlLavAgua();

    void setLbIP(QString s);
    void setLbPermLav(QString s);
    void setLbDeLinea(QString s);
    void setLbEnLinea(QString s);
    QString getLbIP();
    QString getLbPermLav();
    QString getLbDeLinea();
    QString getLbEnLinea();

private:
    Ui::WCtrlLavAgua *ui;
};

#endif // WCTRLLAVAGUA_H
