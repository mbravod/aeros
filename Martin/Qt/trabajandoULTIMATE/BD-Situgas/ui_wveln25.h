/********************************************************************************
** Form generated from reading UI file 'wveln25.ui'
**
** Created: Mon 2. Dec 16:27:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WVELN25_H
#define UI_WVELN25_H

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

class Ui_WVelN25
{
public:
    QLabel *lbN25T_1;
    QLabel *lbN25T_2;
    WLabel *lbN25_2;
    WLabel *lbN25_1;
    QLabel *lbN25U_1;
    QLabel *lbN25U_2;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WVelN25)
    {
        if (WVelN25->objectName().isEmpty())
            WVelN25->setObjectName(QString::fromUtf8("WVelN25"));
        WVelN25->setWindowModality(Qt::NonModal);
        WVelN25->resize(175, 150);
        WVelN25->setMinimumSize(QSize(175, 150));
        WVelN25->setMaximumSize(QSize(175, 150));
        WVelN25->setLayoutDirection(Qt::LeftToRight);
        WVelN25->setStyleSheet(QString::fromUtf8(""));
        lbN25T_1 = new QLabel(WVelN25);
        lbN25T_1->setObjectName(QString::fromUtf8("lbN25T_1"));
        lbN25T_1->setGeometry(QRect(35, 30, 51, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbN25T_1->setFont(font);
        lbN25T_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25T_2 = new QLabel(WVelN25);
        lbN25T_2->setObjectName(QString::fromUtf8("lbN25T_2"));
        lbN25T_2->setGeometry(QRect(35, 45, 51, 16));
        lbN25T_2->setFont(font);
        lbN25T_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25_2 = new WLabel(WVelN25);
        lbN25_2->setObjectName(QString::fromUtf8("lbN25_2"));
        lbN25_2->setGeometry(QRect(88, 47, 41, 20));
        lbN25_2->setFont(font);
        lbN25_2->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbN25_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbN25_1 = new WLabel(WVelN25);
        lbN25_1->setObjectName(QString::fromUtf8("lbN25_1"));
        lbN25_1->setGeometry(QRect(88, 32, 41, 20));
        lbN25_1->setFont(font);
        lbN25_1->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbN25_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbN25U_1 = new QLabel(WVelN25);
        lbN25U_1->setObjectName(QString::fromUtf8("lbN25U_1"));
        lbN25U_1->setGeometry(QRect(133, 30, 31, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbN25U_1->setFont(font1);
        lbN25U_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25U_2 = new QLabel(WVelN25);
        lbN25U_2->setObjectName(QString::fromUtf8("lbN25U_2"));
        lbN25U_2->setGeometry(QRect(133, 45, 31, 16));
        lbN25U_2->setFont(font1);
        lbN25U_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WVelN25);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WVelN25);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbN25T_1->raise();
        lbN25T_2->raise();
        lbN25_2->raise();
        lbN25_1->raise();
        lbN25U_1->raise();
        lbN25U_2->raise();
        btCerrar->raise();

        retranslateUi(WVelN25);

        QMetaObject::connectSlotsByName(WVelN25);
    } // setupUi

    void retranslateUi(QWidget *WVelN25)
    {
        WVelN25->setWindowTitle(QApplication::translate("WVelN25", "WVelN25", 0, QApplication::UnicodeUTF8));
        lbN25T_1->setText(QApplication::translate("WVelN25", "SE6800", 0, QApplication::UnicodeUTF8));
        lbN25T_2->setText(QApplication::translate("WVelN25", "SE6801", 0, QApplication::UnicodeUTF8));
        lbN25_2->setText(QApplication::translate("WVelN25", "00.00", 0, QApplication::UnicodeUTF8));
        lbN25_1->setText(QApplication::translate("WVelN25", "00.00", 0, QApplication::UnicodeUTF8));
        lbN25U_1->setText(QApplication::translate("WVelN25", "RPM", 0, QApplication::UnicodeUTF8));
        lbN25U_2->setText(QApplication::translate("WVelN25", "RPM", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WVelN25", "VELOCIDAD N25", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WVelN25: public Ui_WVelN25 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WVELN25_H
