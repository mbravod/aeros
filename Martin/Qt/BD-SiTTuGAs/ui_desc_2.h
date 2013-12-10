/********************************************************************************
** Form generated from reading UI file 'desc_2.ui'
**
** Created: Mon 9. Dec 19:12:10 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESC_2_H
#define UI_DESC_2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DESC_2
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QWidget *DESC_2)
    {
        if (DESC_2->objectName().isEmpty())
            DESC_2->setObjectName(QString::fromUtf8("DESC_2"));
        DESC_2->resize(108, 181);
        DESC_2->setMinimumSize(QSize(108, 181));
        DESC_2->setMaximumSize(QSize(108, 181));
        frame = new QFrame(DESC_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(6, 49, 97, 126));
        frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.284091 rgba(167, 166, 250, 255), stop:0.488636 rgba(255, 255, 255, 255), stop:0.647727 rgba(167, 166, 250, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(12, 100, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 211, 200);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(12, 50, 75, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(12, 21, 75, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 211, 200);"));
        frame_2 = new QFrame(DESC_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(6, 3, 97, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.489, y1:1, x2:0.488, y2:0.483, stop:0 rgba(192, 192, 192, 255), stop:0.511364 rgba(255, 255, 255, 255), stop:1 rgba(192, 192, 192, 255));"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(2, 20, 87, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(2, 0, 87, 20));
        label = new QLabel(DESC_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 108, 181));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        label->raise();
        frame->raise();
        frame_2->raise();

        retranslateUi(DESC_2);

        QMetaObject::connectSlotsByName(DESC_2);
    } // setupUi

    void retranslateUi(QWidget *DESC_2)
    {
        DESC_2->setWindowTitle(QApplication::translate("DESC_2", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DESC_2", "SALIR", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DESC_2", "CERRAR", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DESC_2", "ABRIR", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DESC_2", "DESC_2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DESC_2", "****", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DESC_2: public Ui_DESC_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESC_2_H
