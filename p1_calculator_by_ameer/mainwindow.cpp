#include "mainwindow.h"
#include <QResizeEvent>
#include "ui_mainwindow.h"


 //to store the numbers to be printed in the label and it is global so that it can be used by multiple functions
double firstNum; //to access it when pressed equal
bool userIsTypingSecondNumber = false; //to check if user is typing second no

//#include "QDebug"
//I have commented QDebug after testing the degits (0-9)
//while testing, the digits (0-9) when pressed gives "test" output on the console
//with this, the "qDebug()<<"test";"has also been commented in the digit_pressed function of MainWindow class

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Calculator by Ameer"); //my nae on the window


    //digit buttons
    connect(ui->pushButton_zero, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_nine, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_eight, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_seven, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_six, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_five, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_four, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_three, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_two, SIGNAL(released()), this,SLOT(digit_pressed()));
    connect(ui->pushButton_one, SIGNAL(released()), this,SLOT(digit_pressed()));

    //buttons for percentage and plus/minus
    connect(ui->pushButton_plusminus, SIGNAL(release()), this, SLOT(on_pushButton_plusminus_released()));
    connect(ui->pushButton_percentage, SIGNAL(release()), this, SLOT(on_pushButton_percentage_released()));

    //buttons for binary operations
    connect(ui->pushButton_plus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_product, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    //to enable checkable as all these binary op are in one function
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_product->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString newLabel_1;

void MainWindow::digit_pressed()
{
    QPushButton* button = (QPushButton*)sender();   //this looks for which button caused for a signal and how to react, what is happening in depth is explained below
    double labelNumber;
    QString newLabel;
    //qDebug()<<"test";
/*
sender() - gets the objects which triggered the event
QPushButton* -> this tells the program to treat the object returned as a QPushButton
the enitre statement takes the object which triggered an event and stores it in button variable as a pointer of type QPushButton
*/

    //initialy when ONLY --QPushButton* button = (QPushButton*)sender();-- statement is used with the --ui->label->setText(button->text());-- what it does is whenever you press a new key, the old digit on the label is replaced with the new one
    //to solve this issue we have to append the value to avoid replacement

    //appending process with a variable

    if((ui->pushButton_plus->isChecked() ||
        ui->pushButton_minus->isChecked() ||
        ui->pushButton_product->isChecked() ||
         ui->pushButton_divide->isChecked()) && (!userIsTypingSecondNumber))
    {
                                                    labelNumber= button->text().toDouble();
        userIsTypingSecondNumber=true;
        newLabel=QString::number(labelNumber, 'g', 15); //this variable decleration can be found on top in the global variable section
    }

    else{
        if(ui->label->text().contains('.') && button->text()=="0")
        {
            newLabel=ui->label->text() + button->text();
        }
        else
        {
            labelNumber= (ui->label->text() + button->text()).toDouble(); //adding new digit after clicking the binary operation button
            newLabel=QString::number(labelNumber, 'g', 15);
        }

    }

    ui->label->setText(newLabel);
    newLabel_1=newLabel;
}

void MainWindow::on_pushButton_point_released()
{

    if(!newLabel_1.contains(".")){
        ui->label->setText(ui->label->text()+".");
    }
}



void MainWindow::on_pushButton_plusminus_released()
{
    QPushButton* button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;
    if(button->text()=="+/-")
    {
        labelNumber=ui->label->text().toDouble();
        labelNumber=labelNumber*-1;
        newLabel=QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_percentage_released()
{
    QPushButton* button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;
    if(button->text()=="%")
    {
        labelNumber=ui->label->text().toDouble();
        labelNumber=labelNumber*0.01;
        newLabel=QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_celar_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_product->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    userIsTypingSecondNumber=false;

    ui->label->setText("0");
}


void MainWindow::on_pushButton_equals_released()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble(); // Initializing secondNum

    // Perform the operation based on the checked button
    if (ui->pushButton_plus->isChecked())
    {
        labelNumber = firstNum + secondNum;
    }
    else if (ui->pushButton_minus->isChecked())
    {
        labelNumber = firstNum - secondNum;
    }
    else if (ui->pushButton_product->isChecked())
    {
        labelNumber = firstNum * secondNum;
    }
    else if (ui->pushButton_divide->isChecked())
    {
        // Check for division by zero
        if (secondNum == 0)
        {
            ui->label->setText("Error");
            return;
        }
        labelNumber = firstNum / secondNum;
    }
    else
    {
        return; // No operation button is checked, do nothing
    }

    newLabel = QString::number(labelNumber, 'g', 15);
    ui->label->setText(newLabel);
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_product->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    userIsTypingSecondNumber = false;
}


void MainWindow::binary_operation_pressed()
{
    QPushButton* button = (QPushButton*)sender();
    firstNum=ui->label->text().toDouble();
    button->setCheckable(true);
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    // Define the desired aspect ratio, e.g., 4:3
    const double aspectRatio = 2.9 / 4.3;

    // Get the new size of the window
    int newWidth = event->size().width();
    int newHeight = event->size().height();

    // Calculate the new height based on the aspect ratio
    int calculatedHeight = static_cast<int>(newWidth / aspectRatio);

    // If the calculated height differs from the new height, adjust the size
    if (calculatedHeight != newHeight) {
        this->resize(newWidth, calculatedHeight);
    }

    // Call the base class implementation to ensure default handling
    QMainWindow::resizeEvent(event);
}
