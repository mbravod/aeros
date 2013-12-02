/********************************************************************************
** Form generated from reading UI file 'wpurgav.ui'
**
** Created: Mon 2. Dec 16:27:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPURGAV_H
#define UI_WPURGAV_H

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

class Ui_WPurgaV
{
public:
    QLabel *lbVbvBT;
    WLabel *lbVbvsel;
    QLabel *lbVbvaU;
    WLabel *lbVbvB;
    WLabel *lbVbvMa;
    QLabel *lbVbvdmdU;
    WLabel *lbVbvOhms;
    QLabel *lbVbvBU;
    QLabel *lbVbvOhmsU;
    QLabel *lbVbvselT;
    QLabel *lbVbvselU;
    QLabel *lbVbvMaT;
    QLabel *lbVbvOhmsT;
    QLabel *lbVbvdmdT;
    WLabel *lbVbvdmd;
    QLabel *lbVbvaT;
    WLabel *lbVbva;
    QLabel *lbVbvMaU;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WPurgaV)
    {
        if (WPurgaV->objectName().isEmpty())
            WPurgaV->setObjectName(QString::fromUtf8("WPurgaV"));
        WPurgaV->resize(175, 150);
        WPurgaV->setMinimumSize(QSize(175, 150));
        WPurgaV->setMaximumSize(QSize(175, 150));
        WPurgaV->setStyleSheet(QString::fromUtf8(""));
        lbVbvBT = new QLabel(WPurgaV);
        lbVbvBT->setObjectName(QString::fromUtf8("lbVbvBT"));
        lbVbvBT->setGeometry(QRect(20, 78, 46, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setWeight(75);
        lbVbvBT->setFont(font);
        lbVbvBT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvsel = new WLabel(WPurgaV);
        lbVbvsel->setObjectName(QString::fromUtf8("lbVbvsel"));
        lbVbvsel->setGeometry(QRect(72, 46, 46, 13));
        lbVbvsel->setFont(font);
        lbVbvsel->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbvsel->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvaU = new QLabel(WPurgaV);
        lbVbvaU->setObjectName(QString::fromUtf8("lbVbvaU"));
        lbVbvaU->setGeometry(QRect(127, 62, 21, 16));
        lbVbvaU->setFont(font);
        lbVbvB = new WLabel(WPurgaV);
        lbVbvB->setObjectName(QString::fromUtf8("lbVbvB"));
        lbVbvB->setGeometry(QRect(72, 78, 46, 13));
        lbVbvB->setFont(font);
        lbVbvB->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbvB->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvMa = new WLabel(WPurgaV);
        lbVbvMa->setObjectName(QString::fromUtf8("lbVbvMa"));
        lbVbvMa->setGeometry(QRect(72, 110, 46, 13));
        lbVbvMa->setFont(font);
        lbVbvMa->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbvMa->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvdmdU = new QLabel(WPurgaV);
        lbVbvdmdU->setObjectName(QString::fromUtf8("lbVbvdmdU"));
        lbVbvdmdU->setGeometry(QRect(127, 30, 21, 16));
        lbVbvdmdU->setFont(font);
        lbVbvOhms = new WLabel(WPurgaV);
        lbVbvOhms->setObjectName(QString::fromUtf8("lbVbvOhms"));
        lbVbvOhms->setGeometry(QRect(72, 126, 46, 13));
        lbVbvOhms->setFont(font);
        lbVbvOhms->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbvOhms->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvBU = new QLabel(WPurgaV);
        lbVbvBU->setObjectName(QString::fromUtf8("lbVbvBU"));
        lbVbvBU->setGeometry(QRect(127, 78, 21, 16));
        lbVbvBU->setFont(font);
        lbVbvOhmsU = new QLabel(WPurgaV);
        lbVbvOhmsU->setObjectName(QString::fromUtf8("lbVbvOhmsU"));
        lbVbvOhmsU->setGeometry(QRect(127, 126, 41, 16));
        lbVbvOhmsU->setFont(font);
        lbVbvselT = new QLabel(WPurgaV);
        lbVbvselT->setObjectName(QString::fromUtf8("lbVbvselT"));
        lbVbvselT->setGeometry(QRect(20, 46, 46, 13));
        lbVbvselT->setFont(font);
        lbVbvselT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvselU = new QLabel(WPurgaV);
        lbVbvselU->setObjectName(QString::fromUtf8("lbVbvselU"));
        lbVbvselU->setGeometry(QRect(127, 46, 21, 16));
        lbVbvselU->setFont(font);
        lbVbvMaT = new QLabel(WPurgaV);
        lbVbvMaT->setObjectName(QString::fromUtf8("lbVbvMaT"));
        lbVbvMaT->setGeometry(QRect(20, 110, 46, 13));
        lbVbvMaT->setFont(font);
        lbVbvMaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvOhmsT = new QLabel(WPurgaV);
        lbVbvOhmsT->setObjectName(QString::fromUtf8("lbVbvOhmsT"));
        lbVbvOhmsT->setGeometry(QRect(5, 126, 61, 16));
        lbVbvOhmsT->setFont(font);
        lbVbvOhmsT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvdmdT = new QLabel(WPurgaV);
        lbVbvdmdT->setObjectName(QString::fromUtf8("lbVbvdmdT"));
        lbVbvdmdT->setGeometry(QRect(20, 30, 46, 13));
        lbVbvdmdT->setFont(font);
        lbVbvdmdT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbvdmd = new WLabel(WPurgaV);
        lbVbvdmd->setObjectName(QString::fromUtf8("lbVbvdmd"));
        lbVbvdmd->setGeometry(QRect(72, 30, 46, 13));
        lbVbvdmd->setFont(font);
        lbVbvdmd->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbvdmd->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvaT = new QLabel(WPurgaV);
        lbVbvaT->setObjectName(QString::fromUtf8("lbVbvaT"));
        lbVbvaT->setGeometry(QRect(20, 62, 46, 13));
        lbVbvaT->setFont(font);
        lbVbvaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVbva = new WLabel(WPurgaV);
        lbVbva->setObjectName(QString::fromUtf8("lbVbva"));
        lbVbva->setGeometry(QRect(72, 62, 46, 13));
        lbVbva->setFont(font);
        lbVbva->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbVbva->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVbvMaU = new QLabel(WPurgaV);
        lbVbvMaU->setObjectName(QString::fromUtf8("lbVbvMaU"));
        lbVbvMaU->setGeometry(QRect(127, 110, 41, 16));
        lbVbvMaU->setFont(font);
        lbFondo = new QLabel(WPurgaV);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(WPurgaV);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbVbvBT->raise();
        lbVbvsel->raise();
        lbVbvaU->raise();
        lbVbvB->raise();
        lbVbvMa->raise();
        lbVbvdmdU->raise();
        lbVbvOhms->raise();
        lbVbvBU->raise();
        lbVbvOhmsU->raise();
        lbVbvselT->raise();
        lbVbvselU->raise();
        lbVbvMaT->raise();
        lbVbvOhmsT->raise();
        lbVbvdmdT->raise();
        lbVbvdmd->raise();
        lbVbvaT->raise();
        lbVbva->raise();
        lbVbvMaU->raise();
        btCerrar->raise();

        retranslateUi(WPurgaV);

        QMetaObject::connectSlotsByName(WPurgaV);
    } // setupUi

    void retranslateUi(QWidget *WPurgaV)
    {
        WPurgaV->setWindowTitle(QApplication::translate("WPurgaV", "Form", 0, QApplication::UnicodeUTF8));
        lbVbvBT->setText(QApplication::translate("WPurgaV", "VBVB", 0, QApplication::UnicodeUTF8));
        lbVbvsel->setText(QString());
        lbVbvaU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvB->setText(QString());
        lbVbvMa->setText(QString());
        lbVbvdmdU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvOhms->setText(QString());
        lbVbvBU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvOhmsU->setText(QApplication::translate("WPurgaV", "OHMS", 0, QApplication::UnicodeUTF8));
        lbVbvselT->setText(QApplication::translate("WPurgaV", "VBVSEL", 0, QApplication::UnicodeUTF8));
        lbVbvselU->setText(QApplication::translate("WPurgaV", "%", 0, QApplication::UnicodeUTF8));
        lbVbvMaT->setText(QApplication::translate("WPurgaV", "VBVMA", 0, QApplication::UnicodeUTF8));
        lbVbvOhmsT->setText(QApplication::translate("WPurgaV", "VBVOHMS", 0, QApplication::UnicodeUTF8));
        lbVbvdmdT->setText(QApplication::translate("WPurgaV", "VBVDMD", 0, QApplication::UnicodeUTF8));
        lbVbvdmd->setText(QString());
        lbVbvaT->setText(QApplication::translate("WPurgaV", "VBVA", 0, QApplication::UnicodeUTF8));
        lbVbva->setText(QString());
        lbVbvMaU->setText(QApplication::translate("WPurgaV", "MA", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WPurgaV", "PURGA VARIABLE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WPurgaV: public Ui_WPurgaV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPURGAV_H
