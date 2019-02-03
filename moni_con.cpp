#include "moni_con.h"
#include "ui_moni_con.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <iostream>

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
        status = true;
        ui->statuslab->setPalette(Qt::green);
        ui->statuslab->setStyleSheet("color:green");
    }
    else{
        status = false;
        ui->statuslab->setText("Disconnected");
        ui->statuslab->setStyleSheet("color:red");
    }
    std::cout<<status;
}

