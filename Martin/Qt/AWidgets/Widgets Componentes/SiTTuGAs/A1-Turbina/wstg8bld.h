#ifndef WSTG8BLD_H
#define WSTG8BLD_H

#include <QWidget>
#include <QString>

namespace Ui {
    class WSTG8BLD;
}

class WSTG8BLD : public QWidget
{
    Q_OBJECT
  /*
    Q_PROPERTY(QString lbSTGBT READ getLbSTGBT WRITE setLbSTGBT);
    Q_PROPERTY(QString lbSTGBT_1 READ getLbSTGBT_1 WRITE setLbSTGBT_1);
    Q_PROPERTY(QString lbSTGBT_2 READ getLbSTGBT_2 WRITE setLbSTGBT_2);
    Q_PROPERTY(QString lbSTGBT_3 READ getLbSTGBT_3 WRITE setLbSTGBT_3);
    Q_PROPERTY(QString lbSTGBT_4 READ getLbSTGBT_4 WRITE setLbSTGBT_4);
    Q_PROPERTY(QString lbSTGBT_5 READ getLbSTGBT_5 WRITE setLbSTGBT_5);
    Q_PROPERTY(QString lbSTGBT_6 READ getLbSTGBT_6 WRITE setLbSTGBT_6);

    Q_PROPERTY(QString lbSTGB_1 READ getLbSTGB_1 WRITE setLbSTGB_1);
    Q_PROPERTY(QString lbSTGB_2 READ getLbSTGB_2 WRITE setLbSTGB_2);
    Q_PROPERTY(QString lbSTGB_3 READ getLbSTGB_3 WRITE setLbSTGB_3);
    Q_PROPERTY(QString lbSTGB_4 READ getLbSTGB_4 WRITE setLbSTGB_4);
    Q_PROPERTY(QString lbSTGB_5 READ getLbSTGB_5 WRITE setLbSTGB_5);
    Q_PROPERTY(QString lbSTGB_6 READ getLbSTGB_6 WRITE setLbSTGB_6);

    Q_PROPERTY(QString lbSTGBU_1 READ getLbSTGBU_1 WRITE setLbSTGBU_1);
    Q_PROPERTY(QString lbSTGBU_2 READ getLbSTGBU_2 WRITE setLbSTGBU_2);
    Q_PROPERTY(QString lbSTGBU_3 READ getLbSTGBU_3 WRITE setLbSTGBU_3);
    Q_PROPERTY(QString lbSTGBU_4 READ getLbSTGBU_4 WRITE setLbSTGBU_4);
    Q_PROPERTY(QString lbSTGBU_5 READ getLbSTGBU_5 WRITE setLbSTGBU_5);
    Q_PROPERTY(QString lbSTGBU_6 READ getLbSTGBU_6 WRITE setLbSTGBU_6);
   */
public:
    explicit WSTG8BLD(QWidget *parent = 0);
    ~WSTG8BLD();
    void setLbSTGBT(QString s);
    void setLbSTGBT_1(QString s);
    void setLbSTGBT_2(QString s);
    void setLbSTGBT_4(QString s);
    void setLbSTGBT_3(QString s);
    void setLbSTGBT_5(QString s);
    void setLbSTGBT_6(QString s);
    void setLbSTGB_1(QString s);
    void setLbSTGB_2(QString s);
    void setLbSTGB_4(QString s);
    void setLbSTGB_3(QString s);
    void setLbSTGB_5(QString s);
    void setLbSTGB_6(QString s);
    void setLbSTGBU_1(QString s);
    void setLbSTGBU_2(QString s);
    void setLbSTGBU_4(QString s);
    void setLbSTGBU_3(QString s);
    void setLbSTGBU_5(QString s);
    void setLbSTGBU_6(QString s);
    QString getLbSTGBU_6();
    QString getLbSTGBU_5();
    QString getLbSTGBU_4();
    QString getLbSTGBU_3();
    QString getLbSTGBU_2();
    QString getLbSTGBU_1();
    QString getLbSTGB_6();
    QString getLbSTGB_5();
    QString getLbSTGB_4();
    QString getLbSTGB_3();
    QString getLbSTGB_2();
    QString getLbSTGB_1();
    QString getLbSTGBT_6();
    QString getLbSTGBT_5();
    QString getLbSTGBT_4();
    QString getLbSTGBT_3();
    QString getLbSTGBT_2();
    QString getLbSTGBT_1();
    QString getLbSTGBT();

private:
    Ui::WSTG8BLD *ui;
};

#endif // WSTG8BLD_H
