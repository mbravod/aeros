/********************************************************************************
** Form generated from reading UI file 'wtempcompa1.ui'
**
** Created: Sat 12. Oct 11:06:17 2013
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WTempCompA1
{
public:
    QFrame *frame;
    QLabel *lbTemCOMAT;
    QLabel *lbCOMAT_1;
    QLabel *lbCOMA_1;
    QLabel *lbCOMAU_1;
    QLabel *lbCOMAU_2;
    QLabel *lbCOMAT_2;
    QLabel *lbCOMA_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WTempCompA1)
    {
        if (WTempCompA1->objectName().isEmpty())
            WTempCompA1->setObjectName(QString::fromUtf8("WTempCompA1"));
        WTempCompA1->resize(175, 150);
        WTempCompA1->setMinimumSize(QSize(175, 150));
        WTempCompA1->setMaximumSize(QSize(175, 150));
        WTempCompA1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WTempCompA1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 29));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        lbTemCOMAT = new QLabel(WTempCompA1);
        lbTemCOMAT->setObjectName(QString::fromUtf8("lbTemCOMAT"));
        lbTemCOMAT->setGeometry(QRect(3, 6, 168, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbTemCOMAT->setFont(font);
        lbTemCOMAT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbCOMAT_1 = new QLabel(WTempCompA1);
        lbCOMAT_1->setObjectName(QString::fromUtf8("lbCOMAT_1"));
        lbCOMAT_1->setGeometry(QRect(30, 31, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbCOMAT_1->setFont(font1);
        lbCOMAT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_1 = new QLabel(WTempCompA1);
        lbCOMA_1->setObjectName(QString::fromUtf8("lbCOMA_1"));
        lbCOMA_1->setGeometry(QRect(94, 31, 40, 16));
        lbCOMA_1->setFont(font1);
        lbCOMA_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAU_1 = new QLabel(WTempCompA1);
        lbCOMAU_1->setObjectName(QString::fromUtf8("lbCOMAU_1"));
        lbCOMAU_1->setGeometry(QRect(135, 31, 16, 16));
        lbCOMAU_1->setFont(font1);
        lbCOMAU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAU_2 = new QLabel(WTempCompA1);
        lbCOMAU_2->setObjectName(QString::fromUtf8("lbCOMAU_2"));
        lbCOMAU_2->setGeometry(QRect(135, 48, 16, 16));
        lbCOMAU_2->setFont(font1);
        lbCOMAU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMAT_2 = new QLabel(WTempCompA1);
        lbCOMAT_2->setObjectName(QString::fromUtf8("lbCOMAT_2"));
        lbCOMAT_2->setGeometry(QRect(30, 48, 61, 16));
        lbCOMAT_2->setFont(font1);
        lbCOMAT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbCOMA_2 = new QLabel(WTempCompA1);
        lbCOMA_2->setObjectName(QString::fromUtf8("lbCOMA_2"));
        lbCOMA_2->setGeometry(QRect(94, 48, 40, 16));
        lbCOMA_2->setFont(font1);
        lbCOMA_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WTempCompA1);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbTemCOMAT->raise();
        lbCOMAT_1->raise();
        lbCOMA_1->raise();
        lbCOMAU_1->raise();
        lbCOMAU_2->raise();
        lbCOMAT_2->raise();
        lbCOMA_2->raise();

        retranslateUi(WTempCompA1);

        QMetaObject::connectSlotsByName(WTempCompA1);
    } // setupUi

    void retranslateUi(QWidget *WTempCompA1)
    {
        WTempCompA1->setWindowTitle(QApplication::translate("WTempCompA1", "WTempCompA1", 0, QApplication::UnicodeUTF8));
        lbTemCOMAT->setText(QApplication::translate("WTempCompA1", "TEMP COMPRESOR DE A", 0, QApplication::UnicodeUTF8));
        lbCOMAT_1->setText(QApplication::translate("WTempCompA1", "TE6837A", 0, QApplication::UnicodeUTF8));
        lbCOMA_1->setText(QApplication::translate("WTempCompA1", "76.00", 0, QApplication::UnicodeUTF8));
        lbCOMAU_1->setText(QApplication::translate("WTempCompA1", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMAU_2->setText(QApplication::translate("WTempCompA1", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbCOMAT_2->setText(QApplication::translate("WTempCompA1", "TE6837B", 0, QApplication::UnicodeUTF8));
        lbCOMA_2->setText(QApplication::translate("WTempCompA1", "76.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WTempCompA1: public Ui_WTempCompA1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPCOMPA1_H
