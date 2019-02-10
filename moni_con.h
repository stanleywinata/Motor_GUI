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
    bool dc_mod; //0 == Speed, 1 == Position
    bool flag_fl;
    bool flag_us;
    bool flag_tp;
    bool flag_ir;

private slots:


    void on_connect_button_clicked(bool checked);

    void update();


    void lcd_update(QByteArray data);


    void on_cmd_servo_clicked();

    void on_cmd_step_clicked();

    void on_cmd_dcpos_clicked();

    void on_cmd_dcvel_clicked();

    void on_cmd_off_clicked();

    void on_kp_sliderMoved(int position);

    void on_ki_sliderMoved(int position);

    void on_kd_sliderMoved(int position);

private:
    Ui::Moni_Con *ui;
};

#endif // MONI_CON_H
