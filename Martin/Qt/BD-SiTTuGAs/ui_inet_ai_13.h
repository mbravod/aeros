/********************************************************************************
** Form generated from reading UI file 'inet_ai_13.ui'
**
** Created: Thu 19. Dec 14:36:09 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INET_AI_13_H
#define UI_INET_AI_13_H

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

class Ui_Inet_AI_13
{
public:
    QPushButton *btCerrar;
    WLabel *lbTit_4;
    WLabel *lbTit_1;
    WLabel *lbUni_2;
    QFrame *frame_2;
    WLabel *lbIP;
    WLabel *lbNum_4;
    WLabel *lbNumDes_6;
    WLabel *lbUni_1;
    WLabel *lbUni_4;
    WLabel *lbNumDes_2;
    WLabel *lbNum_2;
    WLabel *lbUni_3;
    WLabel *lbNumDes_1;
    WLabel *lbNumDes_3;
    WLabel *lbNum_1;
    WLabel *lbNum_5;
    WLabel *lbNumDes_4;
    WLabel *lbNumDes_5;
    WLabel *lbUni_5;
    QFrame *frame;
    WLabel *label;
    WLabel *lbTit_3;
    WLabel *lbTit_5;
    WLabel *lbTit_6;
    WLabel *lbUni_6;
    WLabel *lbNum_3;
    WLabel *lbTit_2;
    WLabel *lbNum_6;
    QLabel *lbFondo;

    void setupUi(QWidget *Inet_AI_13)
    {
        if (Inet_AI_13->objectName().isEmpty())
            Inet_AI_13->setObjectName(QString::fromUtf8("Inet_AI_13"));
        Inet_AI_13->resize(485, 250);
        Inet_AI_13->setMinimumSize(QSize(485, 250));
        Inet_AI_13->setMaximumSize(QSize(485, 250));
        Inet_AI_13->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        btCerrar = new QPushButton(Inet_AI_13);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(126, 210, 98, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        btCerrar->setFont(font);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbTit_4 = new WLabel(Inet_AI_13);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lbTit_4->setFont(font1);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_1 = new WLabel(Inet_AI_13);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font1);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Inet_AI_13);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(440, 70, 43, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setFont(font1);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame_2 = new QFrame(Inet_AI_13);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 121, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lbIP->setFont(font2);
        lbIP->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_4 = new WLabel(Inet_AI_13);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setFont(font1);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_6 = new WLabel(Inet_AI_13);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(380, 150, 50, 16));
        lbNumDes_6->setFont(font1);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_1 = new WLabel(Inet_AI_13);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(440, 50, 43, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setFont(font1);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_4 = new WLabel(Inet_AI_13);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(440, 110, 43, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setFont(font1);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_2 = new WLabel(Inet_AI_13);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(380, 70, 50, 16));
        lbNumDes_2->setFont(font1);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_2 = new WLabel(Inet_AI_13);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font1);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_3 = new WLabel(Inet_AI_13);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(440, 90, 43, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setFont(font1);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_1 = new WLabel(Inet_AI_13);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(380, 50, 50, 16));
        lbNumDes_1->setFont(font1);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_3 = new WLabel(Inet_AI_13);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(380, 90, 50, 16));
        lbNumDes_3->setFont(font1);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_1 = new WLabel(Inet_AI_13);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_1->setFont(font1);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Inet_AI_13);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font1);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Inet_AI_13);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(380, 110, 50, 16));
        lbNumDes_4->setFont(font1);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_5 = new WLabel(Inet_AI_13);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(380, 130, 50, 16));
        lbNumDes_5->setFont(font1);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_5 = new WLabel(Inet_AI_13);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(440, 130, 43, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setFont(font1);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Inet_AI_13);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 17, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label = new WLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(62, 4, 400, 22));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        label->setFont(font);
        label->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_3 = new WLabel(Inet_AI_13);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        lbTit_3->setFont(font1);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_5 = new WLabel(Inet_AI_13);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        lbTit_5->setFont(font1);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_6 = new WLabel(Inet_AI_13);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font1);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_6 = new WLabel(Inet_AI_13);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(440, 150, 43, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setFont(font1);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_3 = new WLabel(Inet_AI_13);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font1);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_2 = new WLabel(Inet_AI_13);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font1);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_6 = new WLabel(Inet_AI_13);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font1);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Inet_AI_13);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 250));
        lbFondo->setMinimumSize(QSize(485, 250));
        lbFondo->setMaximumSize(QSize(485, 250));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        btCerrar->raise();
        lbTit_4->raise();
        lbTit_1->raise();
        lbUni_2->raise();
        frame_2->raise();
        lbNum_4->raise();
        lbNumDes_6->raise();
        lbUni_1->raise();
        lbUni_4->raise();
        lbNumDes_2->raise();
        lbNum_2->raise();
        lbUni_3->raise();
        lbNumDes_1->raise();
        lbNumDes_3->raise();
        lbNum_1->raise();
        lbNum_5->raise();
        lbNumDes_4->raise();
        lbNumDes_5->raise();
        lbUni_5->raise();
        frame->raise();
        lbTit_3->raise();
        lbTit_5->raise();
        lbTit_6->raise();
        lbUni_6->raise();
        lbNum_3->raise();
        lbTit_2->raise();
        lbNum_6->raise();

        retranslateUi(Inet_AI_13);

        QMetaObject::connectSlotsByName(Inet_AI_13);
    } // setupUi

    void retranslateUi(QWidget *Inet_AI_13)
    {
        Inet_AI_13->setWindowTitle(QApplication::translate("Inet_AI_13", "Inet_AI_13", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Inet_AI_13", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Inet_AI_13", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Inet_AI_13", "PRESI\303\223N SUMINISTRO DE GAS COMB", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Inet_AI_13", "PSIG", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Inet_AI_13", "LNET_A1.grf", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Inet_AI_13", "4", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Inet_AI_13", "PSIG", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QApplication::translate("Inet_AI_13", "PSIG", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Inet_AI_13", "2", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QString());
        lbNumDes_1->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Inet_AI_13", "1", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Inet_AI_13", "5", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Inet_AI_13", "0.00", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Inet_AI_13", "PSIG", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Inet_AI_13", "NODE - N2N5  - A1", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Inet_AI_13", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Inet_AI_13", "PRES SUMIN LUB DEL GENERADOR", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Inet_AI_13", "PRES RECUP ACEITE DE TURBINA", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QString());
        lbNum_3->setText(QApplication::translate("Inet_AI_13", "3", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Inet_AI_13", "PRES SUMIN LUB DEL GENERADOR", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Inet_AI_13", "6", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inet_AI_13: public Ui_Inet_AI_13 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INET_AI_13_H
