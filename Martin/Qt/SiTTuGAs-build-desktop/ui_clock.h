/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created: Thu 19. Dec 17:49:00 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbHours;
    QLabel *lb1;
    QLabel *lbMins;
    QLabel *lb2;
    QLabel *lbSegs;

    void setupUi(QWidget *Clock)
    {
        if (Clock->objectName().isEmpty())
            Clock->setObjectName(QString::fromUtf8("Clock"));
        Clock->resize(180, 45);
        Clock->setMinimumSize(QSize(150, 45));
        Clock->setMaximumSize(QSize(180, 45));
        frame = new QFrame(Clock);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(2, 2, 180, 41));
        frame->setMinimumSize(QSize(180, 39));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbHours = new QLabel(frame);
        lbHours->setObjectName(QString::fromUtf8("lbHours"));
        lbHours->setMinimumSize(QSize(65, 33));
        lbHours->setMaximumSize(QSize(65, 33));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lbHours->setFont(font);
        lbHours->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbHours->setWordWrap(false);

        horizontalLayout->addWidget(lbHours);

        lb1 = new QLabel(frame);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        lb1->setMinimumSize(QSize(10, 25));
        lb1->setMaximumSize(QSize(10, 25));
        lb1->setFont(font);
        lb1->setAlignment(Qt::AlignCenter);
        lb1->setWordWrap(false);

        horizontalLayout->addWidget(lb1);

        lbMins = new QLabel(frame);
        lbMins->setObjectName(QString::fromUtf8("lbMins"));
        lbMins->setMinimumSize(QSize(30, 33));
        lbMins->setMaximumSize(QSize(30, 33));
        lbMins->setFont(font);
        lbMins->setStyleSheet(QString::fromUtf8(""));
        lbMins->setAlignment(Qt::AlignCenter);
        lbMins->setWordWrap(false);

        horizontalLayout->addWidget(lbMins);

        lb2 = new QLabel(frame);
        lb2->setObjectName(QString::fromUtf8("lb2"));
        lb2->setMinimumSize(QSize(10, 25));
        lb2->setMaximumSize(QSize(10, 16777215));
        lb2->setFont(font);
        lb2->setAlignment(Qt::AlignCenter);
        lb2->setWordWrap(false);

        horizontalLayout->addWidget(lb2);

        lbSegs = new QLabel(frame);
        lbSegs->setObjectName(QString::fromUtf8("lbSegs"));
        lbSegs->setMinimumSize(QSize(30, 33));
        lbSegs->setMaximumSize(QSize(30, 33));
        lbSegs->setFont(font);
        lbSegs->setStyleSheet(QString::fromUtf8(""));
        lbSegs->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbSegs->setWordWrap(false);

        horizontalLayout->addWidget(lbSegs);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Clock);

        QMetaObject::connectSlotsByName(Clock);
    } // setupUi

    void retranslateUi(QWidget *Clock)
    {
        Clock->setWindowTitle(QApplication::translate("Clock", "Form", 0, QApplication::UnicodeUTF8));
        lbHours->setText(QApplication::translate("Clock", "00", 0, QApplication::UnicodeUTF8));
        lb1->setText(QApplication::translate("Clock", ":", 0, QApplication::UnicodeUTF8));
        lbMins->setText(QApplication::translate("Clock", "00", 0, QApplication::UnicodeUTF8));
        lb2->setText(QApplication::translate("Clock", ":", 0, QApplication::UnicodeUTF8));
        lbSegs->setText(QApplication::translate("Clock", "00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Clock: public Ui_Clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
