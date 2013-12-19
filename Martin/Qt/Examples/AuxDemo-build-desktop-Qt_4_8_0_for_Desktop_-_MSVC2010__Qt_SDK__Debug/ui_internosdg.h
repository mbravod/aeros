/********************************************************************************
** Form generated from reading UI file 'internosdg.ui'
**
** Created: Thu 19. Dec 12:49:33 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNOSDG_H
#define UI_INTERNOSDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InternosDG
{
public:
    QFrame *frame_13;
    QGridLayout *gridLayout_23;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *InternosDG)
    {
        if (InternosDG->objectName().isEmpty())
            InternosDG->setObjectName(QString::fromUtf8("InternosDG"));
        InternosDG->resize(250, 150);
        frame_13 = new QFrame(InternosDG);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(0, 0, 250, 30));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_13->setFrameShape(QFrame::Box);
        frame_13->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(frame_13);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label = new QLabel(InternosDG);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 250, 150));
        label->setMinimumSize(QSize(250, 150));
        label->setMaximumSize(QSize(250, 150));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/BackGround.png")));
        pushButton = new QPushButton(InternosDG);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 50, 181, 31));
        label->raise();
        frame_13->raise();
        pushButton->raise();

        retranslateUi(InternosDG);

        QMetaObject::connectSlotsByName(InternosDG);
    } // setupUi

    void retranslateUi(QDialog *InternosDG)
    {
        InternosDG->setWindowTitle(QApplication::translate("InternosDG", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("InternosDG", "LOCAL/REMOTO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InternosDG: public Ui_InternosDG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNOSDG_H
