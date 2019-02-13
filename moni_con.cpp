#include "moni_con.h"
#include "ui_moni_con.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>
#include <QTimer>
#include <QStringList>
#include <QTextStream>
#include <QCoreApplication>
#include <string>
#include <sstream>

Moni_Con::Moni_Con(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Moni_Con)
{
    ui->setupUi(this);
    QSerialPort serial;
    ui->ranger->setPalette(Qt::yellow);
    ui->flex->setPalette(Qt::yellow);
    ui->temperature->setPalette(Qt::yellow);
    ui->sonar->setPalette(Qt::yellow);
    ui->read_dc->setPalette(Qt::yellow);
    ui->dc_set_lcd->setPalette(Qt::yellow);
    status = false;
    ui->connect_button->setCheckable(true);
    ui->statuslab->setStyleSheet("color:red");
    ui->cmd_mode->setStyleSheet("color:yellow");
    ui->tabWidget->setUsesScrollButtons(false);
    flag_tp = false;
    flag_ir = false;
    flag_us = false;
    flag_fl = false;
    mode = 4;
}

Moni_Con::~Moni_Con()
{
    delete ui;
}


void Moni_Con::on_connect_button_clicked(bool checked)
{
    if(checked){
        serialPort.setPortName("/dev/ttyACM0");
        serialPort.setBaudRate(QSerialPort::Baud115200);
        qDebug("connecting");
        if (!serialPort.open(QIODevice::ReadWrite)) {
                qInfo("Cant Read, try to connect again");
                status = false;
                ui->statuslab->setText("Disconnected");
                ui->statuslab->setStyleSheet("color:red");
                checked = false;
            }
        else{
            status = true;
            ui->statuslab->setText("Connected");
            ui->statuslab->setStyleSheet("color:green");
            connect(&serialPort, SIGNAL(readyRead()), this, SLOT(update()));
            ui->connect_button->setText("Disconnect");
            qDebug("connection succesful !");
        }

    }
    else{
        serialPort.close();
        status = false;
        ui->statuslab->setText("Disconnected");
        ui->statuslab->setStyleSheet("color:red");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
        ui->connect_button->setText("Connect");
        qDebug("Connection Closed !");
    }
}

void Moni_Con::lcd_update(QByteArray data){
    QByteArray numb = data.mid(2);
    QByteArray code = data.left(2);
    QString cod = QString::fromUtf8(code);
    QString num = QString::fromUtf8(numb);
    qDebug(data);
    if(cod == "US"){
        ui->sonar->display(num);
    }
    else if(cod == "IR"){
        ui->ranger->display(num);
    }
    else if(cod == "TP"){
        ui->temperature->display(num.toInt());
    }
    else if(cod == "FL"){
        ui->flex->display(num);
    }
    else if(cod == "DA"){
        ui->read_dc->display(num);
    }
    else if(cod == "DS"){
        ui->read_dc->display(num);
    }
}

void Moni_Con::update(){
    if(status){
// Reading Data from Sensors
        serialPort.waitForReadyRead(500);
        QByteArray readData = serialPort.readLine();
        lcd_update(readData);
        serialPort.clear();
    }
}


void Moni_Con::on_cmd_servo_clicked()
{
    if(status){
        QByteArray code;
        code = "SE";
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("Servo Controller");
        ui->cmd_mode->setStyleSheet("color:green");
        ui->read_dc->display('0');
        mode = 0;
        color_update(mode);
    }
    else{
        qWarning("System Not Connected, Please Try to connect");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }
}

void Moni_Con::on_cmd_step_clicked()
{
    if(status){
        QByteArray code;
        code = "ST";
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("Stepper Controller");
        ui->cmd_mode->setStyleSheet("color:green");
        ui->read_dc->display('0');
        mode = 1;
        color_update(mode);
    }
    else{
        qWarning("System Not Connected, Please Try to connect");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }
}

void Moni_Con::on_cmd_dcpos_clicked()
{
    if(status){
        QByteArray code;
        code = "DA";
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("DC Pos Controller");
        ui->cmd_mode->setStyleSheet("color:green");
        dc_mod = true;
        mode = 2;
        color_update(mode);
    }
    else{
        qWarning("System Not Connected, Please Try to connect");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }
}

void Moni_Con::on_cmd_dcvel_clicked()
{
    if(status){
        QByteArray code;
        code = "DS";
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("DC Vel Controller");
        ui->cmd_mode->setStyleSheet("color:green");
        dc_mod = false;
        mode = 3;
        color_update(mode);
    }
    else{
        qWarning("System Not Connected, Please Try to connect");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }
}

void Moni_Con::on_cmd_dcvinput_clicked()
{
    if(true){
//        QByteArray numb;
//        numb.setNum(dc_manual_speed);
//        QByteArray code = "X" + numb;
        QByteArray code;
        code.setNum(dc_manual_speed);
        qDebug(code);
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("DC Manual Input");
        ui->cmd_mode->setStyleSheet("color:green");
        mode = 4;
        color_update(mode);
        ui->dc_set_lcd->display(dc_manual_speed);
    }
    else{
        qWarning("System Not Connected, Please Try to connect");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }

}

void Moni_Con::on_cmd_off_clicked()
{
    if(status){
        QByteArray code;
        code = "KI";
        serialPort.waitForBytesWritten(500);
        serialPort.write(code+"\n");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
        ui->read_dc->display('0');
        mode = 5;
        color_update(mode);
    }
}

void Moni_Con::color_update(int modus){
    ui->ranger->setPalette(Qt::yellow);
    ui->sonar->setPalette(Qt::yellow);
    ui->flex->setPalette(Qt::yellow);
    ui->temperature->setPalette(Qt::yellow);
    ui->read_dc->setPalette(Qt::yellow);
    ui->dc_set_lcd->setPalette(Qt::yellow);
    if(modus == 0){
        ui->sonar->setPalette(Qt::green);
    }
    else if(modus == 1 ){
        ui->ranger->setPalette(Qt::green);
    }
    else if(modus == 2 ){
        ui->temperature->setPalette(Qt::green);
    }
    else if(modus == 3 ){
        ui->flex->setPalette(Qt::green);
        ui->read_dc->setPalette(Qt::green);
    }
    else if(modus == 4){
        ui->read_dc->setPalette(Qt::green);
        ui->dc_set_lcd->setPalette(Qt::green);
    }

}

void Moni_Con::on_dial_2_valueChanged(int value)
{
    dc_manual_speed = value;
}
