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
    ui->ranger->setPalette(Qt::green);
    ui->flex->setPalette(Qt::green);
    ui->temperature->setPalette(Qt::green);
    ui->sonar->setPalette(Qt::green);
    ui->read_dc->setPalette(Qt::green);
    status = false;
    ui->connect_button->setCheckable(true);
    ui->statuslab->setStyleSheet("color:red");
    ui->cmd_mode->setStyleSheet("color:yellow");
    flag_tp = false;
    flag_ir = false;
    flag_us = false;
    flag_fl = false;

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
                qInfo("Cant Read");
                QCoreApplication::quit();
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
            qDebug("connected");
            serialPort.write("SER");
        }

    }
    else{
        serialPort.close();
        status = false;
        ui->statuslab->setText("Disconnected");
        ui->statuslab->setStyleSheet("color:red");
        ui->cmd_mode->setText("None");
        ui->cmd_mode->setStyleSheet("color:yellow");
    }
}

void Moni_Con::lcd_update(QByteArray data){
    QByteArray numb = data.mid(2);
    QByteArray code = data.left(2);
    QString cod = QString::fromUtf8(code);
    QString num = QString::fromUtf8(numb);

    if(cod == "US"){
        ui->sonar->display(num);
        flag_us = true;
    }
    else if(cod == "IR"){
        ui->ranger->display(num);
        flag_ir = true;
    }
    else if(cod == "TP"){
        ui->temperature->display(num.toInt());
        flag_tp = true;
        qDebug(num.toLatin1());
    }
    else if(cod == "FL"){
        ui->flex->display(num);
        flag_fl = true;
//        qDebug("hi");
    }
    else if(cod == "DA"){
        ui->read_dc->display(num);
        ui->dclabel->setText("DC Motor(o)");
    }
    else if(cod == "DS"){
        ui->read_dc->display(num);
        ui->dclabel->setText("DC Motor(RPM)");
    }
}

void Moni_Con::update(){
    if(status){
// Reading Data from Sensors
        serialPort.waitForReadyRead(500);
        QByteArray readData = serialPort.readLine();
        lcd_update(readData);
        if(flag_fl && flag_ir && flag_tp && flag_us){
            serialPort.clear();
            flag_tp = false;
            flag_ir = false;
            flag_us = false;
            flag_fl = false;
        }
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
    }
}




void Moni_Con::on_kp_sliderMoved(int position)
{
    QByteArray code;
    QByteArray num;
    float max = 50;
    float min = 0;
    if(dc_mod){
        code = "KPP" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    else{
        code = "KPV" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    qDebug(code);
}

void Moni_Con::on_ki_sliderMoved(int position)
{
    QByteArray code;
    QByteArray num;
    float max = 50;
    float min = 0;
    if(dc_mod){
        code = "KIP" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    else{
        code = "KIV" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    qDebug(code);

}

void Moni_Con::on_kd_sliderMoved(int position)
{
    QByteArray code;
    QByteArray num;
    float max = 50;
    float min = 0;
    if(dc_mod){
        code = "KPP" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    else{
        code = "KPV" + num.setNum(((100-position)*min+(position)*max)/100);
    }
    qDebug(code);
}
