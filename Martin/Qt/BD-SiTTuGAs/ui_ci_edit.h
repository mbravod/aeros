/********************************************************************************
** Form generated from reading UI file 'ci_edit.ui'
**
** Created: Fri 13. Dec 19:34:22 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CI_EDIT_H
#define UI_CI_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CI_Edit
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *contenedor;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QHBoxLayout *horizontalLayout;
    QLineEdit *varToChange;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *varToRename;
    QPushButton *tomar;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *obtener;
    QTableWidget *table2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *varToChange_2;
    QPushButton *eliminar;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *varToRename_2;
    QPushButton *renombrar;

    void setupUi(QDialog *CI_Edit)
    {
        if (CI_Edit->objectName().isEmpty())
            CI_Edit->setObjectName(QString::fromUtf8("CI_Edit"));
        CI_Edit->resize(577, 370);
        gridLayout_3 = new QGridLayout(CI_Edit);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        contenedor = new QTabWidget(CI_Edit);
        contenedor->setObjectName(QString::fromUtf8("contenedor"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(tab);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        varToChange = new QLineEdit(tab);
        varToChange->setObjectName(QString::fromUtf8("varToChange"));
        varToChange->setMinimumSize(QSize(450, 25));
        varToChange->setMaximumSize(QSize(100, 25));
        varToChange->setReadOnly(true);

        horizontalLayout->addWidget(varToChange);

        horizontalSpacer = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        varToRename = new QLineEdit(tab);
        varToRename->setObjectName(QString::fromUtf8("varToRename"));
        varToRename->setMinimumSize(QSize(450, 25));
        varToRename->setMaximumSize(QSize(100, 25));
        varToRename->setReadOnly(false);

        horizontalLayout_2->addWidget(varToRename);

        tomar = new QPushButton(tab);
        tomar->setObjectName(QString::fromUtf8("tomar"));

        horizontalLayout_2->addWidget(tomar);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        contenedor->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        obtener = new QPushButton(tab_2);
        obtener->setObjectName(QString::fromUtf8("obtener"));

        horizontalLayout_5->addWidget(obtener);


        verticalLayout_2->addLayout(horizontalLayout_5);

        table2 = new QTableWidget(tab_2);
        table2->setObjectName(QString::fromUtf8("table2"));

        verticalLayout_2->addWidget(table2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        varToChange_2 = new QLineEdit(tab_2);
        varToChange_2->setObjectName(QString::fromUtf8("varToChange_2"));
        varToChange_2->setMinimumSize(QSize(450, 25));
        varToChange_2->setMaximumSize(QSize(100, 25));
        varToChange_2->setReadOnly(true);

        horizontalLayout_3->addWidget(varToChange_2);

        eliminar = new QPushButton(tab_2);
        eliminar->setObjectName(QString::fromUtf8("eliminar"));

        horizontalLayout_3->addWidget(eliminar);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        varToRename_2 = new QLineEdit(tab_2);
        varToRename_2->setObjectName(QString::fromUtf8("varToRename_2"));
        varToRename_2->setMinimumSize(QSize(450, 25));
        varToRename_2->setMaximumSize(QSize(100, 25));
        varToRename_2->setReadOnly(false);

        horizontalLayout_4->addWidget(varToRename_2);

        renombrar = new QPushButton(tab_2);
        renombrar->setObjectName(QString::fromUtf8("renombrar"));

        horizontalLayout_4->addWidget(renombrar);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        contenedor->addTab(tab_2, QString());

        gridLayout_3->addWidget(contenedor, 0, 0, 1, 1);


        retranslateUi(CI_Edit);

        contenedor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CI_Edit);
    } // setupUi

    void retranslateUi(QDialog *CI_Edit)
    {
        CI_Edit->setWindowTitle(QApplication::translate("CI_Edit", "Dialog", 0, QApplication::UnicodeUTF8));
        varToChange->setText(QString());
        varToRename->setText(QString());
        tomar->setText(QApplication::translate("CI_Edit", "Tomar CI", 0, QApplication::UnicodeUTF8));
        contenedor->setTabText(contenedor->indexOf(tab), QApplication::translate("CI_Edit", "Tomar Fotograma", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CI_Edit", "TextLabel", 0, QApplication::UnicodeUTF8));
        obtener->setText(QApplication::translate("CI_Edit", "Obtener CI", 0, QApplication::UnicodeUTF8));
        varToChange_2->setText(QString());
        eliminar->setText(QApplication::translate("CI_Edit", "Eliminar CI", 0, QApplication::UnicodeUTF8));
        varToRename_2->setText(QString());
        renombrar->setText(QApplication::translate("CI_Edit", "Renombrar CI", 0, QApplication::UnicodeUTF8));
        contenedor->setTabText(contenedor->indexOf(tab_2), QApplication::translate("CI_Edit", "Editar Fotograma", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CI_Edit: public Ui_CI_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CI_EDIT_H
