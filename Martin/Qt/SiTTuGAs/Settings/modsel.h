#ifndef MODSEL_H
#define MODSEL_H

#include <QDialog>
#include "Settings/settings.h"

namespace Ui {
    class MODSEL;
}

class MODSEL : public QDialog
{
    Q_OBJECT

public:
    explicit MODSEL(QWidget *parent,Settings *s);
    ~MODSEL();

private:
    Ui::MODSEL *ui;
    Settings *m_settings;

private slots:
    void instructor();
    void operador();
    void passSITTUGAS();

};

#endif // MODSEL_H
