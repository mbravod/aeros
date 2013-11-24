/********************************************************************************
** Form generated from reading UI file 'b14.ui'
**
** Created: Sun 24. Nov 01:20:54 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B14_H
#define UI_B14_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awmultiobject.h"
#include "wcheckbox.h"
#include "wlabel.h"

QT_BEGIN_NAMESPACE

class Ui_B14
{
public:
    QPushButton *btnImprScr;
    QFrame *frame;
    WLabel *lbPaso;
    WCheckBox *chk_PSFL_1;
    WCheckBox *chk_PSFL_2;
    WCheckBox *chk_PSFL_3;
    WCheckBox *chk_PSFL_4;
    WCheckBox *chk_PSFL_5;
    WCheckBox *chk_PSFL_6;
    WCheckBox *chk_PSFL_7;
    WCheckBox *chk_PSFL_8;
    WCheckBox *chk_PSFL_9;
    WCheckBox *chk_PSFL_10;
    WCheckBox *chk_PSFL_11;
    WCheckBox *chk_PSFL_12;
    QFrame *frame_2;
    WLabel *label_6;
    WCheckBox *chk_PSEL_1;
    WCheckBox *chk_PSEL_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QLabel *lbIMGFondo;
    AWMultiObject *aBomba_1;
    AWMultiObject *aASPA_1;
    AWMultiObject *aValvula_1;
    AWMultiObject *aValvula_2;
    AWMultiObject *aValvula_3;
    AWMultiObject *aValvula_4;
    AWMultiObject *aValvula_5;
    AWMultiObject *aASPA_2;
    WLabel *lbTexto_1;
    WLabel *lbTexto_2;
    WLabel *lbTexto_3;
    WLabel *lbTexto_4;
    WLabel *lbTexto_5;
    WLabel *lbTexto_6;
    WLabel *lbTexto_7;
    WLabel *lbTexto_8;
    WLabel *lbTexto_9;
    WLabel *lbTexto_10VAL;
    WLabel *lbTexto_10VAL_2;
    WLabel *lbTexto_10VAL_3;
    WLabel *lbTexto_10VAL_4;
    WLabel *lbTexto_10VALU;
    WLabel *lbTexto_10VALU_2;
    WLabel *lbTexto_10VALU_3;
    WLabel *lbTexto_10VALU_4;
    AInstrumentIndicator *aIndicator_1;
    AInstrumentIndicator *aIndicator_2;
    AInstrumentIndicator *aIndicator_3;
    AInstrumentIndicator *aIndicator_4;
    AInstrumentIndicator *aIndicator_5;
    AInstrumentIndicator *aIndicator_6;
    AInstrumentIndicator *aIndicator_7;
    QPushButton *pushButton;
    WLabel *lbFlecha_1;
    WLabel *lbFlecha_2;
    WLabel *lbFlecha_3;
    WLabel *lbFlecha_4;
    WLabel *lbFlecha_5;
    WLabel *lbFlecha_6;
    QPushButton *pushButton_2;
    WLabel *lbUniT3;
    WLabel *lbTanque;
    WLabel *lbFlecha_7;
    WLabel *lbFlecha_8;
    WLabel *label;
    WLabel *label_2;
    WLabel *label_3;
    WLabel *label_4;

    void setupUi(QWidget *B14)
    {
        if (B14->objectName().isEmpty())
            B14->setObjectName(QString::fromUtf8("B14"));
        B14->resize(1024, 667);
        B14->setMinimumSize(QSize(1024, 662));
        B14->setMaximumSize(QSize(1024, 667));
        B14->setStyleSheet(QString::fromUtf8(""));
        btnImprScr = new QPushButton(B14);
        btnImprScr->setObjectName(QString::fromUtf8("btnImprScr"));
        btnImprScr->setGeometry(QRect(10, 850, 141, 31));
        btnImprScr->setMinimumSize(QSize(141, 31));
        btnImprScr->setMaximumSize(QSize(141, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btnImprScr->setFont(font);
        btnImprScr->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame = new QFrame(B14);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(240, 380, 321, 280));
        frame->setStyleSheet(QString::fromUtf8("background-color: NONE;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbPaso = new WLabel(frame);
        lbPaso->setObjectName(QString::fromUtf8("lbPaso"));
        lbPaso->setGeometry(QRect(16, 12, 250, 21));
        lbPaso->setMinimumSize(QSize(250, 21));
        lbPaso->setMaximumSize(QSize(250, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbPaso->setPalette(palette);
        lbPaso->setLayoutDirection(Qt::RightToLeft);
        lbPaso->setStyleSheet(QString::fromUtf8(""));
        lbPaso->setFont(font);
        lbPaso->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        chk_PSFL_1 = new WCheckBox(frame);
        chk_PSFL_1->setObjectName(QString::fromUtf8("chk_PSFL_1"));
        chk_PSFL_1->setGeometry(QRect(16, 40, 321, 18));
        chk_PSFL_1->setStyleSheet(QString::fromUtf8("background-color: none;"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        chk_PSFL_1->setFont(font1);
        chk_PSFL_1->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_2 = new WCheckBox(frame);
        chk_PSFL_2->setObjectName(QString::fromUtf8("chk_PSFL_2"));
        chk_PSFL_2->setGeometry(QRect(16, 60, 312, 18));
        chk_PSFL_2->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_2->setFont(font1);
        chk_PSFL_2->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_3 = new WCheckBox(frame);
        chk_PSFL_3->setObjectName(QString::fromUtf8("chk_PSFL_3"));
        chk_PSFL_3->setGeometry(QRect(16, 79, 259, 18));
        chk_PSFL_3->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_3->setFont(font1);
        chk_PSFL_3->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_4 = new WCheckBox(frame);
        chk_PSFL_4->setObjectName(QString::fromUtf8("chk_PSFL_4"));
        chk_PSFL_4->setGeometry(QRect(16, 99, 269, 18));
        chk_PSFL_4->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_4->setFont(font1);
        chk_PSFL_4->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_5 = new WCheckBox(frame);
        chk_PSFL_5->setObjectName(QString::fromUtf8("chk_PSFL_5"));
        chk_PSFL_5->setGeometry(QRect(16, 119, 281, 18));
        chk_PSFL_5->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_5->setFont(font1);
        chk_PSFL_5->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_6 = new WCheckBox(frame);
        chk_PSFL_6->setObjectName(QString::fromUtf8("chk_PSFL_6"));
        chk_PSFL_6->setGeometry(QRect(16, 139, 271, 18));
        chk_PSFL_6->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_6->setFont(font1);
        chk_PSFL_6->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_7 = new WCheckBox(frame);
        chk_PSFL_7->setObjectName(QString::fromUtf8("chk_PSFL_7"));
        chk_PSFL_7->setGeometry(QRect(16, 159, 176, 18));
        chk_PSFL_7->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_7->setFont(font1);
        chk_PSFL_7->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_8 = new WCheckBox(frame);
        chk_PSFL_8->setObjectName(QString::fromUtf8("chk_PSFL_8"));
        chk_PSFL_8->setGeometry(QRect(16, 179, 170, 18));
        chk_PSFL_8->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_8->setFont(font1);
        chk_PSFL_8->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_9 = new WCheckBox(frame);
        chk_PSFL_9->setObjectName(QString::fromUtf8("chk_PSFL_9"));
        chk_PSFL_9->setGeometry(QRect(16, 199, 281, 18));
        chk_PSFL_9->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_9->setFont(font1);
        chk_PSFL_9->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_10 = new WCheckBox(frame);
        chk_PSFL_10->setObjectName(QString::fromUtf8("chk_PSFL_10"));
        chk_PSFL_10->setGeometry(QRect(16, 219, 251, 18));
        chk_PSFL_10->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_10->setFont(font1);
        chk_PSFL_10->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_11 = new WCheckBox(frame);
        chk_PSFL_11->setObjectName(QString::fromUtf8("chk_PSFL_11"));
        chk_PSFL_11->setGeometry(QRect(16, 239, 247, 18));
        chk_PSFL_11->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_11->setFont(font1);
        chk_PSFL_11->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSFL_12 = new WCheckBox(frame);
        chk_PSFL_12->setObjectName(QString::fromUtf8("chk_PSFL_12"));
        chk_PSFL_12->setGeometry(QRect(16, 259, 254, 18));
        chk_PSFL_12->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSFL_12->setFont(font1);
        chk_PSFL_12->setProperty("iconSize", QVariant(QSize(24, 24)));
        frame_2 = new QFrame(B14);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(660, 410, 371, 101));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: NONE;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new WLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(23, 16, 250, 21));
        label_6->setMinimumSize(QSize(250, 21));
        label_6->setMaximumSize(QSize(250, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette1);
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setFont(font1);
        label_6->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        chk_PSEL_1 = new WCheckBox(frame_2);
        chk_PSEL_1->setObjectName(QString::fromUtf8("chk_PSEL_1"));
        chk_PSEL_1->setGeometry(QRect(25, 38, 251, 18));
        chk_PSEL_1->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSEL_1->setFont(font1);
        chk_PSEL_1->setProperty("iconSize", QVariant(QSize(24, 24)));
        chk_PSEL_2 = new WCheckBox(frame_2);
        chk_PSEL_2->setObjectName(QString::fromUtf8("chk_PSEL_2"));
        chk_PSEL_2->setGeometry(QRect(25, 56, 200, 18));
        chk_PSEL_2->setStyleSheet(QString::fromUtf8("background-color: none;"));
        chk_PSEL_2->setFont(font1);
        chk_PSEL_2->setProperty("iconSize", QVariant(QSize(24, 24)));
        layoutWidget = new QWidget(B14);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1040, 420, 148, 44));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(B14);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(774, 182, 168, 221));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
" border: 1px solid black;\n"
" padding: 0px;\n"
" background: rgb(215, 215, 215);\n"
" }\n"
"\n"
"QProgressBar::chunk {\n"
" background: rgb(0, 0, 127);\n"
" border: 0px solid black;\n"
" }"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Vertical);
        lbIMGFondo = new QLabel(B14);
        lbIMGFondo->setObjectName(QString::fromUtf8("lbIMGFondo"));
        lbIMGFondo->setGeometry(QRect(0, 0, 1024, 662));
        lbIMGFondo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/PNG/B14.png")));
        lbIMGFondo->setScaledContents(true);
        aBomba_1 = new AWMultiObject(B14);
        aBomba_1->setObjectName(QString::fromUtf8("aBomba_1"));
        aBomba_1->setGeometry(QRect(638, 322, 93, 123));
        aBomba_1->setElementType(AWMultiObject::BOMBATA);
        aBomba_1->setOffColor(AWMultiObject::Green);
        aASPA_1 = new AWMultiObject(B14);
        aASPA_1->setObjectName(QString::fromUtf8("aASPA_1"));
        aASPA_1->setGeometry(QRect(-1, 60, 251, 211));
        aASPA_1->setProperty("isUpdateable", QVariant(false));
        aASPA_1->setElementType(AWMultiObject::ASPTA);
        aASPA_1->setProperty("Value", QVariant(0));
        aValvula_1 = new AWMultiObject(B14);
        aValvula_1->setObjectName(QString::fromUtf8("aValvula_1"));
        aValvula_1->setGeometry(QRect(312, 130, 51, 51));
        aValvula_1->setElementType(AWMultiObject::VALCUAD2);
        aValvula_1->setOffColor(AWMultiObject::Green);
        aValvula_2 = new AWMultiObject(B14);
        aValvula_2->setObjectName(QString::fromUtf8("aValvula_2"));
        aValvula_2->setGeometry(QRect(522, 153, 51, 51));
        aValvula_2->setOrientation(AWMultEstateWidget::Degree270);
        aValvula_2->setElementType(AWMultiObject::VALCUAD2);
        aValvula_2->setOffColor(AWMultiObject::Green);
        aValvula_3 = new AWMultiObject(B14);
        aValvula_3->setObjectName(QString::fromUtf8("aValvula_3"));
        aValvula_3->setGeometry(QRect(312, 337, 51, 51));
        aValvula_3->setOrientation(AWMultEstateWidget::Degree0);
        aValvula_3->setElementType(AWMultiObject::VALCUAD2);
        aValvula_3->setOffColor(AWMultiObject::Green);
        aValvula_4 = new AWMultiObject(B14);
        aValvula_4->setObjectName(QString::fromUtf8("aValvula_4"));
        aValvula_4->setGeometry(QRect(840, 578, 51, 51));
        aValvula_4->setOrientation(AWMultEstateWidget::Degree0);
        aValvula_4->setElementType(AWMultiObject::VH2);
        aValvula_4->setOffColor(AWMultiObject::Green);
        aValvula_5 = new AWMultiObject(B14);
        aValvula_5->setObjectName(QString::fromUtf8("aValvula_5"));
        aValvula_5->setGeometry(QRect(800, 533, 51, 51));
        aValvula_5->setOrientation(AWMultEstateWidget::Degree270);
        aValvula_5->setElementType(AWMultiObject::VALCUAD3);
        aValvula_5->setOffColor(AWMultiObject::Green);
        aASPA_2 = new AWMultiObject(B14);
        aASPA_2->setObjectName(QString::fromUtf8("aASPA_2"));
        aASPA_2->setGeometry(QRect(0, 270, 251, 211));
        aASPA_2->setElementType(AWMultiObject::ASPTA);
        lbTexto_1 = new WLabel(B14);
        lbTexto_1->setObjectName(QString::fromUtf8("lbTexto_1"));
        lbTexto_1->setGeometry(QRect(490, 55, 151, 16));
        lbTexto_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_1->setFont(font);
        lbTexto_2 = new WLabel(B14);
        lbTexto_2->setObjectName(QString::fromUtf8("lbTexto_2"));
        lbTexto_2->setGeometry(QRect(758, 60, 221, 16));
        lbTexto_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_2->setFont(font);
        lbTexto_3 = new WLabel(B14);
        lbTexto_3->setObjectName(QString::fromUtf8("lbTexto_3"));
        lbTexto_3->setGeometry(QRect(620, 585, 221, 16));
        lbTexto_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_3->setFont(font);
        lbTexto_4 = new WLabel(B14);
        lbTexto_4->setObjectName(QString::fromUtf8("lbTexto_4"));
        lbTexto_4->setGeometry(QRect(650, 104, 221, 16));
        lbTexto_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lbTexto_4->setFont(font2);
        lbTexto_5 = new WLabel(B14);
        lbTexto_5->setObjectName(QString::fromUtf8("lbTexto_5"));
        lbTexto_5->setGeometry(QRect(660, 122, 221, 16));
        lbTexto_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_5->setFont(font2);
        lbTexto_6 = new WLabel(B14);
        lbTexto_6->setObjectName(QString::fromUtf8("lbTexto_6"));
        lbTexto_6->setGeometry(QRect(623, 140, 231, 16));
        lbTexto_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_6->setFont(font2);
        lbTexto_7 = new WLabel(B14);
        lbTexto_7->setObjectName(QString::fromUtf8("lbTexto_7"));
        lbTexto_7->setGeometry(QRect(690, 156, 221, 16));
        lbTexto_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_7->setFont(font2);
        lbTexto_8 = new WLabel(B14);
        lbTexto_8->setObjectName(QString::fromUtf8("lbTexto_8"));
        lbTexto_8->setGeometry(QRect(70, 340, 101, 61));
        lbTexto_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_8->setFont(font);
        lbTexto_9 = new WLabel(B14);
        lbTexto_9->setObjectName(QString::fromUtf8("lbTexto_9"));
        lbTexto_9->setGeometry(QRect(63, 128, 141, 61));
        lbTexto_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_9->setFont(font);
        lbTexto_10VAL = new WLabel(B14);
        lbTexto_10VAL->setObjectName(QString::fromUtf8("lbTexto_10VAL"));
        lbTexto_10VAL->setGeometry(QRect(860, 104, 21, 16));
        lbTexto_10VAL->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VAL->setFont(font2);
        lbTexto_10VAL_2 = new WLabel(B14);
        lbTexto_10VAL_2->setObjectName(QString::fromUtf8("lbTexto_10VAL_2"));
        lbTexto_10VAL_2->setGeometry(QRect(860, 122, 21, 16));
        lbTexto_10VAL_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VAL_2->setFont(font2);
        lbTexto_10VAL_3 = new WLabel(B14);
        lbTexto_10VAL_3->setObjectName(QString::fromUtf8("lbTexto_10VAL_3"));
        lbTexto_10VAL_3->setGeometry(QRect(860, 140, 21, 16));
        lbTexto_10VAL_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VAL_3->setFont(font2);
        lbTexto_10VAL_4 = new WLabel(B14);
        lbTexto_10VAL_4->setObjectName(QString::fromUtf8("lbTexto_10VAL_4"));
        lbTexto_10VAL_4->setGeometry(QRect(860, 156, 21, 16));
        lbTexto_10VAL_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VAL_4->setFont(font2);
        lbTexto_10VALU = new WLabel(B14);
        lbTexto_10VALU->setObjectName(QString::fromUtf8("lbTexto_10VALU"));
        lbTexto_10VALU->setGeometry(QRect(892, 104, 21, 16));
        lbTexto_10VALU->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VALU->setFont(font2);
        lbTexto_10VALU_2 = new WLabel(B14);
        lbTexto_10VALU_2->setObjectName(QString::fromUtf8("lbTexto_10VALU_2"));
        lbTexto_10VALU_2->setGeometry(QRect(892, 122, 21, 16));
        lbTexto_10VALU_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VALU_2->setFont(font2);
        lbTexto_10VALU_3 = new WLabel(B14);
        lbTexto_10VALU_3->setObjectName(QString::fromUtf8("lbTexto_10VALU_3"));
        lbTexto_10VALU_3->setGeometry(QRect(892, 140, 21, 16));
        lbTexto_10VALU_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VALU_3->setFont(font2);
        lbTexto_10VALU_4 = new WLabel(B14);
        lbTexto_10VALU_4->setObjectName(QString::fromUtf8("lbTexto_10VALU_4"));
        lbTexto_10VALU_4->setGeometry(QRect(892, 156, 21, 16));
        lbTexto_10VALU_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTexto_10VALU_4->setFont(font2);
        aIndicator_1 = new AInstrumentIndicator(B14);
        aIndicator_1->setObjectName(QString::fromUtf8("aIndicator_1"));
        aIndicator_1->setGeometry(QRect(300, 70, 70, 70));
        aIndicator_1->setOrientation(AWMultEstateWidget::Degree90);
        aIndicator_1->setProperty("Value", QVariant(2));
        aIndicator_2 = new AInstrumentIndicator(B14);
        aIndicator_2->setObjectName(QString::fromUtf8("aIndicator_2"));
        aIndicator_2->setGeometry(QRect(460, 140, 70, 70));
        aIndicator_2->setOrientation(AWMultEstateWidget::Degree0);
        aIndicator_2->setProperty("Value", QVariant(2));
        aIndicator_3 = new AInstrumentIndicator(B14);
        aIndicator_3->setObjectName(QString::fromUtf8("aIndicator_3"));
        aIndicator_3->setGeometry(QRect(300, 280, 70, 70));
        aIndicator_3->setOrientation(AWMultEstateWidget::Degree90);
        aIndicator_3->setProperty("Value", QVariant(2));
        aIndicator_4 = new AInstrumentIndicator(B14);
        aIndicator_4->setObjectName(QString::fromUtf8("aIndicator_4"));
        aIndicator_4->setGeometry(QRect(653, 280, 70, 70));
        aIndicator_4->setOrientation(AWMultEstateWidget::Degree90);
        aIndicator_4->setProperty("Value", QVariant(2));
        aIndicator_5 = new AInstrumentIndicator(B14);
        aIndicator_5->setObjectName(QString::fromUtf8("aIndicator_5"));
        aIndicator_5->setGeometry(QRect(935, 308, 70, 70));
        aIndicator_5->setOrientation(AWMultEstateWidget::Degree180);
        aIndicator_5->setProperty("Value", QVariant(2));
        aIndicator_6 = new AInstrumentIndicator(B14);
        aIndicator_6->setObjectName(QString::fromUtf8("aIndicator_6"));
        aIndicator_6->setGeometry(QRect(860, 520, 70, 70));
        aIndicator_6->setOrientation(AWMultEstateWidget::Degree90);
        aIndicator_6->setProperty("Value", QVariant(2));
        aIndicator_7 = new AInstrumentIndicator(B14);
        aIndicator_7->setObjectName(QString::fromUtf8("aIndicator_7"));
        aIndicator_7->setGeometry(QRect(760, 490, 70, 70));
        aIndicator_7->setOrientation(AWMultEstateWidget::Degree90);
        aIndicator_7->setProperty("Value", QVariant(2));
        pushButton = new QPushButton(B14);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(324, 50, 158, 28));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbFlecha_1 = new WLabel(B14);
        lbFlecha_1->setObjectName(QString::fromUtf8("lbFlecha_1"));
        lbFlecha_1->setGeometry(QRect(250, 165, 46, 13));
        lbFlecha_1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_1->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_izq.png"))));
        lbFlecha_2 = new WLabel(B14);
        lbFlecha_2->setObjectName(QString::fromUtf8("lbFlecha_2"));
        lbFlecha_2->setGeometry(QRect(250, 375, 46, 13));
        lbFlecha_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_2->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_izq.png"))));
        lbFlecha_3 = new WLabel(B14);
        lbFlecha_3->setObjectName(QString::fromUtf8("lbFlecha_3"));
        lbFlecha_3->setGeometry(QRect(460, 375, 46, 13));
        lbFlecha_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_3->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_izq.png"))));
        lbFlecha_4 = new WLabel(B14);
        lbFlecha_4->setObjectName(QString::fromUtf8("lbFlecha_4"));
        lbFlecha_4->setGeometry(QRect(730, 385, 46, 13));
        lbFlecha_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_4->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_izq.png"))));
        lbFlecha_5 = new WLabel(B14);
        lbFlecha_5->setObjectName(QString::fromUtf8("lbFlecha_5"));
        lbFlecha_5->setGeometry(QRect(562, 233, 21, 61));
        lbFlecha_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_5->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_abajo.png"))));
        lbFlecha_6 = new WLabel(B14);
        lbFlecha_6->setObjectName(QString::fromUtf8("lbFlecha_6"));
        lbFlecha_6->setGeometry(QRect(396, 240, 21, 61));
        lbFlecha_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_6->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8(":/Resources/PNG/B1/flecha_blanca_arriba.png"))));
        pushButton_2 = new QPushButton(B14);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(2, 633, 133, 21));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 208, 200);"));
        lbUniT3 = new WLabel(B14);
        lbUniT3->setObjectName(QString::fromUtf8("lbUniT3"));
        lbUniT3->setGeometry(QRect(835, 646, 191, 16));
        lbUniT3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        lbUniT3->setFont(font4);
        lbTanque = new WLabel(B14);
        lbTanque->setObjectName(QString::fromUtf8("lbTanque"));
        lbTanque->setGeometry(QRect(730, 230, 250, 51));
        lbTanque->setMinimumSize(QSize(250, 21));
        lbTanque->setMaximumSize(QSize(250, 16777215));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lbTanque->setPalette(palette2);
        lbTanque->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: rgb(0, 0, 0);"));
        lbTanque->setFont(font1);
        lbTanque->setProperty("Fondo_Inicial", QVariant(WLabel::Sin_color));
        lbTanque->setProperty("Alineacion", QVariant(WLabel::Centro));
        lbFlecha_7 = new WLabel(B14);
        lbFlecha_7->setObjectName(QString::fromUtf8("lbFlecha_7"));
        lbFlecha_7->setGeometry(QRect(545, 283, 21, 61));
        lbFlecha_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_7->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/flechadiagonal_abajo.png"))));
        lbFlecha_8 = new WLabel(B14);
        lbFlecha_8->setObjectName(QString::fromUtf8("lbFlecha_8"));
        lbFlecha_8->setGeometry(QRect(590, 356, 41, 31));
        lbFlecha_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        lbFlecha_8->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../Resources/PNG/B1/aflechadiagonal_abajo.png"))));
        label = new WLabel(B14);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(878, 122, 9, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label->setFont(font2);
        label_2 = new WLabel(B14);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(878, 104, 9, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_2->setFont(font2);
        label_3 = new WLabel(B14);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(878, 140, 9, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3->setFont(font2);
        label_4 = new WLabel(B14);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(878, 156, 9, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_4->setFont(font2);
        lbIMGFondo->raise();
        btnImprScr->raise();
        frame->raise();
        frame_2->raise();
        layoutWidget->raise();
        aBomba_1->raise();
        aASPA_1->raise();
        aValvula_4->raise();
        aValvula_5->raise();
        aASPA_2->raise();
        lbTexto_1->raise();
        lbTexto_2->raise();
        lbTexto_3->raise();
        lbTexto_4->raise();
        lbTexto_5->raise();
        lbTexto_6->raise();
        lbTexto_7->raise();
        lbTexto_8->raise();
        lbTexto_9->raise();
        lbTexto_10VAL->raise();
        lbTexto_10VAL_2->raise();
        lbTexto_10VAL_3->raise();
        lbTexto_10VAL_4->raise();
        lbTexto_10VALU->raise();
        lbTexto_10VALU_2->raise();
        lbTexto_10VALU_3->raise();
        lbTexto_10VALU_4->raise();
        aIndicator_1->raise();
        aValvula_1->raise();
        aIndicator_2->raise();
        aValvula_2->raise();
        aIndicator_3->raise();
        aValvula_3->raise();
        aIndicator_4->raise();
        aIndicator_5->raise();
        aIndicator_6->raise();
        aIndicator_7->raise();
        pushButton->raise();
        lbFlecha_1->raise();
        lbFlecha_2->raise();
        lbFlecha_3->raise();
        lbFlecha_4->raise();
        lbFlecha_5->raise();
        lbFlecha_6->raise();
        pushButton_2->raise();
        lbUniT3->raise();
        lbFlecha_7->raise();
        lbFlecha_8->raise();
        progressBar->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lbTanque->raise();

        retranslateUi(B14);

        QMetaObject::connectSlotsByName(B14);
    } // setupUi

    void retranslateUi(QWidget *B14)
    {
        B14->setWindowTitle(QApplication::translate("B14", "Form", 0, QApplication::UnicodeUTF8));
        btnImprScr->setText(QApplication::translate("B14", "IMP. PANTALLA", 0, QApplication::UnicodeUTF8));
        lbPaso->setText(QApplication::translate("B14", "PASO DE SECUENCIA FUERA DE LINEA", 0, QApplication::UnicodeUTF8));
        chk_PSFL_1->setText(QApplication::translate("B14", "HABILITAR VENTILADORES VENTEO TURBINA", 0, QApplication::UnicodeUTF8));
        chk_PSFL_2->setText(QApplication::translate("B14", "ACTIVAR SISTEMA DE LUB. DE GENERADOR", 0, QApplication::UnicodeUTF8));
        chk_PSFL_3->setText(QApplication::translate("B14", "ACTIVAR ARRANQUE HIDR\303\201ULICO", 0, QApplication::UnicodeUTF8));
        chk_PSFL_4->setText(QApplication::translate("B14", "SELEC. ALTA VEL. EN ARRANCADOR", 0, QApplication::UnicodeUTF8));
        chk_PSFL_5->setText(QApplication::translate("B14", "ESPERAR QUE N25 SUPERE 2000 RPM", 0, QApplication::UnicodeUTF8));
        chk_PSFL_6->setText(QApplication::translate("B14", "ESPERAR QUE NSD SUPERE 200 RPM", 0, QApplication::UnicodeUTF8));
        chk_PSFL_7->setText(QApplication::translate("B14", "T48 MENOS DE 200 F", 0, QApplication::UnicodeUTF8));
        chk_PSFL_8->setText(QApplication::translate("B14", "T3 MENOS DE 200 F", 0, QApplication::UnicodeUTF8));
        chk_PSFL_9->setText(QApplication::translate("B14", "CERRAR ALETAS DE PURGA VARIABLE", 0, QApplication::UnicodeUTF8));
        chk_PSFL_10->setText(QApplication::translate("B14", "CIERRE SUPRESION SOMB. Y NOX", 0, QApplication::UnicodeUTF8));
        chk_PSFL_11->setText(QApplication::translate("B14", "ACTIVAR SOLENOIDE LAV. AGUA", 0, QApplication::UnicodeUTF8));
        chk_PSFL_12->setText(QApplication::translate("B14", "ACTIVAR CRONO REMOJO/PURGA", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("B14", "PASO DE SECUENCIA EN LINEA", 0, QApplication::UnicodeUTF8));
        chk_PSEL_1->setText(QApplication::translate("B14", "LAVADO AGUA EN L\303\215NEA ACTIVO", 0, QApplication::UnicodeUTF8));
        chk_PSEL_2->setText(QApplication::translate("B14", "ACTIVAR CRONO PURGA", 0, QApplication::UnicodeUTF8));
        lbIMGFondo->setText(QString());
        lbTexto_1->setText(QApplication::translate("B14", "DESHABILITADO", 0, QApplication::UnicodeUTF8));
        lbTexto_2->setText(QApplication::translate("B14", "SUMINISTRO DE AIRE DE PURGA", 0, QApplication::UnicodeUTF8));
        lbTexto_3->setText(QApplication::translate("B14", "DESAG\303\234E COMBUSTOR", 0, QApplication::UnicodeUTF8));
        lbTexto_4->setText(QApplication::translate("B14", "CRON\303\223METRO DE LAVADO CON AGUA", 0, QApplication::UnicodeUTF8));
        lbTexto_5->setText(QApplication::translate("B14", "CRON\303\223METRO DE PURGA EN L\303\215NEA", 0, QApplication::UnicodeUTF8));
        lbTexto_6->setText(QApplication::translate("B14", "CRON\303\223METRO DE PURGA FUERA DE L\303\215NEA", 0, QApplication::UnicodeUTF8));
        lbTexto_7->setText(QApplication::translate("B14", "CRON\303\223METRO DE REMOJADO", 0, QApplication::UnicodeUTF8));
        lbTexto_8->setText(QApplication::translate("B14", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">     EN L\303\215NEA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">14 BOQUILLAS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTexto_9->setText(QApplication::translate("B14", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">   FUERA DE L\303\215NEA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">     8 BOQUILLAS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbTexto_10VAL->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VAL_2->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VAL_3->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VAL_4->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VALU->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VALU_2->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VALU_3->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        lbTexto_10VALU_4->setText(QApplication::translate("B14", "0", 0, QApplication::UnicodeUTF8));
        aIndicator_1->setProperty("UpLabel", QVariant(QApplication::translate("B14", "SOV", 0, QApplication::UnicodeUTF8)));
        aIndicator_1->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_2->setProperty("UpLabel", QVariant(QApplication::translate("B14", "SOV", 0, QApplication::UnicodeUTF8)));
        aIndicator_2->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_3->setProperty("UpLabel", QVariant(QApplication::translate("B14", "SOV", 0, QApplication::UnicodeUTF8)));
        aIndicator_3->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_4->setProperty("UpLabel", QVariant(QApplication::translate("B14", "MOT", 0, QApplication::UnicodeUTF8)));
        aIndicator_4->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_5->setProperty("UpLabel", QVariant(QApplication::translate("B14", "LSL", 0, QApplication::UnicodeUTF8)));
        aIndicator_5->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_6->setProperty("UpLabel", QVariant(QApplication::translate("B14", "ZSC", 0, QApplication::UnicodeUTF8)));
        aIndicator_6->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        aIndicator_7->setProperty("UpLabel", QVariant(QApplication::translate("B14", "SOV", 0, QApplication::UnicodeUTF8)));
        aIndicator_7->setProperty("DownLabel", QVariant(QApplication::translate("B14", "6504", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("B14", "LAVADO CON AGUA", 0, QApplication::UnicodeUTF8));
        lbFlecha_1->setText(QString());
        lbFlecha_2->setText(QString());
        lbFlecha_3->setText(QString());
        lbFlecha_4->setText(QString());
        lbFlecha_5->setText(QString());
        lbFlecha_6->setText(QString());
        pushButton_2->setText(QApplication::translate("B14", "IMP PANT", 0, QApplication::UnicodeUTF8));
        lbUniT3->setText(QApplication::translate("B14", "UNIT3", 0, QApplication::UnicodeUTF8));
        lbTanque->setText(QApplication::translate("B14", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       TANQUE DE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">LAVADO CON AGUA</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbFlecha_7->setText(QString());
        lbFlecha_8->setText(QString());
        label->setText(QApplication::translate("B14", ":", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("B14", ":", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("B14", ":", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("B14", ":", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class B14: public Ui_B14 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B14_H
