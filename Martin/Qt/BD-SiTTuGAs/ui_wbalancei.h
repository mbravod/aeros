/********************************************************************************
** Form generated from reading UI file 'wbalancei.ui'
**
** Created: Thu 5. Dec 21:01:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBALANCEI_H
#define UI_WBALANCEI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_WBalanceI
{
public:
    WLabel *lbtbvohms;
    WLabel *lbtbvbU;
    WLabel *lbtbvselT;
    WLabel *lbtbvselU;
    WLabel *lbtbvsel;
    WLabel *lbtbvma;
    WLabel *lbtbva;
    WLabel *lbtbvmaT;
    WLabel *lbtbvmaU;
    WLabel *lbtbvdmdT;
    WLabel *lbtbvohmsT;
    WLabel *lbtbvohmsU;
    WLabel *lbtbvdmdU;
    WLabel *lbtbvb;
    WLabel *lbtbvdmd;
    WLabel *lbtbvaU;
    WLabel *lbtbvaT;
    WLabel *lbtbvbT;
    WLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WBalanceI)
    {
        if (WBalanceI->objectName().isEmpty())
            WBalanceI->setObjectName(QString::fromUtf8("WBalanceI"));
        WBalanceI->resize(175, 150);
        WBalanceI->setMinimumSize(QSize(175, 150));
        WBalanceI->setMaximumSize(QSize(175, 150));
        WBalanceI->setStyleSheet(QString::fromUtf8(""));
        lbtbvohms = new WLabel(WBalanceI);
        lbtbvohms->setObjectName(QString::fromUtf8("lbtbvohms"));
        lbtbvohms->setGeometry(QRect(72, 128, 46, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setWeight(75);
        lbtbvohms->setFont(font);
        lbtbvohms->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvohms->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbvbU = new WLabel(WBalanceI);
        lbtbvbU->setObjectName(QString::fromUtf8("lbtbvbU"));
        lbtbvbU->setGeometry(QRect(127, 80, 21, 16));
        lbtbvbU->setFont(font);
        lbtbvbU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvbU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvselT = new WLabel(WBalanceI);
        lbtbvselT->setObjectName(QString::fromUtf8("lbtbvselT"));
        lbtbvselT->setGeometry(QRect(20, 48, 46, 13));
        lbtbvselT->setFont(font);
        lbtbvselT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvselT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbtbvselU = new WLabel(WBalanceI);
        lbtbvselU->setObjectName(QString::fromUtf8("lbtbvselU"));
        lbtbvselU->setGeometry(QRect(127, 48, 21, 16));
        lbtbvselU->setFont(font);
        lbtbvselU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvselU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvsel = new WLabel(WBalanceI);
        lbtbvsel->setObjectName(QString::fromUtf8("lbtbvsel"));
        lbtbvsel->setGeometry(QRect(72, 48, 46, 13));
        lbtbvsel->setFont(font);
        lbtbvsel->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvsel->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbvma = new WLabel(WBalanceI);
        lbtbvma->setObjectName(QString::fromUtf8("lbtbvma"));
        lbtbvma->setGeometry(QRect(72, 112, 46, 13));
        lbtbvma->setFont(font);
        lbtbvma->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvma->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbva = new WLabel(WBalanceI);
        lbtbva->setObjectName(QString::fromUtf8("lbtbva"));
        lbtbva->setGeometry(QRect(72, 64, 46, 13));
        lbtbva->setFont(font);
        lbtbva->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbva->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbvmaT = new WLabel(WBalanceI);
        lbtbvmaT->setObjectName(QString::fromUtf8("lbtbvmaT"));
        lbtbvmaT->setGeometry(QRect(20, 112, 46, 13));
        lbtbvmaT->setFont(font);
        lbtbvmaT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvmaT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbtbvmaU = new WLabel(WBalanceI);
        lbtbvmaU->setObjectName(QString::fromUtf8("lbtbvmaU"));
        lbtbvmaU->setGeometry(QRect(127, 112, 41, 16));
        lbtbvmaU->setFont(font);
        lbtbvmaU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvmaU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvdmdT = new WLabel(WBalanceI);
        lbtbvdmdT->setObjectName(QString::fromUtf8("lbtbvdmdT"));
        lbtbvdmdT->setGeometry(QRect(20, 32, 46, 13));
        lbtbvdmdT->setFont(font);
        lbtbvdmdT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvdmdT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbtbvohmsT = new WLabel(WBalanceI);
        lbtbvohmsT->setObjectName(QString::fromUtf8("lbtbvohmsT"));
        lbtbvohmsT->setGeometry(QRect(5, 128, 61, 16));
        lbtbvohmsT->setFont(font);
        lbtbvohmsT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvohmsT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbtbvohmsU = new WLabel(WBalanceI);
        lbtbvohmsU->setObjectName(QString::fromUtf8("lbtbvohmsU"));
        lbtbvohmsU->setGeometry(QRect(127, 128, 41, 16));
        lbtbvohmsU->setFont(font);
        lbtbvohmsU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvohmsU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvdmdU = new WLabel(WBalanceI);
        lbtbvdmdU->setObjectName(QString::fromUtf8("lbtbvdmdU"));
        lbtbvdmdU->setGeometry(QRect(127, 32, 21, 16));
        lbtbvdmdU->setFont(font);
        lbtbvdmdU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvdmdU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvb = new WLabel(WBalanceI);
        lbtbvb->setObjectName(QString::fromUtf8("lbtbvb"));
        lbtbvb->setGeometry(QRect(72, 80, 46, 13));
        lbtbvb->setFont(font);
        lbtbvb->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvb->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbvdmd = new WLabel(WBalanceI);
        lbtbvdmd->setObjectName(QString::fromUtf8("lbtbvdmd"));
        lbtbvdmd->setGeometry(QRect(72, 32, 46, 13));
        lbtbvdmd->setFont(font);
        lbtbvdmd->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvdmd->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbtbvaU = new WLabel(WBalanceI);
        lbtbvaU->setObjectName(QString::fromUtf8("lbtbvaU"));
        lbtbvaU->setGeometry(QRect(127, 64, 21, 16));
        lbtbvaU->setFont(font);
        lbtbvaU->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvaU->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbtbvaT = new WLabel(WBalanceI);
        lbtbvaT->setObjectName(QString::fromUtf8("lbtbvaT"));
        lbtbvaT->setGeometry(QRect(20, 64, 46, 13));
        lbtbvaT->setFont(font);
        lbtbvaT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvaT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbtbvbT = new WLabel(WBalanceI);
        lbtbvbT->setObjectName(QString::fromUtf8("lbtbvbT"));
        lbtbvbT->setGeometry(QRect(20, 80, 46, 13));
        lbtbvbT->setFont(font);
        lbtbvbT->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbtbvbT->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbFondo = new WLabel(WBalanceI);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 1502));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        btCerrar = new QPushButton(WBalanceI);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(2, 0, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbtbvohms->raise();
        lbtbvbU->raise();
        lbtbvselT->raise();
        lbtbvselU->raise();
        lbtbvsel->raise();
        lbtbvma->raise();
        lbtbva->raise();
        lbtbvmaT->raise();
        lbtbvmaU->raise();
        lbtbvdmdT->raise();
        lbtbvohmsT->raise();
        lbtbvohmsU->raise();
        lbtbvdmdU->raise();
        lbtbvb->raise();
        lbtbvdmd->raise();
        lbtbvaU->raise();
        lbtbvaT->raise();
        lbtbvbT->raise();
        btCerrar->raise();

        retranslateUi(WBalanceI);

        QMetaObject::connectSlotsByName(WBalanceI);
    } // setupUi

    void retranslateUi(QWidget *WBalanceI)
    {
        WBalanceI->setWindowTitle(QApplication::translate("WBalanceI", "Form", 0, QApplication::UnicodeUTF8));
        lbtbvohms->setText(QString());
        lbtbvbU->setText(QApplication::translate("WBalanceI", "%", 0, QApplication::UnicodeUTF8));
        lbtbvselT->setText(QApplication::translate("WBalanceI", "TBVSEL", 0, QApplication::UnicodeUTF8));
        lbtbvselU->setText(QApplication::translate("WBalanceI", "%", 0, QApplication::UnicodeUTF8));
        lbtbvsel->setText(QString());
        lbtbvma->setText(QString());
        lbtbva->setText(QString());
        lbtbvmaT->setText(QApplication::translate("WBalanceI", "TBVMA", 0, QApplication::UnicodeUTF8));
        lbtbvmaU->setText(QApplication::translate("WBalanceI", "MA", 0, QApplication::UnicodeUTF8));
        lbtbvdmdT->setText(QApplication::translate("WBalanceI", "TBVDMD", 0, QApplication::UnicodeUTF8));
        lbtbvohmsT->setText(QApplication::translate("WBalanceI", "TBVOHMS", 0, QApplication::UnicodeUTF8));
        lbtbvohmsU->setText(QApplication::translate("WBalanceI", "OHMS", 0, QApplication::UnicodeUTF8));
        lbtbvdmdU->setText(QApplication::translate("WBalanceI", "%", 0, QApplication::UnicodeUTF8));
        lbtbvb->setText(QString());
        lbtbvdmd->setText(QString());
        lbtbvaU->setText(QApplication::translate("WBalanceI", "%", 0, QApplication::UnicodeUTF8));
        lbtbvaT->setText(QApplication::translate("WBalanceI", "TBVA", 0, QApplication::UnicodeUTF8));
        lbtbvbT->setText(QApplication::translate("WBalanceI", "TBVB", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WBalanceI", "BALANCE IMPULSO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WBalanceI: public Ui_WBalanceI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBALANCEI_H
