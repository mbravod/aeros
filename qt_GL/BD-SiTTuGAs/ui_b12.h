/********************************************************************************
** Form generated from reading UI file 'b12.ui'
**
** Created: Fri 3. Jan 20:43:13 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B12_H
#define UI_B12_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_B12
{
public:
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    WLabel *label_2;
    WLabel *label_3;
    WLabel *label_4;
    WLabel *label_5;
    WLabel *label_6;
    WLabel *label_7;
    WLabel *label_8;
    WLabel *label_9;
    WLabel *label_10;
    WLabel *label_11;
    WLabel *lbGenFp;
    WLabel *lbGenMvar;
    WLabel *label_14;
    WLabel *label_15;
    WLabel *label_16;
    WLabel *lbGenMw;
    AWMultiObject *awmultiObject_1;
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
    AWMultiObject *aWMultiObject_2;
    AWMultiObject *aWMultiObject_3;
    AWMultiObject *aWMultiObject_4;
    AWMultiObject *aWMultiObject_5;
    AWMultiObject *aWMultiObject_6;
    AWMultiObject *aWMultiObject_16;
    AWMultiObject *aWMultiObject_11;
    AWMultiObject *awmultiObject_15;
    AWMultiObject *aWMultiObject_13;
    AWMultiObject *aWMultiObject_12;
    AWMultiObject *aWMultiObject_14;
    AWMultiObject *aWMultiObject_9;
    AWMultiObject *aWMultiObject_10;
    AWMultiObject *awmultiObject_7;
    AWMultiObject *aWMultiObject_8;
    WLabel *label_18;
    WLabel *label_19;
    WLabel *label_20;
    WLabel *label_21;
    QCommandLinkButton *commandLinkButton;
    QPushButton *btnIMPPant;
    QLabel *lbUnit3;

    void setupUi(QWidget *B12)
    {
        if (B12->objectName().isEmpty())
            B12->setObjectName(QString::fromUtf8("B12"));
        B12->resize(1024, 662);
        B12->setMinimumSize(QSize(1024, 662));
        B12->setMaximumSize(QSize(1024, 662));
        label = new QLabel(B12);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 662));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B12.png")));
        label->setScaledContents(true);
        frame = new QFrame(B12);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 50, 276, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 271, 31));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new WLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(4, 4, 261, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setProperty("Alineacion", QVariant(WLabel::Centro));
        label_3 = new WLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(4, 32, 181, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        label_3->setFont(font1);
        label_4 = new WLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(5, 51, 181, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_4->setFont(font1);
        label_5 = new WLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(6, 90, 181, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_5->setFont(font1);
        label_6 = new WLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(8, 71, 181, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_6->setFont(font1);
        label_7 = new WLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 32, 46, 13));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_7->setFont(font1);
        label_8 = new WLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 51, 46, 13));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_8->setFont(font1);
        label_9 = new WLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 71, 46, 13));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_9->setFont(font1);
        label_10 = new WLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 90, 46, 13));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_10->setFont(font1);
        label_11 = new WLabel(B12);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(230, 430, 101, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_11->setFont(font2);
        lbGenFp = new WLabel(B12);
        lbGenFp->setObjectName(QString::fromUtf8("lbGenFp"));
        lbGenFp->setGeometry(QRect(231, 487, 46, 13));
        lbGenFp->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbGenFp->setFont(font);
        lbGenMvar = new WLabel(B12);
        lbGenMvar->setObjectName(QString::fromUtf8("lbGenMvar"));
        lbGenMvar->setGeometry(QRect(231, 473, 46, 13));
        lbGenMvar->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbGenMvar->setFont(font);
        label_14 = new WLabel(B12);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(284, 473, 46, 13));
        label_14->setFont(font);
        label_15 = new WLabel(B12);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(284, 487, 46, 13));
        label_15->setFont(font);
        label_16 = new WLabel(B12);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(283, 456, 46, 13));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_16->setFont(font);
        lbGenMw = new WLabel(B12);
        lbGenMw->setObjectName(QString::fromUtf8("lbGenMw"));
        lbGenMw->setGeometry(QRect(231, 456, 46, 13));
        lbGenMw->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lbGenMw->setFont(font);
        awmultiObject_1 = new AWMultiObject(B12);
        awmultiObject_1->setObjectName(QString::fromUtf8("awmultiObject_1"));
        awmultiObject_1->setGeometry(QRect(309, 113, 29, 31));
        awmultiObject_1->setOrientation(AWMultEstateWidget::Degree270);
        awmultiObject_1->setElementType(AWMultiObject::VH2);
        awmultiObject_1->setProperty("Value", QVariant(0));
        aInstrumentIndicator = new AInstrumentIndicator(B12);
        aInstrumentIndicator->setObjectName(QString::fromUtf8("aInstrumentIndicator"));
        aInstrumentIndicator->setGeometry(QRect(139, 202, 60, 60));
        aInstrumentIndicator->setValue(-1);
        aInstrumentIndicator->setProperty("Value", QVariant(2));
        aInstrumentIndicator_2 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_2->setObjectName(QString::fromUtf8("aInstrumentIndicator_2"));
        aInstrumentIndicator_2->setGeometry(QRect(350, 550, 60, 60));
        aInstrumentIndicator_2->setValue(-1);
        aInstrumentIndicator_2->setProperty("Value", QVariant(2));
        aInstrumentIndicator_3 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_3->setObjectName(QString::fromUtf8("aInstrumentIndicator_3"));
        aInstrumentIndicator_3->setGeometry(QRect(351, 586, 60, 60));
        aInstrumentIndicator_3->setValue(-1);
        aInstrumentIndicator_3->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_3->setProperty("Value", QVariant(2));
        aInstrumentIndicator_4 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_4->setObjectName(QString::fromUtf8("aInstrumentIndicator_4"));
        aInstrumentIndicator_4->setGeometry(QRect(645, 550, 60, 60));
        aInstrumentIndicator_4->setValue(-1);
        aInstrumentIndicator_4->setProperty("Value", QVariant(2));
        aInstrumentIndicator_5 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_5->setObjectName(QString::fromUtf8("aInstrumentIndicator_5"));
        aInstrumentIndicator_5->setGeometry(QRect(645, 586, 60, 60));
        aInstrumentIndicator_5->setValue(-1);
        aInstrumentIndicator_5->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_5->setProperty("Value", QVariant(2));
        aInstrumentIndicator_6 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_6->setObjectName(QString::fromUtf8("aInstrumentIndicator_6"));
        aInstrumentIndicator_6->setGeometry(QRect(916, 235, 60, 60));
        aInstrumentIndicator_6->setValue(-1);
        aInstrumentIndicator_6->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_6->setProperty("Value", QVariant(2));
        aInstrumentIndicator_7 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_7->setObjectName(QString::fromUtf8("aInstrumentIndicator_7"));
        aInstrumentIndicator_7->setGeometry(QRect(916, 196, 60, 60));
        aInstrumentIndicator_7->setValue(-1);
        aInstrumentIndicator_7->setProperty("Value", QVariant(2));
        aInstrumentIndicator_8 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_8->setObjectName(QString::fromUtf8("aInstrumentIndicator_8"));
        aInstrumentIndicator_8->setGeometry(QRect(954, 235, 60, 60));
        aInstrumentIndicator_8->setValue(-1);
        aInstrumentIndicator_8->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_8->setProperty("Value", QVariant(2));
        aInstrumentIndicator_9 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_9->setObjectName(QString::fromUtf8("aInstrumentIndicator_9"));
        aInstrumentIndicator_9->setGeometry(QRect(953, 196, 60, 60));
        aInstrumentIndicator_9->setValue(-1);
        aInstrumentIndicator_9->setOrientation(AWMultEstateWidget::Degree90);
        aInstrumentIndicator_9->setProperty("Value", QVariant(2));
        aInstrumentIndicator_10 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_10->setObjectName(QString::fromUtf8("aInstrumentIndicator_10"));
        aInstrumentIndicator_10->setGeometry(QRect(968, 289, 60, 60));
        aInstrumentIndicator_10->setValue(-1);
        aInstrumentIndicator_10->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_10->setProperty("Value", QVariant(2));
        aInstrumentIndicator_11 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_11->setObjectName(QString::fromUtf8("aInstrumentIndicator_11"));
        aInstrumentIndicator_11->setGeometry(QRect(930, 289, 60, 60));
        aInstrumentIndicator_11->setValue(-1);
        aInstrumentIndicator_11->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_11->setProperty("Value", QVariant(2));
        aInstrumentIndicator_12 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_12->setObjectName(QString::fromUtf8("aInstrumentIndicator_12"));
        aInstrumentIndicator_12->setGeometry(QRect(930, 529, 60, 60));
        aInstrumentIndicator_12->setValue(-1);
        aInstrumentIndicator_12->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_12->setProperty("Value", QVariant(2));
        aInstrumentIndicator_13 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_13->setObjectName(QString::fromUtf8("aInstrumentIndicator_13"));
        aInstrumentIndicator_13->setGeometry(QRect(968, 529, 60, 60));
        aInstrumentIndicator_13->setValue(-1);
        aInstrumentIndicator_13->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_13->setProperty("Value", QVariant(2));
        aInstrumentIndicator_14 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_14->setObjectName(QString::fromUtf8("aInstrumentIndicator_14"));
        aInstrumentIndicator_14->setGeometry(QRect(781, 289, 60, 60));
        aInstrumentIndicator_14->setValue(-1);
        aInstrumentIndicator_14->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_14->setProperty("Value", QVariant(2));
        aInstrumentIndicator_15 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_15->setObjectName(QString::fromUtf8("aInstrumentIndicator_15"));
        aInstrumentIndicator_15->setGeometry(QRect(743, 289, 60, 60));
        aInstrumentIndicator_15->setValue(-1);
        aInstrumentIndicator_15->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_15->setProperty("Value", QVariant(2));
        aInstrumentIndicator_16 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_16->setObjectName(QString::fromUtf8("aInstrumentIndicator_16"));
        aInstrumentIndicator_16->setGeometry(QRect(524, 289, 60, 60));
        aInstrumentIndicator_16->setValue(-1);
        aInstrumentIndicator_16->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_16->setProperty("Value", QVariant(2));
        aInstrumentIndicator_17 = new AInstrumentIndicator(B12);
        aInstrumentIndicator_17->setObjectName(QString::fromUtf8("aInstrumentIndicator_17"));
        aInstrumentIndicator_17->setGeometry(QRect(562, 289, 60, 60));
        aInstrumentIndicator_17->setValue(-1);
        aInstrumentIndicator_17->setOrientation(AWMultEstateWidget::Degree270);
        aInstrumentIndicator_17->setProperty("Value", QVariant(2));
        aWMultiObject_2 = new AWMultiObject(B12);
        aWMultiObject_2->setObjectName(QString::fromUtf8("aWMultiObject_2"));
        aWMultiObject_2->setGeometry(QRect(334, 113, 29, 31));
        aWMultiObject_2->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_2->setElementType(AWMultiObject::VH2);
        aWMultiObject_3 = new AWMultiObject(B12);
        aWMultiObject_3->setObjectName(QString::fromUtf8("aWMultiObject_3"));
        aWMultiObject_3->setGeometry(QRect(360, 113, 29, 31));
        aWMultiObject_3->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_3->setElementType(AWMultiObject::VH2);
        aWMultiObject_4 = new AWMultiObject(B12);
        aWMultiObject_4->setObjectName(QString::fromUtf8("aWMultiObject_4"));
        aWMultiObject_4->setGeometry(QRect(385, 113, 29, 31));
        aWMultiObject_4->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_4->setElementType(AWMultiObject::VH2);
        aWMultiObject_5 = new AWMultiObject(B12);
        aWMultiObject_5->setObjectName(QString::fromUtf8("aWMultiObject_5"));
        aWMultiObject_5->setGeometry(QRect(410, 113, 29, 31));
        aWMultiObject_5->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_5->setElementType(AWMultiObject::VH2);
        aWMultiObject_6 = new AWMultiObject(B12);
        aWMultiObject_6->setObjectName(QString::fromUtf8("aWMultiObject_6"));
        aWMultiObject_6->setGeometry(QRect(436, 113, 29, 31));
        aWMultiObject_6->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_6->setElementType(AWMultiObject::VH2);
        aWMultiObject_16 = new AWMultiObject(B12);
        aWMultiObject_16->setObjectName(QString::fromUtf8("aWMultiObject_16"));
        aWMultiObject_16->setGeometry(QRect(791, 113, 29, 31));
        aWMultiObject_16->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_16->setElementType(AWMultiObject::VH2);
        aWMultiObject_11 = new AWMultiObject(B12);
        aWMultiObject_11->setObjectName(QString::fromUtf8("aWMultiObject_11"));
        aWMultiObject_11->setGeometry(QRect(665, 113, 29, 31));
        aWMultiObject_11->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_11->setElementType(AWMultiObject::VH2);
        awmultiObject_15 = new AWMultiObject(B12);
        awmultiObject_15->setObjectName(QString::fromUtf8("awmultiObject_15"));
        awmultiObject_15->setGeometry(QRect(767, 113, 29, 31));
        awmultiObject_15->setOrientation(AWMultEstateWidget::Degree90);
        awmultiObject_15->setElementType(AWMultiObject::VH2);
        aWMultiObject_13 = new AWMultiObject(B12);
        aWMultiObject_13->setObjectName(QString::fromUtf8("aWMultiObject_13"));
        aWMultiObject_13->setGeometry(QRect(716, 113, 29, 31));
        aWMultiObject_13->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_13->setElementType(AWMultiObject::VH2);
        aWMultiObject_12 = new AWMultiObject(B12);
        aWMultiObject_12->setObjectName(QString::fromUtf8("aWMultiObject_12"));
        aWMultiObject_12->setGeometry(QRect(691, 113, 29, 31));
        aWMultiObject_12->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_12->setElementType(AWMultiObject::VH2);
        aWMultiObject_14 = new AWMultiObject(B12);
        aWMultiObject_14->setObjectName(QString::fromUtf8("aWMultiObject_14"));
        aWMultiObject_14->setGeometry(QRect(742, 113, 29, 31));
        aWMultiObject_14->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_14->setElementType(AWMultiObject::VH2);
        aWMultiObject_9 = new AWMultiObject(B12);
        aWMultiObject_9->setObjectName(QString::fromUtf8("aWMultiObject_9"));
        aWMultiObject_9->setGeometry(QRect(590, 113, 29, 31));
        aWMultiObject_9->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_9->setElementType(AWMultiObject::VH2);
        aWMultiObject_10 = new AWMultiObject(B12);
        aWMultiObject_10->setObjectName(QString::fromUtf8("aWMultiObject_10"));
        aWMultiObject_10->setGeometry(QRect(616, 113, 29, 31));
        aWMultiObject_10->setOrientation(AWMultEstateWidget::Degree90);
        aWMultiObject_10->setElementType(AWMultiObject::VH2);
        awmultiObject_7 = new AWMultiObject(B12);
        awmultiObject_7->setObjectName(QString::fromUtf8("awmultiObject_7"));
        awmultiObject_7->setGeometry(QRect(487, 113, 29, 31));
        awmultiObject_7->setOrientation(AWMultEstateWidget::Degree270);
        awmultiObject_7->setElementType(AWMultiObject::VH2);
        aWMultiObject_8 = new AWMultiObject(B12);
        aWMultiObject_8->setObjectName(QString::fromUtf8("aWMultiObject_8"));
        aWMultiObject_8->setGeometry(QRect(512, 113, 29, 31));
        aWMultiObject_8->setOrientation(AWMultEstateWidget::Degree270);
        aWMultiObject_8->setElementType(AWMultiObject::VH2);
        label_18 = new WLabel(B12);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(675, 469, 61, 16));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        label_18->setFont(font3);
        label_18->setProperty("Alineacion", QVariant(WLabel::Centro));
        label_19 = new WLabel(B12);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(790, 469, 61, 16));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_19->setFont(font3);
        label_19->setProperty("Alineacion", QVariant(WLabel::Centro));
        label_20 = new WLabel(B12);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(544, 469, 61, 16));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_20->setFont(font3);
        label_20->setProperty("Alineacion", QVariant(WLabel::Centro));
        label_21 = new WLabel(B12);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(840, 469, 61, 16));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_21->setFont(font3);
        label_21->setProperty("Alineacion", QVariant(WLabel::Centro));
        commandLinkButton = new QCommandLinkButton(B12);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(220, 420, 133, 109));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/PNG/Extras/transparente.svg"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        btnIMPPant = new QPushButton(B12);
        btnIMPPant->setObjectName(QString::fromUtf8("btnIMPPant"));
        btnIMPPant->setGeometry(QRect(17, 634, 134, 23));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        btnIMPPant->setFont(font4);
        btnIMPPant->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUnit3 = new QLabel(B12);
        lbUnit3->setObjectName(QString::fromUtf8("lbUnit3"));
        lbUnit3->setGeometry(QRect(840, 650, 190, 15));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        lbUnit3->setFont(font5);
        lbUnit3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));

        retranslateUi(B12);

        QMetaObject::connectSlotsByName(B12);
    } // setupUi

    void retranslateUi(QWidget *B12)
    {
        B12->setWindowTitle(QApplication::translate("B12", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setStyleSheet(QApplication::translate("B12", "color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("B12", "ESTADO DE FUEGO Y GAS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("B12", "FALLA EN EL SIST DE FUEGO Y GAS", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("B12", "GAS DETECTADO NIV ALTO:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("B12", "INCENDIO DETECTADO:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("B12", "GAS DETECTADO NIV MUY ALTO:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("B12", "FALLA", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("B12", "OK", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("B12", "OK", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("B12", "OK", 0, QApplication::UnicodeUTF8));
        label_11->setStyleSheet(QApplication::translate("B12", "background-color: rgba(255, 255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("B12", "GENERADOR", 0, QApplication::UnicodeUTF8));
        lbGenFp->setText(QApplication::translate("B12", "0.0", 0, QApplication::UnicodeUTF8));
        lbGenMvar->setText(QApplication::translate("B12", "0.0", 0, QApplication::UnicodeUTF8));
        label_14->setStyleSheet(QApplication::translate("B12", "background-color: rgba(255, 255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("B12", "MVAR", 0, QApplication::UnicodeUTF8));
        label_15->setStyleSheet(QApplication::translate("B12", "background-color: rgba(255, 255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("B12", "FP", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("B12", "MW", 0, QApplication::UnicodeUTF8));
        lbGenMw->setText(QApplication::translate("B12", "0.0", 0, QApplication::UnicodeUTF8));
        aInstrumentIndicator->setProperty("UpLabel", QVariant(QApplication::translate("B12", "PSHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6348", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_2->setId(QApplication::translate("B12", "p_Fix32_THISNODE_ALM_MSTR014_F_CV", 0, QApplication::UnicodeUTF8));
        aInstrumentIndicator_2->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_2->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6313", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_3->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_3->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6313", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_4->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_4->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304E", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_5->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_5->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304E", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_6->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_6->setProperty("DownLabel", QVariant(QApplication::translate("B12", "3030", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_7->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_7->setProperty("DownLabel", QVariant(QApplication::translate("B12", "3029", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_8->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_8->setProperty("DownLabel", QVariant(QApplication::translate("B12", "3030", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_9->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_9->setProperty("DownLabel", QVariant(QApplication::translate("B12", "3029", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_10->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_10->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304A", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_11->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_11->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304A", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_12->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_12->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304B", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_13->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_13->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304B", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_14->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_14->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304C", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_15->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_15->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304C", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_16->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_16->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304D", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_17->setProperty("UpLabel", QVariant(QApplication::translate("B12", "ASHH", 0, QApplication::UnicodeUTF8)));
        aInstrumentIndicator_17->setProperty("DownLabel", QVariant(QApplication::translate("B12", "6304D", 0, QApplication::UnicodeUTF8)));
        label_18->setText(QApplication::translate("B12", "HPC", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("B12", "HPT", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("B12", "LPC", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("B12", "LPT", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QString());
        btnIMPPant->setText(QApplication::translate("B12", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbUnit3->setText(QApplication::translate("B12", "    UNIT3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B12: public Ui_B12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B12_H
