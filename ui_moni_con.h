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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Moni_Con)
    {
        if (Moni_Con->objectName().isEmpty())
            Moni_Con->setObjectName(QStringLiteral("Moni_Con"));
        Moni_Con->resize(452, 323);
        centralWidget = new QWidget(Moni_Con);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sonar = new QLCDNumber(centralWidget);
        sonar->setObjectName(QStringLiteral("sonar"));
        sonar->setGeometry(QRect(30, 70, 64, 23));
        temperature = new QLCDNumber(centralWidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(140, 70, 64, 23));
        ranger = new QLCDNumber(centralWidget);
        ranger->setObjectName(QStringLiteral("ranger"));
        ranger->setGeometry(QRect(30, 120, 64, 23));
        flex = new QLCDNumber(centralWidget);
        flex->setObjectName(QStringLiteral("flex"));
        flex->setGeometry(QRect(140, 120, 64, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 251, 21));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QStringLiteral("connect_button"));
        connect_button->setGeometry(QRect(230, 60, 101, 29));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 40, 91, 16));
        statuslab = new QLabel(centralWidget);
        statuslab->setObjectName(QStringLiteral("statuslab"));
        statuslab->setGeometry(QRect(350, 60, 91, 16));
        Moni_Con->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Moni_Con);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 452, 23));
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
    } // retranslateUi

};

namespace Ui {
    class Moni_Con: public Ui_Moni_Con {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONI_CON_H
