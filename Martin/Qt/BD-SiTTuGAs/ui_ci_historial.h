/********************************************************************************
** Form generated from reading UI file 'ci_historial.ui'
**
** Created: Thu 5. Dec 21:01:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CI_HISTORIAL_H
#define UI_CI_HISTORIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CI_Historial
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *tiempo;
    QHBoxLayout *horizontalLayout;
    QPushButton *obtener;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *varToChange;
    QSpacerItem *horizontalSpacer;
    QPushButton *cargar;

    void setupUi(QDialog *CI_Historial)
    {
        if (CI_Historial->objectName().isEmpty())
            CI_Historial->setObjectName(QString::fromUtf8("CI_Historial"));
        CI_Historial->resize(560, 370);
        gridLayout = new QGridLayout(CI_Historial);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(CI_Historial);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        tiempo = new QComboBox(CI_Historial);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));
        tiempo->setMaxVisibleItems(15);

        horizontalLayout_2->addWidget(tiempo);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        obtener = new QPushButton(CI_Historial);
        obtener->setObjectName(QString::fromUtf8("obtener"));

        horizontalLayout->addWidget(obtener);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        table = new QTableWidget(CI_Historial);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        varToChange = new QLineEdit(CI_Historial);
        varToChange->setObjectName(QString::fromUtf8("varToChange"));
        varToChange->setMinimumSize(QSize(450, 25));
        varToChange->setMaximumSize(QSize(100, 25));
        varToChange->setReadOnly(true);

        horizontalLayout_4->addWidget(varToChange);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        cargar = new QPushButton(CI_Historial);
        cargar->setObjectName(QString::fromUtf8("cargar"));

        horizontalLayout_4->addWidget(cargar);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(CI_Historial);

        tiempo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CI_Historial);
    } // setupUi

    void retranslateUi(QDialog *CI_Historial)
    {
        CI_Historial->setWindowTitle(QApplication::translate("CI_Historial", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CI_Historial", "Tiempo:", 0, QApplication::UnicodeUTF8));
        tiempo->clear();
        tiempo->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("CI_Historial", "Horas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CI_Historial", "Minutos", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CI_Historial", "Segundos", 0, QApplication::UnicodeUTF8)
        );
        obtener->setText(QApplication::translate("CI_Historial", "Obtener CI", 0, QApplication::UnicodeUTF8));
        varToChange->setText(QString());
        cargar->setText(QApplication::translate("CI_Historial", "Cargar CI", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CI_Historial: public Ui_CI_Historial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CI_HISTORIAL_H
