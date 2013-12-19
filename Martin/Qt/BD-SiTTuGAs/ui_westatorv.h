/********************************************************************************
** Form generated from reading UI file 'westatorv.ui'
**
** Created: Thu 19. Dec 16:09:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WESTATORV_H
#define UI_WESTATORV_H

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

class Ui_WEstatorV
{
public:
    WLabel *lbVsvdmd;
    WLabel *lbVsvOhms;
    WLabel *lbVsvMa;
    QLabel *lbVsvMaT;
    QLabel *lbVsvdmdU;
    WLabel *lbVsva;
    QLabel *lbVsvbU;
    WLabel *lbVsvb;
    QLabel *lbVsvMaU;
    QLabel *lbVsvaU;
    QLabel *lbVsvOhmsT;
    QLabel *lbVsvselT;
    WLabel *lbVsvsel;
    QLabel *lbVsvbT;
    QLabel *lbVsvOhmsU;
    QLabel *lbVsvselU;
    QLabel *lbVsvdmdT;
    QLabel *lbVsvaT;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WEstatorV)
    {
        if (WEstatorV->objectName().isEmpty())
            WEstatorV->setObjectName(QString::fromUtf8("WEstatorV"));
        WEstatorV->resize(175, 150);
        WEstatorV->setMinimumSize(QSize(175, 150));
        WEstatorV->setMaximumSize(QSize(175, 150));
        WEstatorV->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVsvdmd = new WLabel(WEstatorV);
        lbVsvdmd->setObjectName(QString::fromUtf8("lbVsvdmd"));
        lbVsvdmd->setGeometry(QRect(72, 36, 46, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setWeight(75);
        lbVsvdmd->setFont(font);
        lbVsvdmd->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvOhms = new WLabel(WEstatorV);
        lbVsvOhms->setObjectName(QString::fromUtf8("lbVsvOhms"));
        lbVsvOhms->setGeometry(QRect(72, 126, 46, 13));
        lbVsvOhms->setFont(font);
        lbVsvOhms->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvMa = new WLabel(WEstatorV);
        lbVsvMa->setObjectName(QString::fromUtf8("lbVsvMa"));
        lbVsvMa->setGeometry(QRect(72, 110, 46, 13));
        lbVsvMa->setFont(font);
        lbVsvMa->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvMaT = new QLabel(WEstatorV);
        lbVsvMaT->setObjectName(QString::fromUtf8("lbVsvMaT"));
        lbVsvMaT->setGeometry(QRect(20, 110, 46, 13));
        lbVsvMaT->setFont(font);
        lbVsvMaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVsvdmdU = new QLabel(WEstatorV);
        lbVsvdmdU->setObjectName(QString::fromUtf8("lbVsvdmdU"));
        lbVsvdmdU->setGeometry(QRect(127, 36, 21, 16));
        lbVsvdmdU->setFont(font);
        lbVsva = new WLabel(WEstatorV);
        lbVsva->setObjectName(QString::fromUtf8("lbVsva"));
        lbVsva->setGeometry(QRect(72, 70, 46, 13));
        lbVsva->setFont(font);
        lbVsva->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvbU = new QLabel(WEstatorV);
        lbVsvbU->setObjectName(QString::fromUtf8("lbVsvbU"));
        lbVsvbU->setGeometry(QRect(127, 86, 21, 16));
        lbVsvbU->setFont(font);
        lbVsvb = new WLabel(WEstatorV);
        lbVsvb->setObjectName(QString::fromUtf8("lbVsvb"));
        lbVsvb->setGeometry(QRect(72, 86, 46, 13));
        lbVsvb->setFont(font);
        lbVsvb->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvMaU = new QLabel(WEstatorV);
        lbVsvMaU->setObjectName(QString::fromUtf8("lbVsvMaU"));
        lbVsvMaU->setGeometry(QRect(127, 110, 41, 16));
        lbVsvMaU->setFont(font);
        lbVsvaU = new QLabel(WEstatorV);
        lbVsvaU->setObjectName(QString::fromUtf8("lbVsvaU"));
        lbVsvaU->setGeometry(QRect(127, 70, 21, 16));
        lbVsvaU->setFont(font);
        lbVsvOhmsT = new QLabel(WEstatorV);
        lbVsvOhmsT->setObjectName(QString::fromUtf8("lbVsvOhmsT"));
        lbVsvOhmsT->setGeometry(QRect(5, 126, 61, 16));
        lbVsvOhmsT->setFont(font);
        lbVsvOhmsT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVsvselT = new QLabel(WEstatorV);
        lbVsvselT->setObjectName(QString::fromUtf8("lbVsvselT"));
        lbVsvselT->setGeometry(QRect(20, 54, 46, 13));
        lbVsvselT->setFont(font);
        lbVsvselT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVsvsel = new WLabel(WEstatorV);
        lbVsvsel->setObjectName(QString::fromUtf8("lbVsvsel"));
        lbVsvsel->setGeometry(QRect(72, 54, 46, 13));
        lbVsvsel->setFont(font);
        lbVsvsel->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVsvbT = new QLabel(WEstatorV);
        lbVsvbT->setObjectName(QString::fromUtf8("lbVsvbT"));
        lbVsvbT->setGeometry(QRect(20, 86, 46, 13));
        lbVsvbT->setFont(font);
        lbVsvbT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVsvOhmsU = new QLabel(WEstatorV);
        lbVsvOhmsU->setObjectName(QString::fromUtf8("lbVsvOhmsU"));
        lbVsvOhmsU->setGeometry(QRect(127, 126, 41, 16));
        lbVsvOhmsU->setFont(font);
        lbVsvselU = new QLabel(WEstatorV);
        lbVsvselU->setObjectName(QString::fromUtf8("lbVsvselU"));
        lbVsvselU->setGeometry(QRect(127, 54, 21, 16));
        lbVsvselU->setFont(font);
        lbVsvdmdT = new QLabel(WEstatorV);
        lbVsvdmdT->setObjectName(QString::fromUtf8("lbVsvdmdT"));
        lbVsvdmdT->setGeometry(QRect(5, 36, 61, 20));
        lbVsvdmdT->setFont(font);
        lbVsvdmdT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVsvaT = new QLabel(WEstatorV);
        lbVsvaT->setObjectName(QString::fromUtf8("lbVsvaT"));
        lbVsvaT->setGeometry(QRect(20, 70, 46, 13));
        lbVsvaT->setFont(font);
        lbVsvaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbFondo = new QLabel(WEstatorV);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        btCerrar = new QPushButton(WEstatorV);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btCerrar->setFont(font1);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbVsvdmd->raise();
        lbVsvOhms->raise();
        lbVsvMa->raise();
        lbVsvMaT->raise();
        lbVsvdmdU->raise();
        lbVsva->raise();
        lbVsvbU->raise();
        lbVsvb->raise();
        lbVsvMaU->raise();
        lbVsvaU->raise();
        lbVsvOhmsT->raise();
        lbVsvselT->raise();
        lbVsvsel->raise();
        lbVsvbT->raise();
        lbVsvOhmsU->raise();
        lbVsvselU->raise();
        lbVsvdmdT->raise();
        lbVsvaT->raise();
        btCerrar->raise();

        retranslateUi(WEstatorV);

        QMetaObject::connectSlotsByName(WEstatorV);
    } // setupUi

    void retranslateUi(QWidget *WEstatorV)
    {
        WEstatorV->setWindowTitle(QApplication::translate("WEstatorV", "Form", 0, QApplication::UnicodeUTF8));
        lbVsvdmd->setId(QApplication::translate("WEstatorV", "p_Fix32_THISNODE_VSVDMD_F_CV", 0, QApplication::UnicodeUTF8));
        lbVsvdmd->setText(QString());
        lbVsvOhms->setText(QString());
        lbVsvMa->setText(QString());
        lbVsvMaT->setText(QApplication::translate("WEstatorV", "VSVMA", 0, QApplication::UnicodeUTF8));
        lbVsvdmdU->setText(QApplication::translate("WEstatorV", "%", 0, QApplication::UnicodeUTF8));
        lbVsva->setId(QApplication::translate("WEstatorV", "p_Fix32_THISNODE_VSVA_F_CV", 0, QApplication::UnicodeUTF8));
        lbVsva->setText(QString());
        lbVsvbU->setText(QApplication::translate("WEstatorV", "%", 0, QApplication::UnicodeUTF8));
        lbVsvb->setId(QApplication::translate("WEstatorV", "p_Fix32_THISNODE_VSVB_F_CV", 0, QApplication::UnicodeUTF8));
        lbVsvb->setText(QString());
        lbVsvMaU->setText(QApplication::translate("WEstatorV", "MA", 0, QApplication::UnicodeUTF8));
        lbVsvaU->setText(QApplication::translate("WEstatorV", "%", 0, QApplication::UnicodeUTF8));
        lbVsvOhmsT->setText(QApplication::translate("WEstatorV", "VSVOHMS", 0, QApplication::UnicodeUTF8));
        lbVsvselT->setText(QApplication::translate("WEstatorV", "VSVSEL", 0, QApplication::UnicodeUTF8));
        lbVsvsel->setId(QApplication::translate("WEstatorV", "p_Fix32_THISNODE_VSVSEL_F_CV", 0, QApplication::UnicodeUTF8));
        lbVsvsel->setText(QString());
        lbVsvbT->setText(QApplication::translate("WEstatorV", "VSVB", 0, QApplication::UnicodeUTF8));
        lbVsvOhmsU->setText(QApplication::translate("WEstatorV", "OHMS", 0, QApplication::UnicodeUTF8));
        lbVsvselU->setText(QApplication::translate("WEstatorV", "%", 0, QApplication::UnicodeUTF8));
        lbVsvdmdT->setText(QApplication::translate("WEstatorV", "VSVDMD", 0, QApplication::UnicodeUTF8));
        lbVsvaT->setText(QApplication::translate("WEstatorV", "VSVA", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WEstatorV", "ESTATOR VARIABLE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WEstatorV: public Ui_WEstatorV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WESTATORV_H
