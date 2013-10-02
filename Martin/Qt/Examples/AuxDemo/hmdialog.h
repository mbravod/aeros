#ifndef HMDIALOG_H
#define HMDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QString>
#include <QButtonGroup>

namespace Ui {
class HMDialog;
}

class HMDialog : public QDialog
{
    Q_OBJECT

    public:
    explicit HMDialog(QWidget *parent = 0, QString var = "", int tipo = 0);
        ~HMDialog();

        // Métodos públicos
        void setVar(QString id);
        void SeeFrame(int n);
        void SetPaso();





    private:
        Ui::HMDialog *ui;

        // Strings de título
        QString strLR;
        QString strMA;
        QString strOP;

        // Banderas de estado
        bool paso1;
        bool paso2;
        bool paso3;

        // Variables propias
        QString varID;
        int tipo;

        // Auxiliares
        QButtonGroup *btnsLR;
        QButtonGroup *btnsMA;
        QButtonGroup *btnsEDO_1;
        QButtonGroup *btnsEDO_2;

    private slots:
        void ShowLR();
        void ShowMA();
        void ShowEDO();

        void SetLocal(bool e);
        void SetManual(bool e);
        void SetOpen(bool e);

        void SetRemoto(bool e);
        void SetAuto(bool e);
        void SetClose(bool e);
};

#endif // HMDIALOG_H
