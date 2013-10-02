#ifndef WCTRLARRANQUE_H
#define WCTRLARRANQUE_H

#include <QWidget>

namespace Ui {
    class WCtrlArranque;
}

class WCtrlArranque : public QWidget
{
    Q_OBJECT

public:
    explicit WCtrlArranque(QWidget *parent = 0);
    ~WCtrlArranque();

    void setLbIP(QString s);
    void setLbpermturbina(QString s);
    void setLeArranque(QString s);
    void setLeDetecion(QString s);

    QString getLbIP();
    QString getLbpermturbina();
    QString getLeArranque();
    QString getLeDetecion();

private:
    Ui::WCtrlArranque *ui;
};

#endif // WCTRLARRANQUE_H
