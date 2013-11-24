/********************************************************************************
** Form generated from reading UI file 'bitacorao.ui'
**
** Created: Sun 24. Nov 01:20:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITACORAO_H
#define UI_BITACORAO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BitacoraO
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *le_sys;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *le_user;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *cb_Operador;
    QPushButton *btn_selOp;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QComboBox *cb_historial;
    QPushButton *btn_selBit;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_4;
    QTableWidget *table;
    QProgressBar *pgrBar;

    void setupUi(QDialog *BitacoraO)
    {
        if (BitacoraO->objectName().isEmpty())
            BitacoraO->setObjectName(QString::fromUtf8("BitacoraO"));
        BitacoraO->resize(750, 600);
        BitacoraO->setMinimumSize(QSize(750, 600));
        BitacoraO->setMaximumSize(QSize(750, 600));
        gridLayout = new QGridLayout(BitacoraO);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(BitacoraO);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(81, 71));
        label->setMaximumSize(QSize(81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/bitacora.png")));

        horizontalLayout_4->addWidget(label);

        line_3 = new QFrame(BitacoraO);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(3, 60));
        line_3->setMaximumSize(QSize(3, 60));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(BitacoraO);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 35));
        label_2->setMaximumSize(QSize(100, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        le_sys = new QLabel(BitacoraO);
        le_sys->setObjectName(QString::fromUtf8("le_sys"));
        le_sys->setMinimumSize(QSize(150, 35));
        le_sys->setMaximumSize(QSize(150, 35));
        le_sys->setFont(font);

        horizontalLayout_2->addWidget(le_sys);

        horizontalSpacer_5 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(BitacoraO);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(380, 2));
        line->setMaximumSize(QSize(380, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        le_user = new QLabel(BitacoraO);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMinimumSize(QSize(300, 16));
        le_user->setMaximumSize(QSize(300, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        le_user->setFont(font1);

        horizontalLayout->addWidget(le_user);

        horizontalSpacer_6 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_2 = new QFrame(BitacoraO);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(730, 5));
        line_2->setMaximumSize(QSize(720, 15));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(BitacoraO);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(65, 16));
        label_3->setMaximumSize(QSize(65, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        cb_Operador = new QComboBox(BitacoraO);
        cb_Operador->setObjectName(QString::fromUtf8("cb_Operador"));
        cb_Operador->setMinimumSize(QSize(335, 22));
        cb_Operador->setMaximumSize(QSize(335, 22));

        horizontalLayout_3->addWidget(cb_Operador);

        btn_selOp = new QPushButton(BitacoraO);
        btn_selOp->setObjectName(QString::fromUtf8("btn_selOp"));
        btn_selOp->setMinimumSize(QSize(140, 23));
        btn_selOp->setMaximumSize(QSize(140, 23));

        horizontalLayout_3->addWidget(btn_selOp);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_4 = new QLabel(BitacoraO);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(155, 16));
        label_4->setMaximumSize(QSize(155, 16));
        label_4->setFont(font2);

        horizontalLayout_5->addWidget(label_4);

        cb_historial = new QComboBox(BitacoraO);
        cb_historial->setObjectName(QString::fromUtf8("cb_historial"));
        cb_historial->setMinimumSize(QSize(335, 22));
        cb_historial->setMaximumSize(QSize(335, 22));

        horizontalLayout_5->addWidget(cb_historial);

        btn_selBit = new QPushButton(BitacoraO);
        btn_selBit->setObjectName(QString::fromUtf8("btn_selBit"));
        btn_selBit->setMinimumSize(QSize(140, 23));
        btn_selBit->setMaximumSize(QSize(140, 23));

        horizontalLayout_5->addWidget(btn_selBit);

        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line_4 = new QFrame(BitacoraO);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(730, 5));
        line_4->setMaximumSize(QSize(720, 15));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        table = new QTableWidget(BitacoraO);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(730, 400));
        table->setMaximumSize(QSize(730, 400));

        verticalLayout_2->addWidget(table);

        pgrBar = new QProgressBar(BitacoraO);
        pgrBar->setObjectName(QString::fromUtf8("pgrBar"));
        pgrBar->setMinimumSize(QSize(730, 10));
        pgrBar->setMaximumSize(QSize(730, 10));
        QFont font3;
        font3.setPointSize(6);
        font3.setBold(true);
        font3.setWeight(75);
        pgrBar->setFont(font3);
        pgrBar->setValue(24);
        pgrBar->setAlignment(Qt::AlignCenter);
        pgrBar->setTextVisible(true);
        pgrBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(pgrBar);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(BitacoraO);

        QMetaObject::connectSlotsByName(BitacoraO);
    } // setupUi

    void retranslateUi(QDialog *BitacoraO)
    {
        BitacoraO->setWindowTitle(QApplication::translate("BitacoraO", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("BitacoraO", "Bit\303\241cora", 0, QApplication::UnicodeUTF8));
        le_sys->setText(QApplication::translate("BitacoraO", "Operador", 0, QApplication::UnicodeUTF8));
        le_user->setText(QString());
        label_3->setText(QApplication::translate("BitacoraO", "Operador:", 0, QApplication::UnicodeUTF8));
        btn_selOp->setText(QApplication::translate("BitacoraO", "Seleccionar Operador", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BitacoraO", "Historial de las Bitacoras:", 0, QApplication::UnicodeUTF8));
        btn_selBit->setText(QApplication::translate("BitacoraO", "Seleccionar Bitacora", 0, QApplication::UnicodeUTF8));
        pgrBar->setFormat(QApplication::translate("BitacoraO", "%p%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BitacoraO: public Ui_BitacoraO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITACORAO_H
