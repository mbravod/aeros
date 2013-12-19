/********************************************************************************
** Form generated from reading UI file 'hmdialog.ui'
**
** Created: Thu 19. Dec 16:10:00 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMDIALOG_H
#define UI_HMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HMDialog
{
public:
    QFrame *frame_Title;
    QGridLayout *gridLayout;
    QLabel *lbTitle;
    QLabel *lbSub;
    QFrame *Frame_Content;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnLR;
    QSpacerItem *verticalSpacer;
    QPushButton *btnMA;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnEA;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *Frame_LR;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QRadioButton *rdb_LR_Local;
    QSpacerItem *verticalSpacer_6;
    QRadioButton *rdb_LR_Remoto;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QFrame *Frame_MA;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_8;
    QRadioButton *rdb_MA_Manual;
    QSpacerItem *verticalSpacer_9;
    QRadioButton *rdb_MA_Auto;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_6;
    QFrame *Frame_EDO_1;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_11;
    QRadioButton *rdb_EDO1_Open;
    QSpacerItem *verticalSpacer_12;
    QRadioButton *rdb_EDO1_Close;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_8;
    QFrame *Frame_EDO_2;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_14;
    QRadioButton *rdb_EDO2_Open;
    QSpacerItem *verticalSpacer_15;
    QRadioButton *rdb_EDO2_Close;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *HMDialog)
    {
        if (HMDialog->objectName().isEmpty())
            HMDialog->setObjectName(QString::fromUtf8("HMDialog"));
        HMDialog->resize(250, 200);
        HMDialog->setMinimumSize(QSize(250, 150));
        HMDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_Title = new QFrame(HMDialog);
        frame_Title->setObjectName(QString::fromUtf8("frame_Title"));
        frame_Title->setGeometry(QRect(0, 0, 250, 30));
        frame_Title->setMinimumSize(QSize(250, 30));
        frame_Title->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_Title->setFrameShape(QFrame::Box);
        frame_Title->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Title);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbTitle = new QLabel(frame_Title);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lbTitle->setFont(font);
        lbTitle->setStyleSheet(QString::fromUtf8("color: rgb(50, 50, 50);"));
        lbTitle->setAlignment(Qt::AlignCenter);
        lbTitle->setWordWrap(false);

        gridLayout->addWidget(lbTitle, 0, 0, 1, 1);

        lbSub = new QLabel(HMDialog);
        lbSub->setObjectName(QString::fromUtf8("lbSub"));
        lbSub->setGeometry(QRect(0, 30, 250, 25));
        lbSub->setMinimumSize(QSize(250, 25));
        lbSub->setMaximumSize(QSize(250, 25));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        lbSub->setFont(font1);
        lbSub->setAlignment(Qt::AlignCenter);
        Frame_Content = new QFrame(HMDialog);
        Frame_Content->setObjectName(QString::fromUtf8("Frame_Content"));
        Frame_Content->setGeometry(QRect(0, 60, 250, 140));
        Frame_Content->setMinimumSize(QSize(250, 140));
        Frame_Content->setFrameShape(QFrame::StyledPanel);
        Frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(Frame_Content);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        btnLR = new QPushButton(Frame_Content);
        btnLR->setObjectName(QString::fromUtf8("btnLR"));
        btnLR->setMinimumSize(QSize(181, 31));
        btnLR->setMaximumSize(QSize(181, 31));
        btnLR->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(btnLR);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnMA = new QPushButton(Frame_Content);
        btnMA->setObjectName(QString::fromUtf8("btnMA"));
        btnMA->setMinimumSize(QSize(181, 31));
        btnMA->setMaximumSize(QSize(181, 31));
        btnMA->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(btnMA);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnEA = new QPushButton(Frame_Content);
        btnEA->setObjectName(QString::fromUtf8("btnEA"));
        btnEA->setMinimumSize(QSize(181, 31));
        btnEA->setMaximumSize(QSize(181, 31));
        btnEA->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(btnEA);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        Frame_LR = new QFrame(HMDialog);
        Frame_LR->setObjectName(QString::fromUtf8("Frame_LR"));
        Frame_LR->setGeometry(QRect(0, 60, 250, 140));
        Frame_LR->setMinimumSize(QSize(250, 140));
        Frame_LR->setMaximumSize(QSize(250, 140));
        Frame_LR->setFrameShape(QFrame::StyledPanel);
        Frame_LR->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(Frame_LR);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        rdb_LR_Local = new QRadioButton(Frame_LR);
        rdb_LR_Local->setObjectName(QString::fromUtf8("rdb_LR_Local"));
        rdb_LR_Local->setMinimumSize(QSize(120, 20));
        rdb_LR_Local->setMaximumSize(QSize(120, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        rdb_LR_Local->setFont(font2);
        rdb_LR_Local->setLayoutDirection(Qt::RightToLeft);
        rdb_LR_Local->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(rdb_LR_Local);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        rdb_LR_Remoto = new QRadioButton(Frame_LR);
        rdb_LR_Remoto->setObjectName(QString::fromUtf8("rdb_LR_Remoto"));
        rdb_LR_Remoto->setMinimumSize(QSize(120, 20));
        rdb_LR_Remoto->setMaximumSize(QSize(120, 20));
        rdb_LR_Remoto->setFont(font2);
        rdb_LR_Remoto->setLayoutDirection(Qt::RightToLeft);
        rdb_LR_Remoto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(rdb_LR_Remoto);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        Frame_MA = new QFrame(HMDialog);
        Frame_MA->setObjectName(QString::fromUtf8("Frame_MA"));
        Frame_MA->setGeometry(QRect(0, 60, 250, 140));
        Frame_MA->setMinimumSize(QSize(250, 140));
        Frame_MA->setMaximumSize(QSize(250, 140));
        Frame_MA->setFrameShape(QFrame::StyledPanel);
        Frame_MA->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(Frame_MA);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        rdb_MA_Manual = new QRadioButton(Frame_MA);
        rdb_MA_Manual->setObjectName(QString::fromUtf8("rdb_MA_Manual"));
        rdb_MA_Manual->setMinimumSize(QSize(120, 20));
        rdb_MA_Manual->setMaximumSize(QSize(120, 20));
        rdb_MA_Manual->setFont(font2);
        rdb_MA_Manual->setLayoutDirection(Qt::RightToLeft);
        rdb_MA_Manual->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(rdb_MA_Manual);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        rdb_MA_Auto = new QRadioButton(Frame_MA);
        rdb_MA_Auto->setObjectName(QString::fromUtf8("rdb_MA_Auto"));
        rdb_MA_Auto->setMinimumSize(QSize(120, 20));
        rdb_MA_Auto->setMaximumSize(QSize(120, 20));
        rdb_MA_Auto->setFont(font2);
        rdb_MA_Auto->setLayoutDirection(Qt::RightToLeft);
        rdb_MA_Auto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(rdb_MA_Auto);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        Frame_EDO_1 = new QFrame(HMDialog);
        Frame_EDO_1->setObjectName(QString::fromUtf8("Frame_EDO_1"));
        Frame_EDO_1->setGeometry(QRect(0, 60, 250, 140));
        Frame_EDO_1->setMinimumSize(QSize(250, 140));
        Frame_EDO_1->setMaximumSize(QSize(250, 140));
        Frame_EDO_1->setFrameShape(QFrame::StyledPanel);
        Frame_EDO_1->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(Frame_EDO_1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_11 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        rdb_EDO1_Open = new QRadioButton(Frame_EDO_1);
        rdb_EDO1_Open->setObjectName(QString::fromUtf8("rdb_EDO1_Open"));
        rdb_EDO1_Open->setMinimumSize(QSize(120, 20));
        rdb_EDO1_Open->setMaximumSize(QSize(120, 20));
        rdb_EDO1_Open->setFont(font2);
        rdb_EDO1_Open->setLayoutDirection(Qt::RightToLeft);
        rdb_EDO1_Open->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(rdb_EDO1_Open);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);

        rdb_EDO1_Close = new QRadioButton(Frame_EDO_1);
        rdb_EDO1_Close->setObjectName(QString::fromUtf8("rdb_EDO1_Close"));
        rdb_EDO1_Close->setMinimumSize(QSize(120, 20));
        rdb_EDO1_Close->setMaximumSize(QSize(120, 20));
        rdb_EDO1_Close->setFont(font2);
        rdb_EDO1_Close->setLayoutDirection(Qt::RightToLeft);
        rdb_EDO1_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(rdb_EDO1_Close);

        verticalSpacer_13 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_13);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        Frame_EDO_2 = new QFrame(HMDialog);
        Frame_EDO_2->setObjectName(QString::fromUtf8("Frame_EDO_2"));
        Frame_EDO_2->setGeometry(QRect(0, 60, 250, 140));
        Frame_EDO_2->setMinimumSize(QSize(250, 140));
        Frame_EDO_2->setMaximumSize(QSize(250, 140));
        Frame_EDO_2->setFrameShape(QFrame::StyledPanel);
        Frame_EDO_2->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(Frame_EDO_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_14 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_14);

        rdb_EDO2_Open = new QRadioButton(Frame_EDO_2);
        rdb_EDO2_Open->setObjectName(QString::fromUtf8("rdb_EDO2_Open"));
        rdb_EDO2_Open->setMinimumSize(QSize(120, 20));
        rdb_EDO2_Open->setMaximumSize(QSize(120, 20));
        rdb_EDO2_Open->setFont(font2);
        rdb_EDO2_Open->setLayoutDirection(Qt::RightToLeft);
        rdb_EDO2_Open->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(rdb_EDO2_Open);

        verticalSpacer_15 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_15);

        rdb_EDO2_Close = new QRadioButton(Frame_EDO_2);
        rdb_EDO2_Close->setObjectName(QString::fromUtf8("rdb_EDO2_Close"));
        rdb_EDO2_Close->setMinimumSize(QSize(120, 20));
        rdb_EDO2_Close->setMaximumSize(QSize(120, 20));
        rdb_EDO2_Close->setFont(font2);
        rdb_EDO2_Close->setLayoutDirection(Qt::RightToLeft);
        rdb_EDO2_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(rdb_EDO2_Close);

        verticalSpacer_16 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_16);


        horizontalLayout_5->addLayout(verticalLayout_5);

        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        gridLayout_6->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        Frame_EDO_1->raise();
        Frame_MA->raise();
        Frame_LR->raise();
        Frame_EDO_2->raise();
        frame_Title->raise();
        lbSub->raise();
        Frame_Content->raise();

        retranslateUi(HMDialog);

        QMetaObject::connectSlotsByName(HMDialog);
    } // setupUi

    void retranslateUi(QDialog *HMDialog)
    {
        HMDialog->setWindowTitle(QApplication::translate("HMDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lbTitle->setText(QString());
        lbSub->setText(QString());
        btnLR->setText(QApplication::translate("HMDialog", "LOCAL/REMOTO", 0, QApplication::UnicodeUTF8));
        btnMA->setText(QApplication::translate("HMDialog", "MANUAL/AUTOM\303\201TICO", 0, QApplication::UnicodeUTF8));
        btnEA->setText(QApplication::translate("HMDialog", "ESTADO", 0, QApplication::UnicodeUTF8));
        rdb_LR_Local->setText(QApplication::translate("HMDialog", "LOCAL", 0, QApplication::UnicodeUTF8));
        rdb_LR_Remoto->setText(QApplication::translate("HMDialog", "REMOTO", 0, QApplication::UnicodeUTF8));
        rdb_MA_Manual->setText(QApplication::translate("HMDialog", "MANUAL", 0, QApplication::UnicodeUTF8));
        rdb_MA_Auto->setText(QApplication::translate("HMDialog", "AUTOM\303\201TICO", 0, QApplication::UnicodeUTF8));
        rdb_EDO1_Open->setText(QApplication::translate("HMDialog", "ABIERTO", 0, QApplication::UnicodeUTF8));
        rdb_EDO1_Close->setText(QApplication::translate("HMDialog", "CERRADO", 0, QApplication::UnicodeUTF8));
        rdb_EDO2_Open->setText(QApplication::translate("HMDialog", "ENCENDIDO", 0, QApplication::UnicodeUTF8));
        rdb_EDO2_Close->setText(QApplication::translate("HMDialog", "APAGADO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HMDialog: public Ui_HMDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMDIALOG_H
