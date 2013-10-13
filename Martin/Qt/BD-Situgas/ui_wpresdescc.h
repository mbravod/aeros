/********************************************************************************
** Form generated from reading UI file 'wpresdescc.ui'
**
** Created: Sat 12. Oct 21:52:00 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPRESDESCC_H
#define UI_WPRESDESCC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WPresDescC
{
public:
    QFrame *frame;
    QLabel *lbPreDESCT;
    QLabel *lbDESCT_1;
    QLabel *lbDESC_1;
    QLabel *lbDESCU_1;
    QLabel *lbDESCU_2;
    QLabel *lbDESC_2;
    QLabel *lbDESCT_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WPresDescC)
    {
        if (WPresDescC->objectName().isEmpty())
            WPresDescC->setObjectName(QString::fromUtf8("WPresDescC"));
        WPresDescC->resize(175, 150);
        WPresDescC->setMinimumSize(QSize(175, 150));
        WPresDescC->setMaximumSize(QSize(175, 150));
        WPresDescC->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WPresDescC);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 29));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        lbPreDESCT = new QLabel(WPresDescC);
        lbPreDESCT->setObjectName(QString::fromUtf8("lbPreDESCT"));
        lbPreDESCT->setGeometry(QRect(6, 3, 161, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbPreDESCT->setFont(font);
        lbPreDESCT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbDESCT_1 = new QLabel(WPresDescC);
        lbDESCT_1->setObjectName(QString::fromUtf8("lbDESCT_1"));
        lbDESCT_1->setGeometry(QRect(38, 31, 52, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbDESCT_1->setFont(font1);
        lbDESCT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbDESC_1 = new QLabel(WPresDescC);
        lbDESC_1->setObjectName(QString::fromUtf8("lbDESC_1"));
        lbDESC_1->setGeometry(QRect(94, 31, 41, 15));
        lbDESC_1->setFont(font1);
        lbDESC_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbDESCU_1 = new QLabel(WPresDescC);
        lbDESCU_1->setObjectName(QString::fromUtf8("lbDESCU_1"));
        lbDESCU_1->setGeometry(QRect(135, 31, 41, 15));
        lbDESCU_1->setFont(font1);
        lbDESCU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbDESCU_2 = new QLabel(WPresDescC);
        lbDESCU_2->setObjectName(QString::fromUtf8("lbDESCU_2"));
        lbDESCU_2->setGeometry(QRect(135, 43, 41, 20));
        lbDESCU_2->setFont(font1);
        lbDESCU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbDESC_2 = new QLabel(WPresDescC);
        lbDESC_2->setObjectName(QString::fromUtf8("lbDESC_2"));
        lbDESC_2->setGeometry(QRect(94, 43, 41, 20));
        lbDESC_2->setFont(font1);
        lbDESC_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbDESCT_2 = new QLabel(WPresDescC);
        lbDESCT_2->setObjectName(QString::fromUtf8("lbDESCT_2"));
        lbDESCT_2->setGeometry(QRect(38, 43, 52, 20));
        lbDESCT_2->setFont(font1);
        lbDESCT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WPresDescC);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbPreDESCT->raise();
        lbDESCT_1->raise();
        lbDESC_1->raise();
        lbDESCU_1->raise();
        lbDESCU_2->raise();
        lbDESC_2->raise();
        lbDESCT_2->raise();

        retranslateUi(WPresDescC);

        QMetaObject::connectSlotsByName(WPresDescC);
    } // setupUi

    void retranslateUi(QWidget *WPresDescC)
    {
        WPresDescC->setWindowTitle(QApplication::translate("WPresDescC", "WPresDescC", 0, QApplication::UnicodeUTF8));
        lbPreDESCT->setText(QApplication::translate("WPresDescC", "PRES DESCARGA COMP", 0, QApplication::UnicodeUTF8));
        lbDESCT_1->setText(QApplication::translate("WPresDescC", "PT6804", 0, QApplication::UnicodeUTF8));
        lbDESC_1->setText(QApplication::translate("WPresDescC", "10.90", 0, QApplication::UnicodeUTF8));
        lbDESCU_1->setText(QApplication::translate("WPresDescC", "PSIA", 0, QApplication::UnicodeUTF8));
        lbDESCU_2->setText(QApplication::translate("WPresDescC", "PSIA", 0, QApplication::UnicodeUTF8));
        lbDESC_2->setText(QApplication::translate("WPresDescC", "11.30", 0, QApplication::UnicodeUTF8));
        lbDESCT_2->setText(QApplication::translate("WPresDescC", "PT6814", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WPresDescC: public Ui_WPresDescC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPRESDESCC_H
