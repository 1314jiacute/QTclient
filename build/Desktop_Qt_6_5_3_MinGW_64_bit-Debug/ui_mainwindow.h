/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *port;
    QPushButton *connectServer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *ip;
    QPushButton *disconnect;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *record;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *msg;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendMsg;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(332, 435);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        port = new QLineEdit(widget);
        port->setObjectName("port");

        horizontalLayout->addWidget(port);

        connectServer = new QPushButton(widget);
        connectServer->setObjectName("connectServer");

        horizontalLayout->addWidget(connectServer);


        verticalLayout_3->addWidget(widget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        ip = new QLineEdit(widget_3);
        ip->setObjectName("ip");

        horizontalLayout_3->addWidget(ip);

        disconnect = new QPushButton(widget_3);
        disconnect->setObjectName("disconnect");

        horizontalLayout_3->addWidget(disconnect);


        verticalLayout_3->addWidget(widget_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        record = new QTextEdit(groupBox);
        record->setObjectName("record");

        verticalLayout->addWidget(record);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        msg = new QTextEdit(groupBox_2);
        msg->setObjectName("msg");

        verticalLayout_2->addWidget(msg);

        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sendMsg = new QPushButton(widget_2);
        sendMsg->setObjectName("sendMsg");

        horizontalLayout_2->addWidget(sendMsg);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 332, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243 \357\274\232", nullptr));
        connectServer->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " \346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\200\232\344\277\241\350\256\260\345\275\225 \357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        sendMsg->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
