#include "moni_con.h"
#include <QApplication>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QStringList>
#include <QTextStream>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    Moni_Con w;
//    w.show();
//    return a.exec();
//}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Moni_Con w;
    w.show();
    const int argumentCount = QCoreApplication::arguments().size();
    const QStringList argumentList = QCoreApplication::arguments();

    QTextStream standardOutput(stdout);

    if (argumentCount == 1) {
        standardOutput << QObject::tr("Usage: %1 <serialportname> [baudrate]")
                          .arg(argumentList.first()) << endl;
        return 1;
    }
    const QString serialPortName = argumentList.at(1);
    w.serialPortName = serialPortName;
    return a.exec();
}
