/********************************************************************************
** Form generated from reading UI file 'wvigb.ui'
**
** Created: Thu 19. Dec 14:36:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WVIGB_H
#define UI_WVIGB_H

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

class Ui_WVIGB
{
public:
    QLabel *lbVIGVT_3;
    WLabel *lbVIGV_2;
    WLabel *lbVIGV_4;
    WLabel *lbVIGV_6;
    WLabel *lbVIGV_1;
    QLabel *lbVIGVU_2;
    WLabel *lbVIGV_5;
    QLabel *lbVIGVT_5;
    QLabel *lbVIGVU_1;
    QLabel *lbVIGVT_6;
    QLabel *lbVIGVU_3;
    QLabel *lbVIGVU_4;
    QLabel *lbVIGVU_6;
    QLabel *lbVIGVT_1;
    QLabel *lbVIGVT_4;
    QLabel *lbVIGVT_2;
    WLabel *lbVIGV_3;
    QLabel *lbVIGVU_5;
    QLabel *lbFondo;
    QPushButton *btCerrar;

    void setupUi(QWidget *WVIGB)
    {
        if (WVIGB->objectName().isEmpty())
            WVIGB->setObjectName(QString::fromUtf8("WVIGB"));
        WVIGB->resize(175, 150);
        WVIGB->setMinimumSize(QSize(175, 150));
        WVIGB->setMaximumSize(QSize(175, 150));
        WVIGB->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVT_3 = new QLabel(WVIGB);
        lbVIGVT_3->setObjectName(QString::fromUtf8("lbVIGVT_3"));
        lbVIGVT_3->setGeometry(QRect(44, 60, 35, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        lbVIGVT_3->setFont(font);
        lbVIGVT_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_2 = new WLabel(WVIGB);
        lbVIGV_2->setObjectName(QString::fromUtf8("lbVIGV_2"));
        lbVIGV_2->setGeometry(QRect(85, 45, 41, 20));
        lbVIGV_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbVIGV_2->setFont(font1);
        lbVIGV_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGV_4 = new WLabel(WVIGB);
        lbVIGV_4->setObjectName(QString::fromUtf8("lbVIGV_4"));
        lbVIGV_4->setGeometry(QRect(85, 75, 41, 16));
        lbVIGV_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_4->setFont(font1);
        lbVIGV_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGV_6 = new WLabel(WVIGB);
        lbVIGV_6->setObjectName(QString::fromUtf8("lbVIGV_6"));
        lbVIGV_6->setGeometry(QRect(92, 120, 35, 16));
        lbVIGV_6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_6->setFont(font1);
        lbVIGV_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGV_1 = new WLabel(WVIGB);
        lbVIGV_1->setObjectName(QString::fromUtf8("lbVIGV_1"));
        lbVIGV_1->setGeometry(QRect(85, 32, 41, 15));
        lbVIGV_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_1->setTipo(-1);
        lbVIGV_1->setValueF(0);
        lbVIGV_1->setValue(-1);
        lbVIGV_1->setFont(font1);
        lbVIGV_1->setPresicion(0);
        lbVIGV_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGVU_2 = new QLabel(WVIGB);
        lbVIGVU_2->setObjectName(QString::fromUtf8("lbVIGVU_2"));
        lbVIGVU_2->setGeometry(QRect(135, 45, 21, 16));
        lbVIGVU_2->setFont(font1);
        lbVIGVU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_5 = new WLabel(WVIGB);
        lbVIGV_5->setObjectName(QString::fromUtf8("lbVIGV_5"));
        lbVIGV_5->setGeometry(QRect(85, 105, 41, 15));
        lbVIGV_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_5->setFont(font1);
        lbVIGV_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGVT_5 = new QLabel(WVIGB);
        lbVIGVT_5->setObjectName(QString::fromUtf8("lbVIGVT_5"));
        lbVIGVT_5->setGeometry(QRect(35, 105, 51, 16));
        lbVIGVT_5->setFont(font);
        lbVIGVT_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVU_1 = new QLabel(WVIGB);
        lbVIGVU_1->setObjectName(QString::fromUtf8("lbVIGVU_1"));
        lbVIGVU_1->setGeometry(QRect(135, 32, 21, 16));
        lbVIGVU_1->setFont(font1);
        lbVIGVU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVT_6 = new QLabel(WVIGB);
        lbVIGVT_6->setObjectName(QString::fromUtf8("lbVIGVT_6"));
        lbVIGVT_6->setGeometry(QRect(15, 120, 71, 20));
        lbVIGVT_6->setFont(font);
        lbVIGVT_6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVU_3 = new QLabel(WVIGB);
        lbVIGVU_3->setObjectName(QString::fromUtf8("lbVIGVU_3"));
        lbVIGVU_3->setGeometry(QRect(135, 60, 21, 16));
        lbVIGVU_3->setFont(font1);
        lbVIGVU_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVU_4 = new QLabel(WVIGB);
        lbVIGVU_4->setObjectName(QString::fromUtf8("lbVIGVU_4"));
        lbVIGVU_4->setGeometry(QRect(135, 75, 21, 16));
        lbVIGVU_4->setFont(font1);
        lbVIGVU_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVU_6 = new QLabel(WVIGB);
        lbVIGVU_6->setObjectName(QString::fromUtf8("lbVIGVU_6"));
        lbVIGVU_6->setGeometry(QRect(135, 120, 41, 16));
        lbVIGVU_6->setFont(font1);
        lbVIGVU_6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"background-color: rgba(255, 255, 255, 0);"));
        lbVIGVT_1 = new QLabel(WVIGB);
        lbVIGVT_1->setObjectName(QString::fromUtf8("lbVIGVT_1"));
        lbVIGVT_1->setGeometry(QRect(25, 32, 55, 16));
        lbVIGVT_1->setFont(font1);
        lbVIGVT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVT_4 = new QLabel(WVIGB);
        lbVIGVT_4->setObjectName(QString::fromUtf8("lbVIGVT_4"));
        lbVIGVT_4->setGeometry(QRect(44, 75, 35, 16));
        lbVIGVT_4->setFont(font);
        lbVIGVT_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVT_2 = new QLabel(WVIGB);
        lbVIGVT_2->setObjectName(QString::fromUtf8("lbVIGVT_2"));
        lbVIGVT_2->setGeometry(QRect(25, 45, 51, 16));
        lbVIGVT_2->setFont(font1);
        lbVIGVT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGVT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVIGV_3 = new WLabel(WVIGB);
        lbVIGV_3->setObjectName(QString::fromUtf8("lbVIGV_3"));
        lbVIGV_3->setGeometry(QRect(85, 60, 41, 15));
        lbVIGV_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbVIGV_3->setFont(font1);
        lbVIGV_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbVIGVU_5 = new QLabel(WVIGB);
        lbVIGVU_5->setObjectName(QString::fromUtf8("lbVIGVU_5"));
        lbVIGVU_5->setGeometry(QRect(135, 105, 21, 16));
        lbVIGVU_5->setFont(font1);
        lbVIGVU_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WVIGB);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 176, 151));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        btCerrar = new QPushButton(WVIGB);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(1, 1, 173, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbFondo->raise();
        lbVIGVT_3->raise();
        lbVIGV_2->raise();
        lbVIGV_4->raise();
        lbVIGV_6->raise();
        lbVIGV_1->raise();
        lbVIGVU_2->raise();
        lbVIGV_5->raise();
        lbVIGVT_5->raise();
        lbVIGVU_1->raise();
        lbVIGVT_6->raise();
        lbVIGVU_3->raise();
        lbVIGVU_4->raise();
        lbVIGVU_6->raise();
        lbVIGVT_1->raise();
        lbVIGVT_4->raise();
        lbVIGVT_2->raise();
        lbVIGV_3->raise();
        lbVIGVU_5->raise();
        btCerrar->raise();

        retranslateUi(WVIGB);

        QMetaObject::connectSlotsByName(WVIGB);
    } // setupUi

    void retranslateUi(QWidget *WVIGB)
    {
        WVIGB->setWindowTitle(QApplication::translate("WVIGB", "WVIGB", 0, QApplication::UnicodeUTF8));
        lbVIGVT_3->setText(QApplication::translate("WVIGB", "IGVA", 0, QApplication::UnicodeUTF8));
        lbVIGV_2->setId(QApplication::translate("WVIGB", "p_Fix32_THISNODE_IGVSEL_F_CV", 0, QApplication::UnicodeUTF8));
        lbVIGV_2->setText(QApplication::translate("WVIGB", "41.60", 0, QApplication::UnicodeUTF8));
        lbVIGV_4->setId(QApplication::translate("WVIGB", "p_Fix32_THISNODE_IGVB_F_CV", 0, QApplication::UnicodeUTF8));
        lbVIGV_4->setText(QApplication::translate("WVIGB", "40.90", 0, QApplication::UnicodeUTF8));
        lbVIGV_6->setText(QApplication::translate("WVIGB", "20.00", 0, QApplication::UnicodeUTF8));
        lbVIGV_1->setId(QApplication::translate("WVIGB", "p_Fix32_THISNODE_IGVDMD_F_CV", 0, QApplication::UnicodeUTF8));
        lbVIGV_1->setText(QApplication::translate("WVIGB", "0.00", 0, QApplication::UnicodeUTF8));
        lbVIGVU_2->setText(QApplication::translate("WVIGB", "%", 0, QApplication::UnicodeUTF8));
        lbVIGV_5->setText(QApplication::translate("WVIGB", "-14.63", 0, QApplication::UnicodeUTF8));
        lbVIGVT_5->setText(QApplication::translate("WVIGB", "IGVMA", 0, QApplication::UnicodeUTF8));
        lbVIGVU_1->setText(QApplication::translate("WVIGB", "%", 0, QApplication::UnicodeUTF8));
        lbVIGVT_6->setText(QApplication::translate("WVIGB", "IGVOHMS", 0, QApplication::UnicodeUTF8));
        lbVIGVU_3->setText(QApplication::translate("WVIGB", "%", 0, QApplication::UnicodeUTF8));
        lbVIGVU_4->setText(QApplication::translate("WVIGB", "%", 0, QApplication::UnicodeUTF8));
        lbVIGVU_6->setText(QApplication::translate("WVIGB", "OHMS", 0, QApplication::UnicodeUTF8));
        lbVIGVT_1->setText(QApplication::translate("WVIGB", "IGVDMD", 0, QApplication::UnicodeUTF8));
        lbVIGVT_4->setText(QApplication::translate("WVIGB", "IGVB", 0, QApplication::UnicodeUTF8));
        lbVIGVT_2->setText(QApplication::translate("WVIGB", "IGVSEL", 0, QApplication::UnicodeUTF8));
        lbVIGV_3->setId(QApplication::translate("WVIGB", "p_Fix32_THISNODE_IGVA_F_CV", 0, QApplication::UnicodeUTF8));
        lbVIGV_3->setText(QApplication::translate("WVIGB", "41.30", 0, QApplication::UnicodeUTF8));
        lbVIGVU_5->setText(QApplication::translate("WVIGB", "MA", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
        btCerrar->setText(QApplication::translate("WVIGB", "VIGV", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WVIGB: public Ui_WVIGB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WVIGB_H
