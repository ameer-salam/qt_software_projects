/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pomodoro;
    QPushButton *short_break;
    QPushButton *long_break;
    QPushButton *start;
    QLabel *label;
    QPushButton *reset;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 448);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow::MainWindow(QWidget *parent)\n"
"    : QMainWindow(parent)\n"
"    , ui(new Ui::MainWindow)\n"
"{\n"
"    ui->setupUi(this);\n"
"\n"
"    // Set the background color using a stylesheet\n"
"    this->setStyleSheet(\"background-color: lightgray;\"); // Set to any color you want\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pomodoro = new QPushButton(centralwidget);
        pomodoro->setObjectName("pomodoro");
        pomodoro->setGeometry(QRect(0, 0, 267, 70));
        pomodoro->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #B03060;  /* Pleasantly bright maroon */\n"
"    border-radius: 0px;  /* Rounded corners */\n"
"    border: 2px #8B1C47;  /* Slightly darker maroon for the border */\n"
"    padding: 10px;\n"
"    font-size: 30px;\n"
"    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    color: #FFFFFF;  /* White font color for contrast */\n"
"    transition: background-color 0.2s, transform 0.1s;  /* Smooth transition for background color and transform */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C04070;  /* Slightly lighter maroon when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #8B1C47;  /* Darker maroon when pressed */\n"
"    transform: translateY(2px);  /* Move button down slightly to simulate pressing */\n"
"}\n"
"\n"
"#pomodoro:checked {\n"
"    border: 2px solid black;  /* Transparent border */\n"
"    box-shadow: 0 -2px 8px rgba(0, 0, 0, 0.3), 2px -2px 4px rgba(0, 0, 0, 0."
                        "3), -2px 0 4px rgba(0, 0, 0, 0.3);  /* Shadow effect on top, left, and right */\n"
"}\n"
"\n"
"/* Short Break and Long Break Button Specific Styles */\n"
"#short_break:checked,\n"
"#long_break:checked {\n"
"    border-bottom: 2px solid #76c7c0;  /* Border only at the bottom */\n"
"    box-shadow: none;  /* No shadow effect */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;  /* Remove focus outline */\n"
"}\n"
""));
        short_break = new QPushButton(centralwidget);
        short_break->setObjectName("short_break");
        short_break->setGeometry(QRect(267, 0, 267, 70));
        short_break->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;  /* Light green */\n"
"    border-radius: 0px;  /* No rounded corners */\n"
"    border: 2px #4CAF50;  /* Slightly darker green for the border */\n"
"    padding: 10px;\n"
"    font-size: 30px;\n"
"	font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    color: #FFFFFF;  /* White font color for contrast */\n"
"    transition: background-color 0.3s ease, transform 0.1s ease;  /* Smooth transitions */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7CC576;  /* Darker green for hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4A7F4F;  /* Even darker green for pressed state */\n"
"    transform: translateY(2px);  /* Move button down slightly to simulate pressing */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;  /* Remove focus outline */\n"
"}\n"
""));
        long_break = new QPushButton(centralwidget);
        long_break->setObjectName("long_break");
        long_break->setGeometry(QRect(534, 0, 267, 70));
        long_break->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ADD8E6;  /* Light blue */\n"
"    border-radius: 0px;  /* Rounded corners */\n"
"    border: 2px #ADD8E6;  /* Slightly darker blue for the border */\n"
"    padding: 10px;\n"
"    font-size: 30px;\n"
"	font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    color: #FFFFFF;  /* White font color for contrast */\n"
"    transition: background-color 0.3s ease, transform 0.1s ease;  /* Smooth transitions */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7EC8E3;  /* Darker blue for hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5A9BD5;  /* Even darker blue for pressed state */\n"
"    transform: translateY(2px);  /* Move button down slightly to simulate pressing */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;  /* Remove focus outline */\n"
"}\n"
""));
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(300, 340, 200, 70));
        start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* Pleasantly bright maroon */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    border: 2px solid white;  /* Slightly darker maroon for the border */\n"
"    padding: 10px;\n"
"    font-size: 30px;\n"
"	font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    color: #FFFFFF;  /* White font color for contrast */\n"
"    transition: background-color 0.2s, transform 0.1s;  /* Smooth transition for background color and transform */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C04070;  /* Slightly lighter maroon when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #8B1C47;  /* Darker maroon when pressed */\n"
"    transform: translateY(2px);  /* Move button down slightly to simulate pressing */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;  /* Remove focus outline */\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(19, 83, 761, 231));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFFFFF;  /* White font color */\n"
"    font-size: 110px;  /* Extra-large font size */\n"
"    font-weight: bold;  /* Extra-bold font */\n"
"    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    /*background-color: #FFFFFF;  Black background for contrast */\n"
"    border-radius: 15px;  /* Rounded corners for the label */\n"
"    padding: 10px;  /* Padding around the text */\n"
"    qproperty-alignment: 'AlignCenter';  /* Center align the text */\n"
"}\n"
""));
        reset = new QPushButton(centralwidget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(210, 340, 70, 70));
        reset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;  /* Pleasantly bright maroon */\n"
"    border-radius: 15px;  /* Rounded corners */\n"
"    border: 2px solid white;  /* Slightly darker maroon for the border */\n"
"    padding: 10px;\n"
"    font-size: 30px;\n"
"	font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;  /* Rounded corner fonts */\n"
"    color: #FFFFFF;  /* White font color for contrast */\n"
"    transition: background-color 0.2s, transform 0.1s;  /* Smooth transition for background color and transform */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C04070;  /* Slightly lighter maroon when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #8B1C47;  /* Darker maroon when pressed */\n"
"    transform: translateY(2px);  /* Move button down slightly to simulate pressing */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;  /* Remove focus outline */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pomodoro->setText(QCoreApplication::translate("MainWindow", "Pomodoro", nullptr));
        short_break->setText(QCoreApplication::translate("MainWindow", "Short Break", nullptr));
        long_break->setText(QCoreApplication::translate("MainWindow", "Long Break", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Get. Set. GO!", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "\360\237\224\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
