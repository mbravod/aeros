/********************************************************************************
** Form generated from reading UI file 'wtempadm.ui'
**
** Created: Wed 9. Oct 20:10:11 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WTEMPADM_H
#define UI_WTEMPADM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WTempADM
{
public:
    QFrame *frame;
    QLabel *lbTemADMT;
    QLabel *lbADMT_1;
    QLabel *lbADM_1;
    QLabel *lbADMU_1;
    QLabel *lbADMU_2;
    QLabel *lbADM_2;
    QLabel *lbADMT_2;
    QLabel *lbFondo;

    void setupUi(QWidget *WTempADM)
    {
        if (WTempADM->objectName().isEmpty())
            WTempADM->setObjectName(QString::fromUtf8("WTempADM"));
        WTempADM->resize(175, 150);
        WTempADM->setMinimumSize(QSize(175, 150));
        WTempADM->setMaximumSize(QSize(175, 150));
        WTempADM->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(WTempADM);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 175, 29));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        lbTemADMT = new QLabel(WTempADM);
        lbTemADMT->setObjectName(QString::fromUtf8("lbTemADMT"));
        lbTemADMT->setGeometry(QRect(2, 4, 171, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lbTemADMT->setFont(font);
        lbTemADMT->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        lbADMT_1 = new QLabel(WTempADM);
        lbADMT_1->setObjectName(QString::fromUtf8("lbADMT_1"));
        lbADMT_1->setGeometry(QRect(31, 31, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbADMT_1->setFont(font1);
        lbADM_1 = new QLabel(WTempADM);
        lbADM_1->setObjectName(QString::fromUtf8("lbADM_1"));
        lbADM_1->setGeometry(QRect(94, 31, 41, 16));
        lbADM_1->setFont(font1);
        lbADMU_1 = new QLabel(WTempADM);
        lbADMU_1->setObjectName(QString::fromUtf8("lbADMU_1"));
        lbADMU_1->setGeometry(QRect(135, 31, 21, 16));
        lbADMU_1->setFont(font1);
        lbADMU_2 = new QLabel(WTempADM);
        lbADMU_2->setObjectName(QString::fromUtf8("lbADMU_2"));
        lbADMU_2->setGeometry(QRect(135, 45, 21, 16));
        lbADMU_2->setFont(font1);
        lbADM_2 = new QLabel(WTempADM);
        lbADM_2->setObjectName(QString::fromUtf8("lbADM_2"));
        lbADM_2->setGeometry(QRect(94, 45, 41, 16));
        lbADM_2->setFont(font1);
        lbADMT_2 = new QLabel(WTempADM);
        lbADMT_2->setObjectName(QString::fromUtf8("lbADMT_2"));
        lbADMT_2->setGeometry(QRect(30, 45, 61, 16));
        lbADMT_2->setFont(font1);
        lbFondo = new QLabel(WTempADM);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 150));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame->raise();
        lbTemADMT->raise();
        lbADMT_1->raise();
        lbADM_1->raise();
        lbADMU_1->raise();
        lbADMU_2->raise();
        lbADM_2->raise();
        lbADMT_2->raise();

        retranslateUi(WTempADM);

        QMetaObject::connectSlotsByName(WTempADM);
    } // setupUi

    void retranslateUi(QWidget *WTempADM)
    {
        WTempADM->setWindowTitle(QApplication::translate("WTempADM", "WTempADM", 0, QApplication::UnicodeUTF8));
        lbTemADMT->setText(QApplication::translate("WTempADM", "TEMP ADM AL COMP DE B", 0, QApplication::UnicodeUTF8));
        lbADMT_1->setText(QApplication::translate("WTempADM", "TE6821A", 0, QApplication::UnicodeUTF8));
        lbADM_1->setText(QApplication::translate("WTempADM", "65.00", 0, QApplication::UnicodeUTF8));
        lbADMU_1->setText(QApplication::translate("WTempADM", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbADMU_2->setText(QApplication::translate("WTempADM", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbADM_2->setText(QApplication::translate("WTempADM", "65.00", 0, QApplication::UnicodeUTF8));
        lbADMT_2->setText(QApplication::translate("WTempADM", "TE6821B", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WTempADM: public Ui_WTempADM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WTEMPADM_H
