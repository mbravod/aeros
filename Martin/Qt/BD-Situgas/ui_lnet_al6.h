/********************************************************************************
** Form generated from reading UI file 'lnet_al6.ui'
**
** Created: Mon 23. Sep 20:33:28 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LNET_AL6_H
#define UI_LNET_AL6_H

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

class Ui_LNET_Al6
{
public:
    QFrame *frame_2;
    QLabel *lbLnetT;
    QLabel *lbNodRTD;
    QFrame *frame;
    QLabel *lbNodeT_1;
    QLabel *lbNumNode_1;
    QLabel *lbNode_1;
    QLabel *lbNodeU_1;
    QPushButton *btnCerrar;
    QLabel *lbNumNode_2;
    QLabel *lbNodeT_2;
    QLabel *lbNode_2;
    QLabel *lbNodeU_2;
    QLabel *lbNumNode_3;
    QLabel *lbNodeT_3;
    QLabel *lbNodeU_3;
    QLabel *lbNode_3;
    QLabel *lbNumNode_4;
    QLabel *lbNodeT_4;
    QLabel *lbNode_4;
    QLabel *lbNodeU_4;
    QLabel *lbNumNode_5;
    QLabel *lbNodeU_5;
    QLabel *lbNodeT_5;
    QLabel *lbNode_5;
    QLabel *lbNumNode_6;
    QLabel *lbNodeT_6;
    QLabel *lbNodeU_6;
    QLabel *lbNode_6;

    void setupUi(QWidget *LNET_Al6)
    {
        if (LNET_Al6->objectName().isEmpty())
            LNET_Al6->setObjectName(QString::fromUtf8("LNET_Al6"));
        LNET_Al6->resize(485, 210);
        LNET_Al6->setMinimumSize(QSize(485, 210));
        LNET_Al6->setMaximumSize(QSize(485, 210));
        LNET_Al6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_2 = new QFrame(LNET_Al6);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 485, 11));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbLnetT = new QLabel(frame_2);
        lbLnetT->setObjectName(QString::fromUtf8("lbLnetT"));
        lbLnetT->setGeometry(QRect(0, 0, 81, 12));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbLnetT->setFont(font);
        lbLnetT->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        lbNodRTD = new QLabel(LNET_Al6);
        lbNodRTD->setObjectName(QString::fromUtf8("lbNodRTD"));
        lbNodRTD->setGeometry(QRect(62, 17, 400, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbNodRTD->setFont(font1);
        lbNodRTD->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        frame = new QFrame(LNET_Al6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 13, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbNodeT_1 = new QLabel(LNET_Al6);
        lbNodeT_1->setObjectName(QString::fromUtf8("lbNodeT_1"));
        lbNodeT_1->setGeometry(QRect(30, 43, 340, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbNodeT_1->setFont(font2);
        lbNumNode_1 = new QLabel(LNET_Al6);
        lbNumNode_1->setObjectName(QString::fromUtf8("lbNumNode_1"));
        lbNumNode_1->setGeometry(QRect(10, 43, 21, 16));
        lbNumNode_1->setFont(font2);
        lbNumNode_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_1->setAlignment(Qt::AlignCenter);
        lbNode_1 = new QLabel(LNET_Al6);
        lbNode_1->setObjectName(QString::fromUtf8("lbNode_1"));
        lbNode_1->setGeometry(QRect(370, 43, 61, 20));
        lbNode_1->setFont(font2);
        lbNode_1->setLayoutDirection(Qt::RightToLeft);
        lbNodeU_1 = new QLabel(LNET_Al6);
        lbNodeU_1->setObjectName(QString::fromUtf8("lbNodeU_1"));
        lbNodeU_1->setGeometry(QRect(433, 43, 35, 20));
        lbNodeU_1->setFont(font2);
        lbNodeU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        btnCerrar = new QPushButton(LNET_Al6);
        btnCerrar->setObjectName(QString::fromUtf8("btnCerrar"));
        btnCerrar->setGeometry(QRect(125, 168, 101, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btnCerrar->setFont(font3);
        btnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbNumNode_2 = new QLabel(LNET_Al6);
        lbNumNode_2->setObjectName(QString::fromUtf8("lbNumNode_2"));
        lbNumNode_2->setGeometry(QRect(10, 60, 21, 16));
        lbNumNode_2->setFont(font2);
        lbNumNode_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_2->setAlignment(Qt::AlignCenter);
        lbNodeT_2 = new QLabel(LNET_Al6);
        lbNodeT_2->setObjectName(QString::fromUtf8("lbNodeT_2"));
        lbNodeT_2->setGeometry(QRect(30, 60, 340, 16));
        lbNodeT_2->setFont(font2);
        lbNode_2 = new QLabel(LNET_Al6);
        lbNode_2->setObjectName(QString::fromUtf8("lbNode_2"));
        lbNode_2->setGeometry(QRect(370, 60, 61, 20));
        lbNode_2->setFont(font2);
        lbNode_2->setLayoutDirection(Qt::RightToLeft);
        lbNodeU_2 = new QLabel(LNET_Al6);
        lbNodeU_2->setObjectName(QString::fromUtf8("lbNodeU_2"));
        lbNodeU_2->setGeometry(QRect(433, 60, 35, 20));
        lbNodeU_2->setFont(font2);
        lbNodeU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_3 = new QLabel(LNET_Al6);
        lbNumNode_3->setObjectName(QString::fromUtf8("lbNumNode_3"));
        lbNumNode_3->setGeometry(QRect(10, 79, 21, 16));
        lbNumNode_3->setFont(font2);
        lbNumNode_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_3->setAlignment(Qt::AlignCenter);
        lbNodeT_3 = new QLabel(LNET_Al6);
        lbNodeT_3->setObjectName(QString::fromUtf8("lbNodeT_3"));
        lbNodeT_3->setGeometry(QRect(30, 79, 340, 16));
        lbNodeT_3->setFont(font2);
        lbNodeU_3 = new QLabel(LNET_Al6);
        lbNodeU_3->setObjectName(QString::fromUtf8("lbNodeU_3"));
        lbNodeU_3->setGeometry(QRect(433, 79, 35, 20));
        lbNodeU_3->setFont(font2);
        lbNodeU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNode_3 = new QLabel(LNET_Al6);
        lbNode_3->setObjectName(QString::fromUtf8("lbNode_3"));
        lbNode_3->setGeometry(QRect(370, 79, 61, 20));
        lbNode_3->setFont(font2);
        lbNode_3->setLayoutDirection(Qt::RightToLeft);
        lbNumNode_4 = new QLabel(LNET_Al6);
        lbNumNode_4->setObjectName(QString::fromUtf8("lbNumNode_4"));
        lbNumNode_4->setGeometry(QRect(10, 95, 21, 16));
        lbNumNode_4->setFont(font2);
        lbNumNode_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_4->setAlignment(Qt::AlignCenter);
        lbNodeT_4 = new QLabel(LNET_Al6);
        lbNodeT_4->setObjectName(QString::fromUtf8("lbNodeT_4"));
        lbNodeT_4->setGeometry(QRect(30, 95, 340, 16));
        lbNodeT_4->setFont(font2);
        lbNode_4 = new QLabel(LNET_Al6);
        lbNode_4->setObjectName(QString::fromUtf8("lbNode_4"));
        lbNode_4->setGeometry(QRect(370, 95, 61, 20));
        lbNode_4->setFont(font2);
        lbNode_4->setLayoutDirection(Qt::RightToLeft);
        lbNodeU_4 = new QLabel(LNET_Al6);
        lbNodeU_4->setObjectName(QString::fromUtf8("lbNodeU_4"));
        lbNodeU_4->setGeometry(QRect(433, 95, 35, 20));
        lbNodeU_4->setFont(font2);
        lbNodeU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_5 = new QLabel(LNET_Al6);
        lbNumNode_5->setObjectName(QString::fromUtf8("lbNumNode_5"));
        lbNumNode_5->setGeometry(QRect(10, 111, 21, 16));
        lbNumNode_5->setFont(font2);
        lbNumNode_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_5->setAlignment(Qt::AlignCenter);
        lbNodeU_5 = new QLabel(LNET_Al6);
        lbNodeU_5->setObjectName(QString::fromUtf8("lbNodeU_5"));
        lbNodeU_5->setGeometry(QRect(433, 111, 35, 20));
        lbNodeU_5->setFont(font2);
        lbNodeU_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeT_5 = new QLabel(LNET_Al6);
        lbNodeT_5->setObjectName(QString::fromUtf8("lbNodeT_5"));
        lbNodeT_5->setGeometry(QRect(30, 111, 340, 16));
        lbNodeT_5->setFont(font2);
        lbNode_5 = new QLabel(LNET_Al6);
        lbNode_5->setObjectName(QString::fromUtf8("lbNode_5"));
        lbNode_5->setGeometry(QRect(370, 111, 61, 20));
        lbNode_5->setFont(font2);
        lbNode_5->setLayoutDirection(Qt::RightToLeft);
        lbNumNode_6 = new QLabel(LNET_Al6);
        lbNumNode_6->setObjectName(QString::fromUtf8("lbNumNode_6"));
        lbNumNode_6->setGeometry(QRect(10, 130, 21, 16));
        lbNumNode_6->setFont(font2);
        lbNumNode_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_6->setAlignment(Qt::AlignCenter);
        lbNodeT_6 = new QLabel(LNET_Al6);
        lbNodeT_6->setObjectName(QString::fromUtf8("lbNodeT_6"));
        lbNodeT_6->setGeometry(QRect(30, 130, 340, 16));
        lbNodeT_6->setFont(font2);
        lbNodeU_6 = new QLabel(LNET_Al6);
        lbNodeU_6->setObjectName(QString::fromUtf8("lbNodeU_6"));
        lbNodeU_6->setGeometry(QRect(433, 130, 35, 20));
        lbNodeU_6->setFont(font2);
        lbNodeU_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNode_6 = new QLabel(LNET_Al6);
        lbNode_6->setObjectName(QString::fromUtf8("lbNode_6"));
        lbNode_6->setGeometry(QRect(370, 130, 61, 20));
        lbNode_6->setFont(font2);
        lbNode_6->setLayoutDirection(Qt::RightToLeft);
        frame->raise();
        frame_2->raise();
        lbNodRTD->raise();
        lbNodeT_1->raise();
        lbNumNode_1->raise();
        lbNode_1->raise();
        lbNodeU_1->raise();
        btnCerrar->raise();
        lbNumNode_2->raise();
        lbNodeT_2->raise();
        lbNode_2->raise();
        lbNodeU_2->raise();
        lbNumNode_3->raise();
        lbNodeT_3->raise();
        lbNodeU_3->raise();
        lbNode_3->raise();
        lbNumNode_4->raise();
        lbNodeT_4->raise();
        lbNode_4->raise();
        lbNodeU_4->raise();
        lbNumNode_5->raise();
        lbNodeU_5->raise();
        lbNodeT_5->raise();
        lbNode_5->raise();
        lbNumNode_6->raise();
        lbNodeT_6->raise();
        lbNodeU_6->raise();
        lbNode_6->raise();

        retranslateUi(LNET_Al6);

        QMetaObject::connectSlotsByName(LNET_Al6);
    } // setupUi

    void retranslateUi(QWidget *LNET_Al6)
    {
        LNET_Al6->setWindowTitle(QApplication::translate("LNET_Al6", "LNET_Al6", 0, QApplication::UnicodeUTF8));
        lbLnetT->setText(QApplication::translate("LNET_Al6", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; color:#ffffff;\">LNET_AI.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbNodRTD->setText(QApplication::translate("LNET_Al6", "NODE - N1N11 - RTD", 0, QApplication::UnicodeUTF8));
        lbNodeT_1->setText(QApplication::translate("LNET_Al6", "TURB RECUP TGB/A MAG CHIP DET", 0, QApplication::UnicodeUTF8));
        lbNumNode_1->setText(QApplication::translate("LNET_Al6", "1", 0, QApplication::UnicodeUTF8));
        lbNode_1->setText(QApplication::translate("LNET_Al6", "225.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_1->setText(QApplication::translate("LNET_Al6", "OHM", 0, QApplication::UnicodeUTF8));
        btnCerrar->setText(QApplication::translate("LNET_Al6", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbNumNode_2->setText(QApplication::translate("LNET_Al6", "2", 0, QApplication::UnicodeUTF8));
        lbNodeT_2->setText(QApplication::translate("LNET_Al6", "TURB RECUP B CHIP MAGN\303\211TICO DET", 0, QApplication::UnicodeUTF8));
        lbNode_2->setText(QApplication::translate("LNET_Al6", "225.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_2->setText(QApplication::translate("LNET_Al6", "OHM", 0, QApplication::UnicodeUTF8));
        lbNumNode_3->setText(QApplication::translate("LNET_Al6", "3", 0, QApplication::UnicodeUTF8));
        lbNodeT_3->setText(QApplication::translate("LNET_Al6", "TURB RECUP COM MAG CHIP DET", 0, QApplication::UnicodeUTF8));
        lbNodeU_3->setText(QApplication::translate("LNET_Al6", "OHM", 0, QApplication::UnicodeUTF8));
        lbNode_3->setText(QApplication::translate("LNET_Al6", "225.00", 0, QApplication::UnicodeUTF8));
        lbNumNode_4->setText(QApplication::translate("LNET_Al6", "4", 0, QApplication::UnicodeUTF8));
        lbNodeT_4->setText(QApplication::translate("LNET_Al6", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNode_4->setText(QApplication::translate("LNET_Al6", "10.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_4->setText(QString());
        lbNumNode_5->setText(QApplication::translate("LNET_Al6", "5", 0, QApplication::UnicodeUTF8));
        lbNodeU_5->setText(QString());
        lbNodeT_5->setText(QApplication::translate("LNET_Al6", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNode_5->setText(QApplication::translate("LNET_Al6", "10.00", 0, QApplication::UnicodeUTF8));
        lbNumNode_6->setText(QApplication::translate("LNET_Al6", "6", 0, QApplication::UnicodeUTF8));
        lbNodeT_6->setText(QApplication::translate("LNET_Al6", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNodeU_6->setText(QString());
        lbNode_6->setText(QApplication::translate("LNET_Al6", "10.00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LNET_Al6: public Ui_LNET_Al6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LNET_AL6_H
