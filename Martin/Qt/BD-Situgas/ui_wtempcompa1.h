/********************************************************************************
** Form generated from reading UI file 'wtempcompa1.ui'
**
** Created: Sun 13. Oct 17:33:47 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WTEMPCOMPA1_H
#define UI_WTEMPCOMPA1_H

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

class Ui_WTempCompA1
{
public:
    QLabel *lbCOMAT_1;
    WLabel *lbCOMA_1;
    QLabel *lbCOMAU_1;
    QLabel *lbCOMAU_2;
    QLabel *lbCOMAT_2;
    WLabel *lbCOMA_2;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WTempCompA1)
    {
        if (WTempCompA1->objectName().isEmpty())
            WTempCompA1->setObjectName(QString::fromUtf8("WTempCompA1"));
        WTempCompA1->resize(175, 150);
        WTempCompA1->setMinimumSize(QSize(175, 150));
        WTempCompA1->setMaximumSize(QSize(175, 150));
        WTempCompA1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAT_1 = new QLabel(WTempCompA1);
        lbCOMAT_1->setObjectName(QString::fromUtf8("lbCOMAT_1"));
        lbCOMAT_1->setGeometry(QRect(30, 31, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbCOMAT_1->setFont(font);
        lbCOMAT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_1 = new WLabel(WTempCompA1);
        lbCOMA_1->setObjectName(QString::fromUtf8("lbCOMA_1"));
        lbCOMA_1->setGeometry(QRect(94, 31, 40, 16));
        lbCOMA_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_1->setFont(font);
        lbCOMA_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCOMAU_1 = new QLabel(WTempCompA1);
        lbCOMAU_1->setObjectName(QString::fromUtf8("lbCOMAU_1"));
        lbCOMAU_1->setGeometry(QRect(135, 31, 16, 16));
        lbCOMAU_1->setFont(font);
        lbCOMAU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAU_2 = new QLabel(WTempCompA1);
        lbCOMAU_2->setObjectName(QString::fromUtf8("lbCOMAU_2"));
        lbCOMAU_2->setGeometry(QRect(135, 48, 16, 16));
        lbCOMAU_2->setFont(font);
        lbCOMAU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAT_2 = new QLabel(WTempCompA1);
        lbCOMAT_2->setObjectName(QString::fromUtf8("lbCOMAT_2"));
        lbCOMAT_2->setGeometry(QRect(30, 48, 61, 16));
        lbCOMAT_2->setFont(font);
        lbCOMAT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_2 = new WLabel(WTempCompA1);
        lbCOMA_2->setObjectName(QString::fromUtf8("lbCOMA_2"));
        lbCOMA_2->setGeometry(QRect(94, 48, 40, 16));
        lbCOMA_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_2->setFont(font);
        lbCOMA_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbFondo = new QLabel(WTempCompA1);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WTempCompA1);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbCOMAT_1->raise();
        lbCOMA_1->raise();
        lbCOMAU_1->raise();
        lbCOMAU_2->raise();
        lbCOMAT_2->raise();
        lbCOMA_2->raise();
        btCerrar->raise();

        retranslateUi(WTempCompA1);

        QMetaObject::connectSlotsByName(WTempCompA1);
    } // setupUi

    void retranslateUi(QWidget *WTempCompA1)
    {
        WTempCompA1->setWindowTitle(QApplication::translate("WTempCompA1", "WTempCompA1", 0, QApplication::UnicodeUTF8));
        lbCOMAT_1->setText(QApplication::translate("WTempCompA1", "TE6837A", 0, QApplication::UnicodeUTF8));
        lbCOMA_1->setText(QApplication::translate("WTempCompA1", "76.00", 0, QApplication::UnicodeUTF8));
        lbCOMAU_1->setText(QApplication::translate("WTempCompA1", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMAU_2->setText(QApplication::translate("WTempCompA1", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMAT_2->setText(QApplication::translate("WTempCompA1", "TE6837B", 0, QApplication::UnicodeUTF8));
        lbCOMA_2->setText(QApplication::translate("WTempCompA1", "76.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WTempCompA1", "TEMP COMPRESOR DE A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WTempCompA1: public Ui_WTempCompA1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPCOMPA1_H
