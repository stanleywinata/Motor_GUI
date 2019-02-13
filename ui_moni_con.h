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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Moni_Con
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLCDNumber *temperature;
    QLCDNumber *flex;
    QLabel *label_13;
    QLabel *label_2;
    QPushButton *cmd_step;
    QLCDNumber *ranger;
    QLCDNumber *sonar;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *cmd_mode;
    QPushButton *cmd_servo;
    QLabel *label_6;
    QPushButton *cmd_dcpos;
    QLCDNumber *read_dc;
    QLabel *label_14;
    QPushButton *cmd_off;
    QLabel *statuslab;
    QPushButton *cmd_dcvel;
    QLabel *label;
    QLabel *dclabel;
    QPushButton *connect_button;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *cmd_dcvinput;
    QDial *dial_2;
    QLCDNumber *dc_set_lcd;
    QLabel *label_8;
    QWidget *tab_2;
    QDial *dial;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Moni_Con)
    {
        if (Moni_Con->objectName().isEmpty())
            Moni_Con->setObjectName(QStringLiteral("Moni_Con"));
        Moni_Con->resize(566, 428);
        centralWidget = new QWidget(Moni_Con);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 581, 431));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        temperature = new QLCDNumber(tab);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(20, 100, 91, 21));
        flex = new QLCDNumber(tab);
        flex->setObjectName(QStringLiteral("flex"));
        flex->setGeometry(QRect(120, 150, 91, 21));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 50, 61, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 40, 91, 16));
        cmd_step = new QPushButton(tab);
        cmd_step->setObjectName(QStringLiteral("cmd_step"));
        cmd_step->setGeometry(QRect(380, 140, 101, 29));
        ranger = new QLCDNumber(tab);
        ranger->setObjectName(QStringLiteral("ranger"));
        ranger->setGeometry(QRect(20, 150, 91, 21));
        sonar = new QLCDNumber(tab);
        sonar->setObjectName(QStringLiteral("sonar"));
        sonar->setGeometry(QRect(120, 100, 91, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 91, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 110, 81, 21));
        cmd_mode = new QLabel(tab);
        cmd_mode->setObjectName(QStringLiteral("cmd_mode"));
        cmd_mode->setGeometry(QRect(80, 240, 151, 21));
        cmd_servo = new QPushButton(tab);
        cmd_servo->setObjectName(QStringLiteral("cmd_servo"));
        cmd_servo->setGeometry(QRect(270, 140, 101, 29));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 130, 67, 17));
        cmd_dcpos = new QPushButton(tab);
        cmd_dcpos->setObjectName(QStringLiteral("cmd_dcpos"));
        cmd_dcpos->setGeometry(QRect(270, 190, 101, 29));
        read_dc = new QLCDNumber(tab);
        read_dc->setObjectName(QStringLiteral("read_dc"));
        read_dc->setGeometry(QRect(70, 200, 91, 21));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 240, 41, 21));
        cmd_off = new QPushButton(tab);
        cmd_off->setObjectName(QStringLiteral("cmd_off"));
        cmd_off->setGeometry(QRect(320, 230, 101, 29));
        statuslab = new QLabel(tab);
        statuslab->setObjectName(QStringLiteral("statuslab"));
        statuslab->setGeometry(QRect(430, 60, 91, 16));
        cmd_dcvel = new QPushButton(tab);
        cmd_dcvel->setObjectName(QStringLiteral("cmd_dcvel"));
        cmd_dcvel->setGeometry(QRect(380, 190, 101, 29));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 251, 21));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        dclabel = new QLabel(tab);
        dclabel->setObjectName(QStringLiteral("dclabel"));
        dclabel->setGeometry(QRect(70, 180, 111, 21));
        connect_button = new QPushButton(tab);
        connect_button->setObjectName(QStringLiteral("connect_button"));
        connect_button->setGeometry(QRect(310, 50, 101, 29));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 80, 71, 21));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 80, 111, 17));
        cmd_dcvinput = new QPushButton(tab);
        cmd_dcvinput->setObjectName(QStringLiteral("cmd_dcvinput"));
        cmd_dcvinput->setGeometry(QRect(410, 290, 101, 29));
        dial_2 = new QDial(tab);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(350, 270, 61, 61));
        dc_set_lcd = new QLCDNumber(tab);
        dc_set_lcd->setObjectName(QStringLiteral("dc_set_lcd"));
        dc_set_lcd->setGeometry(QRect(240, 300, 64, 23));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(206, 280, 131, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        dial = new QDial(tab_2);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(100, 90, 50, 64));
        tabWidget->addTab(tab_2, QString());
        Moni_Con->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Moni_Con);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 566, 23));
        Moni_Con->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Moni_Con);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Moni_Con->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Moni_Con);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Moni_Con->setStatusBar(statusBar);

        retranslateUi(Moni_Con);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Moni_Con);
    } // setupUi

    void retranslateUi(QMainWindow *Moni_Con)
    {
        Moni_Con->setWindowTitle(QApplication::translate("Moni_Con", "Moni_Con", 0));
        label_13->setText(QApplication::translate("Moni_Con", "Sensors", 0));
        label_2->setText(QApplication::translate("Moni_Con", "Serial Status", 0));
        cmd_step->setText(QApplication::translate("Moni_Con", "Stepper", 0));
        label_3->setText(QApplication::translate("Moni_Con", "Infrafred(cm)", 0));
        label_7->setText(QApplication::translate("Moni_Con", "Command", 0));
        cmd_mode->setText(QApplication::translate("Moni_Con", "None", 0));
        cmd_servo->setText(QApplication::translate("Moni_Con", "Servo", 0));
        label_6->setText(QApplication::translate("Moni_Con", "Flex(Nm)", 0));
        cmd_dcpos->setText(QApplication::translate("Moni_Con", "DC Position", 0));
        label_14->setText(QApplication::translate("Moni_Con", "Mode:", 0));
        cmd_off->setText(QApplication::translate("Moni_Con", "Shut Down", 0));
        statuslab->setText(QApplication::translate("Moni_Con", "Disconnected", 0));
        cmd_dcvel->setText(QApplication::translate("Moni_Con", "DC Velocity", 0));
        label->setText(QApplication::translate("Moni_Con", "TEAM RAMS Mission Control", 0));
        dclabel->setText(QApplication::translate("Moni_Con", "DC Motor(RPM)", 0));
        connect_button->setText(QApplication::translate("Moni_Con", "Connect", 0));
        label_4->setText(QApplication::translate("Moni_Con", "Sonar(cm)", 0));
        label_5->setText(QApplication::translate("Moni_Con", "Potentio(mV)", 0));
        cmd_dcvinput->setText(QApplication::translate("Moni_Con", "DC Input", 0));
        label_8->setText(QApplication::translate("Moni_Con", "DC Set Speed(RPM)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Moni_Con", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Moni_Con", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Moni_Con: public Ui_Moni_Con {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONI_CON_H
