/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created: Mon 9. Dec 19:33:40 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(272, 173);
        centralwidget = new QWidget(Console);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Console->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Console);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 272, 21));
        Console->setMenuBar(menubar);
        statusbar = new QStatusBar(Console);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Console->setStatusBar(statusbar);

        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QMainWindow *Console)
    {
        Console->setWindowTitle(QApplication::translate("Console", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
