/********************************************************************************
** Form generated from reading UI file 'wprescompb.ui'
**
** Created: Tue 10. Dec 18:43:56 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPRESCOMPB_H
#define UI_WPRESCOMPB_H

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

class Ui_WPresCompB
{
public:
    QLabel *lbP25T_1;
    WLabel *lbP25_1;
    QLabel *lbP25U_1;
    QLabel *lbP25U_2;
    WLabel *lbP25_2;
    QLabel *lbP25T_2;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WPresCompB)
    {
        if (WPresCompB->objectName().isEmpty())
            WPresCompB->setObjectName(QString::fromUtf8("WPresCompB"));
        WPresCompB->resize(175, 150);
        WPresCompB->setMinimumSize(QSize(175, 150));
        WPresCompB->setMaximumSize(QSize(175, 150));
        WPresCompB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25T_1 = new QLabel(WPresCompB);
        lbP25T_1->setObjectName(QString::fromUtf8("lbP25T_1"));
        lbP25T_1->setGeometry(QRect(30, 31, 60, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbP25T_1->setFont(font);
        lbP25T_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25_1 = new WLabel(WPresCompB);
        lbP25_1->setObjectName(QString::fromUtf8("lbP25_1"));
        lbP25_1->setGeometry(QRect(94, 31, 41, 16));
        lbP25_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25_1->setFont(font);
        lbP25_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbP25U_1 = new QLabel(WPresCompB);
        lbP25U_1->setObjectName(QString::fromUtf8("lbP25U_1"));
        lbP25U_1->setGeometry(QRect(135, 31, 31, 16));
        lbP25U_1->setFont(font);
        lbP25U_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25U_2 = new QLabel(WPresCompB);
        lbP25U_2->setObjectName(QString::fromUtf8("lbP25U_2"));
        lbP25U_2->setGeometry(QRect(135, 46, 31, 16));
        lbP25U_2->setFont(font);
        lbP25U_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25_2 = new WLabel(WPresCompB);
        lbP25_2->setObjectName(QString::fromUtf8("lbP25_2"));
        lbP25_2->setGeometry(QRect(94, 46, 41, 16));
        lbP25_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbP25_2->setFont(font);
        lbP25_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbP25T_2 = new QLabel(WPresCompB);
        lbP25T_2->setObjectName(QString::fromUtf8("lbP25T_2"));
        lbP25T_2->setGeometry(QRect(30, 46, 60, 15));
        lbP25T_2->setFont(font);
        lbP25T_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WPresCompB);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        btCerrar = new QPushButton(WPresCompB);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbP25T_1->raise();
        lbP25_1->raise();
        lbP25U_1->raise();
        lbP25U_2->raise();
        lbP25_2->raise();
        lbP25T_2->raise();
        btCerrar->raise();

        retranslateUi(WPresCompB);

        QMetaObject::connectSlotsByName(WPresCompB);
    } // setupUi

    void retranslateUi(QWidget *WPresCompB)
    {
        WPresCompB->setWindowTitle(QApplication::translate("WPresCompB", "WPresCompB", 0, QApplication::UnicodeUTF8));
        lbP25T_1->setText(QApplication::translate("WPresCompB", "PT6859A", 0, QApplication::UnicodeUTF8));
        lbP25_1->setText(QApplication::translate("WPresCompB", "11.50", 0, QApplication::UnicodeUTF8));
        lbP25U_1->setText(QApplication::translate("WPresCompB", "PSIA", 0, QApplication::UnicodeUTF8));
        lbP25U_2->setText(QApplication::translate("WPresCompB", "PSIA", 0, QApplication::UnicodeUTF8));
        lbP25_2->setText(QApplication::translate("WPresCompB", "11.30", 0, QApplication::UnicodeUTF8));
        lbP25T_2->setText(QApplication::translate("WPresCompB", "PT6859B", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WPresCompB", "PRES COMPRESOR P25", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WPresCompB: public Ui_WPresCompB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPRESCOMPB_H
