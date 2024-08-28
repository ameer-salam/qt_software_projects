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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *new_box;
    QPushButton *previous_box;
    QPushButton *abou;
    QLabel *stoic_thoughts;
    QLabel *stoic_thoughts_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #121212; /* Dark background color */\n"
"    color: #FFFFFF; /* White text color for readability */\n"
"    border: none; /* No border for the main window */\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: #1E1E1E; /* Darker background for scroll areas */\n"
"    border: 2px ; /* Border matching the theme color */\n"
"    border-radius: 10px; /* Rounded edges */\n"
"    padding: 5px; /* Inner padding for the content */\n"
"    margin: 10px; /* Outer margin */\n"
"    box-shadow: inset 0 4px 8px rgba(0, 0, 0, 0); /* Inward shadow for depth effect */\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 752, 552));
        new_box = new QPushButton(scrollAreaWidgetContents);
        new_box->setObjectName("new_box");
        new_box->setGeometry(QRect(290, 100, 220, 50));
        new_box->setStyleSheet(QString::fromUtf8("/* Base Style for PushButton */\n"
"QPushButton {\n"
"    background-color: #121212; /* Background color matching the window */\n"
"    color: white; /* Text color with the theme color */\n"
"    border: 2px solid #1E1E1E; /* Slightly lighter border for definition */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"    padding: 10px 20px; /* Padding inside the button */\n"
"    font-size: 16px; /* Font size for button text */\n"
"    font-family: 'Arial', sans-serif; /* Font style */\n"
"    font-weight: bold; /* Bold text */\n"
"    box-shadow: inset 3px 3px 6px rgba(0, 0, 0, 0.5), inset -3px -3px 6px rgba(50, 50, 50, 0.2); /* Inward shadow for depth effect */\n"
"    transition: background-color 0.2s ease, box-shadow 0.2s ease, transform 0.1s ease; /* Smooth transitions */\n"
"}\n"
"\n"
"/* Hover Effect */\n"
"QPushButton:hover {\n"
"    background-color: #1E1E1E; /* Slightly lighter color on hover */\n"
"    color: #ffffff; /* White text color on hover for better contrast */\n"
"    box-shadow: inset 2p"
                        "x 2px 4px rgba(0, 0, 0, 0.6), inset -2px -2px 4px rgba(50, 50, 50, 0.3); /* Enhance shadow effect on hover */\n"
"}\n"
"\n"
"/* Pressed Effect */\n"
"QPushButton:pressed {\n"
"    background-color: #0D0D0D; /* Slightly darker color when pressed */\n"
"    color: #f9db62; /* Retain theme color on pressed */\n"
"    box-shadow: inset 5px 5px 10px rgba(0, 0, 0, 0.8), inset -1px -1px 2px rgba(50, 50, 50, 0.1); /* Deep inset shadow to give pressed-in effect */\n"
"    transform: translateY(1px); /* Slight downward shift to give pressed effect */\n"
"}\n"
"\n"
"/* Focus Effect */\n"
"QPushButton:focus {\n"
"    outline: none; /* Remove default focus outline */\n"
"    border: 2px solid #f9db62; /* Border with the theme color when focused */\n"
"}\n"
""));
        previous_box = new QPushButton(scrollAreaWidgetContents);
        previous_box->setObjectName("previous_box");
        previous_box->setGeometry(QRect(290, 160, 220, 50));
        previous_box->setStyleSheet(QString::fromUtf8("/* Base Style for PushButton */\n"
"QPushButton {\n"
"    background-color: #121212; /* Background color matching the window */\n"
"    color: white; /* Text color with the theme color */\n"
"    border: 2px solid #1E1E1E; /* Slightly lighter border for definition */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"    padding: 10px 20px; /* Padding inside the button */\n"
"    font-size: 16px; /* Font size for button text */\n"
"    font-family: 'Arial', sans-serif; /* Font style */\n"
"    font-weight: bold; /* Bold text */\n"
"    box-shadow: inset 3px 3px 6px rgba(0, 0, 0, 0.5), inset -3px -3px 6px rgba(50, 50, 50, 0.2); /* Inward shadow for depth effect */\n"
"    transition: background-color 0.2s ease, box-shadow 0.2s ease, transform 0.1s ease; /* Smooth transitions */\n"
"}\n"
"\n"
"/* Hover Effect */\n"
"QPushButton:hover {\n"
"    background-color: #1E1E1E; /* Slightly lighter color on hover */\n"
"    color: #ffffff; /* White text color on hover for better contrast */\n"
"    box-shadow: inset 2p"
                        "x 2px 4px rgba(0, 0, 0, 0.6), inset -2px -2px 4px rgba(50, 50, 50, 0.3); /* Enhance shadow effect on hover */\n"
"}\n"
"\n"
"/* Pressed Effect */\n"
"QPushButton:pressed {\n"
"    background-color: #0D0D0D; /* Slightly darker color when pressed */\n"
"    color: #f9db62; /* Retain theme color on pressed */\n"
"    box-shadow: inset 5px 5px 10px rgba(0, 0, 0, 0.8), inset -1px -1px 2px rgba(50, 50, 50, 0.1); /* Deep inset shadow to give pressed-in effect */\n"
"    transform: translateY(1px); /* Slight downward shift to give pressed effect */\n"
"}\n"
"\n"
"/* Focus Effect */\n"
"QPushButton:focus {\n"
"    outline: none; /* Remove default focus outline */\n"
"    border: 2px solid #f9db62; /* Border with the theme color when focused */\n"
"}\n"
""));
        abou = new QPushButton(scrollAreaWidgetContents);
        abou->setObjectName("abou");
        abou->setGeometry(QRect(290, 220, 220, 50));
        abou->setStyleSheet(QString::fromUtf8("/* Base Style for PushButton */\n"
"QPushButton {\n"
"    background-color: #121212; /* Background color matching the window */\n"
"    color: white; /* Text color with the theme color */\n"
"    border: 2px solid #1E1E1E; /* Slightly lighter border for definition */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"    padding: 10px 20px; /* Padding inside the button */\n"
"    font-size: 16px; /* Font size for button text */\n"
"    font-family: 'Arial', sans-serif; /* Font style */\n"
"    font-weight: bold; /* Bold text */\n"
"    box-shadow: inset 3px 3px 6px rgba(0, 0, 0, 0.5), inset -3px -3px 6px rgba(50, 50, 50, 0.2); /* Inward shadow for depth effect */\n"
"    transition: background-color 0.2s ease, box-shadow 0.2s ease, transform 0.1s ease; /* Smooth transitions */\n"
"}\n"
"\n"
"/* Hover Effect */\n"
"QPushButton:hover {\n"
"    background-color: #1E1E1E; /* Slightly lighter color on hover */\n"
"    color: #ffffff; /* White text color on hover for better contrast */\n"
"    box-shadow: inset 2p"
                        "x 2px 4px rgba(0, 0, 0, 0.6), inset -2px -2px 4px rgba(50, 50, 50, 0.3); /* Enhance shadow effect on hover */\n"
"}\n"
"\n"
"/* Pressed Effect */\n"
"QPushButton:pressed {\n"
"    background-color: #0D0D0D; /* Slightly darker color when pressed */\n"
"    color: #f9db62; /* Retain theme color on pressed */\n"
"    box-shadow: inset 5px 5px 10px rgba(0, 0, 0, 0.8), inset -1px -1px 2px rgba(50, 50, 50, 0.1); /* Deep inset shadow to give pressed-in effect */\n"
"    transform: translateY(1px); /* Slight downward shift to give pressed effect */\n"
"}\n"
"\n"
"/* Focus Effect */\n"
"QPushButton:focus {\n"
"    outline: none; /* Remove default focus outline */\n"
"    border: 2px solid #f9db62; /* Border with the theme color when focused */\n"
"}\n"
""));
        stoic_thoughts = new QLabel(scrollAreaWidgetContents);
        stoic_thoughts->setObjectName("stoic_thoughts");
        stoic_thoughts->setGeometry(QRect(50, 380, 700, 91));
        stoic_thoughts->setStyleSheet(QString::fromUtf8("/* Label Style */\n"
"QLabel {\n"
"    font-family: 'Helvetica', sans-serif; /* Use Helvetica font */\n"
"    font-size: 15px; /* Set font size as needed */\n"
"    font-weight: bold; /* Bold font */\n"
"    font-style: italic; /* Italic font */\n"
"    color: #f9db62; /* Theme color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px; /* Padding around the label text */\n"
"    border: none; /* No border */\n"
"    margin: 5px; /* Margin around the label */\n"
"}\n"
"\n"
"/* Optional: Add some shadow or glow to the text */\n"
"QLabel {\n"
"    text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5); /* Shadow for text to enhance visibility */\n"
"}\n"
""));
        stoic_thoughts_2 = new QLabel(scrollAreaWidgetContents);
        stoic_thoughts_2->setObjectName("stoic_thoughts_2");
        stoic_thoughts_2->setGeometry(QRect(50, 400, 160, 21));
        stoic_thoughts_2->setStyleSheet(QString::fromUtf8("/* Label Style */\n"
"QLabel {\n"
"    font-family: 'Helvetica', sans-serif; /* Use Helvetica font */\n"
"    font-size: 10px; /* Set font size as needed */\n"
"    font-weight: bold; /* Bold font */\n"
"	font-align: left;\n"
"    font-style: italic; /* Italic font */\n"
"    color: white; /* Theme color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding: 10px; /* Padding around the label text */\n"
"    border: none; /* No border */\n"
"    margin: 5px; /* Margin around the label */\n"
"}\n"
"\n"
"/* Optional: Add some shadow or glow to the text */\n"
"QLabel {\n"
"    text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5); /* Shadow for text to enhance visibility */\n"
"}\n"
""));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        new_box->setText(QCoreApplication::translate("MainWindow", "Create new Time Box", nullptr));
        previous_box->setText(QCoreApplication::translate("MainWindow", "Previous Tme Boxes", nullptr));
        abou->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        stoic_thoughts->setText(QCoreApplication::translate("MainWindow", "Hi this is Stoic", nullptr));
        stoic_thoughts_2->setText(QCoreApplication::translate("MainWindow", "Hi this is Stoic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
