/********************************************************************************
** Form generated from reading UI file 'analog16.ui'
**
** Created: Thu 19. Dec 17:48:56 2013
**      by: Qt User Interface Compiler version 4.7.0
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
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_Analog16
{
public:
    QFrame *frBarraT;
    WLabel *lbAna16T;
    QFrame *frame;
    WLabel *lbSloACT;
    WLabel *lbACT_1;
    WLabel *lbACTU_1;
    WLabel *lbNumACT_1;
    WLabel *lbACTT_1;
    WLabel *lbACTU_2;
    WLabel *lbACTT_2;
    WLabel *lbACT_2;
    WLabel *lbNumACT_2;
    WLabel *lbNumACT_3;
    WLabel *lbACTT_3;
    WLabel *lbACTU_3;
    WLabel *lbACT_3;
    WLabel *lbACTT_4;
    WLabel *lbACTU_4;
    WLabel *lbACT_4;
    WLabel *lbNumACT_4;
    WLabel *lbNumACT_5;
    WLabel *lbACTU_5;
    WLabel *lbACT_5;
    WLabel *lbACTT_5;
    WLabel *lbNumACT_6;
    WLabel *lbACT_6;
    WLabel *lbACTT_6;
    WLabel *lbACTU_6;
    WLabel *lbNumACT_7;
    WLabel *lbACT_7;
    WLabel *lbACTU_7;
    WLabel *lbACTT_7;
    WLabel *lbNumACT_8;
    WLabel *lbACTU_8;
    WLabel *lbACT_8;
    WLabel *lbACTT_8;
    WLabel *lbNumACT_9;
    WLabel *lbACT_9;
    WLabel *lbACTU_9;
    WLabel *lbACTT_9;
    WLabel *lbNumACT_10;
    WLabel *lbACTU_10;
    WLabel *lbACT_10;
    WLabel *lbACTT_10;
    WLabel *lbNumACT_11;
    WLabel *lbACTT_11;
    WLabel *lbACTU_11;
    WLabel *lbACT_11;
    WLabel *lbNumACT_12;
    WLabel *lbACTU_12;
    WLabel *lbACTT_12;
    WLabel *lbACT_12;
    QPushButton *btnCerrar;
    QLabel *lbFondo;

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
        lbAna16T = new WLabel(frBarraT);
        lbAna16T->setObjectName(QString::fromUtf8("lbAna16T"));
        lbAna16T->setGeometry(QRect(3, 0, 111, 16));
        lbAna16T->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 105, 160);"));
        QFont font;
        font.setPointSize(5);
        font.setBold(true);
        font.setWeight(75);
        lbAna16T->setFont(font);
        lbAna16T->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        frame = new QFrame(Analog16);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 18, 485, 30));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        lbSloACT = new WLabel(Analog16);
        lbSloACT->setObjectName(QString::fromUtf8("lbSloACT"));
        lbSloACT->setGeometry(QRect(68, 23, 385, 16));
        lbSloACT->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSloACT->setFont(font1);
        lbSloACT->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_1 = new WLabel(Analog16);
        lbACT_1->setObjectName(QString::fromUtf8("lbACT_1"));
        lbACT_1->setGeometry(QRect(371, 55, 61, 20));
        lbACT_1->setLayoutDirection(Qt::RightToLeft);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setBold(true);
        font2.setWeight(75);
        lbACT_1->setFont(font2);
        lbACT_1->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTU_1 = new WLabel(Analog16);
        lbACTU_1->setObjectName(QString::fromUtf8("lbACTU_1"));
        lbACTU_1->setGeometry(QRect(438, 55, 35, 20));
        lbACTU_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_1->setFont(font2);
        lbACTU_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_1 = new WLabel(Analog16);
        lbNumACT_1->setObjectName(QString::fromUtf8("lbNumACT_1"));
        lbNumACT_1->setGeometry(QRect(10, 55, 21, 16));
        lbNumACT_1->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_1->setFont(font2);
        lbNumACT_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_1 = new WLabel(Analog16);
        lbACTT_1->setObjectName(QString::fromUtf8("lbACTT_1"));
        lbACTT_1->setGeometry(QRect(30, 55, 340, 16));
        lbACTT_1->setFont(font2);
        lbACTT_1->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_2 = new WLabel(Analog16);
        lbACTU_2->setObjectName(QString::fromUtf8("lbACTU_2"));
        lbACTU_2->setGeometry(QRect(438, 75, 35, 20));
        lbACTU_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_2->setFont(font2);
        lbACTU_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_2 = new WLabel(Analog16);
        lbACTT_2->setObjectName(QString::fromUtf8("lbACTT_2"));
        lbACTT_2->setGeometry(QRect(30, 75, 340, 16));
        lbACTT_2->setFont(font2);
        lbACTT_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_2 = new WLabel(Analog16);
        lbACT_2->setObjectName(QString::fromUtf8("lbACT_2"));
        lbACT_2->setGeometry(QRect(371, 75, 61, 20));
        lbACT_2->setLayoutDirection(Qt::RightToLeft);
        lbACT_2->setFont(font2);
        lbACT_2->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumACT_2 = new WLabel(Analog16);
        lbNumACT_2->setObjectName(QString::fromUtf8("lbNumACT_2"));
        lbNumACT_2->setGeometry(QRect(10, 75, 21, 16));
        lbNumACT_2->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_2->setFont(font2);
        lbNumACT_2->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_3 = new WLabel(Analog16);
        lbNumACT_3->setObjectName(QString::fromUtf8("lbNumACT_3"));
        lbNumACT_3->setGeometry(QRect(10, 90, 21, 16));
        lbNumACT_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_3->setFont(font2);
        lbNumACT_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_3 = new WLabel(Analog16);
        lbACTT_3->setObjectName(QString::fromUtf8("lbACTT_3"));
        lbACTT_3->setGeometry(QRect(30, 90, 340, 16));
        lbACTT_3->setFont(font2);
        lbACTT_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_3 = new WLabel(Analog16);
        lbACTU_3->setObjectName(QString::fromUtf8("lbACTU_3"));
        lbACTU_3->setGeometry(QRect(438, 90, 35, 20));
        lbACTU_3->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_3->setFont(font2);
        lbACTU_3->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_3 = new WLabel(Analog16);
        lbACT_3->setObjectName(QString::fromUtf8("lbACT_3"));
        lbACT_3->setGeometry(QRect(371, 90, 61, 20));
        lbACT_3->setLayoutDirection(Qt::RightToLeft);
        lbACT_3->setFont(font2);
        lbACT_3->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTT_4 = new WLabel(Analog16);
        lbACTT_4->setObjectName(QString::fromUtf8("lbACTT_4"));
        lbACTT_4->setGeometry(QRect(30, 110, 340, 16));
        lbACTT_4->setFont(font2);
        lbACTT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_4 = new WLabel(Analog16);
        lbACTU_4->setObjectName(QString::fromUtf8("lbACTU_4"));
        lbACTU_4->setGeometry(QRect(438, 110, 35, 20));
        lbACTU_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_4->setFont(font2);
        lbACTU_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_4 = new WLabel(Analog16);
        lbACT_4->setObjectName(QString::fromUtf8("lbACT_4"));
        lbACT_4->setGeometry(QRect(371, 110, 61, 20));
        lbACT_4->setLayoutDirection(Qt::RightToLeft);
        lbACT_4->setFont(font2);
        lbACT_4->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumACT_4 = new WLabel(Analog16);
        lbNumACT_4->setObjectName(QString::fromUtf8("lbNumACT_4"));
        lbNumACT_4->setGeometry(QRect(10, 110, 21, 16));
        lbNumACT_4->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_4->setFont(font2);
        lbNumACT_4->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_5 = new WLabel(Analog16);
        lbNumACT_5->setObjectName(QString::fromUtf8("lbNumACT_5"));
        lbNumACT_5->setGeometry(QRect(10, 130, 21, 16));
        lbNumACT_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_5->setFont(font2);
        lbNumACT_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_5 = new WLabel(Analog16);
        lbACTU_5->setObjectName(QString::fromUtf8("lbACTU_5"));
        lbACTU_5->setGeometry(QRect(438, 130, 35, 20));
        lbACTU_5->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_5->setFont(font2);
        lbACTU_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_5 = new WLabel(Analog16);
        lbACT_5->setObjectName(QString::fromUtf8("lbACT_5"));
        lbACT_5->setGeometry(QRect(371, 130, 61, 20));
        lbACT_5->setLayoutDirection(Qt::RightToLeft);
        lbACT_5->setFont(font2);
        lbACT_5->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTT_5 = new WLabel(Analog16);
        lbACTT_5->setObjectName(QString::fromUtf8("lbACTT_5"));
        lbACTT_5->setGeometry(QRect(30, 130, 340, 16));
        lbACTT_5->setFont(font2);
        lbACTT_5->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_6 = new WLabel(Analog16);
        lbNumACT_6->setObjectName(QString::fromUtf8("lbNumACT_6"));
        lbNumACT_6->setGeometry(QRect(10, 150, 21, 16));
        lbNumACT_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_6->setFont(font2);
        lbNumACT_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_6 = new WLabel(Analog16);
        lbACT_6->setObjectName(QString::fromUtf8("lbACT_6"));
        lbACT_6->setGeometry(QRect(371, 150, 61, 20));
        lbACT_6->setLayoutDirection(Qt::RightToLeft);
        lbACT_6->setFont(font2);
        lbACT_6->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTT_6 = new WLabel(Analog16);
        lbACTT_6->setObjectName(QString::fromUtf8("lbACTT_6"));
        lbACTT_6->setGeometry(QRect(30, 150, 340, 16));
        lbACTT_6->setFont(font2);
        lbACTT_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_6 = new WLabel(Analog16);
        lbACTU_6->setObjectName(QString::fromUtf8("lbACTU_6"));
        lbACTU_6->setGeometry(QRect(438, 150, 35, 20));
        lbACTU_6->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_6->setFont(font2);
        lbACTU_6->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_7 = new WLabel(Analog16);
        lbNumACT_7->setObjectName(QString::fromUtf8("lbNumACT_7"));
        lbNumACT_7->setGeometry(QRect(10, 170, 21, 16));
        lbNumACT_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_7->setFont(font2);
        lbNumACT_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_7 = new WLabel(Analog16);
        lbACT_7->setObjectName(QString::fromUtf8("lbACT_7"));
        lbACT_7->setGeometry(QRect(371, 170, 61, 20));
        lbACT_7->setLayoutDirection(Qt::RightToLeft);
        lbACT_7->setFont(font2);
        lbACT_7->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTU_7 = new WLabel(Analog16);
        lbACTU_7->setObjectName(QString::fromUtf8("lbACTU_7"));
        lbACTU_7->setGeometry(QRect(438, 170, 35, 20));
        lbACTU_7->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_7->setFont(font2);
        lbACTU_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_7 = new WLabel(Analog16);
        lbACTT_7->setObjectName(QString::fromUtf8("lbACTT_7"));
        lbACTT_7->setGeometry(QRect(30, 170, 340, 16));
        lbACTT_7->setFont(font2);
        lbACTT_7->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_8 = new WLabel(Analog16);
        lbNumACT_8->setObjectName(QString::fromUtf8("lbNumACT_8"));
        lbNumACT_8->setGeometry(QRect(10, 190, 21, 16));
        lbNumACT_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_8->setFont(font2);
        lbNumACT_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_8 = new WLabel(Analog16);
        lbACTU_8->setObjectName(QString::fromUtf8("lbACTU_8"));
        lbACTU_8->setGeometry(QRect(438, 190, 35, 20));
        lbACTU_8->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_8->setFont(font2);
        lbACTU_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_8 = new WLabel(Analog16);
        lbACT_8->setObjectName(QString::fromUtf8("lbACT_8"));
        lbACT_8->setGeometry(QRect(371, 190, 61, 20));
        lbACT_8->setLayoutDirection(Qt::RightToLeft);
        lbACT_8->setFont(font2);
        lbACT_8->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTT_8 = new WLabel(Analog16);
        lbACTT_8->setObjectName(QString::fromUtf8("lbACTT_8"));
        lbACTT_8->setGeometry(QRect(30, 190, 340, 16));
        lbACTT_8->setFont(font2);
        lbACTT_8->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_9 = new WLabel(Analog16);
        lbNumACT_9->setObjectName(QString::fromUtf8("lbNumACT_9"));
        lbNumACT_9->setGeometry(QRect(10, 210, 21, 16));
        lbNumACT_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_9->setFont(font2);
        lbNumACT_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_9 = new WLabel(Analog16);
        lbACT_9->setObjectName(QString::fromUtf8("lbACT_9"));
        lbACT_9->setGeometry(QRect(371, 210, 61, 20));
        lbACT_9->setLayoutDirection(Qt::RightToLeft);
        lbACT_9->setFont(font2);
        lbACT_9->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTU_9 = new WLabel(Analog16);
        lbACTU_9->setObjectName(QString::fromUtf8("lbACTU_9"));
        lbACTU_9->setGeometry(QRect(438, 210, 35, 20));
        lbACTU_9->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_9->setFont(font2);
        lbACTU_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_9 = new WLabel(Analog16);
        lbACTT_9->setObjectName(QString::fromUtf8("lbACTT_9"));
        lbACTT_9->setGeometry(QRect(30, 210, 340, 16));
        lbACTT_9->setFont(font2);
        lbACTT_9->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_10 = new WLabel(Analog16);
        lbNumACT_10->setObjectName(QString::fromUtf8("lbNumACT_10"));
        lbNumACT_10->setGeometry(QRect(10, 230, 21, 16));
        lbNumACT_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_10->setFont(font2);
        lbNumACT_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_10 = new WLabel(Analog16);
        lbACTU_10->setObjectName(QString::fromUtf8("lbACTU_10"));
        lbACTU_10->setGeometry(QRect(438, 230, 35, 20));
        lbACTU_10->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_10->setFont(font2);
        lbACTU_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_10 = new WLabel(Analog16);
        lbACT_10->setObjectName(QString::fromUtf8("lbACT_10"));
        lbACT_10->setGeometry(QRect(371, 230, 61, 20));
        lbACT_10->setLayoutDirection(Qt::RightToLeft);
        lbACT_10->setFont(font2);
        lbACT_10->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbACTT_10 = new WLabel(Analog16);
        lbACTT_10->setObjectName(QString::fromUtf8("lbACTT_10"));
        lbACTT_10->setGeometry(QRect(30, 230, 340, 16));
        lbACTT_10->setFont(font2);
        lbACTT_10->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbNumACT_11 = new WLabel(Analog16);
        lbNumACT_11->setObjectName(QString::fromUtf8("lbNumACT_11"));
        lbNumACT_11->setGeometry(QRect(10, 250, 21, 16));
        lbNumACT_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_11->setFont(font2);
        lbNumACT_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_11 = new WLabel(Analog16);
        lbACTT_11->setObjectName(QString::fromUtf8("lbACTT_11"));
        lbACTT_11->setGeometry(QRect(30, 250, 340, 16));
        lbACTT_11->setFont(font2);
        lbACTT_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_11 = new WLabel(Analog16);
        lbACTU_11->setObjectName(QString::fromUtf8("lbACTU_11"));
        lbACTU_11->setGeometry(QRect(438, 250, 35, 20));
        lbACTU_11->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_11->setFont(font2);
        lbACTU_11->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_11 = new WLabel(Analog16);
        lbACT_11->setObjectName(QString::fromUtf8("lbACT_11"));
        lbACT_11->setGeometry(QRect(371, 250, 61, 20));
        lbACT_11->setLayoutDirection(Qt::RightToLeft);
        lbACT_11->setFont(font2);
        lbACT_11->setProperty("Alineacion", QVariant(WLabel::Derecha));
        lbNumACT_12 = new WLabel(Analog16);
        lbNumACT_12->setObjectName(QString::fromUtf8("lbNumACT_12"));
        lbNumACT_12->setGeometry(QRect(10, 270, 21, 16));
        lbNumACT_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbNumACT_12->setFont(font2);
        lbNumACT_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTU_12 = new WLabel(Analog16);
        lbACTU_12->setObjectName(QString::fromUtf8("lbACTU_12"));
        lbACTU_12->setGeometry(QRect(438, 270, 35, 20));
        lbACTU_12->setStyleSheet(QString::fromUtf8("color: rgb(22, 232, 232);"));
        lbACTU_12->setFont(font2);
        lbACTU_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACTT_12 = new WLabel(Analog16);
        lbACTT_12->setObjectName(QString::fromUtf8("lbACTT_12"));
        lbACTT_12->setGeometry(QRect(30, 270, 340, 16));
        lbACTT_12->setFont(font2);
        lbACTT_12->setProperty("Alineacion", QVariant(WLabel::Izquierda));
        lbACT_12 = new WLabel(Analog16);
        lbACT_12->setObjectName(QString::fromUtf8("lbACT_12"));
        lbACT_12->setGeometry(QRect(371, 270, 61, 20));
        lbACT_12->setLayoutDirection(Qt::RightToLeft);
        lbACT_12->setFont(font2);
        lbACT_12->setProperty("Alineacion", QVariant(WLabel::Derecha));
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
        lbFondo = new QLabel(Analog16);
        lbFondo->setObjectName(QString::fromUtf8("lbFondo"));
        lbFondo->setGeometry(QRect(0, 0, 485, 421));
        lbFondo->setMinimumSize(QSize(485, 421));
        lbFondo->setMaximumSize(QSize(485, 421));
        lbFondo->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        lbFondo->setFrameShape(QFrame::Box);
        lbFondo->setFrameShadow(QFrame::Sunken);
        lbFondo->raise();
        frBarraT->raise();
        frame->raise();
        lbSloACT->raise();
        lbACT_1->raise();
        lbACTU_1->raise();
        lbNumACT_1->raise();
        lbACTT_1->raise();
        lbACTU_2->raise();
        lbACTT_2->raise();
        lbACT_2->raise();
        lbNumACT_2->raise();
        lbNumACT_3->raise();
        lbACTT_3->raise();
        lbACTU_3->raise();
        lbACT_3->raise();
        lbACTT_4->raise();
        lbACTU_4->raise();
        lbACT_4->raise();
        lbNumACT_4->raise();
        lbNumACT_5->raise();
        lbACTU_5->raise();
        lbACT_5->raise();
        lbACTT_5->raise();
        lbNumACT_6->raise();
        lbACT_6->raise();
        lbACTT_6->raise();
        lbACTU_6->raise();
        lbNumACT_7->raise();
        lbACT_7->raise();
        lbACTU_7->raise();
        lbACTT_7->raise();
        lbNumACT_8->raise();
        lbACTU_8->raise();
        lbACT_8->raise();
        lbACTT_8->raise();
        lbNumACT_9->raise();
        lbACT_9->raise();
        lbACTU_9->raise();
        lbACTT_9->raise();
        lbNumACT_10->raise();
        lbACTU_10->raise();
        lbACT_10->raise();
        lbACTT_10->raise();
        lbNumACT_11->raise();
        lbACTT_11->raise();
        lbACTU_11->raise();
        lbACT_11->raise();
        lbNumACT_12->raise();
        lbACTU_12->raise();
        lbACTT_12->raise();
        lbACT_12->raise();
        btnCerrar->raise();

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
        lbFondo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Analog16: public Ui_Analog16 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOG16_H
