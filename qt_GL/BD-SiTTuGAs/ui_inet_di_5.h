/********************************************************************************
** Form generated from reading UI file 'inet_di_5.ui'
**
** Created: Fri 3. Jan 20:43:14 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INET_DI_5_H
#define UI_INET_DI_5_H

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

class Ui_Inet_DI_5
{
public:
    WLabel *lbTit_8;
    WLabel *lbNum_10;
    WLabel *lbUni_5;
    WLabel *lbNumDes_7;
    QFrame *frame_2;
    WLabel *lbIP;
    WLabel *lbNum_4;
    WLabel *lbUni_19;
    WLabel *lbNumDes_20;
    WLabel *lbNum_23;
    WLabel *lbTit_21;
    WLabel *lbUni_4;
    WLabel *lbTit_1;
    WLabel *lbTit_4;
    WLabel *lbNum_5;
    WLabel *lbTit_3;
    WLabel *lbTit_2;
    WLabel *lbNumDes_8;
    WLabel *lbNumDes_11;
    QPushButton *btCerrar;
    WLabel *lbNumDes_2;
    WLabel *lbUni_12;
    WLabel *lbNumDes_10;
    WLabel *lbUni_1;
    WLabel *lbNumDes_12;
    WLabel *lbUni_14;
    WLabel *lbNum_12;
    WLabel *lbUni_6;
    WLabel *lbNumDes_6;
    WLabel *lbNum_6;
    WLabel *lbNum_3;
    WLabel *lbTit_11;
    WLabel *lbNum_11;
    WLabel *lbUni_17;
    WLabel *lbNumDes_3;
    WLabel *lbNum_18;
    WLabel *lbNumDes_24;
    WLabel *lbNumDes_18;
    WLabel *lbNum_8;
    WLabel *lbTit_18;
    WLabel *lbTit_5;
    WLabel *lbNumDes_9;
    WLabel *lbNumDes_1;
    WLabel *lbTit_13;
    QFrame *frame;
    WLabel *label_2;
    WLabel *lbUni_3;
    WLabel *lbNum_21;
    WLabel *lbUni_9;
    WLabel *lbNum_1;
    WLabel *lbUni_11;
    WLabel *lbNumDes_4;
    WLabel *lbTit_6;
    WLabel *lbUni_2;
    WLabel *lbUni_15;
    WLabel *lbTit_9;
    WLabel *lbTit_7;
    WLabel *lbTit_12;
    WLabel *lbNumDes_17;
    WLabel *lbTit_10;
    WLabel *lbNum_2;
    WLabel *lbTit_24;
    WLabel *lbUni_7;
    WLabel *lbNum_7;
    WLabel *lbNum_20;
    WLabel *lbUni_8;
    WLabel *lbNum_9;
    WLabel *lbNumDes_5;
    WLabel *lbUni_10;
    QLabel *lbFondo;

    void setupUi(QWidget *Inet_DI_5)
    {
        if (Inet_DI_5->objectName().isEmpty())
            Inet_DI_5->setObjectName(QString::fromUtf8("Inet_DI_5"));
        Inet_DI_5->resize(485, 430);
        Inet_DI_5->setMinimumSize(QSize(485, 430));
        Inet_DI_5->setMaximumSize(QSize(485, 430));
        Inet_DI_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
""));
        lbTit_8 = new WLabel(Inet_DI_5);
        lbTit_8->setObjectName(QString::fromUtf8("lbTit_8"));
        lbTit_8->setGeometry(QRect(30, 190, 340, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        lbTit_8->setFont(font);
        lbTit_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_10 = new WLabel(Inet_DI_5);
        lbNum_10->setObjectName(QString::fromUtf8("lbNum_10"));
        lbNum_10->setGeometry(QRect(5, 230, 21, 16));
        lbNum_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setBold(true);
        font1.setWeight(75);
        lbNum_10->setFont(font1);
        lbNum_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_5 = new WLabel(Inet_DI_5);
        lbUni_5->setObjectName(QString::fromUtf8("lbUni_5"));
        lbUni_5->setGeometry(QRect(430, 135, 51, 16));
        lbUni_5->setStyleSheet(QString::fromUtf8(""));
        lbUni_5->setFont(font);
        lbUni_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_7 = new WLabel(Inet_DI_5);
        lbNumDes_7->setObjectName(QString::fromUtf8("lbNumDes_7"));
        lbNumDes_7->setGeometry(QRect(374, 173, 50, 16));
        lbNumDes_7->setFont(font);
        lbNumDes_7->setProperty("Alineacion", QVariant(WLabel::Derecha));
        frame_2 = new QFrame(Inet_DI_5);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 485, 16));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 134, 255), stop:1 rgba(255, 255, 255, 255));"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        lbIP = new WLabel(frame_2);
        lbIP->setObjectName(QString::fromUtf8("lbIP"));
        lbIP->setGeometry(QRect(3, 0, 101, 16));
        lbIP->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 110, 195);\n"
"background-color: rgb(74, 110, 195);\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lbIP->setFont(font2);
        lbIP->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_4 = new WLabel(Inet_DI_5);
        lbNum_4->setObjectName(QString::fromUtf8("lbNum_4"));
        lbNum_4->setGeometry(QRect(5, 113, 21, 16));
        lbNum_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_4->setFont(font1);
        lbNum_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_19 = new WLabel(Inet_DI_5);
        lbUni_19->setObjectName(QString::fromUtf8("lbUni_19"));
        lbUni_19->setGeometry(QRect(430, 350, 51, 16));
        lbUni_19->setStyleSheet(QString::fromUtf8(""));
        lbUni_19->setFont(font);
        lbUni_19->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_20 = new WLabel(Inet_DI_5);
        lbNumDes_20->setObjectName(QString::fromUtf8("lbNumDes_20"));
        lbNumDes_20->setGeometry(QRect(374, 350, 50, 16));
        lbNumDes_20->setFont(font);
        lbNumDes_20->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_23 = new WLabel(Inet_DI_5);
        lbNum_23->setObjectName(QString::fromUtf8("lbNum_23"));
        lbNum_23->setGeometry(QRect(5, 330, 21, 16));
        lbNum_23->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_23->setFont(font1);
        lbNum_23->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_21 = new WLabel(Inet_DI_5);
        lbTit_21->setObjectName(QString::fromUtf8("lbTit_21"));
        lbTit_21->setGeometry(QRect(30, 350, 340, 16));
        lbTit_21->setFont(font);
        lbTit_21->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_4 = new WLabel(Inet_DI_5);
        lbUni_4->setObjectName(QString::fromUtf8("lbUni_4"));
        lbUni_4->setGeometry(QRect(430, 113, 51, 16));
        lbUni_4->setStyleSheet(QString::fromUtf8(""));
        lbUni_4->setFont(font);
        lbUni_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_1 = new WLabel(Inet_DI_5);
        lbTit_1->setObjectName(QString::fromUtf8("lbTit_1"));
        lbTit_1->setGeometry(QRect(30, 55, 340, 16));
        lbTit_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTit_1->setFont(font);
        lbTit_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_4 = new WLabel(Inet_DI_5);
        lbTit_4->setObjectName(QString::fromUtf8("lbTit_4"));
        lbTit_4->setGeometry(QRect(30, 113, 340, 16));
        lbTit_4->setFont(font);
        lbTit_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_5 = new WLabel(Inet_DI_5);
        lbNum_5->setObjectName(QString::fromUtf8("lbNum_5"));
        lbNum_5->setGeometry(QRect(5, 135, 21, 16));
        lbNum_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_5->setFont(font1);
        lbNum_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_3 = new WLabel(Inet_DI_5);
        lbTit_3->setObjectName(QString::fromUtf8("lbTit_3"));
        lbTit_3->setGeometry(QRect(30, 94, 340, 16));
        lbTit_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTit_3->setFont(font);
        lbTit_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_2 = new WLabel(Inet_DI_5);
        lbTit_2->setObjectName(QString::fromUtf8("lbTit_2"));
        lbTit_2->setGeometry(QRect(30, 74, 340, 16));
        lbTit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTit_2->setFont(font);
        lbTit_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_8 = new WLabel(Inet_DI_5);
        lbNumDes_8->setObjectName(QString::fromUtf8("lbNumDes_8"));
        lbNumDes_8->setGeometry(QRect(374, 190, 50, 16));
        lbNumDes_8->setFont(font);
        lbNumDes_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_11 = new WLabel(Inet_DI_5);
        lbNumDes_11->setObjectName(QString::fromUtf8("lbNumDes_11"));
        lbNumDes_11->setGeometry(QRect(374, 250, 50, 16));
        lbNumDes_11->setFont(font);
        lbNumDes_11->setProperty("Alineacion", QVariant(WLabel::Derecha));
        btCerrar = new QPushButton(Inet_DI_5);
        btCerrar->setObjectName(QString::fromUtf8("btCerrar"));
        btCerrar->setGeometry(QRect(136, 383, 101, 33));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        btCerrar->setFont(font3);
        btCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbNumDes_2 = new WLabel(Inet_DI_5);
        lbNumDes_2->setObjectName(QString::fromUtf8("lbNumDes_2"));
        lbNumDes_2->setGeometry(QRect(374, 74, 50, 16));
        lbNumDes_2->setFont(font);
        lbNumDes_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_12 = new WLabel(Inet_DI_5);
        lbUni_12->setObjectName(QString::fromUtf8("lbUni_12"));
        lbUni_12->setGeometry(QRect(430, 270, 51, 16));
        lbUni_12->setStyleSheet(QString::fromUtf8(""));
        lbUni_12->setFont(font);
        lbUni_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_10 = new WLabel(Inet_DI_5);
        lbNumDes_10->setObjectName(QString::fromUtf8("lbNumDes_10"));
        lbNumDes_10->setGeometry(QRect(374, 230, 50, 16));
        lbNumDes_10->setFont(font);
        lbNumDes_10->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_1 = new WLabel(Inet_DI_5);
        lbUni_1->setObjectName(QString::fromUtf8("lbUni_1"));
        lbUni_1->setGeometry(QRect(430, 55, 50, 16));
        lbUni_1->setStyleSheet(QString::fromUtf8(""));
        lbUni_1->setFont(font);
        lbUni_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_12 = new WLabel(Inet_DI_5);
        lbNumDes_12->setObjectName(QString::fromUtf8("lbNumDes_12"));
        lbNumDes_12->setGeometry(QRect(374, 270, 50, 16));
        lbNumDes_12->setFont(font);
        lbNumDes_12->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_14 = new WLabel(Inet_DI_5);
        lbUni_14->setObjectName(QString::fromUtf8("lbUni_14"));
        lbUni_14->setGeometry(QRect(430, 310, 51, 16));
        lbUni_14->setStyleSheet(QString::fromUtf8(""));
        lbUni_14->setFont(font);
        lbUni_14->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_12 = new WLabel(Inet_DI_5);
        lbNum_12->setObjectName(QString::fromUtf8("lbNum_12"));
        lbNum_12->setGeometry(QRect(5, 270, 21, 16));
        lbNum_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_12->setFont(font1);
        lbNum_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_6 = new WLabel(Inet_DI_5);
        lbUni_6->setObjectName(QString::fromUtf8("lbUni_6"));
        lbUni_6->setGeometry(QRect(430, 154, 51, 16));
        lbUni_6->setStyleSheet(QString::fromUtf8(""));
        lbUni_6->setFont(font);
        lbUni_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_6 = new WLabel(Inet_DI_5);
        lbNumDes_6->setObjectName(QString::fromUtf8("lbNumDes_6"));
        lbNumDes_6->setGeometry(QRect(374, 154, 50, 16));
        lbNumDes_6->setFont(font);
        lbNumDes_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_6 = new WLabel(Inet_DI_5);
        lbNum_6->setObjectName(QString::fromUtf8("lbNum_6"));
        lbNum_6->setGeometry(QRect(5, 154, 21, 16));
        lbNum_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_6->setFont(font1);
        lbNum_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_3 = new WLabel(Inet_DI_5);
        lbNum_3->setObjectName(QString::fromUtf8("lbNum_3"));
        lbNum_3->setGeometry(QRect(5, 94, 21, 16));
        lbNum_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_3->setFont(font1);
        lbNum_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_11 = new WLabel(Inet_DI_5);
        lbTit_11->setObjectName(QString::fromUtf8("lbTit_11"));
        lbTit_11->setGeometry(QRect(30, 250, 340, 16));
        lbTit_11->setFont(font);
        lbTit_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_11 = new WLabel(Inet_DI_5);
        lbNum_11->setObjectName(QString::fromUtf8("lbNum_11"));
        lbNum_11->setGeometry(QRect(5, 250, 21, 16));
        lbNum_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_11->setFont(font1);
        lbNum_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_17 = new WLabel(Inet_DI_5);
        lbUni_17->setObjectName(QString::fromUtf8("lbUni_17"));
        lbUni_17->setGeometry(QRect(430, 330, 51, 16));
        lbUni_17->setStyleSheet(QString::fromUtf8(""));
        lbUni_17->setFont(font);
        lbUni_17->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_3 = new WLabel(Inet_DI_5);
        lbNumDes_3->setObjectName(QString::fromUtf8("lbNumDes_3"));
        lbNumDes_3->setGeometry(QRect(374, 94, 50, 16));
        lbNumDes_3->setFont(font);
        lbNumDes_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_18 = new WLabel(Inet_DI_5);
        lbNum_18->setObjectName(QString::fromUtf8("lbNum_18"));
        lbNum_18->setGeometry(QRect(5, 310, 21, 16));
        lbNum_18->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_18->setFont(font1);
        lbNum_18->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_24 = new WLabel(Inet_DI_5);
        lbNumDes_24->setObjectName(QString::fromUtf8("lbNumDes_24"));
        lbNumDes_24->setGeometry(QRect(374, 310, 50, 16));
        lbNumDes_24->setFont(font);
        lbNumDes_24->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_18 = new WLabel(Inet_DI_5);
        lbNumDes_18->setObjectName(QString::fromUtf8("lbNumDes_18"));
        lbNumDes_18->setGeometry(QRect(374, 330, 50, 16));
        lbNumDes_18->setFont(font);
        lbNumDes_18->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNum_8 = new WLabel(Inet_DI_5);
        lbNum_8->setObjectName(QString::fromUtf8("lbNum_8"));
        lbNum_8->setGeometry(QRect(5, 190, 21, 16));
        lbNum_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_8->setFont(font1);
        lbNum_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_18 = new WLabel(Inet_DI_5);
        lbTit_18->setObjectName(QString::fromUtf8("lbTit_18"));
        lbTit_18->setGeometry(QRect(30, 330, 340, 16));
        lbTit_18->setFont(font);
        lbTit_18->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_5 = new WLabel(Inet_DI_5);
        lbTit_5->setObjectName(QString::fromUtf8("lbTit_5"));
        lbTit_5->setGeometry(QRect(30, 135, 340, 16));
        lbTit_5->setFont(font);
        lbTit_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_9 = new WLabel(Inet_DI_5);
        lbNumDes_9->setObjectName(QString::fromUtf8("lbNumDes_9"));
        lbNumDes_9->setGeometry(QRect(374, 210, 50, 16));
        lbNumDes_9->setFont(font);
        lbNumDes_9->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumDes_1 = new WLabel(Inet_DI_5);
        lbNumDes_1->setObjectName(QString::fromUtf8("lbNumDes_1"));
        lbNumDes_1->setGeometry(QRect(374, 55, 50, 16));
        lbNumDes_1->setFont(font);
        lbNumDes_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_13 = new WLabel(Inet_DI_5);
        lbTit_13->setObjectName(QString::fromUtf8("lbTit_13"));
        lbTit_13->setGeometry(QRect(30, 310, 340, 16));
        lbTit_13->setFont(font);
        lbTit_13->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Inet_DI_5);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(2, 17, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label_2 = new WLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(62, 4, 400, 22));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        label_2->setFont(font3);
        label_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_3 = new WLabel(Inet_DI_5);
        lbUni_3->setObjectName(QString::fromUtf8("lbUni_3"));
        lbUni_3->setGeometry(QRect(430, 94, 51, 16));
        lbUni_3->setStyleSheet(QString::fromUtf8(""));
        lbUni_3->setFont(font);
        lbUni_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_21 = new WLabel(Inet_DI_5);
        lbNum_21->setObjectName(QString::fromUtf8("lbNum_21"));
        lbNum_21->setGeometry(QRect(5, 350, 21, 16));
        lbNum_21->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_21->setFont(font1);
        lbNum_21->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_9 = new WLabel(Inet_DI_5);
        lbUni_9->setObjectName(QString::fromUtf8("lbUni_9"));
        lbUni_9->setGeometry(QRect(430, 210, 51, 16));
        lbUni_9->setStyleSheet(QString::fromUtf8(""));
        lbUni_9->setFont(font);
        lbUni_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_1 = new WLabel(Inet_DI_5);
        lbNum_1->setObjectName(QString::fromUtf8("lbNum_1"));
        lbNum_1->setGeometry(QRect(5, 55, 21, 16));
        lbNum_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_1->setFont(font1);
        lbNum_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_11 = new WLabel(Inet_DI_5);
        lbUni_11->setObjectName(QString::fromUtf8("lbUni_11"));
        lbUni_11->setGeometry(QRect(430, 250, 51, 16));
        lbUni_11->setStyleSheet(QString::fromUtf8(""));
        lbUni_11->setFont(font);
        lbUni_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_4 = new WLabel(Inet_DI_5);
        lbNumDes_4->setObjectName(QString::fromUtf8("lbNumDes_4"));
        lbNumDes_4->setGeometry(QRect(374, 113, 50, 16));
        lbNumDes_4->setFont(font);
        lbNumDes_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_6 = new WLabel(Inet_DI_5);
        lbTit_6->setObjectName(QString::fromUtf8("lbTit_6"));
        lbTit_6->setGeometry(QRect(30, 154, 340, 16));
        lbTit_6->setFont(font);
        lbTit_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_2 = new WLabel(Inet_DI_5);
        lbUni_2->setObjectName(QString::fromUtf8("lbUni_2"));
        lbUni_2->setGeometry(QRect(430, 74, 51, 16));
        lbUni_2->setStyleSheet(QString::fromUtf8(""));
        lbUni_2->setFont(font);
        lbUni_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_15 = new WLabel(Inet_DI_5);
        lbUni_15->setObjectName(QString::fromUtf8("lbUni_15"));
        lbUni_15->setGeometry(QRect(430, 290, 51, 16));
        lbUni_15->setStyleSheet(QString::fromUtf8(""));
        lbUni_15->setFont(font);
        lbUni_15->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_9 = new WLabel(Inet_DI_5);
        lbTit_9->setObjectName(QString::fromUtf8("lbTit_9"));
        lbTit_9->setGeometry(QRect(30, 210, 340, 16));
        lbTit_9->setFont(font);
        lbTit_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_7 = new WLabel(Inet_DI_5);
        lbTit_7->setObjectName(QString::fromUtf8("lbTit_7"));
        lbTit_7->setGeometry(QRect(30, 173, 340, 16));
        lbTit_7->setFont(font);
        lbTit_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_12 = new WLabel(Inet_DI_5);
        lbTit_12->setObjectName(QString::fromUtf8("lbTit_12"));
        lbTit_12->setGeometry(QRect(30, 270, 340, 16));
        lbTit_12->setFont(font);
        lbTit_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_17 = new WLabel(Inet_DI_5);
        lbNumDes_17->setObjectName(QString::fromUtf8("lbNumDes_17"));
        lbNumDes_17->setGeometry(QRect(374, 290, 50, 16));
        lbNumDes_17->setFont(font);
        lbNumDes_17->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbTit_10 = new WLabel(Inet_DI_5);
        lbTit_10->setObjectName(QString::fromUtf8("lbTit_10"));
        lbTit_10->setGeometry(QRect(30, 230, 340, 16));
        lbTit_10->setFont(font);
        lbTit_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_2 = new WLabel(Inet_DI_5);
        lbNum_2->setObjectName(QString::fromUtf8("lbNum_2"));
        lbNum_2->setGeometry(QRect(5, 74, 21, 16));
        lbNum_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_2->setFont(font1);
        lbNum_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbTit_24 = new WLabel(Inet_DI_5);
        lbTit_24->setObjectName(QString::fromUtf8("lbTit_24"));
        lbTit_24->setGeometry(QRect(30, 290, 340, 16));
        lbTit_24->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbTit_24->setFont(font);
        lbTit_24->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_7 = new WLabel(Inet_DI_5);
        lbUni_7->setObjectName(QString::fromUtf8("lbUni_7"));
        lbUni_7->setGeometry(QRect(430, 173, 51, 16));
        lbUni_7->setStyleSheet(QString::fromUtf8(""));
        lbUni_7->setFont(font);
        lbUni_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_7 = new WLabel(Inet_DI_5);
        lbNum_7->setObjectName(QString::fromUtf8("lbNum_7"));
        lbNum_7->setGeometry(QRect(5, 173, 21, 16));
        lbNum_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_7->setFont(font1);
        lbNum_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_20 = new WLabel(Inet_DI_5);
        lbNum_20->setObjectName(QString::fromUtf8("lbNum_20"));
        lbNum_20->setGeometry(QRect(5, 290, 21, 16));
        lbNum_20->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_20->setFont(font1);
        lbNum_20->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbUni_8 = new WLabel(Inet_DI_5);
        lbUni_8->setObjectName(QString::fromUtf8("lbUni_8"));
        lbUni_8->setGeometry(QRect(430, 190, 51, 16));
        lbUni_8->setStyleSheet(QString::fromUtf8(""));
        lbUni_8->setFont(font);
        lbUni_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNum_9 = new WLabel(Inet_DI_5);
        lbNum_9->setObjectName(QString::fromUtf8("lbNum_9"));
        lbNum_9->setGeometry(QRect(5, 210, 21, 16));
        lbNum_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNum_9->setFont(font1);
        lbNum_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumDes_5 = new WLabel(Inet_DI_5);
        lbNumDes_5->setObjectName(QString::fromUtf8("lbNumDes_5"));
        lbNumDes_5->setGeometry(QRect(374, 135, 50, 16));
        lbNumDes_5->setFont(font);
        lbNumDes_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbUni_10 = new WLabel(Inet_DI_5);
        lbUni_10->setObjectName(QString::fromUtf8("lbUni_10"));
        lbUni_10->setGeometry(QRect(430, 230, 51, 16));
        lbUni_10->setStyleSheet(QString::fromUtf8(""));
        lbUni_10->setFont(font);
        lbUni_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbFondo = new QLabel(Inet_DI_5);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 431));
        lbFondo->setMinimumSize(QSize(485, 431));
        lbFondo->setMaximumSize(QSize(485, 431));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        lbTit_8->raise();
        lbNum_10->raise();
        lbUni_5->raise();
        lbNumDes_7->raise();
        frame_2->raise();
        lbNum_4->raise();
        lbUni_19->raise();
        lbNumDes_20->raise();
        lbNum_23->raise();
        lbTit_21->raise();
        lbUni_4->raise();
        lbTit_1->raise();
        lbTit_4->raise();
        lbNum_5->raise();
        lbTit_3->raise();
        lbTit_2->raise();
        lbNumDes_8->raise();
        lbNumDes_11->raise();
        btCerrar->raise();
        lbNumDes_2->raise();
        lbUni_12->raise();
        lbNumDes_10->raise();
        lbUni_1->raise();
        lbNumDes_12->raise();
        lbUni_14->raise();
        lbNum_12->raise();
        lbUni_6->raise();
        lbNumDes_6->raise();
        lbNum_6->raise();
        lbNum_3->raise();
        lbTit_11->raise();
        lbNum_11->raise();
        lbUni_17->raise();
        lbNumDes_3->raise();
        lbNum_18->raise();
        lbNumDes_24->raise();
        lbNumDes_18->raise();
        lbNum_8->raise();
        lbTit_18->raise();
        lbTit_5->raise();
        lbNumDes_9->raise();
        lbNumDes_1->raise();
        lbTit_13->raise();
        frame->raise();
        lbUni_3->raise();
        lbNum_21->raise();
        lbUni_9->raise();
        lbNum_1->raise();
        lbUni_11->raise();
        lbNumDes_4->raise();
        lbTit_6->raise();
        lbUni_2->raise();
        lbUni_15->raise();
        lbTit_9->raise();
        lbTit_7->raise();
        lbTit_12->raise();
        lbNumDes_17->raise();
        lbTit_10->raise();
        lbNum_2->raise();
        lbTit_24->raise();
        lbUni_7->raise();
        lbNum_7->raise();
        lbNum_20->raise();
        lbUni_8->raise();
        lbNum_9->raise();
        lbNumDes_5->raise();
        lbUni_10->raise();

        retranslateUi(Inet_DI_5);

        QMetaObject::connectSlotsByName(Inet_DI_5);
    } // setupUi

    void retranslateUi(QWidget *Inet_DI_5)
    {
        Inet_DI_5->setWindowTitle(QApplication::translate("Inet_DI_5", "Inet_DI_5", 0, QApplication::UnicodeUTF8));
        lbTit_8->setText(QApplication::translate("Inet_DI_5", "POS VALV DESAG\303\234E COMBUSTOR", 0, QApplication::UnicodeUTF8));
        lbNum_10->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbUni_5->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbNumDes_7->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbIP->setText(QApplication::translate("Inet_DI_5", "LNET_D1.grf", 0, QApplication::UnicodeUTF8));
        lbNum_4->setText(QApplication::translate("Inet_DI_5", "4", 0, QApplication::UnicodeUTF8));
        lbUni_19->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbNumDes_20->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNum_23->setText(QApplication::translate("Inet_DI_5", "15", 0, QApplication::UnicodeUTF8));
        lbTit_21->setText(QApplication::translate("Inet_DI_5", "FILTRO SEPARARDOR  AIRE/ACEITE ALTA P/D", 0, QApplication::UnicodeUTF8));
        lbUni_4->setText(QApplication::translate("Inet_DI_5", "NCDLO", 0, QApplication::UnicodeUTF8));
        lbTit_1->setText(QApplication::translate("Inet_DI_5", "(NO SE UTILIZA)", 0, QApplication::UnicodeUTF8));
        lbTit_4->setText(QApplication::translate("Inet_DI_5", "FILTRO ENTRADA DE AIRE DE COMB DE P", 0, QApplication::UnicodeUTF8));
        lbNum_5->setText(QApplication::translate("Inet_DI_5", "5", 0, QApplication::UnicodeUTF8));
        lbTit_3->setText(QApplication::translate("Inet_DI_5", "FILTRO ENTRADA DE AIRE DE COMB DE P", 0, QApplication::UnicodeUTF8));
        lbTit_2->setText(QApplication::translate("Inet_DI_5", "(NO SE UTILIZA)", 0, QApplication::UnicodeUTF8));
        lbNumDes_8->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNumDes_11->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        btCerrar->setText(QApplication::translate("Inet_DI_5", "CERRAR", 0, QApplication::UnicodeUTF8));
        lbNumDes_2->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbUni_12->setText(QApplication::translate("Inet_DI_5", "ALM", 0, QApplication::UnicodeUTF8));
        lbNumDes_10->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbUni_1->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbNumDes_12->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbUni_14->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbNum_12->setText(QApplication::translate("Inet_DI_5", "12", 0, QApplication::UnicodeUTF8));
        lbUni_6->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbNumDes_6->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNum_6->setText(QApplication::translate("Inet_DI_5", "6", 0, QApplication::UnicodeUTF8));
        lbNum_3->setText(QApplication::translate("Inet_DI_5", "3", 0, QApplication::UnicodeUTF8));
        lbTit_11->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_11->setText(QApplication::translate("Inet_DI_5", "11", 0, QApplication::UnicodeUTF8));
        lbUni_17->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbNumDes_3->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNum_18->setText(QApplication::translate("Inet_DI_5", "14", 0, QApplication::UnicodeUTF8));
        lbNumDes_24->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNumDes_18->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNum_8->setText(QApplication::translate("Inet_DI_5", "8", 0, QApplication::UnicodeUTF8));
        lbTit_18->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_5->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNumDes_9->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbNumDes_1->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbTit_13->setText(QApplication::translate("Inet_DI_5", "FILTRO ACEITE LUB TURB ALTA P/D", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Inet_DI_5", "NODE - N1N31 -D1", 0, QApplication::UnicodeUTF8));
        lbUni_3->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbNum_21->setText(QApplication::translate("Inet_DI_5", "16", 0, QApplication::UnicodeUTF8));
        lbUni_9->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbNum_1->setText(QApplication::translate("Inet_DI_5", "1", 0, QApplication::UnicodeUTF8));
        lbUni_11->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbNumDes_4->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbTit_6->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbUni_2->setText(QApplication::translate("Inet_DI_5", "NSDN", 0, QApplication::UnicodeUTF8));
        lbUni_15->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbTit_9->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbTit_7->setText(QApplication::translate("Inet_DI_5", "BOMB DESC ACEITE RECIC TURB ALTA PRES", 0, QApplication::UnicodeUTF8));
        lbTit_12->setText(QApplication::translate("Inet_DI_5", "VENT FLUJO AIRE GEN BAJO (VENT A)", 0, QApplication::UnicodeUTF8));
        lbNumDes_17->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbTit_10->setText(QApplication::translate("Inet_DI_5", "(REFACCI\303\223N)", 0, QApplication::UnicodeUTF8));
        lbNum_2->setText(QApplication::translate("Inet_DI_5", "2", 0, QApplication::UnicodeUTF8));
        lbTit_24->setText(QApplication::translate("Inet_DI_5", "VENT FLUJO AIRE GEN BAJO (VENT B)", 0, QApplication::UnicodeUTF8));
        lbUni_7->setText(QApplication::translate("Inet_DI_5", "NALM", 0, QApplication::UnicodeUTF8));
        lbNum_7->setText(QApplication::translate("Inet_DI_5", "7", 0, QApplication::UnicodeUTF8));
        lbNum_20->setText(QApplication::translate("Inet_DI_5", "13", 0, QApplication::UnicodeUTF8));
        lbUni_8->setText(QApplication::translate("Inet_DI_5", "CLSD", 0, QApplication::UnicodeUTF8));
        lbNum_9->setText(QApplication::translate("Inet_DI_5", "9", 0, QApplication::UnicodeUTF8));
        lbNumDes_5->setText(QApplication::translate("Inet_DI_5", "00", 0, QApplication::UnicodeUTF8));
        lbUni_10->setText(QApplication::translate("Inet_DI_5", "10", 0, QApplication::UnicodeUTF8));
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inet_DI_5: public Ui_Inet_DI_5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INET_DI_5_H
