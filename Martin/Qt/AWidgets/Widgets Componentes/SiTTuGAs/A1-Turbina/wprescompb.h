#ifndef WPRESCOMPB_H
#define WPRESCOMPB_H

#include <QWidget>
#include <QString>

namespace Ui {
    class WPresCompB;
}

class WPresCompB : public QWidget
{
    Q_OBJECT
  /*
    Q_PROPERTY(QString lbPreP25T READ getLbPreP25T WRITE setLbPreP25T);
    Q_PROPERTY(QString lbP25T_1 READ getLbP25T_1 WRITE setLbP25T_1);
    Q_PROPERTY(QString lbP25T_2 READ getLbP25T_2 WRITE setLbP25T_2);
    Q_PROPERTY(QString lbP25_1 READ getLbP25_1 WRITE setLbP25_1);
    Q_PROPERTY(QString lbP25_2 READ getLbP25_2 WRITE setLbP25_2);
    Q_PROPERTY(QString lbP25U_1 READ getLbP25U_1 WRITE setLbP25U_1);
    Q_PROPERTY(QString lbP25U_2 READ getLbP25U_2 WRITE setLbP25U_2);
   */
public:
    explicit WPresCompB(QWidget *parent = 0);
    ~WPresCompB();
    void setLbPreP25T(QString s);
    void setLbP25T_1(QString s);
    void setLbP25T_2(QString s);

    void setLbP25_1(QString s);
    void setLbP25_2(QString s);
    QString getLbP25_2();
    QString getLbP25_1();

    void setLbP25U_1(QString s);
    void setLbP25U_2(QString s);
    QString getLbP25U_2();
    QString getLbP25U_1();

    QString getLbP25T_2();
    QString getLbP25T_1();
    QString getLbPreP25T();

private:
    Ui::WPresCompB *ui;
};

#endif // WPRESCOMPB_H
