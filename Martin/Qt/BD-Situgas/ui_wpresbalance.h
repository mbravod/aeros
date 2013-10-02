/********************************************************************************
** Form generated from reading UI file 'wpresbalance.ui'
**
** Created: Mon 23. Sep 20:33:29 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPRESBALANCE_H
#define UI_WPRESBALANCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WPresBalance
{
public:
    QFrame *frame;
    QLabel *lbPreBALIT;
    QLabel *lbBALIT_1;
    QLabel *lbBALI_1;
    QLabel *lbBALIU_1;
    QLabel *lbBALIU_2;
    QLabel *lbBALIT_2;
    QLabel *lbBALI_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WPresBalance)
    {
        if (WPresBalance->objectName().isEmpty())
            WPresBalance->setObjectName(QString::fromUtf8("WPresBalance"));
        WPresBalance->resize(175, 150);
        WPresBalance->setMinimumSize(QSize(175, 150));
        WPresBalance->setMaximumSize(QSize(175, 150));
        WPresBalance->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WPresBalance);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        lbPreBALIT = new QLabel(WPresBalance);
        lbPreBALIT->setObjectName(QString::fromUtf8("lbPreBALIT"));
        lbPreBALIT->setGeometry(QRect(3, 7, 170, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbPreBALIT->setFont(font);
        lbPreBALIT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbBALIT_1 = new QLabel(WPresBalance);
        lbBALIT_1->setObjectName(QString::fromUtf8("lbBALIT_1"));
        lbBALIT_1->setGeometry(QRect(30, 32, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbBALIT_1->setFont(font1);
        lbBALIT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbBALI_1 = new QLabel(WPresBalance);
        lbBALI_1->setObjectName(QString::fromUtf8("lbBALI_1"));
        lbBALI_1->setGeometry(QRect(95, 32, 38, 15));
        lbBALI_1->setFont(font1);
        lbBALI_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbBALIU_1 = new QLabel(WPresBalance);
        lbBALIU_1->setObjectName(QString::fromUtf8("lbBALIU_1"));
        lbBALIU_1->setGeometry(QRect(135, 32, 38, 15));
        lbBALIU_1->setFont(font1);
        lbBALIU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbBALIU_2 = new QLabel(WPresBalance);
        lbBALIU_2->setObjectName(QString::fromUtf8("lbBALIU_2"));
        lbBALIU_2->setGeometry(QRect(135, 50, 38, 15));
        lbBALIU_2->setFont(font1);
        lbBALIU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbBALIT_2 = new QLabel(WPresBalance);
        lbBALIT_2->setObjectName(QString::fromUtf8("lbBALIT_2"));
        lbBALIT_2->setGeometry(QRect(30, 50, 61, 16));
        lbBALIT_2->setFont(font1);
        lbBALIT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbBALI_2 = new QLabel(WPresBalance);
        lbBALI_2->setObjectName(QString::fromUtf8("lbBALI_2"));
        lbBALI_2->setGeometry(QRect(95, 50, 38, 15));
        lbBALI_2->setFont(font1);
        lbBALI_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WPresBalance);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbPreBALIT->raise();
        lbBALIT_1->raise();
        lbBALI_1->raise();
        lbBALIU_1->raise();
        lbBALIU_2->raise();
        lbBALIT_2->raise();
        lbBALI_2->raise();

        retranslateUi(WPresBalance);

        QMetaObject::connectSlotsByName(WPresBalance);
    } // setupUi

    void retranslateUi(QWidget *WPresBalance)
    {
        WPresBalance->setWindowTitle(QApplication::translate("WPresBalance", "WPresBalance", 0, QApplication::UnicodeUTF8));
        lbPreBALIT->setText(QApplication::translate("WPresBalance", "PRES BALANCE IMPULSO", 0, QApplication::UnicodeUTF8));
        lbBALIT_1->setText(QApplication::translate("WPresBalance", "PT6861A", 0, QApplication::UnicodeUTF8));
        lbBALI_1->setText(QApplication::translate("WPresBalance", "11.30", 0, QApplication::UnicodeUTF8));
        lbBALIU_1->setText(QApplication::translate("WPresBalance", "PSIA", 0, QApplication::UnicodeUTF8));
        lbBALIU_2->setText(QApplication::translate("WPresBalance", "PSIA", 0, QApplication::UnicodeUTF8));
        lbBALIT_2->setText(QApplication::translate("WPresBalance", "PT6861B", 0, QApplication::UnicodeUTF8));
        lbBALI_2->setText(QApplication::translate("WPresBalance", "11.60", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WPresBalance: public Ui_WPresBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPRESBALANCE_H
