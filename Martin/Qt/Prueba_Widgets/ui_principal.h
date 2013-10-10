/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created: Wed 9. Oct 12:07:45 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "ainstrumentindicator.h"
#include "awidget.h"

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    AInstrumentIndicator *aInstrumentIndicator;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(660, 543);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 430, 151, 51));
        aInstrumentIndicator = new AInstrumentIndicator(centralWidget);
        aInstrumentIndicator->setObjectName(QString::fromUtf8("aInstrumentIndicator"));
        aInstrumentIndicator->setGeometry(QRect(140, 40, 70, 70));
        aInstrumentIndicator->setIndice(0);
        aInstrumentIndicator->setValue(1);
        aInstrumentIndicator->setProperty("Normal", QVariant(2));
        aInstrumentIndicator->setAlarma(6);
        Principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Principal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 21));
        Principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Principal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Principal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Principal->setStatusBar(statusBar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Principal", "Aceptar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
