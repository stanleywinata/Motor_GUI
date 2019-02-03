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
    status = false;
    ui->connect_button->setCheckable(true);
    ui->statuslab->setStyleSheet("color:red");
}

Moni_Con::~Moni_Con()
{
    delete ui;
}

void Moni_Con::on_sonar_overflow()
{

}

void Moni_Con::on_temperature_overflow()
{

}

void Moni_Con::on_ranger_overflow()
{

}

void Moni_Con::on_flex_overflow()
{

}


void Moni_Con::on_connect_button_clicked(bool checked)
{
    if(checked){
        serialPort.setPortName("/dev/ttyACM0");
        serialPort.setBaudRate(QSerialPort::Baud9600);
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
        }

    }
    else{
        serialPort.close();
        status = false;
        ui->statuslab->setText("Disconnected");
        ui->statuslab->setStyleSheet("color:red");
    }
}

void Moni_Con::update(){
    if(status){
        serialPort.waitForReadyRead(500);
        QByteArray readData = serialPort.readLine();
        qDebug(readData);
        qDebug("x");
// Use start with I(nfrared),S(onar),F(lex), T(emperature) then the number Since max bytes might go through 7 digits"//
        //Writing to Serial
//        float number = 180;
//        QByteArray q_b;
//        q_b.setNum(number);
//        QByteArray response = "r"+q_b;
//        serialPort.write(response);
    }
}
