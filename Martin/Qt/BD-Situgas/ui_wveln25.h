/********************************************************************************
** Form generated from reading UI file 'wveln25.ui'
**
** Created: Sat 12. Oct 21:51:53 2013
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WVelN25
{
public:
    QFrame *frame;
    QLabel *lbVelN25T;
    QLabel *lbN25T_1;
    QLabel *lbN25T_2;
    QLabel *lbN25_2;
    QLabel *lbN25_1;
    QLabel *lbN25U_1;
    QLabel *lbN25U_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WVelN25)
    {
        if (WVelN25->objectName().isEmpty())
            WVelN25->setObjectName(QString::fromUtf8("WVelN25"));
        WVelN25->setWindowModality(Qt::NonModal);
        WVelN25->resize(175, 150);
        WVelN25->setMinimumSize(QSize(175, 150));
        WVelN25->setMaximumSize(QSize(175, 150));
        WVelN25->setLayoutDirection(Qt::LeftToRight);
        WVelN25->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WVelN25);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 28));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        lbVelN25T = new QLabel(WVelN25);
        lbVelN25T->setObjectName(QString::fromUtf8("lbVelN25T"));
        lbVelN25T->setGeometry(QRect(35, 2, 115, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbVelN25T->setFont(font);
        lbVelN25T->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbN25T_1 = new QLabel(WVelN25);
        lbN25T_1->setObjectName(QString::fromUtf8("lbN25T_1"));
        lbN25T_1->setGeometry(QRect(35, 30, 51, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbN25T_1->setFont(font1);
        lbN25T_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25T_2 = new QLabel(WVelN25);
        lbN25T_2->setObjectName(QString::fromUtf8("lbN25T_2"));
        lbN25T_2->setGeometry(QRect(35, 45, 51, 16));
        lbN25T_2->setFont(font1);
        lbN25T_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25_2 = new QLabel(WVelN25);
        lbN25_2->setObjectName(QString::fromUtf8("lbN25_2"));
        lbN25_2->setGeometry(QRect(98, 45, 31, 16));
        lbN25_2->setFont(font1);
        lbN25_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25_1 = new QLabel(WVelN25);
        lbN25_1->setObjectName(QString::fromUtf8("lbN25_1"));
        lbN25_1->setGeometry(QRect(98, 30, 31, 16));
        lbN25_1->setFont(font1);
        lbN25_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25U_1 = new QLabel(WVelN25);
        lbN25U_1->setObjectName(QString::fromUtf8("lbN25U_1"));
        lbN25U_1->setGeometry(QRect(133, 30, 31, 16));
        lbN25U_1->setFont(font);
        lbN25U_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbN25U_2 = new QLabel(WVelN25);
        lbN25U_2->setObjectName(QString::fromUtf8("lbN25U_2"));
        lbN25U_2->setGeometry(QRect(133, 45, 31, 16));
        lbN25U_2->setFont(font);
        lbN25U_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WVelN25);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbVelN25T->raise();
        lbN25T_1->raise();
        lbN25T_2->raise();
        lbN25_2->raise();
        lbN25_1->raise();
        lbN25U_1->raise();
        lbN25U_2->raise();

        retranslateUi(WVelN25);

        QMetaObject::connectSlotsByName(WVelN25);
    } // setupUi

    void retranslateUi(QWidget *WVelN25)
    {
        WVelN25->setWindowTitle(QApplication::translate("WVelN25", "WVelN25", 0, QApplication::UnicodeUTF8));
        lbVelN25T->setText(QApplication::translate("WVelN25", "VELOCIDAD N25", 0, QApplication::UnicodeUTF8));
        lbN25T_1->setText(QApplication::translate("WVelN25", "SE6800", 0, QApplication::UnicodeUTF8));
        lbN25T_2->setText(QApplication::translate("WVelN25", "SE6801", 0, QApplication::UnicodeUTF8));
        lbN25_2->setText(QApplication::translate("WVelN25", "0.00", 0, QApplication::UnicodeUTF8));
        lbN25_1->setText(QApplication::translate("WVelN25", "0.00", 0, QApplication::UnicodeUTF8));
        lbN25U_1->setText(QApplication::translate("WVelN25", "RPM", 0, QApplication::UnicodeUTF8));
        lbN25U_2->setText(QApplication::translate("WVelN25", "RPM", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WVelN25: public Ui_WVelN25 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WVELN25_H
