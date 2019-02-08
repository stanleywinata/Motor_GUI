/********************************************************************************
** Form generated from reading UI file 'moni_con.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONI_CON_H
#define UI_MONI_CON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Moni_Con
{
public:
    QWidget *centralWidget;
    QLCDNumber *sonar;
    QLCDNumber *temperature;
    QLCDNumber *ranger;
    QLCDNumber *flex;
    QLabel *label;
    QPushButton *connect_button;
    QLabel *label_2;
    QLabel *statuslab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *cmd_servo;
    QPushButton *cmd_step;
    QPushButton *cmd_dcpos;
    QPushButton *cmd_dcvel;
    QDial *ki;
    QDial *kd;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QDial *kp;
    QLabel *dclabel;
    QLabel *label_13;
    QLCDNumber *read_dc;
    QLabel *label_14;
    QLabel *cmd_mode;
    QPushButton *cmd_off;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Moni_Con)
    {
        if (Moni_Con->objectName().isEmpty())
            Moni_Con->setObjectName(QStringLiteral("Moni_Con"));
        Moni_Con->resize(533, 434);
        centralWidget = new QWidget(Moni_Con);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sonar = new QLCDNumber(centralWidget);
        sonar->setObjectName(QStringLiteral("sonar"));
        sonar->setGeometry(QRect(120, 110, 91, 21));
        temperature = new QLCDNumber(centralWidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(20, 110, 91, 21));
        ranger = new QLCDNumber(centralWidget);
        ranger->setObjectName(QStringLiteral("ranger"));
        ranger->setGeometry(QRect(20, 160, 91, 21));
        flex = new QLCDNumber(centralWidget);
        flex->setObjectName(QStringLiteral("flex"));
        flex->setGeometry(QRect(120, 160, 91, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 251, 21));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QStringLiteral("connect_button"));
        connect_button->setGeometry(QRect(310, 60, 101, 29));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 50, 91, 16));
        statuslab = new QLabel(centralWidget);
        statuslab->setObjectName(QStringLiteral("statuslab"));
        statuslab->setGeometry(QRect(430, 70, 91, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 91, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 90, 71, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 90, 67, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 140, 67, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 120, 81, 21));
        cmd_servo = new QPushButton(centralWidget);
        cmd_servo->setObjectName(QStringLiteral("cmd_servo"));
        cmd_servo->setGeometry(QRect(270, 150, 101, 29));
        cmd_step = new QPushButton(centralWidget);
        cmd_step->setObjectName(QStringLiteral("cmd_step"));
        cmd_step->setGeometry(QRect(380, 150, 101, 29));
        cmd_dcpos = new QPushButton(centralWidget);
        cmd_dcpos->setObjectName(QStringLiteral("cmd_dcpos"));
        cmd_dcpos->setGeometry(QRect(270, 200, 101, 29));
        cmd_dcvel = new QPushButton(centralWidget);
        cmd_dcvel->setObjectName(QStringLiteral("cmd_dcvel"));
        cmd_dcvel->setGeometry(QRect(380, 200, 101, 29));
        ki = new QDial(centralWidget);
        ki->setObjectName(QStringLiteral("ki"));
        ki->setGeometry(QRect(100, 290, 61, 71));
        kd = new QDial(centralWidget);
        kd->setObjectName(QStringLiteral("kd"));
        kd->setGeometry(QRect(180, 290, 61, 71));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 270, 41, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 350, 21, 21));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 350, 21, 21));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 350, 21, 21));
        kp = new QDial(centralWidget);
        kp->setObjectName(QStringLiteral("kp"));
        kp->setGeometry(QRect(20, 290, 61, 71));
        dclabel = new QLabel(centralWidget);
        dclabel->setObjectName(QStringLiteral("dclabel"));
        dclabel->setGeometry(QRect(70, 190, 111, 21));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 60, 61, 21));
        read_dc = new QLCDNumber(centralWidget);
        read_dc->setObjectName(QStringLiteral("read_dc"));
        read_dc->setGeometry(QRect(70, 210, 91, 21));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(310, 290, 41, 21));
        cmd_mode = new QLabel(centralWidget);
        cmd_mode->setObjectName(QStringLiteral("cmd_mode"));
        cmd_mode->setGeometry(QRect(360, 290, 151, 21));
        cmd_off = new QPushButton(centralWidget);
        cmd_off->setObjectName(QStringLiteral("cmd_off"));
        cmd_off->setGeometry(QRect(320, 240, 101, 29));
        Moni_Con->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Moni_Con);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 23));
        Moni_Con->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Moni_Con);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Moni_Con->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Moni_Con);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Moni_Con->setStatusBar(statusBar);

        retranslateUi(Moni_Con);

        QMetaObject::connectSlotsByName(Moni_Con);
    } // setupUi

    void retranslateUi(QMainWindow *Moni_Con)
    {
        Moni_Con->setWindowTitle(QApplication::translate("Moni_Con", "Moni_Con", 0));
        label->setText(QApplication::translate("Moni_Con", "TEAM RAMS Mission Control", 0));
        connect_button->setText(QApplication::translate("Moni_Con", "Connect", 0));
        label_2->setText(QApplication::translate("Moni_Con", "Serial Status", 0));
        statuslab->setText(QApplication::translate("Moni_Con", "Disconnected", 0));
        label_3->setText(QApplication::translate("Moni_Con", "Infrafred(cm)", 0));
        label_4->setText(QApplication::translate("Moni_Con", "Sonar(cm)", 0));
        label_5->setText(QApplication::translate("Moni_Con", "Temp(C)", 0));
        label_6->setText(QApplication::translate("Moni_Con", "Flex(Nm)", 0));
        label_7->setText(QApplication::translate("Moni_Con", "Command", 0));
        cmd_servo->setText(QApplication::translate("Moni_Con", "Servo", 0));
        cmd_step->setText(QApplication::translate("Moni_Con", "Stepper", 0));
        cmd_dcpos->setText(QApplication::translate("Moni_Con", "DC Position", 0));
        cmd_dcvel->setText(QApplication::translate("Moni_Con", "DC Velocity", 0));
        label_8->setText(QApplication::translate("Moni_Con", "Gains", 0));
        label_9->setText(QApplication::translate("Moni_Con", "Kp", 0));
        label_11->setText(QApplication::translate("Moni_Con", "Ki", 0));
        label_12->setText(QApplication::translate("Moni_Con", "Kd", 0));
        dclabel->setText(QApplication::translate("Moni_Con", "DC Motor", 0));
        label_13->setText(QApplication::translate("Moni_Con", "Sensors", 0));
        label_14->setText(QApplication::translate("Moni_Con", "Mode:", 0));
        cmd_mode->setText(QApplication::translate("Moni_Con", "None", 0));
        cmd_off->setText(QApplication::translate("Moni_Con", "Shut Down", 0));
    } // retranslateUi

};

namespace Ui {
    class Moni_Con: public Ui_Moni_Con {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONI_CON_H
