/********************************************************************************
** Form generated from reading UI file 'fallas.ui'
**
** Created: Mon 23. Sep 20:33:27 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FALLAS_H
#define UI_FALLAS_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fallas
{
public:
    QTabWidget *TabWid;
    QWidget *tab_sist;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
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
    QGridLayout *gridLayout_4;
    QLabel *lb_Ttrans;
    QSpinBox *t_trans;
    QComboBox *cb_sm_tra;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_6;
    QLabel *label_17;
    QSpinBox *t_aplic;
    QComboBox *cb_sm_apl;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_7;
    QLabel *lb_Trep;
    QSpinBox *t_rep;
    QComboBox *cb_sm_rep;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Guardar;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *pgrBar;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_Cerrar;
    QWidget *tab_act;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableAll;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QProgressBar *pgrBar_All;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_ResetAllFails;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *le_var_All;
    QPushButton *btn_Reset_All;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *le_searchAll;
    QPushButton *btn_searchAll;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_Cerrar_All;

    void setupUi(QDialog *Fallas)
    {
        if (Fallas->objectName().isEmpty())
            Fallas->setObjectName(QString::fromUtf8("Fallas"));
        Fallas->resize(825, 568);
        Fallas->setMinimumSize(QSize(825, 568));
        Fallas->setMaximumSize(QSize(825, 568));
        TabWid = new QTabWidget(Fallas);
        TabWid->setObjectName(QString::fromUtf8("TabWid"));
        TabWid->setGeometry(QRect(9, 9, 807, 550));
        TabWid->setMinimumSize(QSize(807, 550));
        TabWid->setMaximumSize(QSize(807, 550));
        TabWid->setTabPosition(QTabWidget::North);
        TabWid->setTabShape(QTabWidget::Rounded);
        TabWid->setElideMode(Qt::ElideLeft);
        TabWid->setDocumentMode(false);
        TabWid->setTabsClosable(false);
        TabWid->setMovable(false);
        tab_sist = new QWidget();
        tab_sist->setObjectName(QString::fromUtf8("tab_sist"));
        gridLayout_3 = new QGridLayout(tab_sist);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab_sist);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        SeleccSist = new QComboBox(tab_sist);
        SeleccSist->setObjectName(QString::fromUtf8("SeleccSist"));
        SeleccSist->setMinimumSize(QSize(311, 20));
        SeleccSist->setMaxVisibleItems(15);

        horizontalLayout_5->addWidget(SeleccSist);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        le_search = new QLineEdit(tab_sist);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(200, 20));
        le_search->setMaximumSize(QSize(200, 20));

        horizontalLayout_5->addWidget(le_search);

        btn_search = new QPushButton(tab_sist);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setMinimumSize(QSize(100, 23));
        btn_search->setMaximumSize(QSize(100, 23));

        horizontalLayout_5->addWidget(btn_search);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line_6 = new QFrame(tab_sist);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        table = new QTableWidget(tab_sist);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(780, 350));
        table->setMaximumSize(QSize(780, 350));

        verticalLayout_2->addWidget(table);

        line_5 = new QFrame(tab_sist);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(tab_sist);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(50, 16));
        label_9->setMaximumSize(QSize(50, 16));

        horizontalLayout_3->addWidget(label_9);

        le_var = new QLineEdit(tab_sist);
        le_var->setObjectName(QString::fromUtf8("le_var"));
        le_var->setMinimumSize(QSize(200, 20));
        le_var->setMaximumSize(QSize(200, 20));
        le_var->setReadOnly(true);

        horizontalLayout_3->addWidget(le_var);

        label_10 = new QLabel(tab_sist);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(40, 16));
        label_10->setMaximumSize(QSize(40, 16));

        horizontalLayout_3->addWidget(label_10);

        slider = new QSlider(tab_sist);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimumSize(QSize(300, 20));
        slider->setMaximumSize(QSize(300, 20));
        slider->setStyleSheet(QString::fromUtf8("gridline-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        slider->setMaximum(100);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider);

        le_val = new QLineEdit(tab_sist);
        le_val->setObjectName(QString::fromUtf8("le_val"));
        le_val->setMinimumSize(QSize(50, 25));
        le_val->setMaximumSize(QSize(50, 25));
        le_val->setReadOnly(true);

        horizontalLayout_3->addWidget(le_val);

        percent = new QLabel(tab_sist);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setMinimumSize(QSize(16, 16));
        percent->setMaximumSize(QSize(16, 16));

        horizontalLayout_3->addWidget(percent);

        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        btn_Reset = new QPushButton(tab_sist);
        btn_Reset->setObjectName(QString::fromUtf8("btn_Reset"));

        horizontalLayout_3->addWidget(btn_Reset);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_3 = new QFrame(tab_sist);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_15 = new QLabel(tab_sist);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(43, 20));
        label_15->setMaximumSize(QSize(43, 20));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        t_esp = new QSpinBox(tab_sist);
        t_esp->setObjectName(QString::fromUtf8("t_esp"));
        t_esp->setMinimumSize(QSize(60, 20));
        t_esp->setMaximumSize(QSize(60, 20));
        t_esp->setMinimum(0);
        t_esp->setMaximum(99999999);
        t_esp->setValue(0);

        gridLayout->addWidget(t_esp, 0, 1, 1, 1);

        cb_sm_ret = new QComboBox(tab_sist);
        cb_sm_ret->setObjectName(QString::fromUtf8("cb_sm_ret"));
        cb_sm_ret->setMinimumSize(QSize(40, 20));
        cb_sm_ret->setMaximumSize(QSize(40, 20));

        gridLayout->addWidget(cb_sm_ret, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lb_Ttrans = new QLabel(tab_sist);
        lb_Ttrans->setObjectName(QString::fromUtf8("lb_Ttrans"));
        lb_Ttrans->setMinimumSize(QSize(50, 20));
        lb_Ttrans->setMaximumSize(QSize(50, 20));

        gridLayout_4->addWidget(lb_Ttrans, 0, 0, 1, 1);

        t_trans = new QSpinBox(tab_sist);
        t_trans->setObjectName(QString::fromUtf8("t_trans"));
        t_trans->setMinimumSize(QSize(60, 20));
        t_trans->setMaximumSize(QSize(60, 20));
        t_trans->setMaximum(99999999);

        gridLayout_4->addWidget(t_trans, 0, 1, 1, 1);

        cb_sm_tra = new QComboBox(tab_sist);
        cb_sm_tra->setObjectName(QString::fromUtf8("cb_sm_tra"));
        cb_sm_tra->setMinimumSize(QSize(40, 20));
        cb_sm_tra->setMaximumSize(QSize(40, 20));

        gridLayout_4->addWidget(cb_sm_tra, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);

        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_17 = new QLabel(tab_sist);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(51, 20));
        label_17->setMaximumSize(QSize(51, 20));

        gridLayout_6->addWidget(label_17, 0, 0, 1, 1);

        t_aplic = new QSpinBox(tab_sist);
        t_aplic->setObjectName(QString::fromUtf8("t_aplic"));
        t_aplic->setMinimumSize(QSize(60, 20));
        t_aplic->setMaximumSize(QSize(60, 20));
        t_aplic->setMaximum(99999999);

        gridLayout_6->addWidget(t_aplic, 0, 1, 1, 1);

        cb_sm_apl = new QComboBox(tab_sist);
        cb_sm_apl->setObjectName(QString::fromUtf8("cb_sm_apl"));
        cb_sm_apl->setMinimumSize(QSize(40, 20));
        cb_sm_apl->setMaximumSize(QSize(40, 20));

        gridLayout_6->addWidget(cb_sm_apl, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lb_Trep = new QLabel(tab_sist);
        lb_Trep->setObjectName(QString::fromUtf8("lb_Trep"));
        lb_Trep->setMinimumSize(QSize(55, 20));
        lb_Trep->setMaximumSize(QSize(55, 20));

        gridLayout_7->addWidget(lb_Trep, 0, 0, 1, 1);

        t_rep = new QSpinBox(tab_sist);
        t_rep->setObjectName(QString::fromUtf8("t_rep"));
        t_rep->setMinimumSize(QSize(60, 20));
        t_rep->setMaximumSize(QSize(60, 20));
        t_rep->setMaximum(99999999);

        gridLayout_7->addWidget(t_rep, 0, 1, 1, 1);

        cb_sm_rep = new QComboBox(tab_sist);
        cb_sm_rep->setObjectName(QString::fromUtf8("cb_sm_rep"));
        cb_sm_rep->setMinimumSize(QSize(40, 20));
        cb_sm_rep->setMaximumSize(QSize(40, 20));

        gridLayout_7->addWidget(cb_sm_rep, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_7);


        verticalLayout_2->addLayout(horizontalLayout);

        line_4 = new QFrame(tab_sist);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        btn_Guardar = new QPushButton(tab_sist);
        btn_Guardar->setObjectName(QString::fromUtf8("btn_Guardar"));
        btn_Guardar->setMinimumSize(QSize(100, 22));
        btn_Guardar->setMaximumSize(QSize(100, 22));
        btn_Guardar->setAutoDefault(false);
        btn_Guardar->setDefault(false);

        horizontalLayout_2->addWidget(btn_Guardar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pgrBar = new QProgressBar(tab_sist);
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

        btn_Cerrar = new QPushButton(tab_sist);
        btn_Cerrar->setObjectName(QString::fromUtf8("btn_Cerrar"));
        btn_Cerrar->setMinimumSize(QSize(100, 22));
        btn_Cerrar->setMaximumSize(QSize(100, 22));
        btn_Cerrar->setDefault(true);

        horizontalLayout_2->addWidget(btn_Cerrar);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        TabWid->addTab(tab_sist, QString());
        TabWid->setTabText(TabWid->indexOf(tab_sist), QString::fromUtf8("Fallas por sistemas"));
        tab_act = new QWidget();
        tab_act->setObjectName(QString::fromUtf8("tab_act"));
        gridLayout_2 = new QGridLayout(tab_act);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableAll = new QTableWidget(tab_act);
        tableAll->setObjectName(QString::fromUtf8("tableAll"));
        tableAll->setMinimumSize(QSize(781, 455));
        tableAll->setMaximumSize(QSize(781, 455));

        verticalLayout->addWidget(tableAll);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(13, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        pgrBar_All = new QProgressBar(tab_act);
        pgrBar_All->setObjectName(QString::fromUtf8("pgrBar_All"));
        pgrBar_All->setEnabled(true);
        pgrBar_All->setMinimumSize(QSize(700, 5));
        pgrBar_All->setMaximumSize(QSize(700, 5));
        pgrBar_All->setFont(font);
        pgrBar_All->setLayoutDirection(Qt::LeftToRight);
        pgrBar_All->setAutoFillBackground(false);
        pgrBar_All->setValue(24);
        pgrBar_All->setTextVisible(false);
        pgrBar_All->setOrientation(Qt::Horizontal);
        pgrBar_All->setInvertedAppearance(false);
        pgrBar_All->setTextDirection(QProgressBar::BottomToTop);

        horizontalLayout_6->addWidget(pgrBar_All);

        horizontalSpacer_12 = new QSpacerItem(18, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_6);

        line = new QFrame(tab_act);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_ResetAllFails = new QPushButton(tab_act);
        btn_ResetAllFails->setObjectName(QString::fromUtf8("btn_ResetAllFails"));
        btn_ResetAllFails->setMinimumSize(QSize(75, 23));
        btn_ResetAllFails->setMaximumSize(QSize(75, 23));

        horizontalLayout_4->addWidget(btn_ResetAllFails);

        horizontalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        le_var_All = new QLineEdit(tab_act);
        le_var_All->setObjectName(QString::fromUtf8("le_var_All"));
        le_var_All->setMinimumSize(QSize(180, 20));
        le_var_All->setMaximumSize(QSize(180, 20));
        le_var_All->setReadOnly(true);

        horizontalLayout_4->addWidget(le_var_All);

        btn_Reset_All = new QPushButton(tab_act);
        btn_Reset_All->setObjectName(QString::fromUtf8("btn_Reset_All"));
        btn_Reset_All->setMinimumSize(QSize(75, 23));

        horizontalLayout_4->addWidget(btn_Reset_All);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        le_searchAll = new QLineEdit(tab_act);
        le_searchAll->setObjectName(QString::fromUtf8("le_searchAll"));
        le_searchAll->setMinimumSize(QSize(180, 20));
        le_searchAll->setMaximumSize(QSize(180, 20));

        horizontalLayout_4->addWidget(le_searchAll);

        btn_searchAll = new QPushButton(tab_act);
        btn_searchAll->setObjectName(QString::fromUtf8("btn_searchAll"));
        btn_searchAll->setMinimumSize(QSize(100, 23));
        btn_searchAll->setMaximumSize(QSize(100, 23));

        horizontalLayout_4->addWidget(btn_searchAll);

        horizontalSpacer_8 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        btn_Cerrar_All = new QPushButton(tab_act);
        btn_Cerrar_All->setObjectName(QString::fromUtf8("btn_Cerrar_All"));
        btn_Cerrar_All->setMinimumSize(QSize(100, 22));
        btn_Cerrar_All->setMaximumSize(QSize(100, 22));
        btn_Cerrar_All->setDefault(true);

        horizontalLayout_4->addWidget(btn_Cerrar_All);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        TabWid->addTab(tab_act, QString());

        retranslateUi(Fallas);
        QObject::connect(btn_Cerrar, SIGNAL(clicked()), Fallas, SLOT(close()));
        QObject::connect(btn_Cerrar_All, SIGNAL(clicked()), Fallas, SLOT(close()));

        TabWid->setCurrentIndex(0);
        SeleccSist->setCurrentIndex(-1);
        cb_sm_ret->setCurrentIndex(0);
        cb_sm_tra->setCurrentIndex(0);
        cb_sm_apl->setCurrentIndex(0);
        cb_sm_rep->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Fallas);
    } // setupUi

    void retranslateUi(QDialog *Fallas)
    {
        Fallas->setWindowTitle(QApplication::translate("Fallas", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Fallas", "Seleccionar Sistema", 0, QApplication::UnicodeUTF8));
        btn_search->setText(QApplication::translate("Fallas", "Buscar Variable", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Fallas", "VARIABLE:", 0, QApplication::UnicodeUTF8));
        le_var->setText(QString());
        label_10->setText(QApplication::translate("Fallas", "VALOR:", 0, QApplication::UnicodeUTF8));
        le_val->setText(QString());
        percent->setText(QApplication::translate("Fallas", "%", 0, QApplication::UnicodeUTF8));
        btn_Reset->setText(QApplication::translate("Fallas", "Reset Falla", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Fallas", "Retardo:", 0, QApplication::UnicodeUTF8));
        cb_sm_ret->clear();
        cb_sm_ret->insertItems(0, QStringList()
         << QApplication::translate("Fallas", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Fallas", "min", 0, QApplication::UnicodeUTF8)
        );
        lb_Ttrans->setText(QApplication::translate("Fallas", "Evoluci\303\263n:", 0, QApplication::UnicodeUTF8));
        cb_sm_tra->clear();
        cb_sm_tra->insertItems(0, QStringList()
         << QApplication::translate("Fallas", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Fallas", "min", 0, QApplication::UnicodeUTF8)
        );
        label_17->setText(QApplication::translate("Fallas", "Aplicaci\303\263n:", 0, QApplication::UnicodeUTF8));
        cb_sm_apl->clear();
        cb_sm_apl->insertItems(0, QStringList()
         << QApplication::translate("Fallas", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Fallas", "min", 0, QApplication::UnicodeUTF8)
        );
        lb_Trep->setText(QApplication::translate("Fallas", "Reposici\303\263n:", 0, QApplication::UnicodeUTF8));
        cb_sm_rep->clear();
        cb_sm_rep->insertItems(0, QStringList()
         << QApplication::translate("Fallas", "s", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Fallas", "min", 0, QApplication::UnicodeUTF8)
        );
        btn_Guardar->setText(QApplication::translate("Fallas", "Aceptar Valor", 0, QApplication::UnicodeUTF8));
        btn_Cerrar->setText(QApplication::translate("Fallas", "Cerrar", 0, QApplication::UnicodeUTF8));
        btn_ResetAllFails->setText(QApplication::translate("Fallas", "Reset Todas", 0, QApplication::UnicodeUTF8));
        le_var_All->setText(QString());
        btn_Reset_All->setText(QApplication::translate("Fallas", "Reset Falla", 0, QApplication::UnicodeUTF8));
        btn_searchAll->setText(QApplication::translate("Fallas", "Buscar Variable", 0, QApplication::UnicodeUTF8));
        btn_Cerrar_All->setText(QApplication::translate("Fallas", "Cerrar", 0, QApplication::UnicodeUTF8));
        TabWid->setTabText(TabWid->indexOf(tab_act), QApplication::translate("Fallas", "Fallas Activas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Fallas: public Ui_Fallas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FALLAS_H
