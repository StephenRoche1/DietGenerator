/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRow_1;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuHome;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(412, 473);
        MainWindow->setCursor(QCursor(Qt::CrossCursor));
        actionRow_1 = new QAction(MainWindow);
        actionRow_1->setObjectName("actionRow_1");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 531, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 380, 111, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;  /* Default color, replace with your desired color */\n"
"}\n"
"\n"
"/* Set the background color for the checked state */\n"
"QPushButton:checked {\n"
"    background-color: #FFD700;  /* Color when checked, replace with your desired color */\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 380, 101, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;  /* Default color, replace with your desired color */\n"
"}\n"
"\n"
"/* Set the background color for the checked state */\n"
"QPushButton:checked {\n"
"    background-color: #FFD700;  /* Color when checked, replace with your desired color */\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 380, 101, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;  /* Default color, replace with your desired color */\n"
"}\n"
"\n"
"/* Set the background color for the checked state */\n"
"QPushButton:checked {\n"
"    background-color: #FFD700;  /* Color when checked, replace with your desired color */\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 380, 101, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;  /* Default color, replace with your desired color */\n"
"}\n"
"\n"
"/* Set the background color for the checked state */\n"
"QPushButton:checked {\n"
"    background-color: #FFD700;  /* Color when checked, replace with your desired color */\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 412, 22));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName("menuHome");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuHome->menuAction());
        menuHome->addAction(actionRow_1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRow_1->setText(QCoreApplication::translate("MainWindow", "Row 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Diet Generator", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "User Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Shopping List", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Shopping List", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Progress", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
