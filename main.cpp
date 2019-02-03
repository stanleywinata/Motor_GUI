#include "moni_con.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Moni_Con w;
    w.show();

    return a.exec();
}
