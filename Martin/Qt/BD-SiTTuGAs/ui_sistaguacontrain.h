/********************************************************************************
** Form generated from reading UI file 'sistaguacontrain.ui'
**
** Created: Thu 19. Dec 16:09:59 2013
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
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlineedit.h"

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
    WLineEdit *leAlarm;
    WLineEdit *leAlarm2;
    QLabel *lbMotElecT;
    QLabel *lbP192BT;
    WLineEdit *leAlarm6;
    QLabel *lbDesPsvT;
    QLabel *lbDesSisT;
    QLabel *lbMedFluT;
    QLabel *lbTanqCombT;
    QLabel *lbDieselTanqT;
    QLabel *lb568LT;
    WLineEdit *leAlarm3;
    WLineEdit *leAlarm4;
    WLineEdit *leAlarm5;
    QLabel *lbT196T;
    QLabel *lbTanqAguaInT_2;
    WLineEdit *leLT196;
    WLineEdit *leU;
    QLabel *lbU;
    QCommandLinkButton *btnleAlarm;
    QCommandLinkButton *btnleAlarm_2;
    QCommandLinkButton *btnleAlarm_3;
    QCommandLinkButton *btnleAlarm_4;
    QCommandLinkButton *btnleAlarm_5;
    QCommandLinkButton *btnleAlarm_6;
    QCommandLinkButton *btnleAlarm_7;
    QCommandLinkButton *btnleAlarm_8;
    WLineEdit *leAlarm_2;
    WLineEdit *leAlarm2_2;
    WLineEdit *leAlarm6_2;

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
        leAlarm = new WLineEdit(SistAguaContrain);
        leAlarm->setObjectName(QString::fromUtf8("leAlarm"));
        leAlarm->setGeometry(QRect(90, 482, 101, 16));
        leAlarm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm2 = new WLineEdit(SistAguaContrain);
        leAlarm2->setObjectName(QString::fromUtf8("leAlarm2"));
        leAlarm2->setGeometry(QRect(480, 482, 101, 16));
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
        leAlarm6 = new WLineEdit(SistAguaContrain);
        leAlarm6->setObjectName(QString::fromUtf8("leAlarm6"));
        leAlarm6->setGeometry(QRect(850, 482, 101, 16));
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
        leAlarm3 = new WLineEdit(SistAguaContrain);
        leAlarm3->setObjectName(QString::fromUtf8("leAlarm3"));
        leAlarm3->setGeometry(QRect(748, 41, 99, 17));
        leAlarm3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm4 = new WLineEdit(SistAguaContrain);
        leAlarm4->setObjectName(QString::fromUtf8("leAlarm4"));
        leAlarm4->setGeometry(QRect(748, 61, 99, 17));
        leAlarm4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm5 = new WLineEdit(SistAguaContrain);
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
        leLT196 = new WLineEdit(SistAguaContrain);
        leLT196->setObjectName(QString::fromUtf8("leLT196"));
        leLT196->setGeometry(QRect(864, 164, 126, 21));
        leLT196->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 255, 250);"));
        leU = new WLineEdit(SistAguaContrain);
        leU->setObjectName(QString::fromUtf8("leU"));
        leU->setGeometry(QRect(864, 187, 126, 21));
        leU->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbU = new QLabel(SistAguaContrain);
        lbU->setObjectName(QString::fromUtf8("lbU"));
        lbU->setGeometry(QRect(950, 190, 31, 16));
        lbU->setAlignment(Qt::AlignCenter);
        btnleAlarm = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm->setObjectName(QString::fromUtf8("btnleAlarm"));
        btnleAlarm->setGeometry(QRect(750, 40, 99, 17));
        btnleAlarm->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnleAlarm->setIcon(icon);
        btnleAlarm_2 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_2->setObjectName(QString::fromUtf8("btnleAlarm_2"));
        btnleAlarm_2->setGeometry(QRect(750, 60, 99, 17));
        btnleAlarm_2->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_2->setIcon(icon);
        btnleAlarm_3 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_3->setObjectName(QString::fromUtf8("btnleAlarm_3"));
        btnleAlarm_3->setGeometry(QRect(750, 80, 99, 17));
        btnleAlarm_3->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_3->setIcon(icon);
        btnleAlarm_4 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_4->setObjectName(QString::fromUtf8("btnleAlarm_4"));
        btnleAlarm_4->setGeometry(QRect(90, 480, 101, 34));
        btnleAlarm_4->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_4->setIcon(icon);
        btnleAlarm_5 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_5->setObjectName(QString::fromUtf8("btnleAlarm_5"));
        btnleAlarm_5->setGeometry(QRect(480, 480, 101, 34));
        btnleAlarm_5->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_5->setIcon(icon);
        btnleAlarm_6 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_6->setObjectName(QString::fromUtf8("btnleAlarm_6"));
        btnleAlarm_6->setGeometry(QRect(850, 480, 101, 34));
        btnleAlarm_6->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_6->setIcon(icon);
        btnleAlarm_7 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_7->setObjectName(QString::fromUtf8("btnleAlarm_7"));
        btnleAlarm_7->setGeometry(QRect(864, 164, 126, 21));
        btnleAlarm_7->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_7->setIcon(icon);
        btnleAlarm_8 = new QCommandLinkButton(SistAguaContrain);
        btnleAlarm_8->setObjectName(QString::fromUtf8("btnleAlarm_8"));
        btnleAlarm_8->setGeometry(QRect(864, 189, 126, 21));
        btnleAlarm_8->setStyleSheet(QString::fromUtf8(""));
        btnleAlarm_8->setIcon(icon);
        leAlarm_2 = new WLineEdit(SistAguaContrain);
        leAlarm_2->setObjectName(QString::fromUtf8("leAlarm_2"));
        leAlarm_2->setGeometry(QRect(90, 500, 101, 16));
        leAlarm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm2_2 = new WLineEdit(SistAguaContrain);
        leAlarm2_2->setObjectName(QString::fromUtf8("leAlarm2_2"));
        leAlarm2_2->setGeometry(QRect(480, 500, 101, 16));
        leAlarm2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        leAlarm6_2 = new WLineEdit(SistAguaContrain);
        leAlarm6_2->setObjectName(QString::fromUtf8("leAlarm6_2"));
        leAlarm6_2->setGeometry(QRect(850, 500, 101, 16));
        leAlarm6_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(128, 128, 128);"));
        label->raise();
        leAlarm_2->raise();
        leAlarm2_2->raise();
        leAlarm6_2->raise();
        lbSistAguaContrainT->raise();
        lbSalAguaFresT->raise();
        lbSucSisT->raise();
        lbInterCalorT->raise();
        lbBombaJockT->raise();
        lbBombaT->raise();
        lbDieselBomT->raise();
        lbP192CT->raise();
        lbP192AT->raise();
        btImpPant->raise();
        leAlarm->raise();
        leAlarm2->raise();
        lbMotElecT->raise();
        lbP192BT->raise();
        leAlarm6->raise();
        lbDesPsvT->raise();
        lbDesSisT->raise();
        lbMedFluT->raise();
        lbTanqCombT->raise();
        lbDieselTanqT->raise();
        lb568LT->raise();
        leAlarm3->raise();
        leAlarm4->raise();
        leAlarm5->raise();
        lbT196T->raise();
        lbTanqAguaInT_2->raise();
        leLT196->raise();
        leU->raise();
        lbU->raise();
        btnleAlarm->raise();
        btnleAlarm_2->raise();
        btnleAlarm_3->raise();
        btnleAlarm_4->raise();
        btnleAlarm_5->raise();
        btnleAlarm_6->raise();
        btnleAlarm_7->raise();
        btnleAlarm_8->raise();

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
        leAlarm->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YSA_194_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm->setText(QString());
        leAlarm2->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YSA_193_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm2->setText(QString());
        lbMotElecT->setText(QApplication::translate("SistAguaContrain", "MOTOR\n"
" ELECTRICO", 0, QApplication::UnicodeUTF8));
        lbP192BT->setText(QApplication::translate("SistAguaContrain", "P-192B", 0, QApplication::UnicodeUTF8));
        leAlarm6->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YSA_192_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm6->setText(QString());
        lbDesPsvT->setText(QApplication::translate("SistAguaContrain", "DESCARGA\n"
" PSV/PRV", 0, QApplication::UnicodeUTF8));
        lbDesSisT->setText(QApplication::translate("SistAguaContrain", "DESCARGA\n"
" DEL SISTEMA", 0, QApplication::UnicodeUTF8));
        lbMedFluT->setText(QString());
        lbTanqCombT->setText(QApplication::translate("SistAguaContrain", "TANQUE DE\n"
" COMBUSTIBLE", 0, QApplication::UnicodeUTF8));
        lbDieselTanqT->setText(QApplication::translate("SistAguaContrain", "DIESEL", 0, QApplication::UnicodeUTF8));
        lb568LT->setText(QApplication::translate("SistAguaContrain", "(568 LITROS)", 0, QApplication::UnicodeUTF8));
        leAlarm3->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_LT_196_IOHA_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm3->setText(QString());
        leAlarm4->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_LT_196_IOLA_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm4->setText(QString());
        leAlarm5->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_LT_196_IOLLA_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm5->setText(QString());
        lbT196T->setText(QApplication::translate("SistAguaContrain", "T-196", 0, QApplication::UnicodeUTF8));
        lbTanqAguaInT_2->setText(QApplication::translate("SistAguaContrain", "TANQUE DE AGUA\n"
" CONTRA INCENDIO", 0, QApplication::UnicodeUTF8));
        leLT196->setText(QApplication::translate("SistAguaContrain", "LT_196", 0, QApplication::UnicodeUTF8));
        leU->setText(QApplication::translate("SistAguaContrain", "????", 0, QApplication::UnicodeUTF8));
        lbU->setText(QApplication::translate("SistAguaContrain", "%", 0, QApplication::UnicodeUTF8));
        btnleAlarm->setText(QString());
        btnleAlarm_2->setText(QString());
        btnleAlarm_3->setText(QString());
        btnleAlarm_4->setText(QString());
        btnleAlarm_5->setText(QString());
        btnleAlarm_6->setText(QString());
        btnleAlarm_7->setText(QString());
        btnleAlarm_8->setText(QString());
        leAlarm_2->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YS_194_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm_2->setText(QString());
        leAlarm2_2->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YS_193_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm2_2->setText(QString());
        leAlarm6_2->setId(QApplication::translate("SistAguaContrain", "p_Fix32_NODE_YS_192_A_Tag", 0, QApplication::UnicodeUTF8));
        leAlarm6_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SistAguaContrain: public Ui_SistAguaContrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTAGUACONTRAIN_H
