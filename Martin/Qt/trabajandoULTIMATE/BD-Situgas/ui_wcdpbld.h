/********************************************************************************
** Form generated from reading UI file 'wcdpbld.ui'
**
** Created: Sun 24. Nov 01:20:57 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCDPBLD_H
#define UI_WCDPBLD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_WCDPBLD
{
public:
    WLabel *lbCDPBT_1;
    WLabel *lbCDPB_1;
    WLabel *lbCDPBU_1;
    WLabel *lbCDPBT_2;
    WLabel *lbCDPBU_2;
    WLabel *lbCDPB_2;
    WLabel *lbCDPBU_3;
    WLabel *lbCDPBT_3;
    WLabel *lbCDPB_3;
    WLabel *lbCDPBU_4;
    WLabel *lbCDPB_4;
    WLabel *lbCDPBT_4;
    WLabel *lbCDPBU_5;
    WLabel *lbCDPBT_5;
    WLabel *lbCDPB_5;
    WLabel *lbCDPBT_6;
    WLabel *lbCDPB_6;
    WLabel *lbCDPBU_6;
    WLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WCDPBLD)
    {
        if (WCDPBLD->objectName().isEmpty())
            WCDPBLD->setObjectName(QString::fromUtf8("WCDPBLD"));
        WCDPBLD->resize(175, 150);
        WCDPBLD->setMinimumSize(QSize(175, 150));
        WCDPBLD->setMaximumSize(QSize(175, 150));
        WCDPBLD->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCDPBT_1 = new WLabel(WCDPBLD);
        lbCDPBT_1->setObjectName(QString::fromUtf8("lbCDPBT_1"));
        lbCDPBT_1->setGeometry(QRect(25, 32, 55, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbCDPBT_1->setFont(font);
        lbCDPBT_1->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPB_1 = new WLabel(WCDPBLD);
        lbCDPB_1->setObjectName(QString::fromUtf8("lbCDPB_1"));
        lbCDPB_1->setGeometry(QRect(95, 32, 31, 16));
        lbCDPB_1->setFont(font);
        lbCDPB_1->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBU_1 = new WLabel(WCDPBLD);
        lbCDPBU_1->setObjectName(QString::fromUtf8("lbCDPBU_1"));
        lbCDPBU_1->setGeometry(QRect(135, 32, 21, 16));
        lbCDPBU_1->setFont(font);
        lbCDPBU_1->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_2 = new WLabel(WCDPBLD);
        lbCDPBT_2->setObjectName(QString::fromUtf8("lbCDPBT_2"));
        lbCDPBT_2->setGeometry(QRect(25, 45, 55, 16));
        lbCDPBT_2->setFont(font);
        lbCDPBT_2->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPBU_2 = new WLabel(WCDPBLD);
        lbCDPBU_2->setObjectName(QString::fromUtf8("lbCDPBU_2"));
        lbCDPBU_2->setGeometry(QRect(135, 45, 21, 16));
        lbCDPBU_2->setFont(font);
        lbCDPBU_2->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_2 = new WLabel(WCDPBLD);
        lbCDPB_2->setObjectName(QString::fromUtf8("lbCDPB_2"));
        lbCDPB_2->setGeometry(QRect(95, 45, 35, 16));
        lbCDPB_2->setFont(font);
        lbCDPB_2->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBU_3 = new WLabel(WCDPBLD);
        lbCDPBU_3->setObjectName(QString::fromUtf8("lbCDPBU_3"));
        lbCDPBU_3->setGeometry(QRect(135, 60, 21, 16));
        lbCDPBU_3->setFont(font);
        lbCDPBU_3->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_3 = new WLabel(WCDPBLD);
        lbCDPBT_3->setObjectName(QString::fromUtf8("lbCDPBT_3"));
        lbCDPBT_3->setGeometry(QRect(44, 60, 35, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        lbCDPBT_3->setFont(font1);
        lbCDPBT_3->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPB_3 = new WLabel(WCDPBLD);
        lbCDPB_3->setObjectName(QString::fromUtf8("lbCDPB_3"));
        lbCDPB_3->setGeometry(QRect(95, 60, 35, 16));
        lbCDPB_3->setFont(font);
        lbCDPB_3->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBU_4 = new WLabel(WCDPBLD);
        lbCDPBU_4->setObjectName(QString::fromUtf8("lbCDPBU_4"));
        lbCDPBU_4->setGeometry(QRect(135, 75, 21, 16));
        lbCDPBU_4->setFont(font);
        lbCDPBU_4->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_4 = new WLabel(WCDPBLD);
        lbCDPB_4->setObjectName(QString::fromUtf8("lbCDPB_4"));
        lbCDPB_4->setGeometry(QRect(95, 75, 35, 16));
        lbCDPB_4->setFont(font);
        lbCDPB_4->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBT_4 = new WLabel(WCDPBLD);
        lbCDPBT_4->setObjectName(QString::fromUtf8("lbCDPBT_4"));
        lbCDPBT_4->setGeometry(QRect(44, 75, 35, 16));
        lbCDPBT_4->setFont(font1);
        lbCDPBT_4->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPBU_5 = new WLabel(WCDPBLD);
        lbCDPBU_5->setObjectName(QString::fromUtf8("lbCDPBU_5"));
        lbCDPBU_5->setGeometry(QRect(135, 105, 21, 16));
        lbCDPBU_5->setFont(font);
        lbCDPBU_5->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_5 = new WLabel(WCDPBLD);
        lbCDPBT_5->setObjectName(QString::fromUtf8("lbCDPBT_5"));
        lbCDPBT_5->setGeometry(QRect(35, 105, 51, 16));
        lbCDPBT_5->setFont(font1);
        lbCDPBT_5->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPB_5 = new WLabel(WCDPBLD);
        lbCDPB_5->setObjectName(QString::fromUtf8("lbCDPB_5"));
        lbCDPB_5->setGeometry(QRect(92, 105, 35, 16));
        lbCDPB_5->setFont(font);
        lbCDPB_5->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBT_6 = new WLabel(WCDPBLD);
        lbCDPBT_6->setObjectName(QString::fromUtf8("lbCDPBT_6"));
        lbCDPBT_6->setGeometry(QRect(35, 120, 51, 16));
        lbCDPBT_6->setFont(font1);
        lbCDPBT_6->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPBT_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbCDPB_6 = new WLabel(WCDPBLD);
        lbCDPB_6->setObjectName(QString::fromUtf8("lbCDPB_6"));
        lbCDPB_6->setGeometry(QRect(92, 120, 35, 16));
        lbCDPB_6->setFont(font);
        lbCDPB_6->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbCDPB_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbCDPBU_6 = new WLabel(WCDPBLD);
        lbCDPBU_6->setObjectName(QString::fromUtf8("lbCDPBU_6"));
        lbCDPBU_6->setGeometry(QRect(135, 120, 41, 16));
        lbCDPBU_6->setFont(font);
        lbCDPBU_6->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbFondo = new WLabel(WCDPBLD);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 1502));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WCDPBLD);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbCDPBT_1->raise();
        lbCDPB_1->raise();
        lbCDPBU_1->raise();
        lbCDPBT_2->raise();
        lbCDPBU_2->raise();
        lbCDPB_2->raise();
        lbCDPBU_3->raise();
        lbCDPBT_3->raise();
        lbCDPB_3->raise();
        lbCDPBU_4->raise();
        lbCDPB_4->raise();
        lbCDPBT_4->raise();
        lbCDPBU_5->raise();
        lbCDPBT_5->raise();
        lbCDPB_5->raise();
        lbCDPBT_6->raise();
        lbCDPB_6->raise();
        lbCDPBU_6->raise();
        btCerrar->raise();

        retranslateUi(WCDPBLD);

        QMetaObject::connectSlotsByName(WCDPBLD);
    } // setupUi

    void retranslateUi(QWidget *WCDPBLD)
    {
        WCDPBLD->setWindowTitle(QApplication::translate("WCDPBLD", "WCDPBLD", 0, QApplication::UnicodeUTF8));
        lbCDPBT_1->setText(QApplication::translate("WCDPBLD", "CDPDMD", 0, QApplication::UnicodeUTF8));
        lbCDPB_1->setText(QApplication::translate("WCDPBLD", "0.00", 0, QApplication::UnicodeUTF8));
        lbCDPBU_1->setText(QApplication::translate("WCDPBLD", "%", 0, QApplication::UnicodeUTF8));
        lbCDPBT_2->setText(QApplication::translate("WCDPBLD", "CDPSEL", 0, QApplication::UnicodeUTF8));
        lbCDPBU_2->setText(QApplication::translate("WCDPBLD", "%", 0, QApplication::UnicodeUTF8));
        lbCDPB_2->setText(QApplication::translate("WCDPBLD", "99.80", 0, QApplication::UnicodeUTF8));
        lbCDPBU_3->setText(QApplication::translate("WCDPBLD", "%", 0, QApplication::UnicodeUTF8));
        lbCDPBT_3->setText(QApplication::translate("WCDPBLD", "CDPA", 0, QApplication::UnicodeUTF8));
        lbCDPB_3->setText(QApplication::translate("WCDPBLD", "99.80", 0, QApplication::UnicodeUTF8));
        lbCDPBU_4->setText(QApplication::translate("WCDPBLD", "%", 0, QApplication::UnicodeUTF8));
        lbCDPB_4->setText(QApplication::translate("WCDPBLD", "99.80", 0, QApplication::UnicodeUTF8));
        lbCDPBT_4->setText(QApplication::translate("WCDPBLD", "CDPB", 0, QApplication::UnicodeUTF8));
        lbCDPBU_5->setText(QApplication::translate("WCDPBLD", "MA", 0, QApplication::UnicodeUTF8));
        lbCDPBT_5->setText(QApplication::translate("WCDPBLD", "CDPMA", 0, QApplication::UnicodeUTF8));
        lbCDPB_5->setText(QApplication::translate("WCDPBLD", "10.00", 0, QApplication::UnicodeUTF8));
        lbCDPBT_6->setText(QApplication::translate("WCDPBLD", "CDPHM", 0, QApplication::UnicodeUTF8));
        lbCDPB_6->setText(QApplication::translate("WCDPBLD", "10.00", 0, QApplication::UnicodeUTF8));
        lbCDPBU_6->setText(QApplication::translate("WCDPBLD", "OHMS", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WCDPBLD", "CDP BLD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WCDPBLD: public Ui_WCDPBLD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCDPBLD_H
