/********************************************************************************
** Form generated from reading UI file 'analog16_2.ui'
**
** Created: Fri 13. Dec 19:34:24 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOG16_2_H
#define UI_ANALOG16_2_H

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

class Ui_Analog16_2
{
public:
    QFrame *frame_2;
    WLabel *lbIP;
    QFrame *frame;
    WLabel *label;
    QPushButton *btCerrar;
    WLabel *lbNum_1;
    WLabel *lbTit_1;
    WLabel *lbNumDes_1;
    WLabel *lbUni_1;
    WLabel *lbUni_2;
    WLabel *lbNumDes_2;
    WLabel *lbNum_2;
    WLabel *lbTit_2;
    WLabel *lbTit_4;
    WLabel *lbUni_4;
    WLabel *lbNumDes_3;
    WLabel *lbNum_3;
    WLabel *lbUni_3;
    WLabel *lbNum_4;
    WLabel *lbNumDes_4;
    WLabel *lbTit_3;
    WLabel *lbTit_7;
    WLabel *lbUni_8;
    WLabel *lbUni_6;
    WLabel *lbNumDes_5;
    WLabel *lbNumDes_8;
    WLabel *lbNum_7;
    WLabel *lbTit_6;
    WLabel *lbNum_5;
    WLabel *lbTit_8;
    WLabel *lbUni_7;
    WLabel *lbUni_5;
    WLabel *lbNum_6;
    WLabel *lbNumDes_7;
    WLabel *lbNumDes_6;
    WLabel *lbNum_8;
    WLabel *lbTit_5;
    WLabel *lbTit_9;
    WLabel *lbUni_12;
    WLabel *lbNumDes_11;
    WLabel *lbNum_11;
    WLabel *lbUni_10;
    WLabel *lbNum_9;
    WLabel *lbUni_11;
    WLabel *lbTit_10;
    WLabel *lbNum_12;
    WLabel *lbTit_12;
    WLabel *lbUni_9;
    WLabel *lbTit_11;
    WLabel *lbNumDes_12;
    WLabel *lbNumDes_9;
    WLabel *lbNumDes_10;
    WLabel *lbNum_10;
    QLabel *lbFondo;

    void setupUi(QWidget *Analog16_2)
    {
        if (Analog16_2->objectName().isEmpty())
            Analog16_2->setObjectName(QString::fromUtf8("Analog16_2"));
        Analog16_2->resize(485, 425);
        Analog16_2->setMinimumSize(QSize(485, 425));
        Analog16_2->setMaximumSize(QSize(485, 425));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        Analog16_2->setFont(font);
        Analog16_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame_2 = new QFrame(Analog16_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 91, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 110, 195);"));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        lbIP->setFont(font1);
        lbIP->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Analog16_2);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        btCerrar = new QPushButton(Analog16_2);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(127, 380, 98, 30));
        btCerrar->setFont(font2);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbNum_1 = new WLabel(Analog16_2);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(12, 50, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setBold(true);
        font3.setWeight(75);
        lbNum_1->setFont(font3);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_1 = new WLabel(Analog16_2);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(40, 50, 340, 16));
        lbTit_1->setFont(font3);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_1 = new WLabel(Analog16_2);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(384, 50, 46, 16));
        lbNumDes_1->setFont(font3);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_1 = new WLabel(Analog16_2);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(437, 50, 43, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_1->setFont(font3);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Analog16_2);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(437, 70, 43, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_2->setFont(font3);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_2 = new WLabel(Analog16_2);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(384, 70, 46, 16));
        lbNumDes_2->setFont(font3);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_2 = new WLabel(Analog16_2);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(12, 70, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font3);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_2 = new WLabel(Analog16_2);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(40, 70, 340, 16));
        lbTit_2->setFont(font3);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_4 = new WLabel(Analog16_2);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(40, 110, 340, 16));
        lbTit_4->setFont(font3);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_4 = new WLabel(Analog16_2);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(437, 110, 43, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_4->setFont(font3);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_3 = new WLabel(Analog16_2);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(384, 90, 46, 16));
        lbNumDes_3->setFont(font3);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_3 = new WLabel(Analog16_2);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(12, 90, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font3);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_3 = new WLabel(Analog16_2);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(437, 90, 43, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_3->setFont(font3);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_4 = new WLabel(Analog16_2);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(12, 110, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setFont(font3);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Analog16_2);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(384, 110, 46, 16));
        lbNumDes_4->setFont(font3);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_3 = new WLabel(Analog16_2);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(40, 90, 340, 16));
        lbTit_3->setFont(font3);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_7 = new WLabel(Analog16_2);
        lbTit_7->setObjectName(QString::fromUtf8("lbTit_7"));
        lbTit_7->setGeometry(QRect(40, 170, 340, 16));
        lbTit_7->setFont(font3);
        lbTit_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_8 = new WLabel(Analog16_2);
        lbUni_8->setObjectName(QString::fromUtf8("lbUni_8"));
        lbUni_8->setGeometry(QRect(437, 190, 43, 16));
        lbUni_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_8->setFont(font3);
        lbUni_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_6 = new WLabel(Analog16_2);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(437, 150, 43, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_6->setFont(font3);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_5 = new WLabel(Analog16_2);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(384, 130, 46, 16));
        lbNumDes_5->setFont(font3);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_8 = new WLabel(Analog16_2);
        lbNumDes_8->setObjectName(QString::fromUtf8("lbNumDes_8"));
        lbNumDes_8->setGeometry(QRect(384, 190, 46, 16));
        lbNumDes_8->setFont(font3);
        lbNumDes_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_7 = new WLabel(Analog16_2);
        lbNum_7->setObjectName(QString::fromUtf8("lbNum_7"));
        lbNum_7->setGeometry(QRect(12, 170, 21, 16));
        lbNum_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_7->setFont(font3);
        lbNum_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_6 = new WLabel(Analog16_2);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(40, 150, 340, 16));
        lbTit_6->setFont(font3);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Analog16_2);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(12, 130, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font3);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_8 = new WLabel(Analog16_2);
        lbTit_8->setObjectName(QString::fromUtf8("lbTit_8"));
        lbTit_8->setGeometry(QRect(40, 190, 340, 16));
        lbTit_8->setFont(font3);
        lbTit_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_7 = new WLabel(Analog16_2);
        lbUni_7->setObjectName(QString::fromUtf8("lbUni_7"));
        lbUni_7->setGeometry(QRect(437, 170, 43, 16));
        lbUni_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_7->setFont(font3);
        lbUni_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_5 = new WLabel(Analog16_2);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(437, 130, 43, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_5->setFont(font3);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_6 = new WLabel(Analog16_2);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(12, 150, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font3);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_7 = new WLabel(Analog16_2);
        lbNumDes_7->setObjectName(QString::fromUtf8("lbNumDes_7"));
        lbNumDes_7->setGeometry(QRect(384, 170, 46, 16));
        lbNumDes_7->setFont(font3);
        lbNumDes_7->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_6 = new WLabel(Analog16_2);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(384, 150, 46, 16));
        lbNumDes_6->setFont(font3);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_8 = new WLabel(Analog16_2);
        lbNum_8->setObjectName(QString::fromUtf8("lbNum_8"));
        lbNum_8->setGeometry(QRect(12, 190, 21, 16));
        lbNum_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_8->setFont(font3);
        lbNum_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_5 = new WLabel(Analog16_2);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(40, 130, 340, 16));
        lbTit_5->setFont(font3);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_9 = new WLabel(Analog16_2);
        lbTit_9->setObjectName(QString::fromUtf8("lbTit_9"));
        lbTit_9->setGeometry(QRect(40, 210, 340, 16));
        lbTit_9->setFont(font3);
        lbTit_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_12 = new WLabel(Analog16_2);
        lbUni_12->setObjectName(QString::fromUtf8("lbUni_12"));
        lbUni_12->setGeometry(QRect(437, 270, 43, 16));
        lbUni_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_12->setFont(font3);
        lbUni_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_11 = new WLabel(Analog16_2);
        lbNumDes_11->setObjectName(QString::fromUtf8("lbNumDes_11"));
        lbNumDes_11->setGeometry(QRect(384, 250, 46, 16));
        lbNumDes_11->setFont(font3);
        lbNumDes_11->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_11 = new WLabel(Analog16_2);
        lbNum_11->setObjectName(QString::fromUtf8("lbNum_11"));
        lbNum_11->setGeometry(QRect(12, 250, 21, 16));
        lbNum_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_11->setFont(font3);
        lbNum_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_10 = new WLabel(Analog16_2);
        lbUni_10->setObjectName(QString::fromUtf8("lbUni_10"));
        lbUni_10->setGeometry(QRect(437, 230, 43, 16));
        lbUni_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_10->setFont(font3);
        lbUni_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_9 = new WLabel(Analog16_2);
        lbNum_9->setObjectName(QString::fromUtf8("lbNum_9"));
        lbNum_9->setGeometry(QRect(12, 210, 21, 16));
        lbNum_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_9->setFont(font3);
        lbNum_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_11 = new WLabel(Analog16_2);
        lbUni_11->setObjectName(QString::fromUtf8("lbUni_11"));
        lbUni_11->setGeometry(QRect(437, 250, 43, 16));
        lbUni_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_11->setFont(font3);
        lbUni_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_10 = new WLabel(Analog16_2);
        lbTit_10->setObjectName(QString::fromUtf8("lbTit_10"));
        lbTit_10->setGeometry(QRect(40, 230, 340, 16));
        lbTit_10->setFont(font3);
        lbTit_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_12 = new WLabel(Analog16_2);
        lbNum_12->setObjectName(QString::fromUtf8("lbNum_12"));
        lbNum_12->setGeometry(QRect(12, 270, 21, 16));
        lbNum_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_12->setFont(font3);
        lbNum_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_12 = new WLabel(Analog16_2);
        lbTit_12->setObjectName(QString::fromUtf8("lbTit_12"));
        lbTit_12->setGeometry(QRect(40, 270, 340, 16));
        lbTit_12->setFont(font3);
        lbTit_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_9 = new WLabel(Analog16_2);
        lbUni_9->setObjectName(QString::fromUtf8("lbUni_9"));
        lbUni_9->setGeometry(QRect(437, 210, 43, 16));
        lbUni_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbUni_9->setFont(font3);
        lbUni_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_11 = new WLabel(Analog16_2);
        lbTit_11->setObjectName(QString::fromUtf8("lbTit_11"));
        lbTit_11->setGeometry(QRect(40, 250, 340, 16));
        lbTit_11->setFont(font3);
        lbTit_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_12 = new WLabel(Analog16_2);
        lbNumDes_12->setObjectName(QString::fromUtf8("lbNumDes_12"));
        lbNumDes_12->setGeometry(QRect(384, 270, 46, 16));
        lbNumDes_12->setFont(font3);
        lbNumDes_12->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_9 = new WLabel(Analog16_2);
        lbNumDes_9->setObjectName(QString::fromUtf8("lbNumDes_9"));
        lbNumDes_9->setGeometry(QRect(384, 210, 46, 16));
        lbNumDes_9->setFont(font3);
        lbNumDes_9->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_10 = new WLabel(Analog16_2);
        lbNumDes_10->setObjectName(QString::fromUtf8("lbNumDes_10"));
        lbNumDes_10->setGeometry(QRect(384, 230, 46, 16));
        lbNumDes_10->setFont(font3);
        lbNumDes_10->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_10 = new WLabel(Analog16_2);
        lbNum_10->setObjectName(QString::fromUtf8("lbNum_10"));
        lbNum_10->setGeometry(QRect(12, 230, 21, 16));
        lbNum_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_10->setFont(font3);
        lbNum_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Analog16_2);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 421));
        lbFondo->setMinimumSize(QSize(485, 421));
        lbFondo->setMaximumSize(QSize(485, 421));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->raise();
        lbNum_5->raise();
        frame_2->raise();
        frame->raise();
        btCerrar->raise();
        lbNum_1->raise();
        lbTit_1->raise();
        lbNumDes_1->raise();
        lbUni_1->raise();
        lbUni_2->raise();
        lbNumDes_2->raise();
        lbNum_2->raise();
        lbTit_2->raise();
        lbTit_4->raise();
        lbUni_4->raise();
        lbNumDes_3->raise();
        lbNum_3->raise();
        lbUni_3->raise();
        lbNum_4->raise();
        lbNumDes_4->raise();
        lbTit_3->raise();
        lbTit_7->raise();
        lbUni_8->raise();
        lbUni_6->raise();
        lbNumDes_5->raise();
        lbNumDes_8->raise();
        lbNum_7->raise();
        lbTit_6->raise();
        lbTit_8->raise();
        lbUni_7->raise();
        lbUni_5->raise();
        lbNumDes_7->raise();
        lbNumDes_6->raise();
        lbNum_8->raise();
        lbTit_5->raise();
        lbTit_9->raise();
        lbUni_12->raise();
        lbNumDes_11->raise();
        lbNum_11->raise();
        lbUni_10->raise();
        lbNum_9->raise();
        lbUni_11->raise();
        lbTit_10->raise();
        lbNum_12->raise();
        lbTit_12->raise();
        lbUni_9->raise();
        lbTit_11->raise();
        lbNumDes_12->raise();
        lbNumDes_9->raise();
        lbNumDes_10->raise();
        lbNum_10->raise();
        lbNum_6->raise();

        retranslateUi(Analog16_2);

        QMetaObject::connectSlotsByName(Analog16_2);
    } // setupUi

    void retranslateUi(QWidget *Analog16_2)
    {
        Analog16_2->setWindowTitle(QApplication::translate("Analog16_2", "Form", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Analog16_2", "ANALOG16.grf", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Analog16_2", "SLOT-  A110  -ACT", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Analog16_2", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Analog16_2", "1", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Analog16_2", "2", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_3->setText(QApplication::translate("Analog16_2", "3", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Analog16_2", "4", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_7->setText(QApplication::translate("Analog16_2", "DEMANDA VVE", 0, QApplication::UnicodeUTF8));
        lbUni_8->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QApplication::translate("Analog16_2", "OHMS", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_8->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_7->setText(QApplication::translate("Analog16_2", "7", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Analog16_2", "5", 0, QApplication::UnicodeUTF8));
        lbTit_8->setText(QApplication::translate("Analog16_2", "RETROAL SELECCIONADA VVE", 0, QApplication::UnicodeUTF8));
        lbUni_7->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Analog16_2", "MA", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Analog16_2", "6", 0, QApplication::UnicodeUTF8));
        lbNumDes_7->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_8->setText(QApplication::translate("Analog16_2", "8", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Analog16_2", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_9->setText(QApplication::translate("Analog16_2", "RETROAL DE POSICI\303\223N VVE A", 0, QApplication::UnicodeUTF8));
        lbUni_12->setText(QApplication::translate("Analog16_2", "OHMS", 0, QApplication::UnicodeUTF8));
        lbNumDes_11->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_11->setText(QApplication::translate("Analog16_2", "11", 0, QApplication::UnicodeUTF8));
        lbUni_10->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbNum_9->setText(QApplication::translate("Analog16_2", "9", 0, QApplication::UnicodeUTF8));
        lbUni_11->setText(QApplication::translate("Analog16_2", "MA", 0, QApplication::UnicodeUTF8));
        lbTit_10->setText(QApplication::translate("Analog16_2", "RETROAL DE POSICI\303\223N VVE B", 0, QApplication::UnicodeUTF8));
        lbNum_12->setText(QApplication::translate("Analog16_2", "12", 0, QApplication::UnicodeUTF8));
        lbTit_12->setText(QApplication::translate("Analog16_2", "OHMIOS VVE", 0, QApplication::UnicodeUTF8));
        lbUni_9->setText(QApplication::translate("Analog16_2", "%", 0, QApplication::UnicodeUTF8));
        lbTit_11->setText(QApplication::translate("Analog16_2", "MA VVE", 0, QApplication::UnicodeUTF8));
        lbNumDes_12->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_9->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNumDes_10->setText(QApplication::translate("Analog16_2", "00.00", 0, QApplication::UnicodeUTF8));
        lbNum_10->setText(QApplication::translate("Analog16_2", "10", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Analog16_2: public Ui_Analog16_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG16_2_H
