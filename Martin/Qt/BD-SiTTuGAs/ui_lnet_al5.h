/********************************************************************************
** Form generated from reading UI file 'lnet_al5.ui'
**
** Created: Fri 13. Dec 19:34:22 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LNET_AL5_H
#define UI_LNET_AL5_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_LNET_Al5
{
public:
    QFrame *frame_2;
    QFrame *frame_3;
    WLabel *lbLnetT;
    QFrame *frame;
    WLabel *lbNodRTD;
    QPushButton *btCerrar;
    WLabel *lbNodeT_1;
    WLabel *lbNumNode_1;
    WLabel *lbNode_1;
    WLabel *lbNodeU_1;
    WLabel *lbNodeU_2;
    WLabel *lbNumNode_2;
    WLabel *lbNodeT_2;
    WLabel *lbNode_2;
    WLabel *lbNumNode_7;
    WLabel *lbNodeU_3;
    WLabel *lbNodeT_7;
    WLabel *lbNodeT_4;
    WLabel *lbNumNode_4;
    WLabel *lbNode_3;
    WLabel *lbNodeT_5;
    WLabel *lbNode_4;
    WLabel *lbNodeU_4;
    WLabel *lbNumNode_5;
    WLabel *lbNodeT_6;
    WLabel *lbNodeU_5;
    WLabel *lbNode_5;
    WLabel *lbNumNode_6;
    WLabel *lbNodeU_6;
    WLabel *lbNode_6;
    QLabel *lbFondo;

    void setupUi(QWidget *LNET_Al5)
    {
        if (LNET_Al5->objectName().isEmpty())
            LNET_Al5->setObjectName(QString::fromUtf8("LNET_Al5"));
        LNET_Al5->resize(485, 250);
        LNET_Al5->setMinimumSize(QSize(485, 250));
        LNET_Al5->setMaximumSize(QSize(485, 250));
        LNET_Al5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_2 = new QFrame(LNET_Al5);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 485, 12));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 485, 12));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(0);
        lbLnetT = new WLabel(frame_2);
        lbLnetT->setObjectName(QString::fromUtf8("lbLnetT"));
        lbLnetT->setGeometry(QRect(0, 0, 81, 12));
        lbLnetT->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbLnetT->setFont(font);
        lbLnetT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(LNET_Al5);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 14, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbNodRTD = new WLabel(LNET_Al5);
        lbNodRTD->setObjectName(QString::fromUtf8("lbNodRTD"));
        lbNodRTD->setGeometry(QRect(65, 17, 400, 20));
        lbNodRTD->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbNodRTD->setFont(font1);
        lbNodRTD->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btCerrar = new QPushButton(LNET_Al5);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(125, 210, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbNodeT_1 = new WLabel(LNET_Al5);
        lbNodeT_1->setObjectName(QString::fromUtf8("lbNodeT_1"));
        lbNodeT_1->setGeometry(QRect(30, 55, 340, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setBold(true);
        font3.setWeight(75);
        lbNodeT_1->setFont(font3);
        lbNodeT_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumNode_1 = new WLabel(LNET_Al5);
        lbNumNode_1->setObjectName(QString::fromUtf8("lbNumNode_1"));
        lbNumNode_1->setGeometry(QRect(7, 55, 21, 16));
        lbNumNode_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_1->setFont(font3);
        lbNumNode_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_1 = new WLabel(LNET_Al5);
        lbNode_1->setObjectName(QString::fromUtf8("lbNode_1"));
        lbNode_1->setGeometry(QRect(369, 55, 61, 20));
        lbNode_1->setLayoutDirection(Qt::RightToLeft);
        lbNode_1->setFont(font3);
        lbNode_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeU_1 = new WLabel(LNET_Al5);
        lbNodeU_1->setObjectName(QString::fromUtf8("lbNodeU_1"));
        lbNodeU_1->setGeometry(QRect(433, 55, 35, 20));
        lbNodeU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_1->setFont(font3);
        lbNodeU_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNodeU_2 = new WLabel(LNET_Al5);
        lbNodeU_2->setObjectName(QString::fromUtf8("lbNodeU_2"));
        lbNodeU_2->setGeometry(QRect(433, 73, 35, 20));
        lbNodeU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_2->setFont(font3);
        lbNodeU_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNumNode_2 = new WLabel(LNET_Al5);
        lbNumNode_2->setObjectName(QString::fromUtf8("lbNumNode_2"));
        lbNumNode_2->setGeometry(QRect(7, 73, 21, 16));
        lbNumNode_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_2->setFont(font3);
        lbNumNode_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_2 = new WLabel(LNET_Al5);
        lbNodeT_2->setObjectName(QString::fromUtf8("lbNodeT_2"));
        lbNodeT_2->setGeometry(QRect(30, 73, 340, 16));
        lbNodeT_2->setFont(font3);
        lbNodeT_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_2 = new WLabel(LNET_Al5);
        lbNode_2->setObjectName(QString::fromUtf8("lbNode_2"));
        lbNode_2->setGeometry(QRect(369, 73, 61, 20));
        lbNode_2->setLayoutDirection(Qt::RightToLeft);
        lbNode_2->setFont(font3);
        lbNode_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumNode_7 = new WLabel(LNET_Al5);
        lbNumNode_7->setObjectName(QString::fromUtf8("lbNumNode_7"));
        lbNumNode_7->setGeometry(QRect(7, 110, 21, 16));
        lbNumNode_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_7->setFont(font3);
        lbNumNode_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_3 = new WLabel(LNET_Al5);
        lbNodeU_3->setObjectName(QString::fromUtf8("lbNodeU_3"));
        lbNodeU_3->setGeometry(QRect(433, 90, 35, 20));
        lbNodeU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_3->setFont(font3);
        lbNodeU_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNodeT_7 = new WLabel(LNET_Al5);
        lbNodeT_7->setObjectName(QString::fromUtf8("lbNodeT_7"));
        lbNodeT_7->setGeometry(QRect(30, 150, 340, 16));
        lbNodeT_7->setFont(font3);
        lbNodeT_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_4 = new WLabel(LNET_Al5);
        lbNodeT_4->setObjectName(QString::fromUtf8("lbNodeT_4"));
        lbNodeT_4->setGeometry(QRect(30, 90, 340, 16));
        lbNodeT_4->setFont(font3);
        lbNodeT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumNode_4 = new WLabel(LNET_Al5);
        lbNumNode_4->setObjectName(QString::fromUtf8("lbNumNode_4"));
        lbNumNode_4->setGeometry(QRect(7, 90, 21, 16));
        lbNumNode_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_4->setFont(font3);
        lbNumNode_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_3 = new WLabel(LNET_Al5);
        lbNode_3->setObjectName(QString::fromUtf8("lbNode_3"));
        lbNode_3->setGeometry(QRect(369, 90, 61, 20));
        lbNode_3->setLayoutDirection(Qt::RightToLeft);
        lbNode_3->setFont(font3);
        lbNode_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeT_5 = new WLabel(LNET_Al5);
        lbNodeT_5->setObjectName(QString::fromUtf8("lbNodeT_5"));
        lbNodeT_5->setGeometry(QRect(30, 110, 340, 16));
        lbNodeT_5->setFont(font3);
        lbNodeT_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_4 = new WLabel(LNET_Al5);
        lbNode_4->setObjectName(QString::fromUtf8("lbNode_4"));
        lbNode_4->setGeometry(QRect(369, 110, 61, 20));
        lbNode_4->setLayoutDirection(Qt::RightToLeft);
        lbNode_4->setFont(font3);
        lbNode_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeU_4 = new WLabel(LNET_Al5);
        lbNodeU_4->setObjectName(QString::fromUtf8("lbNodeU_4"));
        lbNodeU_4->setGeometry(QRect(433, 110, 35, 20));
        lbNodeU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_4->setFont(font3);
        lbNodeU_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNumNode_5 = new WLabel(LNET_Al5);
        lbNumNode_5->setObjectName(QString::fromUtf8("lbNumNode_5"));
        lbNumNode_5->setGeometry(QRect(7, 130, 21, 16));
        lbNumNode_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_5->setFont(font3);
        lbNumNode_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_6 = new WLabel(LNET_Al5);
        lbNodeT_6->setObjectName(QString::fromUtf8("lbNodeT_6"));
        lbNodeT_6->setGeometry(QRect(30, 130, 340, 16));
        lbNodeT_6->setFont(font3);
        lbNodeT_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_5 = new WLabel(LNET_Al5);
        lbNodeU_5->setObjectName(QString::fromUtf8("lbNodeU_5"));
        lbNodeU_5->setGeometry(QRect(433, 130, 35, 20));
        lbNodeU_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_5->setFont(font3);
        lbNodeU_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNode_5 = new WLabel(LNET_Al5);
        lbNode_5->setObjectName(QString::fromUtf8("lbNode_5"));
        lbNode_5->setGeometry(QRect(369, 130, 61, 20));
        lbNode_5->setLayoutDirection(Qt::RightToLeft);
        lbNode_5->setFont(font3);
        lbNode_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumNode_6 = new WLabel(LNET_Al5);
        lbNumNode_6->setObjectName(QString::fromUtf8("lbNumNode_6"));
        lbNumNode_6->setGeometry(QRect(7, 150, 21, 16));
        lbNumNode_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_6->setFont(font3);
        lbNumNode_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_6 = new WLabel(LNET_Al5);
        lbNodeU_6->setObjectName(QString::fromUtf8("lbNodeU_6"));
        lbNodeU_6->setGeometry(QRect(433, 150, 35, 20));
        lbNodeU_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_6->setFont(font3);
        lbNodeU_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNode_6 = new WLabel(LNET_Al5);
        lbNode_6->setObjectName(QString::fromUtf8("lbNode_6"));
        lbNode_6->setGeometry(QRect(369, 150, 61, 20));
        lbNode_6->setLayoutDirection(Qt::RightToLeft);
        lbNode_6->setFont(font3);
        lbNode_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbFondo = new QLabel(LNET_Al5);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 250));
        lbFondo->setMinimumSize(QSize(485, 250));
        lbFondo->setMaximumSize(QSize(485, 250));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        frame_2->raise();
        frame->raise();
        lbNodRTD->raise();
        btCerrar->raise();
        lbNodeT_1->raise();
        lbNumNode_1->raise();
        lbNode_1->raise();
        lbNodeU_1->raise();
        lbNodeU_2->raise();
        lbNumNode_2->raise();
        lbNodeT_2->raise();
        lbNode_2->raise();
        lbNumNode_7->raise();
        lbNodeU_3->raise();
        lbNodeT_7->raise();
        lbNodeT_4->raise();
        lbNumNode_4->raise();
        lbNode_3->raise();
        lbNodeT_5->raise();
        lbNode_4->raise();
        lbNodeU_4->raise();
        lbNumNode_5->raise();
        lbNodeT_6->raise();
        lbNodeU_5->raise();
        lbNode_5->raise();
        lbNumNode_6->raise();
        lbNodeU_6->raise();
        lbNode_6->raise();

        retranslateUi(LNET_Al5);

        QMetaObject::connectSlotsByName(LNET_Al5);
    } // setupUi

    void retranslateUi(QWidget *LNET_Al5)
    {
        LNET_Al5->setWindowTitle(QApplication::translate("LNET_Al5", "LNET_Al5", 0, QApplication::UnicodeUTF8));
        lbLnetT->setText(QApplication::translate("LNET_Al5", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; color:#ffffff;\">LNET_AI.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbNodRTD->setText(QApplication::translate("LNET_Al5", "NODE - N1N10 - RTD", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("LNET_Al5", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbNodeT_1->setText(QApplication::translate("LNET_Al5", "AIRE DE COMB FILTRO DE ADMISI\303\223N (SEC A)", 0, QApplication::UnicodeUTF8));
        lbNumNode_1->setText(QApplication::translate("LNET_Al5", "1", 0, QApplication::UnicodeUTF8));
        lbNode_1->setText(QApplication::translate("LNET_Al5", "48.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_1->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNodeU_2->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNumNode_2->setText(QApplication::translate("LNET_Al5", "2", 0, QApplication::UnicodeUTF8));
        lbNodeT_2->setText(QApplication::translate("LNET_Al5", "AIRE DE COMB FILTRO DE ADMISI\303\223N (SEC B)", 0, QApplication::UnicodeUTF8));
        lbNode_2->setText(QApplication::translate("LNET_Al5", "49.00", 0, QApplication::UnicodeUTF8));
        lbNumNode_7->setText(QApplication::translate("LNET_Al5", "4", 0, QApplication::UnicodeUTF8));
        lbNodeU_3->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNodeT_7->setText(QApplication::translate("LNET_Al5", "TEMP AIRE ACOND DE COMB (SEC B)", 0, QApplication::UnicodeUTF8));
        lbNodeT_4->setText(QApplication::translate("LNET_Al5", "AIRE DE VENT FILTRO DE ADMISI\303\223N (SEC A)", 0, QApplication::UnicodeUTF8));
        lbNumNode_4->setText(QApplication::translate("LNET_Al5", "3", 0, QApplication::UnicodeUTF8));
        lbNode_3->setText(QApplication::translate("LNET_Al5", "49.00", 0, QApplication::UnicodeUTF8));
        lbNodeT_5->setText(QApplication::translate("LNET_Al5", "AIRE DE VENT FILTRO DE ADMISI\303\223N (SEC B)", 0, QApplication::UnicodeUTF8));
        lbNode_4->setText(QApplication::translate("LNET_Al5", "50.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_4->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNumNode_5->setText(QApplication::translate("LNET_Al5", "5", 0, QApplication::UnicodeUTF8));
        lbNodeT_6->setText(QApplication::translate("LNET_Al5", "TEMP AIRE ACOND DE COMB (SEC A)", 0, QApplication::UnicodeUTF8));
        lbNodeU_5->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNode_5->setText(QApplication::translate("LNET_Al5", "48.00", 0, QApplication::UnicodeUTF8));
        lbNumNode_6->setText(QApplication::translate("LNET_Al5", "6", 0, QApplication::UnicodeUTF8));
        lbNodeU_6->setText(QApplication::translate("LNET_Al5", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNode_6->setText(QApplication::translate("LNET_Al5", "49.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LNET_Al5: public Ui_LNET_Al5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LNET_AL5_H
