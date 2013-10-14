/********************************************************************************
** Form generated from reading UI file 'wtempcompa2.ui'
**
** Created: Sun 13. Oct 17:33:46 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WTEMPCOMPA2_H
#define UI_WTEMPCOMPA2_H

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

class Ui_WTempCompA2
{
public:
    QLabel *lbCOMA2T_1;
    WLabel *lbCOMA2_1;
    QLabel *lbCOMA2U_1;
    QLabel *lbCOMA2U_2;
    QLabel *lbCOMA2T_2;
    WLabel *lbCOMA2_2;
    QLabel *lbCOMA2T_3;
    WLabel *lbCOMA2_3;
    QLabel *lbCOMA2U_3;
    QLabel *lbCOMA2T_4;
    QLabel *lbCOMA2U_4;
    WLabel *lbCOMA2_4;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WTempCompA2)
    {
        if (WTempCompA2->objectName().isEmpty())
            WTempCompA2->setObjectName(QString::fromUtf8("WTempCompA2"));
        WTempCompA2->resize(175, 150);
        WTempCompA2->setMinimumSize(QSize(175, 150));
        WTempCompA2->setMaximumSize(QSize(175, 150));
        WTempCompA2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2T_1 = new QLabel(WTempCompA2);
        lbCOMA2T_1->setObjectName(QString::fromUtf8("lbCOMA2T_1"));
        lbCOMA2T_1->setGeometry(QRect(20, 29, 65, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbCOMA2T_1->setFont(font);
        lbCOMA2T_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_1 = new WLabel(WTempCompA2);
        lbCOMA2_1->setObjectName(QString::fromUtf8("lbCOMA2_1"));
        lbCOMA2_1->setGeometry(QRect(92, 29, 41, 20));
        lbCOMA2_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_1->setFont(font);
        lbCOMA2_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCOMA2U_1 = new QLabel(WTempCompA2);
        lbCOMA2U_1->setObjectName(QString::fromUtf8("lbCOMA2U_1"));
        lbCOMA2U_1->setGeometry(QRect(135, 29, 21, 20));
        lbCOMA2U_1->setFont(font);
        lbCOMA2U_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2U_2 = new QLabel(WTempCompA2);
        lbCOMA2U_2->setObjectName(QString::fromUtf8("lbCOMA2U_2"));
        lbCOMA2U_2->setGeometry(QRect(135, 44, 21, 20));
        lbCOMA2U_2->setFont(font);
        lbCOMA2U_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2T_2 = new QLabel(WTempCompA2);
        lbCOMA2T_2->setObjectName(QString::fromUtf8("lbCOMA2T_2"));
        lbCOMA2T_2->setGeometry(QRect(20, 44, 65, 20));
        lbCOMA2T_2->setFont(font);
        lbCOMA2T_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_2 = new WLabel(WTempCompA2);
        lbCOMA2_2->setObjectName(QString::fromUtf8("lbCOMA2_2"));
        lbCOMA2_2->setGeometry(QRect(92, 44, 41, 20));
        lbCOMA2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_2->setFont(font);
        lbCOMA2_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCOMA2T_3 = new QLabel(WTempCompA2);
        lbCOMA2T_3->setObjectName(QString::fromUtf8("lbCOMA2T_3"));
        lbCOMA2T_3->setGeometry(QRect(20, 59, 65, 20));
        lbCOMA2T_3->setFont(font);
        lbCOMA2T_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_3 = new WLabel(WTempCompA2);
        lbCOMA2_3->setObjectName(QString::fromUtf8("lbCOMA2_3"));
        lbCOMA2_3->setGeometry(QRect(92, 59, 41, 20));
        lbCOMA2_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_3->setFont(font);
        lbCOMA2_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCOMA2U_3 = new QLabel(WTempCompA2);
        lbCOMA2U_3->setObjectName(QString::fromUtf8("lbCOMA2U_3"));
        lbCOMA2U_3->setGeometry(QRect(135, 59, 21, 20));
        lbCOMA2U_3->setFont(font);
        lbCOMA2U_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2T_4 = new QLabel(WTempCompA2);
        lbCOMA2T_4->setObjectName(QString::fromUtf8("lbCOMA2T_4"));
        lbCOMA2T_4->setGeometry(QRect(20, 74, 65, 20));
        lbCOMA2T_4->setFont(font);
        lbCOMA2T_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2U_4 = new QLabel(WTempCompA2);
        lbCOMA2U_4->setObjectName(QString::fromUtf8("lbCOMA2U_4"));
        lbCOMA2U_4->setGeometry(QRect(135, 74, 21, 20));
        lbCOMA2U_4->setFont(font);
        lbCOMA2U_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_4 = new WLabel(WTempCompA2);
        lbCOMA2_4->setObjectName(QString::fromUtf8("lbCOMA2_4"));
        lbCOMA2_4->setGeometry(QRect(92, 74, 41, 20));
        lbCOMA2_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA2_4->setFont(font);
        lbCOMA2_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFondo = new QLabel(WTempCompA2);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WTempCompA2);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbCOMA2T_1->raise();
        lbCOMA2_1->raise();
        lbCOMA2U_1->raise();
        lbCOMA2U_2->raise();
        lbCOMA2T_2->raise();
        lbCOMA2_2->raise();
        lbCOMA2T_3->raise();
        lbCOMA2_3->raise();
        lbCOMA2U_3->raise();
        lbCOMA2T_4->raise();
        lbCOMA2U_4->raise();
        lbCOMA2_4->raise();
        btCerrar->raise();

        retranslateUi(WTempCompA2);

        QMetaObject::connectSlotsByName(WTempCompA2);
    } // setupUi

    void retranslateUi(QWidget *WTempCompA2)
    {
        WTempCompA2->setWindowTitle(QApplication::translate("WTempCompA2", "WTempCompA2", 0, QApplication::UnicodeUTF8));
        lbCOMA2T_1->setText(QApplication::translate("WTempCompA2", "TE6838A1", 0, QApplication::UnicodeUTF8));
        lbCOMA2_1->setText(QApplication::translate("WTempCompA2", "87.00", 0, QApplication::UnicodeUTF8));
        lbCOMA2U_1->setText(QApplication::translate("WTempCompA2", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMA2U_2->setText(QApplication::translate("WTempCompA2", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMA2T_2->setText(QApplication::translate("WTempCompA2", "TE6838A2", 0, QApplication::UnicodeUTF8));
        lbCOMA2_2->setText(QApplication::translate("WTempCompA2", "87.00", 0, QApplication::UnicodeUTF8));
        lbCOMA2T_3->setText(QApplication::translate("WTempCompA2", "TE6838B1", 0, QApplication::UnicodeUTF8));
        lbCOMA2_3->setText(QApplication::translate("WTempCompA2", "84.00", 0, QApplication::UnicodeUTF8));
        lbCOMA2U_3->setText(QApplication::translate("WTempCompA2", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMA2T_4->setText(QApplication::translate("WTempCompA2", "TE6838B2", 0, QApplication::UnicodeUTF8));
        lbCOMA2U_4->setText(QApplication::translate("WTempCompA2", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMA2_4->setText(QApplication::translate("WTempCompA2", "83.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WTempCompA2", "TEMP COMPRESOR DE A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WTempCompA2: public Ui_WTempCompA2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPCOMPA2_H
