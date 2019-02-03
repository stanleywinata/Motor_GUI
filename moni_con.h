#ifndef MONI_CON_H
#define MONI_CON_H
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMainWindow>

namespace Ui {
class Moni_Con;
}

class Moni_Con : public QMainWindow
{
    Q_OBJECT

public:
    explicit Moni_Con(QWidget *parent = 0);
    ~Moni_Con();
    bool status;
    QSerialPort serialPort;
    QString serialPortName;
    QByteArray line;

private slots:

    void on_sonar_overflow();

    void on_temperature_overflow();

    void on_ranger_overflow();

    void on_flex_overflow();

    void on_connect_button_clicked(bool checked);

    void update();


private:
    Ui::Moni_Con *ui;
};

#endif // MONI_CON_H
