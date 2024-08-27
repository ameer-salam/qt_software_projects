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
    QLabel *label;
    QPushButton *pushButton_celar;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_percentage;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_product;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_three;
    QPushButton *pushButton_one;
    QPushButton *pushButton_two;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_point;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_six;
    QPushButton *pushButton_four;
    QPushButton *pushButton_five;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(292, 431);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 271, 61));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    qproperty-alignment: 'AlignVCenter | AlignRight'; /* Align text vertically centered and right */\n"
"    background-color: white;                         /* White background color */\n"
"    border: 2px solid gray;                          /* Thicker gray border for better definition */\n"
"    border-radius: 8px;                              /* Rounded corners for a modern look */\n"
"    padding: 8px 0px;                               /* Padding for better spacing */\n"
"    color: #333333;                                  /* Dark text color for contrast */\n"
"    font-size: 20px;                                 /* Larger font size for visibility */\n"
"    font-weight: bold;                               /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(0, 0, 0, 0.1), /* Subtle inset shadow for depth effect */\n"
"                inset -2px -2px 5px rgba(255, 255, 255, 0.5); /* Light highlight for 3D effect */\n"
"}\n"
""));
        pushButton_celar = new QPushButton(centralwidget);
        pushButton_celar->setObjectName("pushButton_celar");
        pushButton_celar->setGeometry(QRect(10, 80, 61, 61));
        pushButton_plusminus = new QPushButton(centralwidget);
        pushButton_plusminus->setObjectName("pushButton_plusminus");
        pushButton_plusminus->setGeometry(QRect(80, 80, 61, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Corbel")});
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_plusminus->setFont(font1);
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_percentage = new QPushButton(centralwidget);
        pushButton_percentage->setObjectName("pushButton_percentage");
        pushButton_percentage->setGeometry(QRect(150, 80, 61, 61));
        pushButton_percentage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(220, 80, 61, 61));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName("pushButton_nine");
        pushButton_nine->setGeometry(QRect(150, 150, 64, 64));
        pushButton_nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName("pushButton_seven");
        pushButton_seven->setGeometry(QRect(10, 150, 64, 64));
        pushButton_seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName("pushButton_eight");
        pushButton_eight->setGeometry(QRect(80, 150, 64, 64));
        pushButton_eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_product = new QPushButton(centralwidget);
        pushButton_product->setObjectName("pushButton_product");
        pushButton_product->setGeometry(QRect(220, 150, 61, 61));
        pushButton_product->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(220, 220, 61, 61));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName("pushButton_three");
        pushButton_three->setGeometry(QRect(150, 290, 64, 64));
        pushButton_three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName("pushButton_one");
        pushButton_one->setGeometry(QRect(10, 290, 64, 64));
        pushButton_one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName("pushButton_two");
        pushButton_two->setGeometry(QRect(80, 290, 64, 64));
        pushButton_two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(220, 290, 61, 61));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        pushButton_equals->setGeometry(QRect(220, 360, 61, 61));
        pushButton_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f0a500;                        /* Light orange background */\n"
"    border: 2px solid #d48806;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #ffffff;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2p"
                        "x 5px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName("pushButton_point");
        pushButton_point->setGeometry(QRect(150, 360, 61, 61));
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: grey;                        /* Light orange background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker orange border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* White text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d48806;                        /* Slightly darker orange when pressed */\n"
"    box-shadow: inset -2px -2px 5"
                        "px rgba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName("pushButton_zero");
        pushButton_zero->setGeometry(QRect(10, 360, 131, 64));
        pushButton_zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName("pushButton_six");
        pushButton_six->setGeometry(QRect(150, 220, 64, 64));
        pushButton_six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName("pushButton_four");
        pushButton_four->setGeometry(QRect(10, 220, 64, 64));
        pushButton_four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName("pushButton_five");
        pushButton_five->setGeometry(QRect(80, 220, 64, 64));
        pushButton_five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d3d3d3;                        /* Light grey background */\n"
"    border: 2px solid #a9a9a9;                        /* Slightly darker grey border */\n"
"    border-radius: 8px;                               /* Rounded corners for a softer look */\n"
"    padding: 10px;                                    /* Padding for better spacing */\n"
"    color: #333333;                                   /* Dark text color for contrast */\n"
"    font-size: 16px;                                  /* Font size for better readability */\n"
"    font-weight: bold;                                /* Bold text for emphasis */\n"
"    box-shadow: inset 2px 2px 5px rgba(255, 255, 255, 0.5),  /* Inset highlight for 3D effect */\n"
"                inset -2px -2px 5px rgba(0, 0, 0, 0.1); /* Subtle shadow for depth */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0;                        /* Slightly darker grey when pressed */\n"
"    box-shadow: inset -2px -2px 5px r"
                        "gba(255, 255, 255, 0.3),  /* Enhanced shadow effect */\n"
"                inset 2px 2px 5px rgba(0, 0, 0, 0.2); /* Enhanced depth when pressed */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_celar->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_product->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
