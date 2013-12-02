/********************************************************************************
** Form generated from reading UI file 'monitoreov.ui'
**
** Created: Mon 2. Dec 16:27:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITOREOV_H
#define UI_MONITOREOV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MonitoreoV
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *root;
    QPushButton *abrir;
    QFrame *line;
    QTableWidget *table;

    void setupUi(QDialog *MonitoreoV)
    {
        if (MonitoreoV->objectName().isEmpty())
            MonitoreoV->setObjectName(QString::fromUtf8("MonitoreoV"));
        MonitoreoV->resize(561, 300);
        gridLayout_2 = new QGridLayout(MonitoreoV);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(MonitoreoV);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        root = new QLineEdit(groupBox);
        root->setObjectName(QString::fromUtf8("root"));
        root->setReadOnly(true);

        horizontalLayout->addWidget(root);

        abrir = new QPushButton(groupBox);
        abrir->setObjectName(QString::fromUtf8("abrir"));

        horizontalLayout->addWidget(abrir);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        table = new QTableWidget(groupBox);
        table->setObjectName(QString::fromUtf8("table"));
        table->setEnabled(true);

        verticalLayout->addWidget(table);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(MonitoreoV);

        QMetaObject::connectSlotsByName(MonitoreoV);
    } // setupUi

    void retranslateUi(QDialog *MonitoreoV)
    {
        MonitoreoV->setWindowTitle(QApplication::translate("MonitoreoV", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MonitoreoV", "Variables Monitoreadas", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MonitoreoV", "Archivo:", 0, QApplication::UnicodeUTF8));
        abrir->setText(QApplication::translate("MonitoreoV", "Abrir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MonitoreoV: public Ui_MonitoreoV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOREOV_H
