/********************************************************************************
** Form generated from reading UI file 'filtrogas.ui'
**
** Created: Mon 9. Dec 19:12:10 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTROGAS_H
#define UI_FILTROGAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filtroGas
{
public:
    QLabel *lbfondo;
    QLabel *lbFiltroGasT;
    QLabel *lbVenteoT;
    QLabel *lbfilGasNatT;
    QLabel *lbFilGasIzqT;
    QLabel *lbFilGasDerT;
    QLabel *lbfv082IT;
    QLabel *lbfv082I2;
    QLabel *lbBOP082;
    QLabel *lbGasIzqT;
    QLabel *lbGasderT;
    QLineEdit *leAlarma_1;
    QLineEdit *leAlarma_2;
    QLineEdit *leAlarma_5;
    QLineEdit *leAlarma_6;
    QLineEdit *leAlarma_4;
    QLineEdit *leAlarma_3;
    QPushButton *btImpr;
    QCommandLinkButton *btnleAlarma_1;
    QCommandLinkButton *btnleAlarma_2;
    QCommandLinkButton *btnleAlarma_3;
    QCommandLinkButton *btnleAlarma_4;
    QCommandLinkButton *btnleAlarma_5;
    QCommandLinkButton *btnleAlarma_6;

    void setupUi(QWidget *filtroGas)
    {
        if (filtroGas->objectName().isEmpty())
            filtroGas->setObjectName(QString::fromUtf8("filtroGas"));
        filtroGas->resize(1024, 662);
        filtroGas->setMinimumSize(QSize(1024, 662));
        filtroGas->setMaximumSize(QSize(1024, 662));
        lbfondo = new QLabel(filtroGas);
        lbfondo->setObjectName(QString::fromUtf8("lbfondo"));
        lbfondo->setGeometry(QRect(0, 0, 1024, 662));
        lbfondo->setMinimumSize(QSize(1024, 662));
        lbfondo->setMaximumSize(QSize(1024, 662));
        lbfondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/N7.png")));
        lbfondo->setScaledContents(true);
        lbFiltroGasT = new QLabel(filtroGas);
        lbFiltroGasT->setObjectName(QString::fromUtf8("lbFiltroGasT"));
        lbFiltroGasT->setGeometry(QRect(333, 9, 311, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbFiltroGasT->setFont(font);
        lbFiltroGasT->setAlignment(Qt::AlignCenter);
        lbVenteoT = new QLabel(filtroGas);
        lbVenteoT->setObjectName(QString::fromUtf8("lbVenteoT"));
        lbVenteoT->setGeometry(QRect(640, 30, 141, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbVenteoT->setFont(font1);
        lbfilGasNatT = new QLabel(filtroGas);
        lbfilGasNatT->setObjectName(QString::fromUtf8("lbfilGasNatT"));
        lbfilGasNatT->setGeometry(QRect(223, 108, 141, 16));
        lbfilGasNatT->setFont(font1);
        lbFilGasIzqT = new QLabel(filtroGas);
        lbFilGasIzqT->setObjectName(QString::fromUtf8("lbFilGasIzqT"));
        lbFilGasIzqT->setGeometry(QRect(266, 500, 181, 16));
        lbFilGasIzqT->setFont(font1);
        lbFilGasDerT = new QLabel(filtroGas);
        lbFilGasDerT->setObjectName(QString::fromUtf8("lbFilGasDerT"));
        lbFilGasDerT->setGeometry(QRect(540, 500, 181, 16));
        lbFilGasDerT->setFont(font1);
        lbfv082IT = new QLabel(filtroGas);
        lbfv082IT->setObjectName(QString::fromUtf8("lbfv082IT"));
        lbfv082IT->setGeometry(QRect(322, 479, 46, 13));
        lbfv082I2 = new QLabel(filtroGas);
        lbfv082I2->setObjectName(QString::fromUtf8("lbfv082I2"));
        lbfv082I2->setGeometry(QRect(600, 479, 46, 13));
        lbBOP082 = new QLabel(filtroGas);
        lbBOP082->setObjectName(QString::fromUtf8("lbBOP082"));
        lbBOP082->setGeometry(QRect(269, 88, 61, 16));
        lbGasIzqT = new QLabel(filtroGas);
        lbGasIzqT->setObjectName(QString::fromUtf8("lbGasIzqT"));
        lbGasIzqT->setGeometry(QRect(67, 523, 51, 31));
        QFont font2;
        font2.setPointSize(6);
        lbGasIzqT->setFont(font2);
        lbGasIzqT->setAlignment(Qt::AlignCenter);
        lbGasderT = new QLabel(filtroGas);
        lbGasderT->setObjectName(QString::fromUtf8("lbGasderT"));
        lbGasderT->setGeometry(QRect(855, 105, 51, 31));
        lbGasderT->setFont(font2);
        lbGasderT->setAlignment(Qt::AlignCenter);
        leAlarma_1 = new QLineEdit(filtroGas);
        leAlarma_1->setObjectName(QString::fromUtf8("leAlarma_1"));
        leAlarma_1->setGeometry(QRect(194, 290, 100, 20));
        leAlarma_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarma_2 = new QLineEdit(filtroGas);
        leAlarma_2->setObjectName(QString::fromUtf8("leAlarma_2"));
        leAlarma_2->setGeometry(QRect(194, 380, 100, 20));
        leAlarma_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarma_5 = new QLineEdit(filtroGas);
        leAlarma_5->setObjectName(QString::fromUtf8("leAlarma_5"));
        leAlarma_5->setGeometry(QRect(673, 290, 100, 20));
        leAlarma_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarma_6 = new QLineEdit(filtroGas);
        leAlarma_6->setObjectName(QString::fromUtf8("leAlarma_6"));
        leAlarma_6->setGeometry(QRect(673, 380, 100, 20));
        leAlarma_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarma_4 = new QLineEdit(filtroGas);
        leAlarma_4->setObjectName(QString::fromUtf8("leAlarma_4"));
        leAlarma_4->setGeometry(QRect(412, 208, 100, 20));
        leAlarma_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarma_3 = new QLineEdit(filtroGas);
        leAlarma_3->setObjectName(QString::fromUtf8("leAlarma_3"));
        leAlarma_3->setGeometry(QRect(412, 180, 100, 20));
        leAlarma_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        btImpr = new QPushButton(filtroGas);
        btImpr->setObjectName(QString::fromUtf8("btImpr"));
        btImpr->setGeometry(QRect(10, 632, 135, 25));
        btImpr->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        btnleAlarma_1 = new QCommandLinkButton(filtroGas);
        btnleAlarma_1->setObjectName(QString::fromUtf8("btnleAlarma_1"));
        btnleAlarma_1->setGeometry(QRect(412, 180, 100, 20));
        btnleAlarma_1->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnleAlarma_1->setIcon(icon);
        btnleAlarma_2 = new QCommandLinkButton(filtroGas);
        btnleAlarma_2->setObjectName(QString::fromUtf8("btnleAlarma_2"));
        btnleAlarma_2->setGeometry(QRect(412, 208, 100, 20));
        btnleAlarma_2->setStyleSheet(QString::fromUtf8(""));
        btnleAlarma_2->setIcon(icon);
        btnleAlarma_3 = new QCommandLinkButton(filtroGas);
        btnleAlarma_3->setObjectName(QString::fromUtf8("btnleAlarma_3"));
        btnleAlarma_3->setGeometry(QRect(193, 290, 100, 20));
        btnleAlarma_3->setStyleSheet(QString::fromUtf8(""));
        btnleAlarma_3->setIcon(icon);
        btnleAlarma_4 = new QCommandLinkButton(filtroGas);
        btnleAlarma_4->setObjectName(QString::fromUtf8("btnleAlarma_4"));
        btnleAlarma_4->setGeometry(QRect(193, 380, 100, 20));
        btnleAlarma_4->setStyleSheet(QString::fromUtf8(""));
        btnleAlarma_4->setIcon(icon);
        btnleAlarma_5 = new QCommandLinkButton(filtroGas);
        btnleAlarma_5->setObjectName(QString::fromUtf8("btnleAlarma_5"));
        btnleAlarma_5->setGeometry(QRect(673, 290, 100, 20));
        btnleAlarma_5->setStyleSheet(QString::fromUtf8(""));
        btnleAlarma_5->setIcon(icon);
        btnleAlarma_6 = new QCommandLinkButton(filtroGas);
        btnleAlarma_6->setObjectName(QString::fromUtf8("btnleAlarma_6"));
        btnleAlarma_6->setGeometry(QRect(673, 380, 100, 20));
        btnleAlarma_6->setStyleSheet(QString::fromUtf8(""));
        btnleAlarma_6->setIcon(icon);

        retranslateUi(filtroGas);

        QMetaObject::connectSlotsByName(filtroGas);
    } // setupUi

    void retranslateUi(QWidget *filtroGas)
    {
        filtroGas->setWindowTitle(QApplication::translate("filtroGas", "Form", 0, QApplication::UnicodeUTF8));
        lbfondo->setText(QString());
        lbFiltroGasT->setText(QApplication::translate("filtroGas", "FILTRO DE GAS", 0, QApplication::UnicodeUTF8));
        lbVenteoT->setText(QApplication::translate("filtroGas", "VENTEO DE GAS NATURAL", 0, QApplication::UnicodeUTF8));
        lbfilGasNatT->setText(QApplication::translate("filtroGas", "FILTRO DE GAS NATURAL", 0, QApplication::UnicodeUTF8));
        lbFilGasIzqT->setText(QApplication::translate("filtroGas", "FILTRO DE GAS COMBUSTIBLE", 0, QApplication::UnicodeUTF8));
        lbFilGasDerT->setText(QApplication::translate("filtroGas", "FILTRO DE GAS COMBUSTIBLE", 0, QApplication::UnicodeUTF8));
        lbfv082IT->setText(QApplication::translate("filtroGas", "FV082 - 1", 0, QApplication::UnicodeUTF8));
        lbfv082I2->setText(QApplication::translate("filtroGas", "FV082 - 2", 0, QApplication::UnicodeUTF8));
        lbBOP082->setText(QApplication::translate("filtroGas", "BOP - 082", 0, QApplication::UnicodeUTF8));
        lbGasIzqT->setText(QApplication::translate("filtroGas", "GAS\n"
"NATURAL", 0, QApplication::UnicodeUTF8));
        lbGasderT->setText(QApplication::translate("filtroGas", "GAS\n"
"NATURAL", 0, QApplication::UnicodeUTF8));
        btImpr->setText(QApplication::translate("filtroGas", "IMP PANT", 0, QApplication::UnicodeUTF8));
        btnleAlarma_1->setText(QString());
        btnleAlarma_2->setText(QString());
        btnleAlarma_3->setText(QString());
        btnleAlarma_4->setText(QString());
        btnleAlarma_5->setText(QString());
        btnleAlarma_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class filtroGas: public Ui_filtroGas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTROGAS_H
