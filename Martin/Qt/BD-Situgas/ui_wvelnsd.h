/********************************************************************************
** Form generated from reading UI file 'wvelnsd.ui'
**
** Created: Sat 12. Oct 11:06:15 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WVELNSD_H
#define UI_WVELNSD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WVelNSD
{
public:
    QFrame *frame;
    QLabel *lbVelNSDT;
    QLabel *lbNSDT_1;
    QLabel *lbNSDT_2;
    QLabel *lbNSD_1;
    QLabel *lbNSDU_1;
    QLabel *lbNSDU_2;
    QLabel *lbNSD_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WVelNSD)
    {
        if (WVelNSD->objectName().isEmpty())
            WVelNSD->setObjectName(QString::fromUtf8("WVelNSD"));
        WVelNSD->resize(175, 150);
        WVelNSD->setMinimumSize(QSize(175, 150));
        WVelNSD->setMaximumSize(QSize(175, 150));
        WVelNSD->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WVelNSD);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 30));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        lbVelNSDT = new QLabel(WVelNSD);
        lbVelNSDT->setObjectName(QString::fromUtf8("lbVelNSDT"));
        lbVelNSDT->setGeometry(QRect(35, 5, 121, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbVelNSDT->setFont(font);
        lbVelNSDT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbNSDT_1 = new QLabel(WVelNSD);
        lbNSDT_1->setObjectName(QString::fromUtf8("lbNSDT_1"));
        lbNSDT_1->setGeometry(QRect(38, 30, 51, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbNSDT_1->setFont(font1);
        lbNSDT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNSDT_2 = new QLabel(WVelNSD);
        lbNSDT_2->setObjectName(QString::fromUtf8("lbNSDT_2"));
        lbNSDT_2->setGeometry(QRect(38, 45, 51, 20));
        lbNSDT_2->setFont(font1);
        lbNSDT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNSD_1 = new QLabel(WVelNSD);
        lbNSD_1->setObjectName(QString::fromUtf8("lbNSD_1"));
        lbNSD_1->setGeometry(QRect(98, 30, 31, 20));
        lbNSD_1->setFont(font1);
        lbNSD_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNSDU_1 = new QLabel(WVelNSD);
        lbNSDU_1->setObjectName(QString::fromUtf8("lbNSDU_1"));
        lbNSDU_1->setGeometry(QRect(135, 30, 31, 20));
        lbNSDU_1->setFont(font1);
        lbNSDU_1->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNSDU_2 = new QLabel(WVelNSD);
        lbNSDU_2->setObjectName(QString::fromUtf8("lbNSDU_2"));
        lbNSDU_2->setGeometry(QRect(135, 45, 31, 20));
        lbNSDU_2->setFont(font1);
        lbNSDU_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbNSD_2 = new QLabel(WVelNSD);
        lbNSD_2->setObjectName(QString::fromUtf8("lbNSD_2"));
        lbNSD_2->setGeometry(QRect(98, 45, 31, 20));
        lbNSD_2->setFont(font1);
        lbNSD_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo = new QLabel(WVelNSD);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbVelNSDT->raise();
        lbNSDT_1->raise();
        lbNSDT_2->raise();
        lbNSD_1->raise();
        lbNSDU_1->raise();
        lbNSDU_2->raise();
        lbNSD_2->raise();

        retranslateUi(WVelNSD);

        QMetaObject::connectSlotsByName(WVelNSD);
    } // setupUi

    void retranslateUi(QWidget *WVelNSD)
    {
        WVelNSD->setWindowTitle(QApplication::translate("WVelNSD", "WVelNSD", 0, QApplication::UnicodeUTF8));
        lbVelNSDT->setText(QApplication::translate("WVelNSD", "VELOCIDAD NSD", 0, QApplication::UnicodeUTF8));
        lbNSDT_1->setText(QApplication::translate("WVelNSD", "SE6812", 0, QApplication::UnicodeUTF8));
        lbNSDT_2->setText(QApplication::translate("WVelNSD", "SE6812", 0, QApplication::UnicodeUTF8));
        lbNSD_1->setText(QApplication::translate("WVelNSD", "0.00", 0, QApplication::UnicodeUTF8));
        lbNSDU_1->setText(QApplication::translate("WVelNSD", "RPM", 0, QApplication::UnicodeUTF8));
        lbNSDU_2->setText(QApplication::translate("WVelNSD", "RPM", 0, QApplication::UnicodeUTF8));
        lbNSD_2->setText(QApplication::translate("WVelNSD", "0.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WVelNSD: public Ui_WVelNSD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WVELNSD_H
