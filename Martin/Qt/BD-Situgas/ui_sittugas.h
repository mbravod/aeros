/********************************************************************************
** Form generated from reading UI file 'sittugas.ui'
**
** Created: Wed 9. Oct 20:10:06 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITTUGAS_H
#define UI_SITTUGAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMdiArea>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiTTuGAs
{
public:
    QFrame *TitleBar;
    QFrame *frame_3;
    QSplitter *splitter;
    QLabel *lbCFE;
    QLabel *lbUnit;
    QFrame *frame_5;
    QLabel *lbTitle;
    QFrame *frame_6;
    QFrame *frame_7;
    QLabel *label;
    QFrame *frame_8;
    QLabel *lbNum;
    QFrame *ButtonBar;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Back;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_Fwd;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_Menu;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btn_Main;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *btn_Systems;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *btn_Monitor;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *btn_Utils;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *btn_Tends;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *btn_Alarms;
    QSpacerItem *horizontalSpacer_20;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btn_Rec;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *btn_Restab;
    QMdiArea *mdiArea;
    QFrame *ButtonBarBOP;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_Back_2;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *btn_Fwd_2;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *btSisGas;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *btSisBop;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *btSisElec;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *btn_Alarms_2;
    QSpacerItem *horizontalSpacer_31;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_32;
    QPushButton *btn_Ack;
    QSpacerItem *horizontalSpacer_33;
    QPushButton *btn_Tcp;

    void setupUi(QWidget *SiTTuGAs)
    {
        if (SiTTuGAs->objectName().isEmpty())
            SiTTuGAs->setObjectName(QString::fromUtf8("SiTTuGAs"));
        SiTTuGAs->resize(1024, 768);
        SiTTuGAs->setMinimumSize(QSize(1024, 768));
        SiTTuGAs->setMaximumSize(QSize(1024, 768));
        TitleBar = new QFrame(SiTTuGAs);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->setGeometry(QRect(0, 0, 1024, 45));
        TitleBar->setMinimumSize(QSize(1024, 45));
        TitleBar->setMaximumSize(QSize(1024, 45));
        TitleBar->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        TitleBar->setFrameShape(QFrame::Panel);
        TitleBar->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(TitleBar);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 5, 276, 34));
        frame_3->setMinimumSize(QSize(276, 34));
        frame_3->setMaximumSize(QSize(276, 34));
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        splitter = new QSplitter(frame_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(5, 5, 267, 26));
        splitter->setOrientation(Qt::Horizontal);
        lbCFE = new QLabel(splitter);
        lbCFE->setObjectName(QString::fromUtf8("lbCFE"));
        lbCFE->setMinimumSize(QSize(51, 26));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lbCFE->setFont(font);
        splitter->addWidget(lbCFE);
        lbUnit = new QLabel(splitter);
        lbUnit->setObjectName(QString::fromUtf8("lbUnit"));
        lbUnit->setMinimumSize(QSize(115, 26));
        lbUnit->setMaximumSize(QSize(115, 26));
        lbUnit->setFont(font);
        lbUnit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter->addWidget(lbUnit);
        frame_5 = new QFrame(TitleBar);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(294, 5, 368, 34));
        frame_5->setMinimumSize(QSize(368, 34));
        frame_5->setMaximumSize(QSize(368, 34));
        frame_5->setFrameShape(QFrame::WinPanel);
        frame_5->setFrameShadow(QFrame::Sunken);
        lbTitle = new QLabel(frame_5);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(5, 5, 357, 26));
        lbTitle->setMinimumSize(QSize(51, 26));
        lbTitle->setFont(font);
        lbTitle->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(TitleBar);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(668, 5, 139, 34));
        frame_6->setMinimumSize(QSize(139, 34));
        frame_6->setMaximumSize(QSize(139, 34));
        frame_6->setFrameShape(QFrame::WinPanel);
        frame_6->setFrameShadow(QFrame::Sunken);
        frame_7 = new QFrame(TitleBar);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(815, 5, 121, 34));
        frame_7->setMinimumSize(QSize(121, 34));
        frame_7->setMaximumSize(QSize(121, 34));
        frame_7->setFrameShape(QFrame::WinPanel);
        frame_7->setFrameShadow(QFrame::Sunken);
        label = new QLabel(frame_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(2, 5, 117, 26));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/logo.png")));
        frame_8 = new QFrame(TitleBar);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(944, 5, 70, 34));
        frame_8->setMinimumSize(QSize(70, 34));
        frame_8->setMaximumSize(QSize(70, 34));
        frame_8->setFrameShape(QFrame::WinPanel);
        frame_8->setFrameShadow(QFrame::Sunken);
        lbNum = new QLabel(frame_8);
        lbNum->setObjectName(QString::fromUtf8("lbNum"));
        lbNum->setGeometry(QRect(5, 5, 59, 26));
        lbNum->setMaximumSize(QSize(80, 26));
        lbNum->setFont(font);
        lbNum->setAlignment(Qt::AlignCenter);
        ButtonBar = new QFrame(SiTTuGAs);
        ButtonBar->setObjectName(QString::fromUtf8("ButtonBar"));
        ButtonBar->setGeometry(QRect(0, 708, 1024, 60));
        ButtonBar->setMinimumSize(QSize(1024, 60));
        ButtonBar->setMaximumSize(QSize(1024, 60));
        ButtonBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.489, y1:1, x2:0.488, y2:0.483, stop:0 rgba(192, 192, 192, 255), stop:0.511364 rgba(255, 255, 255, 255), stop:1 rgba(192, 192, 192, 255));"));
        ButtonBar->setFrameShape(QFrame::WinPanel);
        ButtonBar->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(ButtonBar);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_Back = new QPushButton(ButtonBar);
        btn_Back->setObjectName(QString::fromUtf8("btn_Back"));
        btn_Back->setMinimumSize(QSize(80, 35));
        btn_Back->setMaximumSize(QSize(80, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        btn_Back->setFont(font1);
        btn_Back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Back);

        horizontalSpacer_12 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        btn_Fwd = new QPushButton(ButtonBar);
        btn_Fwd->setObjectName(QString::fromUtf8("btn_Fwd"));
        btn_Fwd->setMinimumSize(QSize(80, 35));
        btn_Fwd->setMaximumSize(QSize(80, 35));
        btn_Fwd->setFont(font1);
        btn_Fwd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Fwd);

        horizontalSpacer_13 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        btn_Menu = new QPushButton(ButtonBar);
        btn_Menu->setObjectName(QString::fromUtf8("btn_Menu"));
        btn_Menu->setMinimumSize(QSize(80, 35));
        btn_Menu->setMaximumSize(QSize(80, 35));
        btn_Menu->setFont(font1);
        btn_Menu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Menu);

        horizontalSpacer_14 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        btn_Main = new QPushButton(ButtonBar);
        btn_Main->setObjectName(QString::fromUtf8("btn_Main"));
        btn_Main->setMinimumSize(QSize(80, 35));
        btn_Main->setMaximumSize(QSize(80, 35));
        btn_Main->setFont(font1);
        btn_Main->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Main);

        horizontalSpacer_15 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        btn_Systems = new QPushButton(ButtonBar);
        btn_Systems->setObjectName(QString::fromUtf8("btn_Systems"));
        btn_Systems->setMinimumSize(QSize(80, 35));
        btn_Systems->setMaximumSize(QSize(80, 35));
        btn_Systems->setFont(font1);
        btn_Systems->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Systems);

        horizontalSpacer_16 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);

        btn_Monitor = new QPushButton(ButtonBar);
        btn_Monitor->setObjectName(QString::fromUtf8("btn_Monitor"));
        btn_Monitor->setMinimumSize(QSize(80, 35));
        btn_Monitor->setMaximumSize(QSize(80, 35));
        btn_Monitor->setFont(font1);
        btn_Monitor->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Monitor);

        horizontalSpacer_17 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_17);

        btn_Utils = new QPushButton(ButtonBar);
        btn_Utils->setObjectName(QString::fromUtf8("btn_Utils"));
        btn_Utils->setMinimumSize(QSize(80, 35));
        btn_Utils->setMaximumSize(QSize(80, 35));
        btn_Utils->setFont(font1);
        btn_Utils->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Utils);

        horizontalSpacer_18 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_18);

        btn_Tends = new QPushButton(ButtonBar);
        btn_Tends->setObjectName(QString::fromUtf8("btn_Tends"));
        btn_Tends->setMinimumSize(QSize(80, 35));
        btn_Tends->setMaximumSize(QSize(80, 35));
        btn_Tends->setFont(font1);
        btn_Tends->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Tends);

        horizontalSpacer_19 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);

        btn_Alarms = new QPushButton(ButtonBar);
        btn_Alarms->setObjectName(QString::fromUtf8("btn_Alarms"));
        btn_Alarms->setMinimumSize(QSize(80, 35));
        btn_Alarms->setMaximumSize(QSize(80, 35));
        btn_Alarms->setFont(font1);
        btn_Alarms->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Alarms);

        horizontalSpacer_20 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_20);

        line_2 = new QFrame(ButtonBar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        horizontalSpacer_21 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_21);

        btn_Rec = new QPushButton(ButtonBar);
        btn_Rec->setObjectName(QString::fromUtf8("btn_Rec"));
        btn_Rec->setMinimumSize(QSize(80, 35));
        btn_Rec->setMaximumSize(QSize(80, 35));
        btn_Rec->setFont(font1);
        btn_Rec->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Rec);

        horizontalSpacer_22 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_22);

        btn_Restab = new QPushButton(ButtonBar);
        btn_Restab->setObjectName(QString::fromUtf8("btn_Restab"));
        btn_Restab->setMinimumSize(QSize(80, 35));
        btn_Restab->setMaximumSize(QSize(80, 35));
        btn_Restab->setFont(font1);
        btn_Restab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(btn_Restab);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mdiArea = new QMdiArea(SiTTuGAs);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(0, 45, 1024, 663));
        mdiArea->setMinimumSize(QSize(1024, 663));
        mdiArea->setMaximumSize(QSize(1024, 663));
        QBrush brush(QColor(154, 154, 154, 255));
        brush.setStyle(Qt::SolidPattern);
        mdiArea->setBackground(brush);
        ButtonBarBOP = new QFrame(SiTTuGAs);
        ButtonBarBOP->setObjectName(QString::fromUtf8("ButtonBarBOP"));
        ButtonBarBOP->setGeometry(QRect(0, 708, 1024, 60));
        ButtonBarBOP->setMinimumSize(QSize(1024, 60));
        ButtonBarBOP->setMaximumSize(QSize(1024, 60));
        ButtonBarBOP->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.489, y1:1, x2:0.488, y2:0.483, stop:0 rgba(192, 192, 192, 255), stop:0.511364 rgba(255, 255, 255, 255), stop:1 rgba(192, 192, 192, 255));"));
        ButtonBarBOP->setFrameShape(QFrame::WinPanel);
        ButtonBarBOP->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(ButtonBarBOP);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_Back_2 = new QPushButton(ButtonBarBOP);
        btn_Back_2->setObjectName(QString::fromUtf8("btn_Back_2"));
        btn_Back_2->setMinimumSize(QSize(80, 35));
        btn_Back_2->setMaximumSize(QSize(80, 35));
        btn_Back_2->setFont(font1);
        btn_Back_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btn_Back_2);

        horizontalSpacer_23 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_23);

        btn_Fwd_2 = new QPushButton(ButtonBarBOP);
        btn_Fwd_2->setObjectName(QString::fromUtf8("btn_Fwd_2"));
        btn_Fwd_2->setMinimumSize(QSize(80, 35));
        btn_Fwd_2->setMaximumSize(QSize(80, 35));
        btn_Fwd_2->setFont(font1);
        btn_Fwd_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btn_Fwd_2);

        horizontalSpacer_24 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_24);

        btSisGas = new QPushButton(ButtonBarBOP);
        btSisGas->setObjectName(QString::fromUtf8("btSisGas"));
        btSisGas->setMinimumSize(QSize(80, 35));
        btSisGas->setMaximumSize(QSize(80, 35));
        btSisGas->setFont(font1);
        btSisGas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btSisGas);

        horizontalSpacer_25 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_25);

        btSisBop = new QPushButton(ButtonBarBOP);
        btSisBop->setObjectName(QString::fromUtf8("btSisBop"));
        btSisBop->setMinimumSize(QSize(80, 35));
        btSisBop->setMaximumSize(QSize(80, 35));
        btSisBop->setFont(font1);
        btSisBop->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btSisBop);

        horizontalSpacer_26 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_26);

        btSisElec = new QPushButton(ButtonBarBOP);
        btSisElec->setObjectName(QString::fromUtf8("btSisElec"));
        btSisElec->setMinimumSize(QSize(80, 35));
        btSisElec->setMaximumSize(QSize(80, 35));
        btSisElec->setFont(font1);
        btSisElec->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btSisElec);

        horizontalSpacer_27 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_27);

        pushButton = new QPushButton(ButtonBarBOP);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 35));
        pushButton->setMaximumSize(QSize(80, 35));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_28 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_28);

        pushButton_2 = new QPushButton(ButtonBarBOP);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 35));
        pushButton_2->setMaximumSize(QSize(80, 35));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_29 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_29);

        pushButton_3 = new QPushButton(ButtonBarBOP);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 35));
        pushButton_3->setMaximumSize(QSize(80, 35));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_30 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_30);

        btn_Alarms_2 = new QPushButton(ButtonBarBOP);
        btn_Alarms_2->setObjectName(QString::fromUtf8("btn_Alarms_2"));
        btn_Alarms_2->setMinimumSize(QSize(80, 35));
        btn_Alarms_2->setMaximumSize(QSize(80, 35));
        btn_Alarms_2->setFont(font1);
        btn_Alarms_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btn_Alarms_2);

        horizontalSpacer_31 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_31);

        line_3 = new QFrame(ButtonBarBOP);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        horizontalSpacer_32 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_32);

        btn_Ack = new QPushButton(ButtonBarBOP);
        btn_Ack->setObjectName(QString::fromUtf8("btn_Ack"));
        btn_Ack->setMinimumSize(QSize(80, 35));
        btn_Ack->setMaximumSize(QSize(80, 35));
        btn_Ack->setFont(font1);
        btn_Ack->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btn_Ack);

        horizontalSpacer_33 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_33);

        btn_Tcp = new QPushButton(ButtonBarBOP);
        btn_Tcp->setObjectName(QString::fromUtf8("btn_Tcp"));
        btn_Tcp->setMinimumSize(QSize(80, 35));
        btn_Tcp->setMaximumSize(QSize(80, 35));
        btn_Tcp->setFont(font1);
        btn_Tcp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(btn_Tcp);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        ButtonBarBOP->raise();
        TitleBar->raise();
        ButtonBar->raise();
        mdiArea->raise();

        retranslateUi(SiTTuGAs);

        QMetaObject::connectSlotsByName(SiTTuGAs);
    } // setupUi

    void retranslateUi(QWidget *SiTTuGAs)
    {
        SiTTuGAs->setWindowTitle(QApplication::translate("SiTTuGAs", "Form", 0, QApplication::UnicodeUTF8));
        lbCFE->setText(QApplication::translate("SiTTuGAs", "CFE", 0, QApplication::UnicodeUTF8));
        lbUnit->setText(QApplication::translate("SiTTuGAs", "UNIT 14", 0, QApplication::UnicodeUTF8));
        lbTitle->setText(QApplication::translate("SiTTuGAs", "GENERAL TURBINA PRINCIPAL", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbNum->setText(QApplication::translate("SiTTuGAs", "A1", 0, QApplication::UnicodeUTF8));
        btn_Back->setText(QApplication::translate("SiTTuGAs", "ATRAS", 0, QApplication::UnicodeUTF8));
        btn_Fwd->setText(QApplication::translate("SiTTuGAs", "ADELANTE", 0, QApplication::UnicodeUTF8));
        btn_Menu->setText(QApplication::translate("SiTTuGAs", "MENU", 0, QApplication::UnicodeUTF8));
        btn_Main->setText(QApplication::translate("SiTTuGAs", "PRINCIPAL", 0, QApplication::UnicodeUTF8));
        btn_Systems->setText(QApplication::translate("SiTTuGAs", "SISTEMAS", 0, QApplication::UnicodeUTF8));
        btn_Monitor->setText(QApplication::translate("SiTTuGAs", "MONITOR", 0, QApplication::UnicodeUTF8));
        btn_Utils->setText(QApplication::translate("SiTTuGAs", "UTILERIA", 0, QApplication::UnicodeUTF8));
        btn_Tends->setText(QApplication::translate("SiTTuGAs", "TENDENCIAS", 0, QApplication::UnicodeUTF8));
        btn_Alarms->setText(QApplication::translate("SiTTuGAs", "ALARMAS", 0, QApplication::UnicodeUTF8));
        btn_Rec->setText(QApplication::translate("SiTTuGAs", "RECONOCER", 0, QApplication::UnicodeUTF8));
        btn_Restab->setText(QApplication::translate("SiTTuGAs", "RESTAB", 0, QApplication::UnicodeUTF8));
        btn_Back_2->setText(QApplication::translate("SiTTuGAs", "ATRAS", 0, QApplication::UnicodeUTF8));
        btn_Fwd_2->setText(QApplication::translate("SiTTuGAs", "ADELANTE", 0, QApplication::UnicodeUTF8));
        btSisGas->setText(QApplication::translate("SiTTuGAs", "SISTEMA DE\n"
" GAS", 0, QApplication::UnicodeUTF8));
        btSisBop->setText(QApplication::translate("SiTTuGAs", "SISTEMA\n"
" BOP", 0, QApplication::UnicodeUTF8));
        btSisElec->setText(QApplication::translate("SiTTuGAs", "SISTEMA\n"
"ELECTRICO", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        btn_Alarms_2->setText(QApplication::translate("SiTTuGAs", "ALARMAS", 0, QApplication::UnicodeUTF8));
        btn_Ack->setText(QApplication::translate("SiTTuGAs", "ACK", 0, QApplication::UnicodeUTF8));
        btn_Tcp->setText(QApplication::translate("SiTTuGAs", "TCP OVW", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SiTTuGAs: public Ui_SiTTuGAs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITTUGAS_H
