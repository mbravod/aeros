/********************************************************************************
** Form generated from reading UI file 'wbalancei.ui'
**
** Created: Wed 9. Oct 20:10:12 2013
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBalanceI
{
public:
    QLabel *lbtbvohms;
    QLabel *lbtbvbU;
    QLabel *lbtbvselT;
    QLabel *lbtbvselU;
    QLabel *lbtbvsel;
    QLabel *lbtbvma;
    QLabel *lbtbva;
    QLabel *lbtbvmaT;
    QLabel *lbtbvmaU;
    QLabel *lbtbvdmdT;
    QLabel *lbtbvohmsT;
    QLabel *lbtbvohmsU;
    QLabel *lbtbvdmdU;
    QLabel *lbtbvb;
    QLabel *lbtbvdmd;
    QLabel *lbtbvaU;
    QLabel *lbtbvaT;
    QLabel *lbtbvbT;
    QFrame *frame;
    QLabel *lbbalnceiT;
    QLabel *lbFondo;

    void setupUi(QWidget *WBalanceI)
    {
        if (WBalanceI->objectName().isEmpty())
            WBalanceI->setObjectName(QString::fromUtf8("WBalanceI"));
        WBalanceI->resize(175, 150);
        WBalanceI->setMinimumSize(QSize(175, 150));
        WBalanceI->setMaximumSize(QSize(175, 150));
        WBalanceI->setStyleSheet(QString::fromUtf8(""));
        lbtbvohms = new QLabel(WBalanceI);
        lbtbvohms->setObjectName(QString::fromUtf8("lbtbvohms"));
        lbtbvohms->setGeometry(QRect(72, 128, 46, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setBold(true);
        font.setWeight(75);
        lbtbvohms->setFont(font);
        lbtbvohms->setAlignment(Qt::AlignCenter);
        lbtbvbU = new QLabel(WBalanceI);
        lbtbvbU->setObjectName(QString::fromUtf8("lbtbvbU"));
        lbtbvbU->setGeometry(QRect(127, 80, 21, 16));
        lbtbvbU->setFont(font);
        lbtbvselT = new QLabel(WBalanceI);
        lbtbvselT->setObjectName(QString::fromUtf8("lbtbvselT"));
        lbtbvselT->setGeometry(QRect(20, 48, 46, 13));
        lbtbvselT->setFont(font);
        lbtbvselT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbtbvselU = new QLabel(WBalanceI);
        lbtbvselU->setObjectName(QString::fromUtf8("lbtbvselU"));
        lbtbvselU->setGeometry(QRect(127, 48, 21, 16));
        lbtbvselU->setFont(font);
        lbtbvsel = new QLabel(WBalanceI);
        lbtbvsel->setObjectName(QString::fromUtf8("lbtbvsel"));
        lbtbvsel->setGeometry(QRect(72, 48, 46, 13));
        lbtbvsel->setFont(font);
        lbtbvsel->setAlignment(Qt::AlignCenter);
        lbtbvma = new QLabel(WBalanceI);
        lbtbvma->setObjectName(QString::fromUtf8("lbtbvma"));
        lbtbvma->setGeometry(QRect(72, 112, 46, 13));
        lbtbvma->setFont(font);
        lbtbvma->setAlignment(Qt::AlignCenter);
        lbtbva = new QLabel(WBalanceI);
        lbtbva->setObjectName(QString::fromUtf8("lbtbva"));
        lbtbva->setGeometry(QRect(72, 64, 46, 13));
        lbtbva->setFont(font);
        lbtbva->setAlignment(Qt::AlignCenter);
        lbtbvmaT = new QLabel(WBalanceI);
        lbtbvmaT->setObjectName(QString::fromUtf8("lbtbvmaT"));
        lbtbvmaT->setGeometry(QRect(20, 112, 46, 13));
        lbtbvmaT->setFont(font);
        lbtbvmaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbtbvmaU = new QLabel(WBalanceI);
        lbtbvmaU->setObjectName(QString::fromUtf8("lbtbvmaU"));
        lbtbvmaU->setGeometry(QRect(127, 112, 41, 16));
        lbtbvmaU->setFont(font);
        lbtbvdmdT = new QLabel(WBalanceI);
        lbtbvdmdT->setObjectName(QString::fromUtf8("lbtbvdmdT"));
        lbtbvdmdT->setGeometry(QRect(20, 32, 46, 13));
        lbtbvdmdT->setFont(font);
        lbtbvdmdT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbtbvohmsT = new QLabel(WBalanceI);
        lbtbvohmsT->setObjectName(QString::fromUtf8("lbtbvohmsT"));
        lbtbvohmsT->setGeometry(QRect(5, 128, 61, 16));
        lbtbvohmsT->setFont(font);
        lbtbvohmsT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbtbvohmsU = new QLabel(WBalanceI);
        lbtbvohmsU->setObjectName(QString::fromUtf8("lbtbvohmsU"));
        lbtbvohmsU->setGeometry(QRect(127, 128, 41, 16));
        lbtbvohmsU->setFont(font);
        lbtbvdmdU = new QLabel(WBalanceI);
        lbtbvdmdU->setObjectName(QString::fromUtf8("lbtbvdmdU"));
        lbtbvdmdU->setGeometry(QRect(127, 32, 21, 16));
        lbtbvdmdU->setFont(font);
        lbtbvb = new QLabel(WBalanceI);
        lbtbvb->setObjectName(QString::fromUtf8("lbtbvb"));
        lbtbvb->setGeometry(QRect(72, 80, 46, 13));
        lbtbvb->setFont(font);
        lbtbvb->setAlignment(Qt::AlignCenter);
        lbtbvdmd = new QLabel(WBalanceI);
        lbtbvdmd->setObjectName(QString::fromUtf8("lbtbvdmd"));
        lbtbvdmd->setGeometry(QRect(72, 32, 46, 13));
        lbtbvdmd->setFont(font);
        lbtbvdmd->setAlignment(Qt::AlignCenter);
        lbtbvaU = new QLabel(WBalanceI);
        lbtbvaU->setObjectName(QString::fromUtf8("lbtbvaU"));
        lbtbvaU->setGeometry(QRect(127, 64, 21, 16));
        lbtbvaU->setFont(font);
        lbtbvaT = new QLabel(WBalanceI);
        lbtbvaT->setObjectName(QString::fromUtf8("lbtbvaT"));
        lbtbvaT->setGeometry(QRect(20, 64, 46, 13));
        lbtbvaT->setFont(font);
        lbtbvaT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbtbvbT = new QLabel(WBalanceI);
        lbtbvbT->setObjectName(QString::fromUtf8("lbtbvbT"));
        lbtbvbT->setGeometry(QRect(20, 80, 46, 13));
        lbtbvbT->setFont(font);
        lbtbvbT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(WBalanceI);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 173, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbbalnceiT = new QLabel(frame);
        lbbalnceiT->setObjectName(QString::fromUtf8("lbbalnceiT"));
        lbbalnceiT->setGeometry(QRect(10, 7, 151, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        lbbalnceiT->setFont(font1);
        lbbalnceiT->setFrameShape(QFrame::NoFrame);
        lbbalnceiT->setFrameShadow(QFrame::Plain);
        lbbalnceiT->setLineWidth(1);
        lbbalnceiT->setAlignment(Qt::AlignCenter);
        lbFondo = new QLabel(WBalanceI);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 175, 1502));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
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
        frame->raise();

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
        lbbalnceiT->setText(QApplication::translate("WBalanceI", "BALANCE IMPULSO", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WBalanceI: public Ui_WBalanceI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBALANCEI_H
