/********************************************************************************
** Form generated from reading UI file 'parametrosinternos.ui'
**
** Created: Tue 10. Dec 18:43:55 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETROSINTERNOS_H
#define UI_PARAMETROSINTERNOS_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametrosInternos
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *SeleccSist;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QFrame *line_6;
    QTableWidget *table;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *le_var;
    QLabel *label_10;
    QSlider *slider;
    QLineEdit *le_val;
    QLabel *percent;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_Reset;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QSpinBox *t_esp;
    QComboBox *cb_sm_ret;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lb_Ttrans;
    QGridLayout *gridLayout_4;
    QSpinBox *t_trans;
    QComboBox *cb_sm_tra;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Guardar;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *pgrBar;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_Cerrar;

    void setupUi(QDialog *ParametrosInternos)
    {
        if (ParametrosInternos->objectName().isEmpty())
            ParametrosInternos->setObjectName(QString::fromUtf8("ParametrosInternos"));
        ParametrosInternos->resize(800, 530);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ParametrosInternos->sizePolicy().hasHeightForWidth());
        ParametrosInternos->setSizePolicy(sizePolicy);
        ParametrosInternos->setMinimumSize(QSize(800, 530));
        ParametrosInternos->setMaximumSize(QSize(800, 530));
        gridLayout_2 = new QGridLayout(ParametrosInternos);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(ParametrosInternos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        SeleccSist = new QComboBox(ParametrosInternos);
        SeleccSist->setObjectName(QString::fromUtf8("SeleccSist"));
        SeleccSist->setMinimumSize(QSize(311, 20));
        SeleccSist->setMaxVisibleItems(15);

        horizontalLayout_5->addWidget(SeleccSist);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        le_search = new QLineEdit(ParametrosInternos);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(200, 20));
        le_search->setMaximumSize(QSize(200, 20));

        horizontalLayout_5->addWidget(le_search);

        btn_search = new QPushButton(ParametrosInternos);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setMinimumSize(QSize(100, 23));
        btn_search->setMaximumSize(QSize(100, 23));

        horizontalLayout_5->addWidget(btn_search);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        line_6 = new QFrame(ParametrosInternos);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 1, 0, 1, 1);

        table = new QTableWidget(ParametrosInternos);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(780, 350));
        table->setMaximumSize(QSize(780, 350));

        gridLayout_3->addWidget(table, 2, 0, 1, 1);

        line_5 = new QFrame(ParametrosInternos);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_5, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(ParametrosInternos);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(50, 16));
        label_9->setMaximumSize(QSize(50, 16));

        horizontalLayout_3->addWidget(label_9);

        le_var = new QLineEdit(ParametrosInternos);
        le_var->setObjectName(QString::fromUtf8("le_var"));
        le_var->setMinimumSize(QSize(200, 20));
        le_var->setMaximumSize(QSize(200, 20));
        le_var->setReadOnly(true);

        horizontalLayout_3->addWidget(le_var);

        label_10 = new QLabel(ParametrosInternos);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(40, 16));
        label_10->setMaximumSize(QSize(40, 16));

        horizontalLayout_3->addWidget(label_10);

        slider = new QSlider(ParametrosInternos);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimumSize(QSize(300, 20));
        slider->setMaximumSize(QSize(300, 20));
        slider->setStyleSheet(QString::fromUtf8("gridline-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        slider->setMaximum(100);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider);

        le_val = new QLineEdit(ParametrosInternos);
        le_val->setObjectName(QString::fromUtf8("le_val"));
        le_val->setMinimumSize(QSize(50, 25));
        le_val->setMaximumSize(QSize(50, 25));
        le_val->setReadOnly(true);

        horizontalLayout_3->addWidget(le_val);

        percent = new QLabel(ParametrosInternos);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setMinimumSize(QSize(16, 16));
        percent->setMaximumSize(QSize(16, 16));

        horizontalLayout_3->addWidget(percent);

        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        btn_Reset = new QPushButton(ParametrosInternos);
        btn_Reset->setObjectName(QString::fromUtf8("btn_Reset"));

        horizontalLayout_3->addWidget(btn_Reset);


        gridLayout_3->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        line_3 = new QFrame(ParametrosInternos);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_15 = new QLabel(ParametrosInternos);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(98, 20));
        label_15->setMaximumSize(QSize(98, 20));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        t_esp = new QSpinBox(ParametrosInternos);
        t_esp->setObjectName(QString::fromUtf8("t_esp"));
        t_esp->setMinimumSize(QSize(60, 20));
        t_esp->setMaximumSize(QSize(60, 20));
        t_esp->setMinimum(0);
        t_esp->setMaximum(99999999);
        t_esp->setValue(0);

        gridLayout->addWidget(t_esp, 0, 1, 1, 1);

        cb_sm_ret = new QComboBox(ParametrosInternos);
        cb_sm_ret->setObjectName(QString::fromUtf8("cb_sm_ret"));
        cb_sm_ret->setMinimumSize(QSize(40, 20));
        cb_sm_ret->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(cb_sm_ret, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lb_Ttrans = new QLabel(ParametrosInternos);
        lb_Ttrans->setObjectName(QString::fromUtf8("lb_Ttrans"));
        lb_Ttrans->setMinimumSize(QSize(100, 20));
        lb_Ttrans->setMaximumSize(QSize(100, 20));

        horizontalLayout->addWidget(lb_Ttrans);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        t_trans = new QSpinBox(ParametrosInternos);
        t_trans->setObjectName(QString::fromUtf8("t_trans"));
        t_trans->setMinimumSize(QSize(60, 20));
        t_trans->setMaximumSize(QSize(60, 20));
        t_trans->setMaximum(99999999);

        gridLayout_4->addWidget(t_trans, 0, 1, 1, 1);

        cb_sm_tra = new QComboBox(ParametrosInternos);
        cb_sm_tra->setObjectName(QString::fromUtf8("cb_sm_tra"));
        cb_sm_tra->setMinimumSize(QSize(40, 20));
        cb_sm_tra->setMaximumSize(QSize(40, 20));

        gridLayout_4->addWidget(cb_sm_tra, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);


        gridLayout_3->addLayout(horizontalLayout, 6, 0, 1, 1);

        line_4 = new QFrame(ParametrosInternos);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        btn_Guardar = new QPushButton(ParametrosInternos);
        btn_Guardar->setObjectName(QString::fromUtf8("btn_Guardar"));
        btn_Guardar->setMinimumSize(QSize(100, 22));
        btn_Guardar->setMaximumSize(QSize(100, 22));
        btn_Guardar->setAutoDefault(false);
        btn_Guardar->setDefault(false);

        horizontalLayout_2->addWidget(btn_Guardar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pgrBar = new QProgressBar(ParametrosInternos);
        pgrBar->setObjectName(QString::fromUtf8("pgrBar"));
        pgrBar->setEnabled(true);
        pgrBar->setMinimumSize(QSize(300, 20));
        pgrBar->setMaximumSize(QSize(300, 20));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        pgrBar->setFont(font);
        pgrBar->setLayoutDirection(Qt::LeftToRight);
        pgrBar->setAutoFillBackground(false);
        pgrBar->setValue(24);
        pgrBar->setTextVisible(false);
        pgrBar->setOrientation(Qt::Horizontal);
        pgrBar->setInvertedAppearance(false);
        pgrBar->setTextDirection(QProgressBar::BottomToTop);

        horizontalLayout_2->addWidget(pgrBar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btn_Cerrar = new QPushButton(ParametrosInternos);
        btn_Cerrar->setObjectName(QString::fromUtf8("btn_Cerrar"));
        btn_Cerrar->setMinimumSize(QSize(100, 22));
        btn_Cerrar->setMaximumSize(QSize(100, 22));
        btn_Cerrar->setDefault(true);

        horizontalLayout_2->addWidget(btn_Cerrar);


        gridLayout_3->addLayout(horizontalLayout_2, 8, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(ParametrosInternos);
        QObject::connect(btn_Cerrar, SIGNAL(clicked()), ParametrosInternos, SLOT(close()));

        SeleccSist->setCurrentIndex(-1);
        cb_sm_ret->setCurrentIndex(0);
        cb_sm_tra->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParametrosInternos);
    } // setupUi

    void retranslateUi(QDialog *ParametrosInternos)
    {
        ParametrosInternos->setWindowTitle(QApplication::translate("ParametrosInternos", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ParametrosInternos", "Seleccionar Sistema", 0, QApplication::UnicodeUTF8));
        btn_search->setText(QApplication::translate("ParametrosInternos", "Buscar Variable", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ParametrosInternos", "VARIABLE:", 0, QApplication::UnicodeUTF8));
        le_var->setText(QString());
        label_10->setText(QApplication::translate("ParametrosInternos", "VALOR:", 0, QApplication::UnicodeUTF8));
        le_val->setText(QString());
        percent->setText(QApplication::translate("ParametrosInternos", "%", 0, QApplication::UnicodeUTF8));
        btn_Reset->setText(QApplication::translate("ParametrosInternos", "Valor Normal", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ParametrosInternos", "Tiempo de Retardo:", 0, QApplication::UnicodeUTF8));
        cb_sm_ret->clear();
        cb_sm_ret->insertItems(0, QStringList()
         << QApplication::translate("ParametrosInternos", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ParametrosInternos", "min", 0, QApplication::UnicodeUTF8)
        );
        lb_Ttrans->setText(QApplication::translate("ParametrosInternos", "Tiempo de Evoluci\303\263n:", 0, QApplication::UnicodeUTF8));
        cb_sm_tra->clear();
        cb_sm_tra->insertItems(0, QStringList()
         << QApplication::translate("ParametrosInternos", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ParametrosInternos", "min", 0, QApplication::UnicodeUTF8)
        );
        btn_Guardar->setText(QApplication::translate("ParametrosInternos", "Aceptar Valor", 0, QApplication::UnicodeUTF8));
        btn_Cerrar->setText(QApplication::translate("ParametrosInternos", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametrosInternos: public Ui_ParametrosInternos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETROSINTERNOS_H
