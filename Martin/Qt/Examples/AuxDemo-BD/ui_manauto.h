/********************************************************************************
** Form generated from reading UI file 'manauto.ui'
**
** Created: Mon 30. Sep 16:13:53 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAUTO_H
#define UI_MANAUTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManAuto
{
public:
    QFrame *frame_13;
    QGridLayout *gridLayout_23;
    QLabel *label_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *rdb_MA_Man;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *rdb_MA_Aut;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *Estado;
    QRadioButton *rdb_EV_Abierto;
    QRadioButton *rdb_EV_Cerrado;

    void setupUi(QWidget *ManAuto)
    {
        if (ManAuto->objectName().isEmpty())
            ManAuto->setObjectName(QString::fromUtf8("ManAuto"));
        ManAuto->resize(756, 511);
        ManAuto->setMinimumSize(QSize(250, 150));
        ManAuto->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        frame_13 = new QFrame(ManAuto);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(0, 0, 250, 30));
        frame_13->setMinimumSize(QSize(250, 30));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_13->setFrameShape(QFrame::Box);
        frame_13->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(frame_13);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_2 = new QLabel(frame_13);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(50, 50, 50);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_23->addWidget(label_2, 0, 0, 1, 1);

        frame = new QFrame(ManAuto);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 30, 250, 120));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(28, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(38, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        rdb_MA_Man = new QRadioButton(frame);
        rdb_MA_Man->setObjectName(QString::fromUtf8("rdb_MA_Man"));
        rdb_MA_Man->setFont(font);
        rdb_MA_Man->setLayoutDirection(Qt::RightToLeft);
        rdb_MA_Man->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(rdb_MA_Man);

        verticalSpacer_3 = new QSpacerItem(98, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        rdb_MA_Aut = new QRadioButton(frame);
        rdb_MA_Aut->setObjectName(QString::fromUtf8("rdb_MA_Aut"));
        rdb_MA_Aut->setFont(font);
        rdb_MA_Aut->setLayoutDirection(Qt::RightToLeft);
        rdb_MA_Aut->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(rdb_MA_Aut);

        verticalSpacer_4 = new QSpacerItem(38, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(58, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        rdb_MA_Man->raise();
        rdb_MA_Aut->raise();
        Estado = new QFrame(ManAuto);
        Estado->setObjectName(QString::fromUtf8("Estado"));
        Estado->setGeometry(QRect(190, 220, 261, 161));
        Estado->setFrameShape(QFrame::StyledPanel);
        Estado->setFrameShadow(QFrame::Raised);
        rdb_EV_Abierto = new QRadioButton(Estado);
        rdb_EV_Abierto->setObjectName(QString::fromUtf8("rdb_EV_Abierto"));
        rdb_EV_Abierto->setGeometry(QRect(70, 50, 107, 20));
        rdb_EV_Abierto->setFont(font);
        rdb_EV_Abierto->setLayoutDirection(Qt::RightToLeft);
        rdb_EV_Abierto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        rdb_EV_Abierto->setCheckable(true);
        rdb_EV_Cerrado = new QRadioButton(Estado);
        rdb_EV_Cerrado->setObjectName(QString::fromUtf8("rdb_EV_Cerrado"));
        rdb_EV_Cerrado->setGeometry(QRect(70, 90, 131, 41));
        rdb_EV_Cerrado->setFont(font);
        rdb_EV_Cerrado->setLayoutDirection(Qt::RightToLeft);
        rdb_EV_Cerrado->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/AX.png"), QSize(), QIcon::Normal, QIcon::Off);
        rdb_EV_Cerrado->setIcon(icon);

        retranslateUi(ManAuto);

        QMetaObject::connectSlotsByName(ManAuto);
    } // setupUi

    void retranslateUi(QWidget *ManAuto)
    {
        ManAuto->setWindowTitle(QApplication::translate("ManAuto", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ManAuto", "MANUAL/AUTOM\303\201TICO", 0, QApplication::UnicodeUTF8));
        rdb_MA_Man->setText(QApplication::translate("ManAuto", "MANUAL", 0, QApplication::UnicodeUTF8));
        rdb_MA_Aut->setText(QApplication::translate("ManAuto", "AUTOM\303\201TICO", 0, QApplication::UnicodeUTF8));
        rdb_EV_Abierto->setText(QApplication::translate("ManAuto", "ABIERTO", 0, QApplication::UnicodeUTF8));
        rdb_EV_Cerrado->setText(QApplication::translate("ManAuto", "CERRADO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManAuto: public Ui_ManAuto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAUTO_H
