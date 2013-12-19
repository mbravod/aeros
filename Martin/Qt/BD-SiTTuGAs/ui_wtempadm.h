/********************************************************************************
** Form generated from reading UI file 'wtempadm.ui'
**
** Created: Thu 19. Dec 14:36:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WTEMPADM_H
#define UI_WTEMPADM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_WTempADM
{
public:
    QLabel *lbADMT_1;
    WLabel *lbADM_1;
    QLabel *lbADMU_1;
    QLabel *lbADMU_2;
    WLabel *lbADM_2;
    QLabel *lbADMT_2;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WTempADM)
    {
        if (WTempADM->objectName().isEmpty())
            WTempADM->setObjectName(QString::fromUtf8("WTempADM"));
        WTempADM->resize(175, 150);
        WTempADM->setMinimumSize(QSize(175, 150));
        WTempADM->setMaximumSize(QSize(175, 150));
        WTempADM->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbADMT_1 = new QLabel(WTempADM);
        lbADMT_1->setObjectName(QString::fromUtf8("lbADMT_1"));
        lbADMT_1->setGeometry(QRect(31, 31, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbADMT_1->setFont(font);
        lbADM_1 = new WLabel(WTempADM);
        lbADM_1->setObjectName(QString::fromUtf8("lbADM_1"));
        lbADM_1->setGeometry(QRect(94, 31, 41, 16));
        lbADM_1->setFont(font);
        lbADM_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbADMU_1 = new QLabel(WTempADM);
        lbADMU_1->setObjectName(QString::fromUtf8("lbADMU_1"));
        lbADMU_1->setGeometry(QRect(140, 31, 21, 16));
        lbADMU_1->setFont(font);
        lbADMU_2 = new QLabel(WTempADM);
        lbADMU_2->setObjectName(QString::fromUtf8("lbADMU_2"));
        lbADMU_2->setGeometry(QRect(140, 45, 21, 16));
        lbADMU_2->setFont(font);
        lbADM_2 = new WLabel(WTempADM);
        lbADM_2->setObjectName(QString::fromUtf8("lbADM_2"));
        lbADM_2->setGeometry(QRect(94, 45, 41, 16));
        lbADM_2->setFont(font);
        lbADM_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbADMT_2 = new QLabel(WTempADM);
        lbADMT_2->setObjectName(QString::fromUtf8("lbADMT_2"));
        lbADMT_2->setGeometry(QRect(30, 45, 61, 16));
        lbADMT_2->setFont(font);
        lbFondo = new QLabel(WTempADM);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        btCerrar = new QPushButton(WTempADM);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbADMT_1->raise();
        lbADM_1->raise();
        lbADMU_1->raise();
        lbADMU_2->raise();
        lbADM_2->raise();
        lbADMT_2->raise();
        btCerrar->raise();

        retranslateUi(WTempADM);

        QMetaObject::connectSlotsByName(WTempADM);
    } // setupUi

    void retranslateUi(QWidget *WTempADM)
    {
        WTempADM->setWindowTitle(QApplication::translate("WTempADM", "WTempADM", 0, QApplication::UnicodeUTF8));
        lbADMT_1->setText(QApplication::translate("WTempADM", "TE6821A", 0, QApplication::UnicodeUTF8));
        lbADM_1->setId(QApplication::translate("WTempADM", "p_HMI_INTER_TE6821A_CALC_PLUS_A_OUT_1", 0, QApplication::UnicodeUTF8));
        lbADM_1->setText(QApplication::translate("WTempADM", "65.00", 0, QApplication::UnicodeUTF8));
        lbADMU_1->setText(QApplication::translate("WTempADM", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbADMU_2->setText(QApplication::translate("WTempADM", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbADM_2->setId(QApplication::translate("WTempADM", "p_HMI_INTER_TE6821B_CALC_PLUS_A_OUT_1", 0, QApplication::UnicodeUTF8));
        lbADM_2->setText(QApplication::translate("WTempADM", "65.00", 0, QApplication::UnicodeUTF8));
        lbADMT_2->setText(QApplication::translate("WTempADM", "TE6821B", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WTempADM", "TEMP ADM AL COMP DE B", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WTempADM: public Ui_WTempADM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPADM_H
