#include "moni_con.h"
#include "ui_moni_con.h"

Moni_Con::Moni_Con(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Moni_Con)
{
    ui->setupUi(this);
}

Moni_Con::~Moni_Con()
{
    delete ui;
}
