/********************************************************************************
** Form generated from reading UI file 'lnet_ai9.ui'
**
** Created: Thu 19. Dec 17:48:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LNET_AI9_H
#define UI_LNET_AI9_H

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

class Ui_LNET_AI9
{
public:
    QFrame *frame;
    WLabel *lbNodRTD;
    QFrame *frame_5;
    WLabel *lbLnetT_4;
    QFrame *frame_6;
    WLabel *lbLnetT_5;
    WLabel *lbLnetT;
    WLabel *lbNodeT_1;
    WLabel *lbNumNode_1;
    WLabel *lbNode_1;
    QPushButton *btCerrar;
    WLabel *lbNodeU_1;
    WLabel *lbNumNode_2;
    WLabel *lbNode_2;
    WLabel *lbNodeU_2;
    WLabel *lbNodeT_2;
    WLabel *lbNodeU_3;
    WLabel *lbNode_3;
    WLabel *lbNumNode_3;
    WLabel *lbNodeT_3;
    WLabel *lbNumNode_4;
    WLabel *lbNode_4;
    WLabel *lbNodeU_4;
    WLabel *lbNodeT_4;
    WLabel *lbNumNode_5;
    WLabel *lbNode_5;
    WLabel *lbNodeT_5;
    WLabel *lbNodeU_5;
    WLabel *lbNumNode_6;
    WLabel *lbNodeT_6;
    WLabel *lbNodeU_6;
    WLabel *lbNode_6;
    QLabel *lbFondo;

    void setupUi(QWidget *LNET_AI9)
    {
        if (LNET_AI9->objectName().isEmpty())
            LNET_AI9->setObjectName(QString::fromUtf8("LNET_AI9"));
        LNET_AI9->resize(485, 210);
        LNET_AI9->setMinimumSize(QSize(485, 210));
        LNET_AI9->setMaximumSize(QSize(485, 210));
        LNET_AI9->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame = new QFrame(LNET_AI9);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 14, 485, 29));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbNodRTD = new WLabel(LNET_AI9);
        lbNodRTD->setObjectName(QString::fromUtf8("lbNodRTD"));
        lbNodRTD->setGeometry(QRect(57, 18, 400, 20));
        lbNodRTD->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lbNodRTD->setFont(font);
        lbNodRTD->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame_5 = new QFrame(LNET_AI9);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 485, 11));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);
        lbLnetT_4 = new WLabel(frame_5);
        lbLnetT_4->setObjectName(QString::fromUtf8("lbLnetT_4"));
        lbLnetT_4->setGeometry(QRect(0, 0, 81, 20));
        lbLnetT_4->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        QFont font1;
        font1.setPointSize(5);
        font1.setBold(true);
        font1.setWeight(75);
        lbLnetT_4->setFont(font1);
        lbLnetT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(10, 10, 485, 11));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_6->setFrameShape(QFrame::Panel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(0);
        lbLnetT_5 = new WLabel(frame_6);
        lbLnetT_5->setObjectName(QString::fromUtf8("lbLnetT_5"));
        lbLnetT_5->setGeometry(QRect(0, 0, 81, 20));
        lbLnetT_5->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        lbLnetT_5->setFont(font1);
        lbLnetT_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbLnetT = new WLabel(frame_5);
        lbLnetT->setObjectName(QString::fromUtf8("lbLnetT"));
        lbLnetT->setGeometry(QRect(3, 0, 81, 12));
        lbLnetT->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        lbLnetT->setFont(font1);
        lbLnetT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_1 = new WLabel(LNET_AI9);
        lbNodeT_1->setObjectName(QString::fromUtf8("lbNodeT_1"));
        lbNodeT_1->setGeometry(QRect(30, 45, 340, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbNodeT_1->setFont(font2);
        lbNodeT_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumNode_1 = new WLabel(LNET_AI9);
        lbNumNode_1->setObjectName(QString::fromUtf8("lbNumNode_1"));
        lbNumNode_1->setGeometry(QRect(7, 45, 21, 16));
        lbNumNode_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_1->setFont(font2);
        lbNumNode_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_1 = new WLabel(LNET_AI9);
        lbNode_1->setObjectName(QString::fromUtf8("lbNode_1"));
        lbNode_1->setGeometry(QRect(375, 45, 61, 17));
        lbNode_1->setLayoutDirection(Qt::RightToLeft);
        lbNode_1->setFont(font2);
        lbNode_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        btCerrar = new QPushButton(LNET_AI9);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(125, 165, 101, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btCerrar->setFont(font3);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbNodeU_1 = new WLabel(LNET_AI9);
        lbNodeU_1->setObjectName(QString::fromUtf8("lbNodeU_1"));
        lbNodeU_1->setGeometry(QRect(438, 45, 35, 17));
        lbNodeU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_1->setFont(font2);
        lbNodeU_1->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNumNode_2 = new WLabel(LNET_AI9);
        lbNumNode_2->setObjectName(QString::fromUtf8("lbNumNode_2"));
        lbNumNode_2->setGeometry(QRect(7, 60, 21, 16));
        lbNumNode_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_2->setFont(font2);
        lbNumNode_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_2 = new WLabel(LNET_AI9);
        lbNode_2->setObjectName(QString::fromUtf8("lbNode_2"));
        lbNode_2->setGeometry(QRect(375, 60, 61, 17));
        lbNode_2->setLayoutDirection(Qt::RightToLeft);
        lbNode_2->setFont(font2);
        lbNode_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeU_2 = new WLabel(LNET_AI9);
        lbNodeU_2->setObjectName(QString::fromUtf8("lbNodeU_2"));
        lbNodeU_2->setGeometry(QRect(438, 60, 35, 17));
        lbNodeU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_2->setFont(font2);
        lbNodeU_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNodeT_2 = new WLabel(LNET_AI9);
        lbNodeT_2->setObjectName(QString::fromUtf8("lbNodeT_2"));
        lbNodeT_2->setGeometry(QRect(30, 60, 340, 16));
        lbNodeT_2->setFont(font2);
        lbNodeT_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_3 = new WLabel(LNET_AI9);
        lbNodeU_3->setObjectName(QString::fromUtf8("lbNodeU_3"));
        lbNodeU_3->setGeometry(QRect(438, 78, 35, 17));
        lbNodeU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_3->setFont(font2);
        lbNodeU_3->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNode_3 = new WLabel(LNET_AI9);
        lbNode_3->setObjectName(QString::fromUtf8("lbNode_3"));
        lbNode_3->setGeometry(QRect(375, 78, 61, 17));
        lbNode_3->setLayoutDirection(Qt::RightToLeft);
        lbNode_3->setFont(font2);
        lbNode_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumNode_3 = new WLabel(LNET_AI9);
        lbNumNode_3->setObjectName(QString::fromUtf8("lbNumNode_3"));
        lbNumNode_3->setGeometry(QRect(7, 78, 21, 16));
        lbNumNode_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_3->setFont(font2);
        lbNumNode_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_3 = new WLabel(LNET_AI9);
        lbNodeT_3->setObjectName(QString::fromUtf8("lbNodeT_3"));
        lbNodeT_3->setGeometry(QRect(30, 78, 340, 16));
        lbNodeT_3->setFont(font2);
        lbNodeT_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumNode_4 = new WLabel(LNET_AI9);
        lbNumNode_4->setObjectName(QString::fromUtf8("lbNumNode_4"));
        lbNumNode_4->setGeometry(QRect(7, 95, 21, 16));
        lbNumNode_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_4->setFont(font2);
        lbNumNode_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_4 = new WLabel(LNET_AI9);
        lbNode_4->setObjectName(QString::fromUtf8("lbNode_4"));
        lbNode_4->setGeometry(QRect(375, 95, 61, 17));
        lbNode_4->setLayoutDirection(Qt::RightToLeft);
        lbNode_4->setFont(font2);
        lbNode_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeU_4 = new WLabel(LNET_AI9);
        lbNodeU_4->setObjectName(QString::fromUtf8("lbNodeU_4"));
        lbNodeU_4->setGeometry(QRect(438, 95, 35, 17));
        lbNodeU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_4->setFont(font2);
        lbNodeU_4->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNodeT_4 = new WLabel(LNET_AI9);
        lbNodeT_4->setObjectName(QString::fromUtf8("lbNodeT_4"));
        lbNodeT_4->setGeometry(QRect(30, 95, 340, 16));
        lbNodeT_4->setFont(font2);
        lbNodeT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumNode_5 = new WLabel(LNET_AI9);
        lbNumNode_5->setObjectName(QString::fromUtf8("lbNumNode_5"));
        lbNumNode_5->setGeometry(QRect(7, 112, 21, 16));
        lbNumNode_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_5->setFont(font2);
        lbNumNode_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNode_5 = new WLabel(LNET_AI9);
        lbNode_5->setObjectName(QString::fromUtf8("lbNode_5"));
        lbNode_5->setGeometry(QRect(375, 112, 61, 17));
        lbNode_5->setLayoutDirection(Qt::RightToLeft);
        lbNode_5->setFont(font2);
        lbNode_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNodeT_5 = new WLabel(LNET_AI9);
        lbNodeT_5->setObjectName(QString::fromUtf8("lbNodeT_5"));
        lbNodeT_5->setGeometry(QRect(30, 112, 340, 16));
        lbNodeT_5->setFont(font2);
        lbNodeT_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_5 = new WLabel(LNET_AI9);
        lbNodeU_5->setObjectName(QString::fromUtf8("lbNodeU_5"));
        lbNodeU_5->setGeometry(QRect(438, 112, 35, 17));
        lbNodeU_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_5->setFont(font2);
        lbNodeU_5->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNumNode_6 = new WLabel(LNET_AI9);
        lbNumNode_6->setObjectName(QString::fromUtf8("lbNumNode_6"));
        lbNumNode_6->setGeometry(QRect(7, 130, 21, 16));
        lbNumNode_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumNode_6->setFont(font2);
        lbNumNode_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeT_6 = new WLabel(LNET_AI9);
        lbNodeT_6->setObjectName(QString::fromUtf8("lbNodeT_6"));
        lbNodeT_6->setGeometry(QRect(30, 130, 340, 16));
        lbNodeT_6->setFont(font2);
        lbNodeT_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNodeU_6 = new WLabel(LNET_AI9);
        lbNodeU_6->setObjectName(QString::fromUtf8("lbNodeU_6"));
        lbNodeU_6->setGeometry(QRect(438, 130, 35, 17));
        lbNodeU_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNodeU_6->setFont(font2);
        lbNodeU_6->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbNode_6 = new WLabel(LNET_AI9);
        lbNode_6->setObjectName(QString::fromUtf8("lbNode_6"));
        lbNode_6->setGeometry(QRect(375, 130, 61, 17));
        lbNode_6->setLayoutDirection(Qt::RightToLeft);
        lbNode_6->setFont(font2);
        lbNode_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbFondo = new QLabel(LNET_AI9);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 210));
        lbFondo->setMaximumSize(QSize(485, 210));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frame->raise();
        lbNodRTD->raise();
        frame_5->raise();
        lbNodeT_1->raise();
        lbNumNode_1->raise();
        lbNode_1->raise();
        btCerrar->raise();
        lbNodeU_1->raise();
        lbNumNode_2->raise();
        lbNode_2->raise();
        lbNodeU_2->raise();
        lbNodeT_2->raise();
        lbNodeU_3->raise();
        lbNode_3->raise();
        lbNumNode_3->raise();
        lbNodeT_3->raise();
        lbNumNode_4->raise();
        lbNode_4->raise();
        lbNodeU_4->raise();
        lbNodeT_4->raise();
        lbNumNode_5->raise();
        lbNode_5->raise();
        lbNodeT_5->raise();
        lbNodeU_5->raise();
        lbNumNode_6->raise();
        lbNodeT_6->raise();
        lbNodeU_6->raise();
        lbNode_6->raise();

        retranslateUi(LNET_AI9);

        QMetaObject::connectSlotsByName(LNET_AI9);
    } // setupUi

    void retranslateUi(QWidget *LNET_AI9)
    {
        LNET_AI9->setWindowTitle(QApplication::translate("LNET_AI9", "LNET_AI9", 0, QApplication::UnicodeUTF8));
        lbNodRTD->setText(QApplication::translate("LNET_AI9", "NODE - N2N4 - RTD", 0, QApplication::UnicodeUTF8));
        lbLnetT_4->setText(QApplication::translate("LNET_AI9", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbLnetT_5->setText(QApplication::translate("LNET_AI9", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbLnetT->setText(QApplication::translate("LNET_AI9", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:5pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; color:#ffffff;\">LNET_AI.grf</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbNodeT_1->setText(QApplication::translate("LNET_AI9", "TEMP COJINETE GEN (NDE)", 0, QApplication::UnicodeUTF8));
        lbNumNode_1->setText(QApplication::translate("LNET_AI9", "1", 0, QApplication::UnicodeUTF8));
        lbNode_1->setText(QApplication::translate("LNET_AI9", "159.00", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("LNET_AI9", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbNodeU_1->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNumNode_2->setText(QApplication::translate("LNET_AI9", "2", 0, QApplication::UnicodeUTF8));
        lbNode_2->setText(QApplication::translate("LNET_AI9", "144.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_2->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNodeT_2->setText(QApplication::translate("LNET_AI9", "TEMP DESAG\303\234E DE ACEITE  COJINETE GEN (NDE)", 0, QApplication::UnicodeUTF8));
        lbNodeU_3->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNode_3->setText(QApplication::translate("LNET_AI9", "110.00", 0, QApplication::UnicodeUTF8));
        lbNumNode_3->setText(QApplication::translate("LNET_AI9", "3", 0, QApplication::UnicodeUTF8));
        lbNodeT_3->setText(QApplication::translate("LNET_AI9", "TEMP SALIDA AIRE DE GEN", 0, QApplication::UnicodeUTF8));
        lbNumNode_4->setText(QApplication::translate("LNET_AI9", "4", 0, QApplication::UnicodeUTF8));
        lbNode_4->setText(QApplication::translate("LNET_AI9", "96.00", 0, QApplication::UnicodeUTF8));
        lbNodeU_4->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNodeT_4->setText(QApplication::translate("LNET_AI9", "TEMP SALIDA AIRE DE EXCITADOR DE GEN", 0, QApplication::UnicodeUTF8));
        lbNumNode_5->setText(QApplication::translate("LNET_AI9", "5", 0, QApplication::UnicodeUTF8));
        lbNode_5->setText(QApplication::translate("LNET_AI9", "155.00", 0, QApplication::UnicodeUTF8));
        lbNodeT_5->setText(QApplication::translate("LNET_AI9", "TEMP COJINETE GEN (DE)", 0, QApplication::UnicodeUTF8));
        lbNodeU_5->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNumNode_6->setText(QApplication::translate("LNET_AI9", "6", 0, QApplication::UnicodeUTF8));
        lbNodeT_6->setText(QApplication::translate("LNET_AI9", "TEMP DESAG\303\234E DE ACEITE COJINETE GEN (DE)", 0, QApplication::UnicodeUTF8));
        lbNodeU_6->setText(QApplication::translate("LNET_AI9", "\302\272F", 0, QApplication::UnicodeUTF8));
        lbNode_6->setText(QApplication::translate("LNET_AI9", "141.00", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LNET_AI9: public Ui_LNET_AI9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LNET_AI9_H
