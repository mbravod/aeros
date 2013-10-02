/********************************************************************************
** Form generated from reading UI file 'analog16.ui'
**
** Created: Mon 23. Sep 20:33:28 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOG16_H
#define UI_ANALOG16_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Analog16
{
public:
    QFrame *frBarraT;
    QLabel *lbAna16T;
    QFrame *frame;
    QLabel *lbSloACT;
    QLabel *lbACT_1;
    QLabel *lbACTU_1;
    QLabel *lbNumACT_1;
    QLabel *lbACTT_1;
    QLabel *lbACTU_2;
    QLabel *lbACTT_2;
    QLabel *lbACT_2;
    QLabel *lbNumACT_2;
    QLabel *lbNumACT_3;
    QLabel *lbACTT_3;
    QLabel *lbACTU_3;
    QLabel *lbACT_3;
    QLabel *lbACTT_4;
    QLabel *lbACTU_4;
    QLabel *lbACT_4;
    QLabel *lbNumACT_4;
    QLabel *lbNumACT_5;
    QLabel *lbACTU_5;
    QLabel *lbACT_5;
    QLabel *lbACTT_5;
    QLabel *lbNumACT_6;
    QLabel *lbACT_6;
    QLabel *lbACTT_6;
    QLabel *lbACTU_6;
    QLabel *lbNumACT_7;
    QLabel *lbACT_7;
    QLabel *lbACTU_7;
    QLabel *lbACTT_7;
    QLabel *lbNumACT_8;
    QLabel *lbACTU_8;
    QLabel *lbACT_8;
    QLabel *lbACTT_8;
    QLabel *lbNumACT_9;
    QLabel *lbACT_9;
    QLabel *lbACTU_9;
    QLabel *lbACTT_9;
    QLabel *lbNumACT_10;
    QLabel *lbACTU_10;
    QLabel *lbACT_10;
    QLabel *lbACTT_10;
    QLabel *lbNumACT_11;
    QLabel *lbACTT_11;
    QLabel *lbACTU_11;
    QLabel *lbACT_11;
    QLabel *lbNumACT_12;
    QLabel *lbACTU_12;
    QLabel *lbACTT_12;
    QLabel *lbACT_12;
    QPushButton *btnCerrar;

    void setupUi(QWidget *Analog16)
    {
        if (Analog16->objectName().isEmpty())
            Analog16->setObjectName(QString::fromUtf8("Analog16"));
        Analog16->resize(485, 425);
        Analog16->setMinimumSize(QSize(485, 425));
        Analog16->setMaximumSize(QSize(485, 425));
        Analog16->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frBarraT = new QFrame(Analog16);
        frBarraT->setObjectName(QString::fromUtf8("frBarraT"));
        frBarraT->setGeometry(QRect(0, 0, 485, 14));
        frBarraT->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frBarraT->setFrameShape(QFrame::Panel);
        frBarraT->setFrameShadow(QFrame::Raised);
        frBarraT->setLineWidth(0);
        lbAna16T = new QLabel(frBarraT);
        lbAna16T->setObjectName(QString::fromUtf8("lbAna16T"));
        lbAna16T->setGeometry(QRect(3, 0, 111, 16));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbAna16T->setFont(font);
        lbAna16T->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        frame = new QFrame(Analog16);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 18, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbSloACT = new QLabel(Analog16);
        lbSloACT->setObjectName(QString::fromUtf8("lbSloACT"));
        lbSloACT->setGeometry(QRect(68, 23, 385, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSloACT->setFont(font1);
        lbSloACT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        lbACT_1 = new QLabel(Analog16);
        lbACT_1->setObjectName(QString::fromUtf8("lbACT_1"));
        lbACT_1->setGeometry(QRect(371, 55, 61, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbACT_1->setFont(font2);
        lbACT_1->setLayoutDirection(Qt::RightToLeft);
        lbACT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTU_1 = new QLabel(Analog16);
        lbACTU_1->setObjectName(QString::fromUtf8("lbACTU_1"));
        lbACTU_1->setGeometry(QRect(438, 55, 35, 20));
        lbACTU_1->setFont(font2);
        lbACTU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_1 = new QLabel(Analog16);
        lbNumACT_1->setObjectName(QString::fromUtf8("lbNumACT_1"));
        lbNumACT_1->setGeometry(QRect(10, 55, 21, 16));
        lbNumACT_1->setFont(font2);
        lbNumACT_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_1->setAlignment(Qt::AlignCenter);
        lbACTT_1 = new QLabel(Analog16);
        lbACTT_1->setObjectName(QString::fromUtf8("lbACTT_1"));
        lbACTT_1->setGeometry(QRect(30, 55, 340, 16));
        lbACTT_1->setFont(font2);
        lbACTU_2 = new QLabel(Analog16);
        lbACTU_2->setObjectName(QString::fromUtf8("lbACTU_2"));
        lbACTU_2->setGeometry(QRect(438, 75, 35, 20));
        lbACTU_2->setFont(font2);
        lbACTU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTT_2 = new QLabel(Analog16);
        lbACTT_2->setObjectName(QString::fromUtf8("lbACTT_2"));
        lbACTT_2->setGeometry(QRect(30, 75, 340, 16));
        lbACTT_2->setFont(font2);
        lbACT_2 = new QLabel(Analog16);
        lbACT_2->setObjectName(QString::fromUtf8("lbACT_2"));
        lbACT_2->setGeometry(QRect(371, 75, 61, 20));
        lbACT_2->setFont(font2);
        lbACT_2->setLayoutDirection(Qt::RightToLeft);
        lbACT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbNumACT_2 = new QLabel(Analog16);
        lbNumACT_2->setObjectName(QString::fromUtf8("lbNumACT_2"));
        lbNumACT_2->setGeometry(QRect(10, 75, 21, 16));
        lbNumACT_2->setFont(font2);
        lbNumACT_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_2->setAlignment(Qt::AlignCenter);
        lbNumACT_3 = new QLabel(Analog16);
        lbNumACT_3->setObjectName(QString::fromUtf8("lbNumACT_3"));
        lbNumACT_3->setGeometry(QRect(10, 90, 21, 16));
        lbNumACT_3->setFont(font2);
        lbNumACT_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_3->setAlignment(Qt::AlignCenter);
        lbACTT_3 = new QLabel(Analog16);
        lbACTT_3->setObjectName(QString::fromUtf8("lbACTT_3"));
        lbACTT_3->setGeometry(QRect(30, 90, 340, 16));
        lbACTT_3->setFont(font2);
        lbACTU_3 = new QLabel(Analog16);
        lbACTU_3->setObjectName(QString::fromUtf8("lbACTU_3"));
        lbACTU_3->setGeometry(QRect(438, 90, 35, 20));
        lbACTU_3->setFont(font2);
        lbACTU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_3 = new QLabel(Analog16);
        lbACT_3->setObjectName(QString::fromUtf8("lbACT_3"));
        lbACT_3->setGeometry(QRect(371, 90, 61, 20));
        lbACT_3->setFont(font2);
        lbACT_3->setLayoutDirection(Qt::RightToLeft);
        lbACT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTT_4 = new QLabel(Analog16);
        lbACTT_4->setObjectName(QString::fromUtf8("lbACTT_4"));
        lbACTT_4->setGeometry(QRect(30, 110, 340, 16));
        lbACTT_4->setFont(font2);
        lbACTU_4 = new QLabel(Analog16);
        lbACTU_4->setObjectName(QString::fromUtf8("lbACTU_4"));
        lbACTU_4->setGeometry(QRect(438, 110, 35, 20));
        lbACTU_4->setFont(font2);
        lbACTU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_4 = new QLabel(Analog16);
        lbACT_4->setObjectName(QString::fromUtf8("lbACT_4"));
        lbACT_4->setGeometry(QRect(371, 110, 61, 20));
        lbACT_4->setFont(font2);
        lbACT_4->setLayoutDirection(Qt::RightToLeft);
        lbACT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbNumACT_4 = new QLabel(Analog16);
        lbNumACT_4->setObjectName(QString::fromUtf8("lbNumACT_4"));
        lbNumACT_4->setGeometry(QRect(10, 110, 21, 16));
        lbNumACT_4->setFont(font2);
        lbNumACT_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_4->setAlignment(Qt::AlignCenter);
        lbNumACT_5 = new QLabel(Analog16);
        lbNumACT_5->setObjectName(QString::fromUtf8("lbNumACT_5"));
        lbNumACT_5->setGeometry(QRect(10, 130, 21, 16));
        lbNumACT_5->setFont(font2);
        lbNumACT_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_5->setAlignment(Qt::AlignCenter);
        lbACTU_5 = new QLabel(Analog16);
        lbACTU_5->setObjectName(QString::fromUtf8("lbACTU_5"));
        lbACTU_5->setGeometry(QRect(438, 130, 35, 20));
        lbACTU_5->setFont(font2);
        lbACTU_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_5 = new QLabel(Analog16);
        lbACT_5->setObjectName(QString::fromUtf8("lbACT_5"));
        lbACT_5->setGeometry(QRect(371, 130, 61, 20));
        lbACT_5->setFont(font2);
        lbACT_5->setLayoutDirection(Qt::RightToLeft);
        lbACT_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTT_5 = new QLabel(Analog16);
        lbACTT_5->setObjectName(QString::fromUtf8("lbACTT_5"));
        lbACTT_5->setGeometry(QRect(30, 130, 340, 16));
        lbACTT_5->setFont(font2);
        lbNumACT_6 = new QLabel(Analog16);
        lbNumACT_6->setObjectName(QString::fromUtf8("lbNumACT_6"));
        lbNumACT_6->setGeometry(QRect(10, 150, 21, 16));
        lbNumACT_6->setFont(font2);
        lbNumACT_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_6->setAlignment(Qt::AlignCenter);
        lbACT_6 = new QLabel(Analog16);
        lbACT_6->setObjectName(QString::fromUtf8("lbACT_6"));
        lbACT_6->setGeometry(QRect(371, 150, 61, 20));
        lbACT_6->setFont(font2);
        lbACT_6->setLayoutDirection(Qt::RightToLeft);
        lbACT_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTT_6 = new QLabel(Analog16);
        lbACTT_6->setObjectName(QString::fromUtf8("lbACTT_6"));
        lbACTT_6->setGeometry(QRect(30, 150, 340, 16));
        lbACTT_6->setFont(font2);
        lbACTU_6 = new QLabel(Analog16);
        lbACTU_6->setObjectName(QString::fromUtf8("lbACTU_6"));
        lbACTU_6->setGeometry(QRect(438, 150, 35, 20));
        lbACTU_6->setFont(font2);
        lbACTU_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_7 = new QLabel(Analog16);
        lbNumACT_7->setObjectName(QString::fromUtf8("lbNumACT_7"));
        lbNumACT_7->setGeometry(QRect(10, 170, 21, 16));
        lbNumACT_7->setFont(font2);
        lbNumACT_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_7->setAlignment(Qt::AlignCenter);
        lbACT_7 = new QLabel(Analog16);
        lbACT_7->setObjectName(QString::fromUtf8("lbACT_7"));
        lbACT_7->setGeometry(QRect(371, 170, 61, 20));
        lbACT_7->setFont(font2);
        lbACT_7->setLayoutDirection(Qt::RightToLeft);
        lbACT_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTU_7 = new QLabel(Analog16);
        lbACTU_7->setObjectName(QString::fromUtf8("lbACTU_7"));
        lbACTU_7->setGeometry(QRect(438, 170, 35, 20));
        lbACTU_7->setFont(font2);
        lbACTU_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTT_7 = new QLabel(Analog16);
        lbACTT_7->setObjectName(QString::fromUtf8("lbACTT_7"));
        lbACTT_7->setGeometry(QRect(30, 170, 340, 16));
        lbACTT_7->setFont(font2);
        lbNumACT_8 = new QLabel(Analog16);
        lbNumACT_8->setObjectName(QString::fromUtf8("lbNumACT_8"));
        lbNumACT_8->setGeometry(QRect(10, 190, 21, 16));
        lbNumACT_8->setFont(font2);
        lbNumACT_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_8->setAlignment(Qt::AlignCenter);
        lbACTU_8 = new QLabel(Analog16);
        lbACTU_8->setObjectName(QString::fromUtf8("lbACTU_8"));
        lbACTU_8->setGeometry(QRect(438, 190, 35, 20));
        lbACTU_8->setFont(font2);
        lbACTU_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_8 = new QLabel(Analog16);
        lbACT_8->setObjectName(QString::fromUtf8("lbACT_8"));
        lbACT_8->setGeometry(QRect(371, 190, 61, 20));
        lbACT_8->setFont(font2);
        lbACT_8->setLayoutDirection(Qt::RightToLeft);
        lbACT_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTT_8 = new QLabel(Analog16);
        lbACTT_8->setObjectName(QString::fromUtf8("lbACTT_8"));
        lbACTT_8->setGeometry(QRect(30, 190, 340, 16));
        lbACTT_8->setFont(font2);
        lbNumACT_9 = new QLabel(Analog16);
        lbNumACT_9->setObjectName(QString::fromUtf8("lbNumACT_9"));
        lbNumACT_9->setGeometry(QRect(10, 210, 21, 16));
        lbNumACT_9->setFont(font2);
        lbNumACT_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_9->setAlignment(Qt::AlignCenter);
        lbACT_9 = new QLabel(Analog16);
        lbACT_9->setObjectName(QString::fromUtf8("lbACT_9"));
        lbACT_9->setGeometry(QRect(371, 210, 61, 20));
        lbACT_9->setFont(font2);
        lbACT_9->setLayoutDirection(Qt::RightToLeft);
        lbACT_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTU_9 = new QLabel(Analog16);
        lbACTU_9->setObjectName(QString::fromUtf8("lbACTU_9"));
        lbACTU_9->setGeometry(QRect(438, 210, 35, 20));
        lbACTU_9->setFont(font2);
        lbACTU_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTT_9 = new QLabel(Analog16);
        lbACTT_9->setObjectName(QString::fromUtf8("lbACTT_9"));
        lbACTT_9->setGeometry(QRect(30, 210, 340, 16));
        lbACTT_9->setFont(font2);
        lbNumACT_10 = new QLabel(Analog16);
        lbNumACT_10->setObjectName(QString::fromUtf8("lbNumACT_10"));
        lbNumACT_10->setGeometry(QRect(10, 230, 21, 16));
        lbNumACT_10->setFont(font2);
        lbNumACT_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_10->setAlignment(Qt::AlignCenter);
        lbACTU_10 = new QLabel(Analog16);
        lbACTU_10->setObjectName(QString::fromUtf8("lbACTU_10"));
        lbACTU_10->setGeometry(QRect(438, 230, 35, 20));
        lbACTU_10->setFont(font2);
        lbACTU_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_10 = new QLabel(Analog16);
        lbACT_10->setObjectName(QString::fromUtf8("lbACT_10"));
        lbACT_10->setGeometry(QRect(371, 230, 61, 20));
        lbACT_10->setFont(font2);
        lbACT_10->setLayoutDirection(Qt::RightToLeft);
        lbACT_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbACTT_10 = new QLabel(Analog16);
        lbACTT_10->setObjectName(QString::fromUtf8("lbACTT_10"));
        lbACTT_10->setGeometry(QRect(30, 230, 340, 16));
        lbACTT_10->setFont(font2);
        lbNumACT_11 = new QLabel(Analog16);
        lbNumACT_11->setObjectName(QString::fromUtf8("lbNumACT_11"));
        lbNumACT_11->setGeometry(QRect(10, 250, 21, 16));
        lbNumACT_11->setFont(font2);
        lbNumACT_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_11->setAlignment(Qt::AlignCenter);
        lbACTT_11 = new QLabel(Analog16);
        lbACTT_11->setObjectName(QString::fromUtf8("lbACTT_11"));
        lbACTT_11->setGeometry(QRect(30, 250, 340, 16));
        lbACTT_11->setFont(font2);
        lbACTU_11 = new QLabel(Analog16);
        lbACTU_11->setObjectName(QString::fromUtf8("lbACTU_11"));
        lbACTU_11->setGeometry(QRect(438, 250, 35, 20));
        lbACTU_11->setFont(font2);
        lbACTU_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACT_11 = new QLabel(Analog16);
        lbACT_11->setObjectName(QString::fromUtf8("lbACT_11"));
        lbACT_11->setGeometry(QRect(371, 250, 61, 20));
        lbACT_11->setFont(font2);
        lbACT_11->setLayoutDirection(Qt::RightToLeft);
        lbACT_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbNumACT_12 = new QLabel(Analog16);
        lbNumACT_12->setObjectName(QString::fromUtf8("lbNumACT_12"));
        lbNumACT_12->setGeometry(QRect(10, 270, 21, 16));
        lbNumACT_12->setFont(font2);
        lbNumACT_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_12->setAlignment(Qt::AlignCenter);
        lbACTU_12 = new QLabel(Analog16);
        lbACTU_12->setObjectName(QString::fromUtf8("lbACTU_12"));
        lbACTU_12->setGeometry(QRect(438, 270, 35, 20));
        lbACTU_12->setFont(font2);
        lbACTU_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTT_12 = new QLabel(Analog16);
        lbACTT_12->setObjectName(QString::fromUtf8("lbACTT_12"));
        lbACTT_12->setGeometry(QRect(30, 270, 340, 16));
        lbACTT_12->setFont(font2);
        lbACT_12 = new QLabel(Analog16);
        lbACT_12->setObjectName(QString::fromUtf8("lbACT_12"));
        lbACT_12->setGeometry(QRect(371, 270, 61, 20));
        lbACT_12->setFont(font2);
        lbACT_12->setLayoutDirection(Qt::RightToLeft);
        lbACT_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnCerrar = new QPushButton(Analog16);
        btnCerrar->setObjectName(QString::fromUtf8("btnCerrar"));
        btnCerrar->setGeometry(QRect(125, 370, 101, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btnCerrar->setFont(font3);
        btnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));

        retranslateUi(Analog16);

        QMetaObject::connectSlotsByName(Analog16);
    } // setupUi

    void retranslateUi(QWidget *Analog16)
    {
        Analog16->setWindowTitle(QApplication::translate("Analog16", "Analog16", 0, QApplication::UnicodeUTF8));
        lbAna16T->setText(QApplication::translate("Analog16", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; color:#ffffff;\">ANALOG16.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbSloACT->setText(QApplication::translate("Analog16", "SLOT-  A109  - ACT", 0, QApplication::UnicodeUTF8));
        lbACT_1->setText(QApplication::translate("Analog16", "3.10", 0, QApplication::UnicodeUTF8));
        lbACTU_1->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbNumACT_1->setText(QApplication::translate("Analog16", "1", 0, QApplication::UnicodeUTF8));
        lbACTT_1->setText(QApplication::translate("Analog16", "DEMANDA VEV", 0, QApplication::UnicodeUTF8));
        lbACTU_2->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACTT_2->setText(QApplication::translate("Analog16", "RETROAL SELECCIONADA VEV", 0, QApplication::UnicodeUTF8));
        lbACT_2->setText(QApplication::translate("Analog16", "3.60", 0, QApplication::UnicodeUTF8));
        lbNumACT_2->setText(QApplication::translate("Analog16", "2", 0, QApplication::UnicodeUTF8));
        lbNumACT_3->setText(QApplication::translate("Analog16", "3", 0, QApplication::UnicodeUTF8));
        lbACTT_3->setText(QApplication::translate("Analog16", "RETRO DE POSICI\303\223N VEV A", 0, QApplication::UnicodeUTF8));
        lbACTU_3->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACT_3->setText(QApplication::translate("Analog16", "4.90", 0, QApplication::UnicodeUTF8));
        lbACTT_4->setText(QApplication::translate("Analog16", "RETROAL DE POSICI\303\223N VEV A", 0, QApplication::UnicodeUTF8));
        lbACTU_4->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACT_4->setText(QApplication::translate("Analog16", "2.30", 0, QApplication::UnicodeUTF8));
        lbNumACT_4->setText(QApplication::translate("Analog16", "4", 0, QApplication::UnicodeUTF8));
        lbNumACT_5->setText(QApplication::translate("Analog16", "5", 0, QApplication::UnicodeUTF8));
        lbACTU_5->setText(QApplication::translate("Analog16", "MA", 0, QApplication::UnicodeUTF8));
        lbACT_5->setText(QApplication::translate("Analog16", "19.60", 0, QApplication::UnicodeUTF8));
        lbACTT_5->setText(QApplication::translate("Analog16", "MA VEV", 0, QApplication::UnicodeUTF8));
        lbNumACT_6->setText(QApplication::translate("Analog16", "6", 0, QApplication::UnicodeUTF8));
        lbACT_6->setText(QApplication::translate("Analog16", "23.00", 0, QApplication::UnicodeUTF8));
        lbACTT_6->setText(QApplication::translate("Analog16", "OHMlOS VEV", 0, QApplication::UnicodeUTF8));
        lbACTU_6->setText(QApplication::translate("Analog16", "OHMS", 0, QApplication::UnicodeUTF8));
        lbNumACT_7->setText(QApplication::translate("Analog16", "7", 0, QApplication::UnicodeUTF8));
        lbACT_7->setText(QApplication::translate("Analog16", "19.20", 0, QApplication::UnicodeUTF8));
        lbACTU_7->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACTT_7->setText(QApplication::translate("Analog16", "DEMANDA VDT", 0, QApplication::UnicodeUTF8));
        lbNumACT_8->setText(QApplication::translate("Analog16", "8", 0, QApplication::UnicodeUTF8));
        lbACTU_8->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACT_8->setText(QApplication::translate("Analog16", "17.90", 0, QApplication::UnicodeUTF8));
        lbACTT_8->setText(QApplication::translate("Analog16", "RETROAL SELECCIONADA VDT", 0, QApplication::UnicodeUTF8));
        lbNumACT_9->setText(QApplication::translate("Analog16", "9", 0, QApplication::UnicodeUTF8));
        lbACT_9->setText(QApplication::translate("Analog16", "18.10", 0, QApplication::UnicodeUTF8));
        lbACTU_9->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACTT_9->setText(QApplication::translate("Analog16", "RETROAL DE POSICI\303\223N VDT A", 0, QApplication::UnicodeUTF8));
        lbNumACT_10->setText(QApplication::translate("Analog16", "10", 0, QApplication::UnicodeUTF8));
        lbACTU_10->setText(QApplication::translate("Analog16", "%", 0, QApplication::UnicodeUTF8));
        lbACT_10->setText(QApplication::translate("Analog16", "17.80", 0, QApplication::UnicodeUTF8));
        lbACTT_10->setText(QApplication::translate("Analog16", "RETROAL DE POSICI\303\223N VDT B", 0, QApplication::UnicodeUTF8));
        lbNumACT_11->setText(QApplication::translate("Analog16", "11", 0, QApplication::UnicodeUTF8));
        lbACTT_11->setText(QApplication::translate("Analog16", "MA VDT", 0, QApplication::UnicodeUTF8));
        lbACTU_11->setText(QApplication::translate("Analog16", "MA", 0, QApplication::UnicodeUTF8));
        lbACT_11->setText(QApplication::translate("Analog16", "-18.30", 0, QApplication::UnicodeUTF8));
        lbNumACT_12->setText(QApplication::translate("Analog16", "12", 0, QApplication::UnicodeUTF8));
        lbACTU_12->setText(QApplication::translate("Analog16", "OHMS", 0, QApplication::UnicodeUTF8));
        lbACTT_12->setText(QApplication::translate("Analog16", "OHMlOS VDT", 0, QApplication::UnicodeUTF8));
        lbACT_12->setText(QApplication::translate("Analog16", "20.00", 0, QApplication::UnicodeUTF8));
        btnCerrar->setText(QApplication::translate("Analog16", "CERRAR", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Analog16: public Ui_Analog16 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG16_H
