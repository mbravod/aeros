/********************************************************************************
** Form generated from reading UI file 'condicionesiniciales.ui'
**
** Created: Thu 12. Dec 21:16:39 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDICIONESINICIALES_H
#define UI_CONDICIONESINICIALES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CondicionesIniciales
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QHBoxLayout *horizontalLayout;
    QLineEdit *varToChange;
    QSpacerItem *horizontalSpacer;
    QPushButton *cargar;

    void setupUi(QDialog *CondicionesIniciales)
    {
        if (CondicionesIniciales->objectName().isEmpty())
            CondicionesIniciales->setObjectName(QString::fromUtf8("CondicionesIniciales"));
        CondicionesIniciales->resize(600, 450);
        gridLayout = new QGridLayout(CondicionesIniciales);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(CondicionesIniciales);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        varToChange = new QLineEdit(CondicionesIniciales);
        varToChange->setObjectName(QString::fromUtf8("varToChange"));
        varToChange->setMinimumSize(QSize(450, 25));
        varToChange->setMaximumSize(QSize(100, 25));
        varToChange->setReadOnly(true);

        horizontalLayout->addWidget(varToChange);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cargar = new QPushButton(CondicionesIniciales);
        cargar->setObjectName(QString::fromUtf8("cargar"));

        horizontalLayout->addWidget(cargar);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(CondicionesIniciales);

        QMetaObject::connectSlotsByName(CondicionesIniciales);
    } // setupUi

    void retranslateUi(QDialog *CondicionesIniciales)
    {
        CondicionesIniciales->setWindowTitle(QApplication::translate("CondicionesIniciales", "Dialog", 0, QApplication::UnicodeUTF8));
        varToChange->setText(QString());
        cargar->setText(QApplication::translate("CondicionesIniciales", "Cargar CI", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CondicionesIniciales: public Ui_CondicionesIniciales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDICIONESINICIALES_H
