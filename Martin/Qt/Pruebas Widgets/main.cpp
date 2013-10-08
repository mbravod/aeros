#include <QtGui/QApplication>
#include "mi_prueba.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mi_Prueba w;
    w.show();
    
    return a.exec();
}
