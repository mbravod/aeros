/********************************************************************************
** Form generated from reading UI file 'bitacorai.ui'
**
** Created: Mon 23. Sep 20:33:27 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITACORAI_H
#define UI_BITACORAI_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BitacoraI
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
    QLabel *label_4;
    QComboBox *cb_historial;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QTableWidget *table;
    QProgressBar *pgrBar;

    void setupUi(QDialog *BitacoraI)
    {
        if (BitacoraI->objectName().isEmpty())
            BitacoraI->setObjectName(QString::fromUtf8("BitacoraI"));
        BitacoraI->resize(750, 600);
        BitacoraI->setMinimumSize(QSize(750, 600));
        BitacoraI->setMaximumSize(QSize(750, 600));
        QFont font;
        font.setPointSize(4);
        font.setBold(true);
        font.setWeight(75);
        BitacoraI->setFont(font);
        gridLayout = new QGridLayout(BitacoraI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(BitacoraI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(81, 71));
        label->setMaximumSize(QSize(81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/bitacora.png")));

        horizontalLayout_4->addWidget(label);

        line_3 = new QFrame(BitacoraI);
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
        label_2 = new QLabel(BitacoraI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 35));
        label_2->setMaximumSize(QSize(100, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        le_sys = new QLabel(BitacoraI);
        le_sys->setObjectName(QString::fromUtf8("le_sys"));
        le_sys->setMinimumSize(QSize(150, 35));
        le_sys->setMaximumSize(QSize(150, 35));
        le_sys->setFont(font1);

        horizontalLayout_2->addWidget(le_sys);

        horizontalSpacer_5 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(BitacoraI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(380, 2));
        line->setMaximumSize(QSize(380, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        le_user = new QLabel(BitacoraI);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMinimumSize(QSize(300, 16));
        le_user->setMaximumSize(QSize(300, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        le_user->setFont(font2);

        horizontalLayout->addWidget(le_user);

        horizontalSpacer_6 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_2 = new QFrame(BitacoraI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(730, 5));
        line_2->setMaximumSize(QSize(720, 15));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(BitacoraI);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(210, 16));
        label_4->setMaximumSize(QSize(210, 16));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);

        horizontalLayout_3->addWidget(label_4);

        cb_historial = new QComboBox(BitacoraI);
        cb_historial->setObjectName(QString::fromUtf8("cb_historial"));
        cb_historial->setMinimumSize(QSize(335, 22));
        cb_historial->setMaximumSize(QSize(335, 22));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        cb_historial->setFont(font4);

        horizontalLayout_3->addWidget(cb_historial);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_4 = new QFrame(BitacoraI);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(730, 5));
        line_4->setMaximumSize(QSize(720, 15));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        table = new QTableWidget(BitacoraI);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(730, 440));
        table->setMaximumSize(QSize(730, 440));

        verticalLayout_2->addWidget(table);

        pgrBar = new QProgressBar(BitacoraI);
        pgrBar->setObjectName(QString::fromUtf8("pgrBar"));
        pgrBar->setMinimumSize(QSize(730, 10));
        pgrBar->setMaximumSize(QSize(730, 10));
        QFont font5;
        font5.setPointSize(6);
        font5.setBold(true);
        font5.setWeight(75);
        pgrBar->setFont(font5);
        pgrBar->setValue(24);
        pgrBar->setAlignment(Qt::AlignCenter);
        pgrBar->setTextVisible(true);
        pgrBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(pgrBar);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(BitacoraI);

        QMetaObject::connectSlotsByName(BitacoraI);
    } // setupUi

    void retranslateUi(QDialog *BitacoraI)
    {
        BitacoraI->setWindowTitle(QApplication::translate("BitacoraI", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("BitacoraI", "Bit\303\241cora", 0, QApplication::UnicodeUTF8));
        le_sys->setText(QApplication::translate("BitacoraI", "Instructor", 0, QApplication::UnicodeUTF8));
        le_user->setText(QString());
        label_4->setText(QApplication::translate("BitacoraI", "Seleccionar Bitacora del Historial:", 0, QApplication::UnicodeUTF8));
        pgrBar->setFormat(QApplication::translate("BitacoraI", "%p%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BitacoraI: public Ui_BitacoraI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITACORAI_H
