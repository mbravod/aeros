#ifndef WPRESBALANCE_H
#define WPRESBALANCE_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wpresbalance 11

namespace Ui {
    class WPresBalance;
}

class WPresBalance : public QWidget
{
    Q_OBJECT
 /* Q_PROPERTY(QString lbPreBALIT READ getLbPreBALIT WRITE setLbPreBALIT);
    Q_PROPERTY(QString lbBALIT_1 READ getLbBALIT_1 WRITE setLbBALIT_1);
    Q_PROPERTY(QString lbBALIT_2 READ getLbBALIT_2 WRITE setLbBALIT_2);
    Q_PROPERTY(QString lbBALI_1 READ getLbBALI_1 WRITE setLbBALI_1);
    Q_PROPERTY(QString lbBALI_2 READ getLbBALI_2 WRITE setLbBALI_2);
    Q_PROPERTY(QString lbBALIU_1 READ getLbBALIU_1 WRITE setLbBALIU_1);
    Q_PROPERTY(QString lbBALIU_2 READ getLbBALIU_2 WRITE setLbBALIU_2);
*/

public:
    explicit WPresBalance(QWidget *parent = 0);
    ~WPresBalance();
    void setLbPreBALIT(QString s);
    void setLbBALIT_1(QString s);
    void setLbBALIT_2(QString s);
    void setLbBALI_1(QString s);
    void setLbBALI_2(QString s);
    void setLbBALIU_1(QString s);
    void setLbBALIU_2(QString s);
    QString getLbBALIU_2();
    QString getLbBALIU_1();
    QString getLbBALI_2();
    QString getLbBALI_1();
    QString getLbBALIT_2();
    QString getLbBALIT_1();
    QString getLbPreBALIT();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WPresBalance *ui;
};

#endif // WPRESBALANCE_H
