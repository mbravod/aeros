/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created: Wed 9. Oct 20:10:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QFrame *frame;
    QLabel *lbRegT;
    QLabel *lbMotorT;
    QLabel *lbReg;
    QLabel *lbReg_2;
    QLabel *lbVelNSDT;
    QLabel *lbVelN25T;
    QLabel *lbVelN25;
    QLabel *lbVelN25U;
    QLabel *lbVelNSD;
    QLabel *lbVelNSDU;
    QLabel *lbPotUnitT_2;
    QLabel *lbPotUnitT;
    QLabel *lbPotUnit;
    QLabel *lbModoQT;
    QLabel *lbModo;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName(QString::fromUtf8("Header"));
        Header->resize(1024, 40);
        Header->setMinimumSize(QSize(1024, 40));
        Header->setMaximumSize(QSize(1024, 40));
        frame = new QFrame(Header);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1024, 40));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        lbRegT = new QLabel(frame);
        lbRegT->setObjectName(QString::fromUtf8("lbRegT"));
        lbRegT->setGeometry(QRect(10, 0, 101, 16));
        lbRegT->setMinimumSize(QSize(101, 16));
        lbRegT->setMaximumSize(QSize(101, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbRegT->setFont(font);
        lbRegT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbMotorT = new QLabel(frame);
        lbMotorT->setObjectName(QString::fromUtf8("lbMotorT"));
        lbMotorT->setGeometry(QRect(10, 20, 101, 16));
        lbMotorT->setMinimumSize(QSize(101, 16));
        lbMotorT->setMaximumSize(QSize(101, 16));
        lbMotorT->setFont(font);
        lbMotorT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbReg = new QLabel(frame);
        lbReg->setObjectName(QString::fromUtf8("lbReg"));
        lbReg->setGeometry(QRect(120, 0, 250, 16));
        lbReg->setMinimumSize(QSize(250, 16));
        lbReg->setMaximumSize(QSize(250, 16));
        lbReg->setFont(font);
        lbReg->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbReg_2 = new QLabel(frame);
        lbReg_2->setObjectName(QString::fromUtf8("lbReg_2"));
        lbReg_2->setGeometry(QRect(120, 20, 250, 16));
        lbReg_2->setMinimumSize(QSize(250, 16));
        lbReg_2->setMaximumSize(QSize(250, 16));
        lbReg_2->setFont(font);
        lbReg_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelNSDT = new QLabel(frame);
        lbVelNSDT->setObjectName(QString::fromUtf8("lbVelNSDT"));
        lbVelNSDT->setGeometry(QRect(435, 20, 120, 16));
        lbVelNSDT->setMinimumSize(QSize(120, 16));
        lbVelNSDT->setMaximumSize(QSize(120, 16));
        lbVelNSDT->setFont(font);
        lbVelNSDT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelN25T = new QLabel(frame);
        lbVelN25T->setObjectName(QString::fromUtf8("lbVelN25T"));
        lbVelN25T->setGeometry(QRect(435, 0, 120, 16));
        lbVelN25T->setMinimumSize(QSize(120, 16));
        lbVelN25T->setMaximumSize(QSize(120, 16));
        lbVelN25T->setFont(font);
        lbVelN25T->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelN25 = new QLabel(frame);
        lbVelN25->setObjectName(QString::fromUtf8("lbVelN25"));
        lbVelN25->setGeometry(QRect(555, 0, 40, 16));
        lbVelN25->setFont(font);
        lbVelN25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelN25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVelN25U = new QLabel(frame);
        lbVelN25U->setObjectName(QString::fromUtf8("lbVelN25U"));
        lbVelN25U->setGeometry(QRect(600, 0, 41, 16));
        lbVelN25U->setFont(font);
        lbVelN25U->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelN25U->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbVelNSD = new QLabel(frame);
        lbVelNSD->setObjectName(QString::fromUtf8("lbVelNSD"));
        lbVelNSD->setGeometry(QRect(555, 20, 40, 16));
        lbVelNSD->setFont(font);
        lbVelNSD->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelNSD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbVelNSDU = new QLabel(frame);
        lbVelNSDU->setObjectName(QString::fromUtf8("lbVelNSDU"));
        lbVelNSDU->setGeometry(QRect(600, 20, 41, 16));
        lbVelNSDU->setFont(font);
        lbVelNSDU->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbVelNSDU->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbPotUnitT_2 = new QLabel(frame);
        lbPotUnitT_2->setObjectName(QString::fromUtf8("lbPotUnitT_2"));
        lbPotUnitT_2->setGeometry(QRect(940, 0, 41, 16));
        lbPotUnitT_2->setFont(font);
        lbPotUnitT_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbPotUnitT_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbPotUnitT = new QLabel(frame);
        lbPotUnitT->setObjectName(QString::fromUtf8("lbPotUnitT"));
        lbPotUnitT->setGeometry(QRect(704, 0, 181, 16));
        lbPotUnitT->setFont(font);
        lbPotUnitT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbPotUnit = new QLabel(frame);
        lbPotUnit->setObjectName(QString::fromUtf8("lbPotUnit"));
        lbPotUnit->setGeometry(QRect(895, 0, 40, 16));
        lbPotUnit->setFont(font);
        lbPotUnit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbPotUnit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbModoQT = new QLabel(frame);
        lbModoQT->setObjectName(QString::fromUtf8("lbModoQT"));
        lbModoQT->setGeometry(QRect(701, 20, 131, 16));
        lbModoQT->setFont(font);
        lbModoQT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbModo = new QLabel(frame);
        lbModo->setObjectName(QString::fromUtf8("lbModo"));
        lbModo->setGeometry(QRect(850, 20, 115, 16));
        lbModo->setFont(font);
        lbModo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QApplication::translate("Header", "Form", 0, QApplication::UnicodeUTF8));
        lbRegT->setText(QApplication::translate("Header", "REGULADOR", 0, QApplication::UnicodeUTF8));
        lbMotorT->setText(QApplication::translate("Header", "MODO MOTOR", 0, QApplication::UnicodeUTF8));
        lbReg->setText(QString());
        lbReg_2->setText(QString());
        lbVelNSDT->setText(QApplication::translate("Header", "VELOCIDAD NSD", 0, QApplication::UnicodeUTF8));
        lbVelN25T->setText(QApplication::translate("Header", "VELOCIDAD N25", 0, QApplication::UnicodeUTF8));
        lbVelN25->setText(QApplication::translate("Header", "0000", 0, QApplication::UnicodeUTF8));
        lbVelN25U->setText(QApplication::translate("Header", "RPM", 0, QApplication::UnicodeUTF8));
        lbVelNSD->setText(QApplication::translate("Header", "0000", 0, QApplication::UnicodeUTF8));
        lbVelNSDU->setText(QApplication::translate("Header", "RPM", 0, QApplication::UnicodeUTF8));
        lbPotUnitT_2->setText(QApplication::translate("Header", "MW", 0, QApplication::UnicodeUTF8));
        lbPotUnitT->setText(QApplication::translate("Header", "POTENCIA DE LA UNIDAD", 0, QApplication::UnicodeUTF8));
        lbPotUnit->setText(QApplication::translate("Header", "0000", 0, QApplication::UnicodeUTF8));
        lbModoQT->setText(QApplication::translate("Header", "MODO QUEMADOR", 0, QApplication::UnicodeUTF8));
        lbModo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H
