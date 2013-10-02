/********************************************************************************
** Form generated from reading UI file 'b6.ui'
**
** Created: Sun 29. Sep 18:02:05 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B6_H
#define UI_B6_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"

QT_BEGIN_NAMESPACE

class Ui_B6
{
public:
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_38;
    QLabel *lb_Unit_5;
    QLabel *lb_Lect_5;
    QLabel *lb_Lect_4;
    QLabel *lb_Unit_4;
    QLabel *lb_Lect_3;
    QLabel *lb_Unit_3;
    QLabel *lb_Lect_2;
    QLabel *lb_Unit_2;
    QLabel *lb_Unit_1;
    QLabel *lb_Lect_1;
    QLabel *lb_Temp_Unit_1;
    QLabel *lb_Temp_Lect_1;
    QLabel *lb_Temp_Lect_2;
    QLabel *lb_Temp_Unit_2;
    QLabel *lb_Temp_Lect_3;
    QLabel *lb_Temp_Unit_3;
    AWMultiObject *valCua2_1;
    AWMultiObject *valCua2_2;
    AWMultiObject *valCua2_4;
    AWMultiObject *valCua2_3;
    AWMultiObject *valCua2_6;
    AWMultiObject *valCua2_5;
    AWMultiObject *vh2_1;
    AWMultiObject *vh2_2;
    AWMultiObject *vh2_3;
    AWMultiObject *valele2;
    AInstrumentIndicator *inf_1;
    AInstrumentIndicator *inf_2;
    AInstrumentIndicator *inf_4;
    AInstrumentIndicator *inf_6;
    AInstrumentIndicator *inf_8;
    AInstrumentIndicator *inf_7;
    AInstrumentIndicator *inf_9;
    AInstrumentIndicator *inf_3;
    AInstrumentIndicator *inf_5;
    AInstrumentIndicator *inf_10;
    AInstrumentIndicator *inf_11;
    AInstrumentIndicator *inf_15;
    AInstrumentIndicator *inf_12;
    AInstrumentIndicator *inf_13;
    AInstrumentIndicator *inf_16;
    AInstrumentIndicator *inf_14;
    AInstrumentIndicator *inf_17;
    AInstrumentIndicator *inf_18;
    QLabel *label_34;
    QLabel *lb_Unit_0;
    QLabel *lb_Lect_0;
    QLabel *lbFlech_2;
    QLabel *lbUnit3;
    QPushButton *btnIMPPant;

    void setupUi(QWidget *B6)
    {
        if (B6->objectName().isEmpty())
            B6->setObjectName(QString::fromUtf8("B6"));
        B6->resize(1024, 662);
        B6->setMinimumSize(QSize(1024, 662));
        B6->setMaximumSize(QSize(1024, 662));
        B6->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 154, 154);"));
        label_28 = new QLabel(B6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(5, 238, 151, 26));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_28->setFont(font);
        label_28->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_29 = new QLabel(B6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(190, 149, 101, 26));
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(B6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(542, 85, 101, 26));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(B6);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(792, 280, 161, 26));
        label_31->setFont(font);
        label_31->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(B6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(500, 580, 131, 26));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(B6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(870, 460, 131, 26));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_33->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(B6);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(0, 0, 1024, 662));
        label_38->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B6.png")));
        lb_Unit_5 = new QLabel(B6);
        lb_Unit_5->setObjectName(QString::fromUtf8("lb_Unit_5"));
        lb_Unit_5->setGeometry(QRect(400, 350, 35, 22));
        lb_Unit_5->setMinimumSize(QSize(35, 22));
        lb_Unit_5->setMaximumSize(QSize(35, 22));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        lb_Unit_5->setFont(font1);
        lb_Unit_5->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_5->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Lect_5 = new QLabel(B6);
        lb_Lect_5->setObjectName(QString::fromUtf8("lb_Lect_5"));
        lb_Lect_5->setGeometry(QRect(365, 352, 35, 18));
        lb_Lect_5->setMinimumSize(QSize(35, 18));
        lb_Lect_5->setMaximumSize(QSize(35, 18));
        lb_Lect_5->setFont(font);
        lb_Lect_5->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_5->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Lect_4 = new QLabel(B6);
        lb_Lect_4->setObjectName(QString::fromUtf8("lb_Lect_4"));
        lb_Lect_4->setGeometry(QRect(230, 486, 35, 18));
        lb_Lect_4->setMinimumSize(QSize(35, 18));
        lb_Lect_4->setMaximumSize(QSize(35, 18));
        lb_Lect_4->setFont(font);
        lb_Lect_4->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_4->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Unit_4 = new QLabel(B6);
        lb_Unit_4->setObjectName(QString::fromUtf8("lb_Unit_4"));
        lb_Unit_4->setGeometry(QRect(265, 486, 35, 22));
        lb_Unit_4->setMinimumSize(QSize(35, 22));
        lb_Unit_4->setMaximumSize(QSize(35, 22));
        lb_Unit_4->setFont(font1);
        lb_Unit_4->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_4->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Lect_3 = new QLabel(B6);
        lb_Lect_3->setObjectName(QString::fromUtf8("lb_Lect_3"));
        lb_Lect_3->setGeometry(QRect(140, 486, 35, 18));
        lb_Lect_3->setMinimumSize(QSize(35, 18));
        lb_Lect_3->setMaximumSize(QSize(35, 18));
        lb_Lect_3->setFont(font);
        lb_Lect_3->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_3->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Unit_3 = new QLabel(B6);
        lb_Unit_3->setObjectName(QString::fromUtf8("lb_Unit_3"));
        lb_Unit_3->setGeometry(QRect(175, 486, 50, 22));
        lb_Unit_3->setMinimumSize(QSize(50, 18));
        lb_Unit_3->setMaximumSize(QSize(50, 22));
        lb_Unit_3->setFont(font1);
        lb_Unit_3->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_3->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Lect_2 = new QLabel(B6);
        lb_Lect_2->setObjectName(QString::fromUtf8("lb_Lect_2"));
        lb_Lect_2->setGeometry(QRect(70, 486, 35, 18));
        lb_Lect_2->setMinimumSize(QSize(35, 18));
        lb_Lect_2->setMaximumSize(QSize(35, 18));
        lb_Lect_2->setFont(font);
        lb_Lect_2->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_2->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Unit_2 = new QLabel(B6);
        lb_Unit_2->setObjectName(QString::fromUtf8("lb_Unit_2"));
        lb_Unit_2->setGeometry(QRect(105, 486, 35, 22));
        lb_Unit_2->setMinimumSize(QSize(35, 22));
        lb_Unit_2->setMaximumSize(QSize(35, 22));
        lb_Unit_2->setFont(font1);
        lb_Unit_2->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_2->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Unit_1 = new QLabel(B6);
        lb_Unit_1->setObjectName(QString::fromUtf8("lb_Unit_1"));
        lb_Unit_1->setGeometry(QRect(50, 486, 35, 22));
        lb_Unit_1->setMinimumSize(QSize(35, 22));
        lb_Unit_1->setMaximumSize(QSize(35, 22));
        lb_Unit_1->setFont(font1);
        lb_Unit_1->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_1->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Lect_1 = new QLabel(B6);
        lb_Lect_1->setObjectName(QString::fromUtf8("lb_Lect_1"));
        lb_Lect_1->setGeometry(QRect(15, 486, 35, 18));
        lb_Lect_1->setMinimumSize(QSize(35, 18));
        lb_Lect_1->setMaximumSize(QSize(35, 18));
        lb_Lect_1->setFont(font);
        lb_Lect_1->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_1->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Temp_Unit_1 = new QLabel(B6);
        lb_Temp_Unit_1->setObjectName(QString::fromUtf8("lb_Temp_Unit_1"));
        lb_Temp_Unit_1->setGeometry(QRect(857, 125, 30, 18));
        lb_Temp_Unit_1->setMinimumSize(QSize(30, 18));
        lb_Temp_Unit_1->setMaximumSize(QSize(30, 18));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lb_Temp_Unit_1->setFont(font2);
        lb_Temp_Unit_1->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Unit_1->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        lb_Temp_Unit_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Temp_Lect_1 = new QLabel(B6);
        lb_Temp_Lect_1->setObjectName(QString::fromUtf8("lb_Temp_Lect_1"));
        lb_Temp_Lect_1->setGeometry(QRect(793, 125, 50, 18));
        lb_Temp_Lect_1->setMinimumSize(QSize(50, 18));
        lb_Temp_Lect_1->setMaximumSize(QSize(50, 18));
        lb_Temp_Lect_1->setFont(font2);
        lb_Temp_Lect_1->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Lect_1->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        lb_Temp_Lect_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Temp_Lect_2 = new QLabel(B6);
        lb_Temp_Lect_2->setObjectName(QString::fromUtf8("lb_Temp_Lect_2"));
        lb_Temp_Lect_2->setGeometry(QRect(830, 106, 50, 18));
        lb_Temp_Lect_2->setMinimumSize(QSize(50, 18));
        lb_Temp_Lect_2->setMaximumSize(QSize(50, 18));
        lb_Temp_Lect_2->setFont(font2);
        lb_Temp_Lect_2->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Lect_2->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        lb_Temp_Lect_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Temp_Unit_2 = new QLabel(B6);
        lb_Temp_Unit_2->setObjectName(QString::fromUtf8("lb_Temp_Unit_2"));
        lb_Temp_Unit_2->setGeometry(QRect(887, 106, 30, 18));
        lb_Temp_Unit_2->setMinimumSize(QSize(30, 18));
        lb_Temp_Unit_2->setMaximumSize(QSize(30, 18));
        lb_Temp_Unit_2->setFont(font2);
        lb_Temp_Unit_2->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Unit_2->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);\n"
""));
        lb_Temp_Unit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Temp_Lect_3 = new QLabel(B6);
        lb_Temp_Lect_3->setObjectName(QString::fromUtf8("lb_Temp_Lect_3"));
        lb_Temp_Lect_3->setGeometry(QRect(878, 125, 50, 18));
        lb_Temp_Lect_3->setMinimumSize(QSize(50, 18));
        lb_Temp_Lect_3->setMaximumSize(QSize(50, 18));
        lb_Temp_Lect_3->setFont(font2);
        lb_Temp_Lect_3->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Lect_3->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        lb_Temp_Lect_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lb_Temp_Unit_3 = new QLabel(B6);
        lb_Temp_Unit_3->setObjectName(QString::fromUtf8("lb_Temp_Unit_3"));
        lb_Temp_Unit_3->setGeometry(QRect(934, 125, 30, 18));
        lb_Temp_Unit_3->setMinimumSize(QSize(30, 18));
        lb_Temp_Unit_3->setMaximumSize(QSize(30, 18));
        lb_Temp_Unit_3->setFont(font2);
        lb_Temp_Unit_3->setLayoutDirection(Qt::LeftToRight);
        lb_Temp_Unit_3->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(255, 255, 255);"));
        lb_Temp_Unit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        valCua2_1 = new AWMultiObject(B6);
        valCua2_1->setObjectName(QString::fromUtf8("valCua2_1"));
        valCua2_1->setGeometry(QRect(102, 243, 50, 50));
        valCua2_1->setElementType(AWMultiObject::VALCUAD2);
        valCua2_2 = new AWMultiObject(B6);
        valCua2_2->setObjectName(QString::fromUtf8("valCua2_2"));
        valCua2_2->setGeometry(QRect(187, 179, 50, 50));
        valCua2_2->setOrientation(AWMultEstateWidget::Degree90);
        valCua2_2->setElementType(AWMultiObject::VALCUAD2);
        valCua2_4 = new AWMultiObject(B6);
        valCua2_4->setObjectName(QString::fromUtf8("valCua2_4"));
        valCua2_4->setGeometry(QRect(544, 179, 50, 50));
        valCua2_4->setOrientation(AWMultEstateWidget::Degree90);
        valCua2_4->setElementType(AWMultiObject::VALCUAD2);
        valCua2_3 = new AWMultiObject(B6);
        valCua2_3->setObjectName(QString::fromUtf8("valCua2_3"));
        valCua2_3->setGeometry(QRect(385, 198, 50, 50));
        valCua2_3->setOrientation(AWMultEstateWidget::Degree270);
        valCua2_3->setElementType(AWMultiObject::VALCUAD3);
        valCua2_6 = new AWMultiObject(B6);
        valCua2_6->setObjectName(QString::fromUtf8("valCua2_6"));
        valCua2_6->setGeometry(QRect(676, 198, 50, 50));
        valCua2_6->setOrientation(AWMultEstateWidget::Degree270);
        valCua2_6->setElementType(AWMultiObject::VALCUAD3);
        valCua2_5 = new AWMultiObject(B6);
        valCua2_5->setObjectName(QString::fromUtf8("valCua2_5"));
        valCua2_5->setGeometry(QRect(684, 527, 50, 50));
        valCua2_5->setOrientation(AWMultEstateWidget::Degree270);
        valCua2_5->setElementType(AWMultiObject::VALCUAD3);
        vh2_1 = new AWMultiObject(B6);
        vh2_1->setObjectName(QString::fromUtf8("vh2_1"));
        vh2_1->setGeometry(QRect(424, 242, 50, 50));
        vh2_1->setOrientation(AWMultEstateWidget::Degree0);
        vh2_1->setElementType(AWMultiObject::VH2);
        vh2_2 = new AWMultiObject(B6);
        vh2_2->setObjectName(QString::fromUtf8("vh2_2"));
        vh2_2->setGeometry(QRect(717, 242, 50, 50));
        vh2_2->setOrientation(AWMultEstateWidget::Degree0);
        vh2_2->setElementType(AWMultiObject::VH2);
        vh2_3 = new AWMultiObject(B6);
        vh2_3->setObjectName(QString::fromUtf8("vh2_3"));
        vh2_3->setGeometry(QRect(725, 571, 50, 50));
        vh2_3->setOrientation(AWMultEstateWidget::Degree0);
        vh2_3->setElementType(AWMultiObject::VH2);
        valele2 = new AWMultiObject(B6);
        valele2->setObjectName(QString::fromUtf8("valele2"));
        valele2->setGeometry(QRect(807, 458, 50, 50));
        valele2->setOrientation(AWMultEstateWidget::Degree0);
        valele2->setElementType(AWMultiObject::VALELE2);
        inf_1 = new AInstrumentIndicator(B6);
        inf_1->setObjectName(QString::fromUtf8("inf_1"));
        inf_1->setGeometry(QRect(10, 433, 61, 61));
        inf_1->setValue(2);
        inf_1->setOrientation(AWMultEstateWidget::Degree270);
        inf_2 = new AInstrumentIndicator(B6);
        inf_2->setObjectName(QString::fromUtf8("inf_2"));
        inf_2->setGeometry(QRect(76, 433, 61, 61));
        inf_2->setValue(2);
        inf_2->setOrientation(AWMultEstateWidget::Degree270);
        inf_4 = new AInstrumentIndicator(B6);
        inf_4->setObjectName(QString::fromUtf8("inf_4"));
        inf_4->setGeometry(QRect(140, 433, 61, 61));
        inf_4->setValue(2);
        inf_4->setOrientation(AWMultEstateWidget::Degree270);
        inf_6 = new AInstrumentIndicator(B6);
        inf_6->setObjectName(QString::fromUtf8("inf_6"));
        inf_6->setGeometry(QRect(236, 433, 61, 61));
        inf_6->setValue(2);
        inf_6->setOrientation(AWMultEstateWidget::Degree270);
        inf_8 = new AInstrumentIndicator(B6);
        inf_8->setObjectName(QString::fromUtf8("inf_8"));
        inf_8->setGeometry(QRect(297, 333, 61, 61));
        inf_8->setValue(2);
        inf_8->setOrientation(AWMultEstateWidget::Degree270);
        inf_7 = new AInstrumentIndicator(B6);
        inf_7->setObjectName(QString::fromUtf8("inf_7"));
        inf_7->setGeometry(QRect(267, 50, 61, 61));
        inf_7->setValue(2);
        inf_7->setOrientation(AWMultEstateWidget::Degree90);
        inf_9 = new AInstrumentIndicator(B6);
        inf_9->setObjectName(QString::fromUtf8("inf_9"));
        inf_9->setGeometry(QRect(338, 50, 61, 61));
        inf_9->setValue(2);
        inf_9->setOrientation(AWMultEstateWidget::Degree90);
        inf_3 = new AInstrumentIndicator(B6);
        inf_3->setObjectName(QString::fromUtf8("inf_3"));
        inf_3->setGeometry(QRect(95, 186, 61, 61));
        inf_3->setValue(2);
        inf_3->setOrientation(AWMultEstateWidget::Degree90);
        inf_5 = new AInstrumentIndicator(B6);
        inf_5->setObjectName(QString::fromUtf8("inf_5"));
        inf_5->setGeometry(QRect(234, 172, 61, 61));
        inf_5->setValue(2);
        inf_5->setOrientation(AWMultEstateWidget::Degree180);
        inf_10 = new AInstrumentIndicator(B6);
        inf_10->setObjectName(QString::fromUtf8("inf_10"));
        inf_10->setGeometry(QRect(348, 156, 61, 61));
        inf_10->setValue(2);
        inf_10->setOrientation(AWMultEstateWidget::Degree90);
        inf_10->setProperty("LineAngle", QVariant(-44));
        inf_11 = new AInstrumentIndicator(B6);
        inf_11->setObjectName(QString::fromUtf8("inf_11"));
        inf_11->setGeometry(QRect(449, 191, 61, 61));
        inf_11->setIntID(0);
        inf_11->setValue(2);
        inf_11->setOrientation(AWMultEstateWidget::Degree90);
        inf_11->setProperty("LineAngle", QVariant(32));
        inf_15 = new AInstrumentIndicator(B6);
        inf_15->setObjectName(QString::fromUtf8("inf_15"));
        inf_15->setGeometry(QRect(740, 190, 61, 61));
        inf_15->setIntID(0);
        inf_15->setValue(2);
        inf_15->setOrientation(AWMultEstateWidget::Degree0);
        inf_15->setProperty("LineAngle", QVariant(119));
        inf_12 = new AInstrumentIndicator(B6);
        inf_12->setObjectName(QString::fromUtf8("inf_12"));
        inf_12->setGeometry(QRect(591, 173, 61, 61));
        inf_12->setValue(2);
        inf_12->setOrientation(AWMultEstateWidget::Degree180);
        inf_13 = new AInstrumentIndicator(B6);
        inf_13->setObjectName(QString::fromUtf8("inf_13"));
        inf_13->setGeometry(QRect(641, 157, 61, 61));
        inf_13->setValue(2);
        inf_13->setOrientation(AWMultEstateWidget::Degree0);
        inf_13->setProperty("LineAngle", QVariant(46));
        inf_16 = new AInstrumentIndicator(B6);
        inf_16->setObjectName(QString::fromUtf8("inf_16"));
        inf_16->setGeometry(QRect(750, 520, 61, 61));
        inf_16->setIntID(0);
        inf_16->setValue(2);
        inf_16->setOrientation(AWMultEstateWidget::Degree0);
        inf_16->setProperty("LineAngle", QVariant(119));
        inf_14 = new AInstrumentIndicator(B6);
        inf_14->setObjectName(QString::fromUtf8("inf_14"));
        inf_14->setGeometry(QRect(649, 486, 61, 61));
        inf_14->setIntID(0);
        inf_14->setValue(2);
        inf_14->setOrientation(AWMultEstateWidget::Degree0);
        inf_14->setProperty("LineAngle", QVariant(46));
        inf_17 = new AInstrumentIndicator(B6);
        inf_17->setObjectName(QString::fromUtf8("inf_17"));
        inf_17->setGeometry(QRect(814, 135, 61, 61));
        inf_17->setValue(2);
        inf_17->setOrientation(AWMultEstateWidget::Degree90);
        inf_18 = new AInstrumentIndicator(B6);
        inf_18->setObjectName(QString::fromUtf8("inf_18"));
        inf_18->setGeometry(QRect(875, 135, 61, 61));
        inf_18->setValue(2);
        inf_18->setOrientation(AWMultEstateWidget::Degree90);
        label_34 = new QLabel(B6);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(673, 364, 161, 51));
        label_34->setFont(font);
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_34->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        lb_Unit_0 = new QLabel(B6);
        lb_Unit_0->setObjectName(QString::fromUtf8("lb_Unit_0"));
        lb_Unit_0->setGeometry(QRect(140, 500, 50, 22));
        lb_Unit_0->setMinimumSize(QSize(50, 18));
        lb_Unit_0->setMaximumSize(QSize(50, 22));
        lb_Unit_0->setFont(font1);
        lb_Unit_0->setLayoutDirection(Qt::LeftToRight);
        lb_Unit_0->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Unit_0->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lb_Lect_0 = new QLabel(B6);
        lb_Lect_0->setObjectName(QString::fromUtf8("lb_Lect_0"));
        lb_Lect_0->setGeometry(QRect(105, 500, 35, 18));
        lb_Lect_0->setMinimumSize(QSize(35, 18));
        lb_Lect_0->setMaximumSize(QSize(35, 18));
        lb_Lect_0->setFont(font);
        lb_Lect_0->setLayoutDirection(Qt::LeftToRight);
        lb_Lect_0->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"color: rgb(255, 255, 255);"));
        lb_Lect_0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbFlech_2 = new QLabel(B6);
        lbFlech_2->setObjectName(QString::fromUtf8("lbFlech_2"));
        lbFlech_2->setGeometry(QRect(740, 470, 31, 31));
        lbFlech_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flechadiagonal_derecha.png")));
        lbFlech_2->setScaledContents(true);
        lbUnit3 = new QLabel(B6);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lbUnit3->setFont(font3);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        btnIMPPant = new QPushButton(B6);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        btnIMPPant->setFont(font1);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        label_38->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        lb_Unit_5->raise();
        lb_Lect_5->raise();
        lb_Lect_4->raise();
        lb_Unit_4->raise();
        lb_Lect_3->raise();
        lb_Unit_3->raise();
        lb_Lect_2->raise();
        lb_Unit_2->raise();
        lb_Unit_1->raise();
        lb_Lect_1->raise();
        lb_Temp_Unit_1->raise();
        lb_Temp_Lect_1->raise();
        lb_Temp_Lect_2->raise();
        lb_Temp_Unit_2->raise();
        lb_Temp_Lect_3->raise();
        lb_Temp_Unit_3->raise();
        valCua2_1->raise();
        valCua2_2->raise();
        valCua2_4->raise();
        valCua2_3->raise();
        valCua2_6->raise();
        valCua2_5->raise();
        vh2_1->raise();
        vh2_2->raise();
        vh2_3->raise();
        valele2->raise();
        inf_1->raise();
        inf_2->raise();
        inf_4->raise();
        inf_6->raise();
        inf_8->raise();
        inf_7->raise();
        inf_9->raise();
        inf_3->raise();
        inf_5->raise();
        inf_10->raise();
        inf_11->raise();
        inf_15->raise();
        inf_12->raise();
        inf_13->raise();
        inf_16->raise();
        inf_14->raise();
        inf_17->raise();
        inf_18->raise();
        label_34->raise();
        lb_Unit_0->raise();
        lb_Lect_0->raise();
        lbFlech_2->raise();
        lbUnit3->raise();
        btnIMPPant->raise();

        retranslateUi(B6);

        QMetaObject::connectSlotsByName(B6);
    } // setupUi

    void retranslateUi(QWidget *B6)
    {
        B6->setWindowTitle(QApplication::translate("B6", "Form", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("B6", "SUMINISTRO \n"
"DE GAS", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("B6", "VENTEO", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("B6", "VENTEO", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("B6", "AL MULTIPLE DE GAS", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("B6", "COMBUSTOR DRENE", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("B6", "DRENE", 0, QApplication::UnicodeUTF8));
        label_38->setText(QString());
        lb_Unit_5->setText(QApplication::translate("B6", "PSIG", 0, QApplication::UnicodeUTF8));
        lb_Lect_5->setText(QString());
        lb_Lect_4->setText(QString());
        lb_Unit_4->setText(QApplication::translate("B6", "PPM", 0, QApplication::UnicodeUTF8));
        lb_Lect_3->setText(QString());
        lb_Unit_3->setText(QApplication::translate("B6", "BTU/SCF", 0, QApplication::UnicodeUTF8));
        lb_Lect_2->setText(QString());
        lb_Unit_2->setText(QApplication::translate("B6", "SG", 0, QApplication::UnicodeUTF8));
        lb_Unit_1->setText(QApplication::translate("B6", "%", 0, QApplication::UnicodeUTF8));
        lb_Lect_1->setText(QString());
        lb_Temp_Unit_1->setText(QApplication::translate("B6", "\302\260F", 0, QApplication::UnicodeUTF8));
        lb_Temp_Lect_1->setText(QString());
        lb_Temp_Lect_2->setText(QString());
        lb_Temp_Unit_2->setText(QApplication::translate("B6", "\302\260F", 0, QApplication::UnicodeUTF8));
        lb_Temp_Lect_3->setText(QString());
        lb_Temp_Unit_3->setText(QApplication::translate("B6", "\302\260F", 0, QApplication::UnicodeUTF8));
        inf_1->setProperty("UpLabel", QVariant(QApplication::translate("B6", "AE", 0, QApplication::UnicodeUTF8)));
        inf_1->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62568", 0, QApplication::UnicodeUTF8)));
        inf_2->setProperty("UpLabel", QVariant(QApplication::translate("B6", "AE", 0, QApplication::UnicodeUTF8)));
        inf_2->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62325", 0, QApplication::UnicodeUTF8)));
        inf_4->setProperty("UpLabel", QVariant(QApplication::translate("B6", "AE", 0, QApplication::UnicodeUTF8)));
        inf_4->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62326", 0, QApplication::UnicodeUTF8)));
        inf_6->setProperty("UpLabel", QVariant(QApplication::translate("B6", "AE", 0, QApplication::UnicodeUTF8)));
        inf_6->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62569", 0, QApplication::UnicodeUTF8)));
        inf_8->setProperty("UpLabel", QVariant(QApplication::translate("B6", "PT", 0, QApplication::UnicodeUTF8)));
        inf_8->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6227", 0, QApplication::UnicodeUTF8)));
        inf_7->setProperty("UpLabel", QVariant(QApplication::translate("B6", "PSL", 0, QApplication::UnicodeUTF8)));
        inf_7->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6224", 0, QApplication::UnicodeUTF8)));
        inf_9->setProperty("UpLabel", QVariant(QApplication::translate("B6", "PSHH", 0, QApplication::UnicodeUTF8)));
        inf_9->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6226", 0, QApplication::UnicodeUTF8)));
        inf_3->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_3->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62571", 0, QApplication::UnicodeUTF8)));
        inf_5->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_5->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62570", 0, QApplication::UnicodeUTF8)));
        inf_10->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_10->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6249", 0, QApplication::UnicodeUTF8)));
        inf_11->setProperty("UpLabel", QVariant(QApplication::translate("B6", "ZSC", 0, QApplication::UnicodeUTF8)));
        inf_11->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6249", 0, QApplication::UnicodeUTF8)));
        inf_15->setProperty("UpLabel", QVariant(QApplication::translate("B6", "ZSC", 0, QApplication::UnicodeUTF8)));
        inf_15->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6204", 0, QApplication::UnicodeUTF8)));
        inf_12->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_12->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6208", 0, QApplication::UnicodeUTF8)));
        inf_13->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_13->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6204", 0, QApplication::UnicodeUTF8)));
        inf_16->setProperty("UpLabel", QVariant(QApplication::translate("B6", "ZSC", 0, QApplication::UnicodeUTF8)));
        inf_16->setProperty("DownLabel", QVariant(QApplication::translate("B6", "62417", 0, QApplication::UnicodeUTF8)));
        inf_14->setProperty("UpLabel", QVariant(QApplication::translate("B6", "SOV", 0, QApplication::UnicodeUTF8)));
        inf_14->setProperty("DownLabel", QVariant(QApplication::translate("B6", "64217", 0, QApplication::UnicodeUTF8)));
        inf_17->setProperty("UpLabel", QVariant(QApplication::translate("B6", "TE", 0, QApplication::UnicodeUTF8)));
        inf_17->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6232A", 0, QApplication::UnicodeUTF8)));
        inf_18->setProperty("UpLabel", QVariant(QApplication::translate("B6", "TE", 0, QApplication::UnicodeUTF8)));
        inf_18->setProperty("DownLabel", QVariant(QApplication::translate("B6", "6232B", 0, QApplication::UnicodeUTF8)));
        label_34->setText(QApplication::translate("B6", "DIFFUSOR DE\n"
"GASES EXHAUSTOS", 0, QApplication::UnicodeUTF8));
        lb_Unit_0->setText(QApplication::translate("B6", "BTU/LB", 0, QApplication::UnicodeUTF8));
        lb_Lect_0->setText(QString());
        lbFlech_2->setText(QString());
        lbUnit3->setText(QApplication::translate("B6", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("B6", "IMP PANT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B6: public Ui_B6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B6_H
