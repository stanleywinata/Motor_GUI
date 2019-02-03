#include "moni_con.h"
#include "ui_moni_con.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>
#include <QTimer>
#include <QStringList>
#include <QTextStream>
#include <QCoreApplication>

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
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(100);
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
        if (!serialPort.open(QIODevice::ReadOnly)) {
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
    QByteArray readData = serialPort.readAll();
    qDebug(readData);
    }

}

