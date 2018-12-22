#include "SatCommu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SatCommu w;

    w.show();

    return a.exec();
}
