/********************************************************************************
** Form generated from reading UI file 'sistaguacontrain.ui'
**
** Created: Mon 23. Sep 20:33:34 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTAGUACONTRAIN_H
#define UI_SISTAGUACONTRAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SistAguaContrain
{
public:
    QLabel *label;
    QLabel *lbSistAguaContrainT;
    QLabel *lbSalAguaFresT;
    QLabel *lbSucSisT;
    QLabel *lbInterCalorT;
    QLabel *lbBombaJockT;
    QLabel *lbBombaT;
    QLabel *lbDieselBomT;
    QLabel *lbP192CT;
    QLabel *lbP192AT;
    QPushButton *btImpPant;
    QLineEdit *leAlarm;
    QLineEdit *leAlarm2;
    QLabel *lbMotElecT;
    QLabel *lbP192BT;
    QLineEdit *leAlarm6;
    QLabel *lbDesPsvT;
    QLabel *lbDesSisT;
    QLabel *lbMedFluT;
    QLabel *lbTanqCombT;
    QLabel *lbDieselTanqT;
    QLabel *lb568LT;
    QLineEdit *leAlarm3;
    QLineEdit *leAlarm4;
    QLineEdit *leAlarm5;
    QLabel *lbT196T;
    QLabel *lbTanqAguaInT_2;
    QLineEdit *leLT196;
    QLineEdit *leU;
    QLabel *lbU;

    void setupUi(QWidget *SistAguaContrain)
    {
        if (SistAguaContrain->objectName().isEmpty())
            SistAguaContrain->setObjectName(QString::fromUtf8("SistAguaContrain"));
        SistAguaContrain->resize(1024, 662);
        SistAguaContrain->setMinimumSize(QSize(1024, 662));
        SistAguaContrain->setMaximumSize(QSize(1024, 662));
        label = new QLabel(SistAguaContrain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setMinimumSize(QSize(1024, 662));
        label->setMaximumSize(QSize(1024, 662));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/N8.png")));
        label->setScaledContents(true);
        lbSistAguaContrainT = new QLabel(SistAguaContrain);
        lbSistAguaContrainT->setObjectName(QString::fromUtf8("lbSistAguaContrainT"));
        lbSistAguaContrainT->setGeometry(QRect(340, 5, 323, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbSistAguaContrainT->setFont(font);
        lbSistAguaContrainT->setAlignment(Qt::AlignCenter);
        lbSalAguaFresT = new QLabel(SistAguaContrain);
        lbSalAguaFresT->setObjectName(QString::fromUtf8("lbSalAguaFresT"));
        lbSalAguaFresT->setGeometry(QRect(10, 104, 59, 21));
        QFont font1;
        font1.setPointSize(6);
        lbSalAguaFresT->setFont(font1);
        lbSalAguaFresT->setAlignment(Qt::AlignCenter);
        lbSucSisT = new QLabel(SistAguaContrain);
        lbSucSisT->setObjectName(QString::fromUtf8("lbSucSisT"));
        lbSucSisT->setGeometry(QRect(0, 448, 61, 21));
        lbSucSisT->setFont(font1);
        lbSucSisT->setAlignment(Qt::AlignCenter);
        lbInterCalorT = new QLabel(SistAguaContrain);
        lbInterCalorT->setObjectName(QString::fromUtf8("lbInterCalorT"));
        lbInterCalorT->setGeometry(QRect(334, 219, 105, 27));
        QFont font2;
        font2.setPointSize(7);
        lbInterCalorT->setFont(font2);
        lbInterCalorT->setAlignment(Qt::AlignCenter);
        lbBombaJockT = new QLabel(SistAguaContrain);
        lbBombaJockT->setObjectName(QString::fromUtf8("lbBombaJockT"));
        lbBombaJockT->setGeometry(QRect(130, 520, 63, 33));
        lbBombaJockT->setFont(font2);
        lbBombaJockT->setAlignment(Qt::AlignCenter);
        lbBombaT = new QLabel(SistAguaContrain);
        lbBombaT->setObjectName(QString::fromUtf8("lbBombaT"));
        lbBombaT->setGeometry(QRect(496, 536, 64, 33));
        QFont font3;
        font3.setPointSize(8);
        lbBombaT->setFont(font3);
        lbBombaT->setAlignment(Qt::AlignCenter);
        lbDieselBomT = new QLabel(SistAguaContrain);
        lbDieselBomT->setObjectName(QString::fromUtf8("lbDieselBomT"));
        lbDieselBomT->setGeometry(QRect(567, 561, 55, 33));
        lbDieselBomT->setFont(font3);
        lbDieselBomT->setAlignment(Qt::AlignCenter);
        lbP192CT = new QLabel(SistAguaContrain);
        lbP192CT->setObjectName(QString::fromUtf8("lbP192CT"));
        lbP192CT->setGeometry(QRect(103, 594, 46, 13));
        QFont font4;
        font4.setUnderline(true);
        lbP192CT->setFont(font4);
        lbP192CT->setAlignment(Qt::AlignCenter);
        lbP192AT = new QLabel(SistAguaContrain);
        lbP192AT->setObjectName(QString::fromUtf8("lbP192AT"));
        lbP192AT->setGeometry(QRect(501, 594, 46, 13));
        lbP192AT->setFont(font4);
        lbP192AT->setAlignment(Qt::AlignCenter);
        btImpPant = new QPushButton(SistAguaContrain);
        btImpPant->setObjectName(QString::fromUtf8("btImpPant"));
        btImpPant->setGeometry(QRect(21, 634, 131, 23));
        btImpPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        leAlarm = new QLineEdit(SistAguaContrain);
        leAlarm->setObjectName(QString::fromUtf8("leAlarm"));
        leAlarm->setGeometry(QRect(86, 481, 101, 34));
        leAlarm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm2 = new QLineEdit(SistAguaContrain);
        leAlarm2->setObjectName(QString::fromUtf8("leAlarm2"));
        leAlarm2->setGeometry(QRect(478, 480, 101, 34));
        leAlarm2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        lbMotElecT = new QLabel(SistAguaContrain);
        lbMotElecT->setObjectName(QString::fromUtf8("lbMotElecT"));
        lbMotElecT->setGeometry(QRect(863, 534, 64, 40));
        lbMotElecT->setFont(font3);
        lbMotElecT->setAlignment(Qt::AlignCenter);
        lbP192BT = new QLabel(SistAguaContrain);
        lbP192BT->setObjectName(QString::fromUtf8("lbP192BT"));
        lbP192BT->setGeometry(QRect(868, 594, 46, 13));
        lbP192BT->setFont(font4);
        lbP192BT->setAlignment(Qt::AlignCenter);
        leAlarm6 = new QLineEdit(SistAguaContrain);
        leAlarm6->setObjectName(QString::fromUtf8("leAlarm6"));
        leAlarm6->setGeometry(QRect(844, 480, 101, 34));
        leAlarm6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        lbDesPsvT = new QLabel(SistAguaContrain);
        lbDesPsvT->setObjectName(QString::fromUtf8("lbDesPsvT"));
        lbDesPsvT->setGeometry(QRect(933, 346, 64, 21));
        lbDesPsvT->setFont(font1);
        lbDesPsvT->setAlignment(Qt::AlignCenter);
        lbDesSisT = new QLabel(SistAguaContrain);
        lbDesSisT->setObjectName(QString::fromUtf8("lbDesSisT"));
        lbDesSisT->setGeometry(QRect(933, 311, 65, 21));
        lbDesSisT->setFont(font1);
        lbDesSisT->setAlignment(Qt::AlignCenter);
        lbMedFluT = new QLabel(SistAguaContrain);
        lbMedFluT->setObjectName(QString::fromUtf8("lbMedFluT"));
        lbMedFluT->setGeometry(QRect(930, 243, 64, 21));
        lbMedFluT->setFont(font1);
        lbMedFluT->setAlignment(Qt::AlignCenter);
        lbTanqCombT = new QLabel(SistAguaContrain);
        lbTanqCombT->setObjectName(QString::fromUtf8("lbTanqCombT"));
        lbTanqCombT->setGeometry(QRect(661, 139, 82, 40));
        lbTanqCombT->setFont(font3);
        lbTanqCombT->setAlignment(Qt::AlignCenter);
        lbDieselTanqT = new QLabel(SistAguaContrain);
        lbDieselTanqT->setObjectName(QString::fromUtf8("lbDieselTanqT"));
        lbDieselTanqT->setGeometry(QRect(674, 200, 55, 21));
        lbDieselTanqT->setFont(font3);
        lbDieselTanqT->setAlignment(Qt::AlignCenter);
        lb568LT = new QLabel(SistAguaContrain);
        lb568LT->setObjectName(QString::fromUtf8("lb568LT"));
        lb568LT->setGeometry(QRect(661, 172, 81, 21));
        lb568LT->setFont(font3);
        lb568LT->setAlignment(Qt::AlignCenter);
        leAlarm3 = new QLineEdit(SistAguaContrain);
        leAlarm3->setObjectName(QString::fromUtf8("leAlarm3"));
        leAlarm3->setGeometry(QRect(748, 41, 99, 17));
        leAlarm3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm4 = new QLineEdit(SistAguaContrain);
        leAlarm4->setObjectName(QString::fromUtf8("leAlarm4"));
        leAlarm4->setGeometry(QRect(748, 61, 99, 17));
        leAlarm4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm5 = new QLineEdit(SistAguaContrain);
        leAlarm5->setObjectName(QString::fromUtf8("leAlarm5"));
        leAlarm5->setGeometry(QRect(748, 81, 99, 17));
        leAlarm5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        lbT196T = new QLabel(SistAguaContrain);
        lbT196T->setObjectName(QString::fromUtf8("lbT196T"));
        lbT196T->setGeometry(QRect(898, 83, 50, 13));
        lbT196T->setFont(font4);
        lbT196T->setAlignment(Qt::AlignCenter);
        lbTanqAguaInT_2 = new QLabel(SistAguaContrain);
        lbTanqAguaInT_2->setObjectName(QString::fromUtf8("lbTanqAguaInT_2"));
        lbTanqAguaInT_2->setGeometry(QRect(881, 92, 95, 41));
        lbTanqAguaInT_2->setFont(font2);
        lbTanqAguaInT_2->setAlignment(Qt::AlignCenter);
        leLT196 = new QLineEdit(SistAguaContrain);
        leLT196->setObjectName(QString::fromUtf8("leLT196"));
        leLT196->setGeometry(QRect(864, 164, 126, 21));
        leLT196->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 255, 250);"));
        leLT196->setAlignment(Qt::AlignCenter);
        leU = new QLineEdit(SistAguaContrain);
        leU->setObjectName(QString::fromUtf8("leU"));
        leU->setGeometry(QRect(864, 187, 126, 21));
        leU->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        leU->setAlignment(Qt::AlignCenter);
        lbU = new QLabel(SistAguaContrain);
        lbU->setObjectName(QString::fromUtf8("lbU"));
        lbU->setGeometry(QRect(950, 190, 31, 16));
        lbU->setAlignment(Qt::AlignCenter);

        retranslateUi(SistAguaContrain);

        QMetaObject::connectSlotsByName(SistAguaContrain);
    } // setupUi

    void retranslateUi(QWidget *SistAguaContrain)
    {
        SistAguaContrain->setWindowTitle(QApplication::translate("SistAguaContrain", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbSistAguaContrainT->setText(QApplication::translate("SistAguaContrain", "SISTEMA DE AGUA CONTRA INCENDIO", 0, QApplication::UnicodeUTF8));
        lbSalAguaFresT->setText(QApplication::translate("SistAguaContrain", "SALIDA DE\n"
" AGUA FRESCA", 0, QApplication::UnicodeUTF8));
        lbSucSisT->setText(QApplication::translate("SistAguaContrain", "SUCCION DE\n"
" SISTEMA", 0, QApplication::UnicodeUTF8));
        lbInterCalorT->setText(QApplication::translate("SistAguaContrain", "INTERCAMBIADOR\n"
" DE CALOR ", 0, QApplication::UnicodeUTF8));
        lbBombaJockT->setText(QApplication::translate("SistAguaContrain", "BOMBA\n"
" JOCKEY", 0, QApplication::UnicodeUTF8));
        lbBombaT->setText(QApplication::translate("SistAguaContrain", "BOMBA", 0, QApplication::UnicodeUTF8));
        lbDieselBomT->setText(QApplication::translate("SistAguaContrain", "DIESEL", 0, QApplication::UnicodeUTF8));
        lbP192CT->setText(QApplication::translate("SistAguaContrain", "P-192C", 0, QApplication::UnicodeUTF8));
        lbP192AT->setText(QApplication::translate("SistAguaContrain", "P-192A", 0, QApplication::UnicodeUTF8));
        btImpPant->setText(QApplication::translate("SistAguaContrain", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbMotElecT->setText(QApplication::translate("SistAguaContrain", "MOTOR\n"
" ELECTRICO", 0, QApplication::UnicodeUTF8));
        lbP192BT->setText(QApplication::translate("SistAguaContrain", "P-192B", 0, QApplication::UnicodeUTF8));
        lbDesPsvT->setText(QApplication::translate("SistAguaContrain", "DESCARGA\n"
" PSV/PRV", 0, QApplication::UnicodeUTF8));
        lbDesSisT->setText(QApplication::translate("SistAguaContrain", "DESCARGA\n"
" DEL SISTEMA", 0, QApplication::UnicodeUTF8));
        lbMedFluT->setText(QString());
        lbTanqCombT->setText(QApplication::translate("SistAguaContrain", "TANQUE DE\n"
" COMBUSTIBLE", 0, QApplication::UnicodeUTF8));
        lbDieselTanqT->setText(QApplication::translate("SistAguaContrain", "DIESEL", 0, QApplication::UnicodeUTF8));
        lb568LT->setText(QApplication::translate("SistAguaContrain", "(568 LITROS)", 0, QApplication::UnicodeUTF8));
        lbT196T->setText(QApplication::translate("SistAguaContrain", "T-196", 0, QApplication::UnicodeUTF8));
        lbTanqAguaInT_2->setText(QApplication::translate("SistAguaContrain", "TANQUE DE AGUA\n"
" CONTRA INCENDIO", 0, QApplication::UnicodeUTF8));
        leLT196->setText(QApplication::translate("SistAguaContrain", "LT_196", 0, QApplication::UnicodeUTF8));
        leU->setText(QApplication::translate("SistAguaContrain", "????", 0, QApplication::UnicodeUTF8));
        lbU->setText(QApplication::translate("SistAguaContrain", "%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SistAguaContrain: public Ui_SistAguaContrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTAGUACONTRAIN_H
