/********************************************************************************
** Form generated from reading UI file 'b9.ui'
**
** Created: Sun 29. Sep 18:02:05 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B9_H
#define UI_B9_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"

QT_BEGIN_NAMESPACE

class Ui_B9
{
public:
    QLabel *label;
    QFrame *frame;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QCheckBox *checkBox;
    AInstrumentIndicator *aInstrumentIndicator;
    AInstrumentIndicator *aInstrumentIndicator_2;
    AInstrumentIndicator *aInstrumentIndicator_3;
    AInstrumentIndicator *aInstrumentIndicator_4;
    AInstrumentIndicator *aInstrumentIndicator_5;
    AInstrumentIndicator *aInstrumentIndicator_6;
    AInstrumentIndicator *aInstrumentIndicator_7;
    AInstrumentIndicator *aInstrumentIndicator_8;
    AInstrumentIndicator *aInstrumentIndicator_9;
    AInstrumentIndicator *aInstrumentIndicator_10;
    AInstrumentIndicator *aInstrumentIndicator_11;
    AInstrumentIndicator *aInstrumentIndicator_12;
    AInstrumentIndicator *aInstrumentIndicator_13;
    AInstrumentIndicator *aInstrumentIndicator_14;
    AInstrumentIndicator *aInstrumentIndicator_15;
    AInstrumentIndicator *aInstrumentIndicator_16;
    AInstrumentIndicator *aInstrumentIndicator_17;
    AInstrumentIndicator *aInstrumentIndicator_18;
    AInstrumentIndicator *aInstrumentIndicator_19;
    AInstrumentIndicator *aInstrumentIndicator_20;
    AInstrumentIndicator *aInstrumentIndicator_21;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_32;
    QLabel *label_33;
    AWMultiObject *aWMultiObject;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    AWMultiObject *aWMultiObject_2;
    AWMultiObject *aWMultiObject_3;
    QLabel *lbUnit3;
    QPushButton *btnIMPPant;

    void setupUi(QWidget *B9)
    {
        if (B9->objectName().isEmpty())
            B9->setObjectName(QString::fromUtf8("B9"));
        B9->resize(1024, 662);
        B9->setMinimumSize(QSize(1024, 662));
        B9->setMaximumSize(QSize(1024, 662));
        label = new QLabel(B9);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setMinimumSize(QSize(1024, 662));
        label->setMaximumSize(QSize(1024, 662));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B9.png")));
        label->setScaledContents(true);
        frame = new QFrame(B9);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(450, 50, 341, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_42 = new QLabel(frame);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(260, 23, 51, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_42->setFont(font);
        label_42->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_42->setAlignment(Qt::AlignCenter);
        label_43 = new QLabel(frame);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(200, 23, 61, 16));
        label_43->setFont(font);
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_43->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_44 = new QLabel(frame);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(10, 23, 161, 16));
        label_44->setFont(font);
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 0);"));
        label_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_45 = new QLabel(frame);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 40, 161, 16));
        label_45->setFont(font);
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 2, 291, 18));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        aInstrumentIndicator = new AInstrumentIndicator(B9);
        aInstrumentIndicator->setObjectName(QString::fromUtf8("aInstrumentIndicator"));
        aInstrumentIndicator->setGeometry(QRect(0, 370, 60, 60));
        aInstrumentIndicator->setValue(2);
        aInstrumentIndicator_2 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_2->setObjectName(QString::fromUtf8("aInstrumentIndicator_2"));
        aInstrumentIndicator_2->setGeometry(QRect(39, 341, 60, 60));
        aInstrumentIndicator_2->setValue(2);
        aInstrumentIndicator_3 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_3->setObjectName(QString::fromUtf8("aInstrumentIndicator_3"));
        aInstrumentIndicator_3->setGeometry(QRect(39, 283, 60, 60));
        aInstrumentIndicator_3->setValue(2);
        aInstrumentIndicator_4 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_4->setObjectName(QString::fromUtf8("aInstrumentIndicator_4"));
        aInstrumentIndicator_4->setGeometry(QRect(40, 130, 60, 60));
        aInstrumentIndicator_4->setValue(2);
        aInstrumentIndicator_5 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_5->setObjectName(QString::fromUtf8("aInstrumentIndicator_5"));
        aInstrumentIndicator_5->setGeometry(QRect(39, 66, 60, 60));
        aInstrumentIndicator_5->setValue(2);
        aInstrumentIndicator_6 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_6->setObjectName(QString::fromUtf8("aInstrumentIndicator_6"));
        aInstrumentIndicator_6->setGeometry(QRect(0, 37, 60, 60));
        aInstrumentIndicator_6->setValue(2);
        aInstrumentIndicator_7 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_7->setObjectName(QString::fromUtf8("aInstrumentIndicator_7"));
        aInstrumentIndicator_7->setGeometry(QRect(261, 282, 60, 60));
        aInstrumentIndicator_7->setValue(2);
        aInstrumentIndicator_7->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_8 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_8->setObjectName(QString::fromUtf8("aInstrumentIndicator_8"));
        aInstrumentIndicator_8->setGeometry(QRect(261, 128, 60, 60));
        aInstrumentIndicator_8->setValue(2);
        aInstrumentIndicator_8->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_9 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_9->setObjectName(QString::fromUtf8("aInstrumentIndicator_9"));
        aInstrumentIndicator_9->setGeometry(QRect(310, 98, 60, 60));
        aInstrumentIndicator_9->setValue(2);
        aInstrumentIndicator_9->setOrientation(AWMultEstateWidget::Degree90);
        aInstrumentIndicator_10 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_10->setObjectName(QString::fromUtf8("aInstrumentIndicator_10"));
        aInstrumentIndicator_10->setGeometry(QRect(310, 57, 60, 60));
        aInstrumentIndicator_10->setValue(2);
        aInstrumentIndicator_10->setOrientation(AWMultEstateWidget::Degree90);
        aInstrumentIndicator_11 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_11->setObjectName(QString::fromUtf8("aInstrumentIndicator_11"));
        aInstrumentIndicator_11->setGeometry(QRect(397, 106, 60, 60));
        aInstrumentIndicator_11->setValue(2);
        aInstrumentIndicator_11->setOrientation(AWMultEstateWidget::Degree90);
        aInstrumentIndicator_12 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_12->setObjectName(QString::fromUtf8("aInstrumentIndicator_12"));
        aInstrumentIndicator_12->setGeometry(QRect(205, 411, 60, 60));
        aInstrumentIndicator_12->setValue(2);
        aInstrumentIndicator_13 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_13->setObjectName(QString::fromUtf8("aInstrumentIndicator_13"));
        aInstrumentIndicator_13->setGeometry(QRect(257, 412, 60, 60));
        aInstrumentIndicator_13->setValue(2);
        aInstrumentIndicator_14 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_14->setObjectName(QString::fromUtf8("aInstrumentIndicator_14"));
        aInstrumentIndicator_14->setGeometry(QRect(462, 607, 60, 60));
        aInstrumentIndicator_14->setValue(2);
        aInstrumentIndicator_15 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_15->setObjectName(QString::fromUtf8("aInstrumentIndicator_15"));
        aInstrumentIndicator_15->setGeometry(QRect(683, 562, 60, 60));
        aInstrumentIndicator_15->setValue(2);
        aInstrumentIndicator_15->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_16 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_16->setObjectName(QString::fromUtf8("aInstrumentIndicator_16"));
        aInstrumentIndicator_16->setGeometry(QRect(967, 565, 60, 60));
        aInstrumentIndicator_16->setValue(2);
        aInstrumentIndicator_16->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_17 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_17->setObjectName(QString::fromUtf8("aInstrumentIndicator_17"));
        aInstrumentIndicator_17->setGeometry(QRect(878, 398, 60, 60));
        aInstrumentIndicator_17->setValue(2);
        aInstrumentIndicator_17->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_18 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_18->setObjectName(QString::fromUtf8("aInstrumentIndicator_18"));
        aInstrumentIndicator_18->setGeometry(QRect(913, 303, 60, 60));
        aInstrumentIndicator_18->setValue(2);
        aInstrumentIndicator_18->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_19 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_19->setObjectName(QString::fromUtf8("aInstrumentIndicator_19"));
        aInstrumentIndicator_19->setGeometry(QRect(913, 258, 60, 60));
        aInstrumentIndicator_19->setValue(2);
        aInstrumentIndicator_19->setOrientation(AWMultEstateWidget::Degree180);
        aInstrumentIndicator_20 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_20->setObjectName(QString::fromUtf8("aInstrumentIndicator_20"));
        aInstrumentIndicator_20->setGeometry(QRect(738, 304, 60, 60));
        aInstrumentIndicator_20->setValue(2);
        aInstrumentIndicator_20->setOrientation(AWMultEstateWidget::Degree0);
        aInstrumentIndicator_21 = new AInstrumentIndicator(B9);
        aInstrumentIndicator_21->setObjectName(QString::fromUtf8("aInstrumentIndicator_21"));
        aInstrumentIndicator_21->setGeometry(QRect(738, 260, 60, 60));
        aInstrumentIndicator_21->setValue(2);
        aInstrumentIndicator_21->setOrientation(AWMultEstateWidget::Degree0);
        frame_2 = new QFrame(B9);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 210, 71, 51));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 6, 51, 20));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_32 = new QLabel(frame_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(30, 30, 31, 16));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(frame_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(0, 30, 31, 16));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        aWMultiObject = new AWMultiObject(B9);
        aWMultiObject->setObjectName(QString::fromUtf8("aWMultiObject"));
        aWMultiObject->setGeometry(QRect(884, 556, 61, 71));
        aWMultiObject->setElementType(AWMultiObject::SPRING);
        label_3 = new QLabel(B9);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(166, 493, 101, 20));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(B9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(219, 519, 46, 13));
        label_4->setFont(font2);
        label_5 = new QLabel(B9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(167, 519, 46, 13));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(B9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(167, 536, 46, 13));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(B9);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 536, 46, 13));
        label_7->setFont(font2);
        label_8 = new QLabel(B9);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 550, 46, 13));
        label_8->setFont(font2);
        label_9 = new QLabel(B9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(167, 550, 46, 13));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(B9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(340, 296, 101, 61));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(B9);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(471, 316, 160, 61));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(B9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(337, 546, 121, 91));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(B9);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(665, 150, 105, 61));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(B9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(474, 510, 61, 31));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(B9);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(605, 512, 61, 31));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(B9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(720, 510, 61, 31));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(B9);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(770, 510, 61, 31));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(B9);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(796, 93, 121, 31));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(B9);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(760, 111, 121, 31));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(B9);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(832, 110, 121, 31));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(B9);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(798, 220, 121, 61));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(B9);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(630, 567, 31, 16));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(B9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(660, 567, 31, 16));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(B9);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(300, 120, 31, 16));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(B9);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(270, 120, 31, 16));
        label_25->setFont(font);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_26 = new QLabel(B9);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 420, 31, 16));
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(B9);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(40, 420, 31, 16));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(B9);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(30, 330, 31, 16));
        label_28->setFont(font);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_29 = new QLabel(B9);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(60, 330, 31, 16));
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(B9);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(60, 280, 31, 16));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(B9);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(30, 280, 31, 16));
        label_31->setFont(font);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_34 = new QLabel(B9);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(60, 180, 31, 16));
        label_34->setFont(font);
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_34->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(B9);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(30, 180, 31, 16));
        label_35->setFont(font);
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_35->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_36 = new QLabel(B9);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(60, 115, 31, 16));
        label_36->setFont(font);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(B9);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(30, 115, 31, 16));
        label_37->setFont(font);
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_38 = new QLabel(B9);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(80, 46, 31, 16));
        label_38->setFont(font);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_38->setAlignment(Qt::AlignCenter);
        label_39 = new QLabel(B9);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(50, 46, 31, 16));
        label_39->setFont(font);
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_40 = new QLabel(B9);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(860, 410, 31, 16));
        label_40->setFont(font);
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_40->setAlignment(Qt::AlignCenter);
        label_41 = new QLabel(B9);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(830, 410, 31, 16));
        label_41->setFont(font);
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_46 = new QLabel(B9);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(100, 86, 163, 84));
        QFont font4;
        font4.setPointSize(7);
        font4.setBold(false);
        font4.setWeight(50);
        label_46->setFont(font4);
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_46->setAlignment(Qt::AlignCenter);
        label_47 = new QLabel(B9);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(100, 306, 163, 84));
        label_47->setFont(font4);
        label_47->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_47->setAlignment(Qt::AlignCenter);
        label_48 = new QLabel(B9);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(131, 295, 111, 16));
        label_48->setFont(font);
        label_48->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_49 = new QLabel(B9);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(130, 165, 111, 16));
        label_49->setFont(font);
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        aWMultiObject_2 = new AWMultiObject(B9);
        aWMultiObject_2->setObjectName(QString::fromUtf8("aWMultiObject_2"));
        aWMultiObject_2->setGeometry(QRect(790, 296, 61, 71));
        aWMultiObject_2->setElementType(AWMultiObject::AGITADOR);
        aWMultiObject_3 = new AWMultiObject(B9);
        aWMultiObject_3->setObjectName(QString::fromUtf8("aWMultiObject_3"));
        aWMultiObject_3->setGeometry(QRect(862, 296, 61, 71));
        aWMultiObject_3->setElementType(AWMultiObject::AGITADOR);
        lbUnit3 = new QLabel(B9);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(833, 647, 190, 15));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        lbUnit3->setFont(font5);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        btnIMPPant = new QPushButton(B9);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(10, 632, 134, 23));
        QFont font6;
        font6.setPointSize(8);
        font6.setBold(true);
        font6.setWeight(75);
        btnIMPPant->setFont(font6);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));

        retranslateUi(B9);

        QMetaObject::connectSlotsByName(B9);
    } // setupUi

    void retranslateUi(QWidget *B9)
    {
        B9->setWindowTitle(QApplication::translate("B9", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_42->setText(QApplication::translate("B9", "5543", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("B9", "HRS OP", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("B9", "VENTILADOR A EN SERVICIO", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("B9", "VENTILADOR B EN ESPERA", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("B9", " SELECCI\303\223N DEL VENTILADOR DE LA TURBINA", 0, QApplication::UnicodeUTF8));
        aInstrumentIndicator->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64031", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_2->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_2->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64033", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_3->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_3->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6450", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_4->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_4->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6499", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_5->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_5->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64032", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_6->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_6->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64030", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_7->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_7->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6403", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_8->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_8->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64071", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_9->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_9->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6405", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_10->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_10->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6406", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_11->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_11->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64060", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_12->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_12->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64018", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_13->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_13->setProperty("DownLabel", QVariant(QApplication::translate("B9", "64017", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_14->setProperty("UpLabel", QVariant(QApplication::translate("B9", "PDSL", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_14->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6407", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_15->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_15->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6454", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_16->setProperty("UpLabel", QVariant(QApplication::translate("B9", "HE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_16->setProperty("DownLabel", QVariant(QApplication::translate("B9", "68888/9", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_17->setProperty("UpLabel", QVariant(QApplication::translate("B9", "TE", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_17->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6401", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_18->setProperty("UpLabel", QVariant(QApplication::translate("B9", "MOT", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_18->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6418", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_19->setProperty("UpLabel", QVariant(QApplication::translate("B9", "FSL", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_19->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6453", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_20->setProperty("UpLabel", QVariant(QApplication::translate("B9", "MOT", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_20->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6417", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_21->setProperty("UpLabel", QVariant(QApplication::translate("B9", "FSL", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_21->setProperty("DownLabel", QVariant(QApplication::translate("B9", "6408", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QApplication::translate("B9", "TOSEL", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("B9", "GENERADOR", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("B9", "MW", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("B9", "0.0", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("B9", "0.0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("B9", "MVAR", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("B9", "MW", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("B9", "0.0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("B9", "SILENCIADOR\n"
"ADMISI\303\223N DE AIRE", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("B9", "SILENCIADORES\n"
"ADMIN AIRE VENTILACI\303\223N", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("B9", "ADMISI\303\223N DE AIRE\n"
"C\303\201MARA\n"
"DE DISTRIBUCI\303\223N", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("B9", "COMPRESOR\n"
"PURGA AIRE", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("B9", "LPC", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("B9", "HPC", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("B9", "HPT", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("B9", "LPT", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("B9", "VENTILACI\303\223N", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("B9", "SALIDA", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("B9", "SALIDA", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("B9", "VENTILACI\303\223N\n"
" SALIDA AIRE\n"
"SILENCIADORES", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("B9", "56", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("B9", "57", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("B9", "\302\260F", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("B9", "56", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("B9", "HR SECCI\303\223N B\n"
"PROTECCION DEL FILTRO\n"
"CALENTAMIENTO/REFRIGERACION\n"
"ELIMINADOR DE GOTAS", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("B9", "ELIMINADOR DE GOTAS\n"
"CALENTAMIENTO/REFRIGERACION\n"
"PROTECCION DEL FILTRO\n"
"HR SECCI\303\223N A", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("B9", "FILTRO DE BOLSA", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("B9", "FILTRO DE BOLSA", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B9", "    UNIT3", 0, QApplication::UnicodeUTF8));
        btnIMPPant->setText(QApplication::translate("B9", "IMP PANT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B9: public Ui_B9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B9_H
