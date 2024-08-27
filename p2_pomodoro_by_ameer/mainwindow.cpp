#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QWidget>

QString pomo_baseStyle =
    "QPushButton {"
    "    background-color: #B03060;"  /* Default background color */
    "    border-radius: 15px;"  /* Rounded corners */
    "    border: 2px solid white;"  /* Border color */
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"  /* Rounded corner fonts */
    "    color: #FFFFFF;"  /* Default font color */
    "    transition: background-color 0.2s, transform 0.1s;"  /* Smooth transition */
    "}"
    "QPushButton:hover {"
    "    background-color: #C04070;"  /* Slightly lighter maroon when hovered */
    "}"
    "QPushButton:pressed {"
    "    background-color: #8B1C47;"  /* Darker maroon when pressed */
    "    transform: translateY(2px);"  /* Move button down slightly to simulate pressing */
    "}"
    "QPushButton:focus {"
    "    outline: none;"  /* Remove focus outline */
    "}";

QString reset_pomodoro=
    "QPushButton {"
    "    background-color: #B03060;"  // Maroon
    "    border-radius: 15px;"  // Rounded corners
    "    border: 2px solid white;"  // Border color
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"
    "    color: #FFFFFF;"  // Text color
    "    transition: background-color 0.2s, transform 0.1s;"
    "}"
    "QPushButton:hover {"
    "    background-color: #C04070;"  // Slightly lighter maroon on hover
    "}"
    "QPushButton:pressed {"
    "    background-color: #8B1C47;"  // Darker maroon when pressed
    "    transform: translateY(2px);"  // Simulate pressing
    "}"
    "QPushButton:focus {"
    "    outline: none;"  // Remove focus outline
                         "}";

QString sb_BaseStyle =
    "QPushButton {"
    "    background-color: #4CAF50;"  /* Light green */
    "    border-radius: 15px;"  /* Rounded corners */
    "    border: 2px solid white;"  /* Border color */
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"  /* Rounded corner fonts */
    "    color: #FFFFFF;"  /* Default font color */
    "    transition: background-color 0.3s ease, transform 0.1s ease;"  /* Smooth transitions */
    "}"
    "QPushButton:hover {"
    "    background-color: #7CC576;"  /* Darker green for hover */
    "}"
    "QPushButton:pressed {"
    "    background-color: #4A7F4F;"  /* Even darker green for pressed state */
    "    transform: translateY(2px);"  /* Move button down slightly to simulate pressing */
    "}"
    "QPushButton:focus {"
    "    outline: none;"  /* Remove focus outline */
                       "}";

QString reset_shortBreak=
    "QPushButton {"
    "    background-color: #4CAF50;"  // Light green
    "    border-radius: 15px;"  // Rounded corners
    "    border: 2px solid white;"  // Border color
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"
    "    color: #FFFFFF;"  // Text color
    "    transition: background-color 0.3s ease, transform 0.1s ease;"
    "}"
    "QPushButton:hover {"
    "    background-color: #7CC576;"  // Darker green on hover
    "}"
    "QPushButton:pressed {"
    "    background-color: #4A7F4F;"  // Darker green when pressed
    "    transform: translateY(2px);"  // Simulate pressing
    "}"
    "QPushButton:focus {"
    "    outline: none;"  // Remove focus outline
    "}";

QString reset_longBreak=
    "QPushButton {"
    "    background-color: #ADD8E6;"  // Light blue
    "    border-radius: 15px;"  // Rounded corners
    "    border: 2px solid white;"  // Border color
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"
    "    color: #FFFFFF;"  // Text color
    "    transition: background-color 0.3s ease, transform 0.1s ease;"
    "}"
    "QPushButton:hover {"
    "    background-color: #7EC8E3;"  // Darker blue on hover
    "}"
    "QPushButton:pressed {"
    "    background-color: #5A9BD5;"  // Darker blue when pressed
    "    transform: translateY(2px);"  // Simulate pressing
    "}"
    "QPushButton:focus {"
    "    outline: none;"  // Remove focus outline
    "}";
QString lb_BaseStyle =
    "QPushButton {"
    "    background-color: #ADD8E6;"  /* Light blue */
    "    border-radius: 15px;"  /* Rounded corners */
    "    border: 2px solid white;"  /* Border color */
    "    padding: 10px;"
    "    font-size: 30px;"
    "    font-family: 'Arial Rounded MT Bold', 'Helvetica Rounded', sans-serif;"  /* Rounded corner fonts */
    "    color: #FFFFFF;"  /* Default font color */
    "    transition: background-color 0.3s ease, transform 0.1s ease;"  /* Smooth transitions */
    "}"
    "QPushButton:hover {"
    "    background-color: #7EC8E3;"  /* Darker blue for hover */
    "}"
    "QPushButton:pressed {"
    "    background-color: #5A9BD5;"  /* Even darker blue for pressed state */
    "    transform: translateY(2px);"  /* Move button down slightly to simulate pressing */
    "}"
    "QPushButton:focus {"
    "    outline: none;"  /* Remove focus outline */
    "}";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , pause(false)
{
    ui->setupUi(this);
    this->setWindowTitle("Pomodoro by Ameer Salam");
    connect(ui->start, SIGNAL(clicked()), this,SLOT(on_start_ckicked()));
    connect(ui->pomodoro, SIGNAL(released()), this,SLOT(on_pomodoro_released()));
    connect(ui->short_break,SIGNAL(released()),this, SLOT(on_short_break_released()));
    connect(ui->long_break,SIGNAL(released()),this, SLOT(on_long_break_released()));
    setStyleSheet("QWidget { background-color: #4A0D2A; }" // Dark maroon background for the window
                  "QPushButton { background-color: #FF8C00; color: white; border-radius: 5px; }" // Light orange button
                  "QLabel { color: white; font-size: 24px; }"); // White text for labels
    ui->start->setVisible(false);
    if(pause_status==true)
    {
        ui->reset->setVisible(true);
    }
    else
        ui->reset->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pomodoro_released()
{
    ui->start->setVisible(true);
    ac_pomo=true, ac_sb=false, ac_lb=false;
    qDebug()<<"Pomodoro clicked!";
    timeRemaining=1500; //25min in seconds (25*60)
    updateLabel(timeRemaining);

    ui->pomodoro->setChecked(true);
    ui->short_break->setChecked(false);
    ui->long_break->setChecked(false);

    this->setStyleSheet("background-color: #B03060;"); // Adjust color as needed

    ui->start->setStyleSheet(pomo_baseStyle); // #B03060 is for Pomodoro
}

void MainWindow::on_short_break_released()
{
    ui->start->setVisible(true);
    ac_pomo=false, ac_sb=true, ac_lb=false;
    pause=false;
    pause_status=false;
    if(timeRemaining==300)
        ui->start->setText("Start");
    qDebug()<<"Short Break clicked!";
    timeRemaining=300; //5min in seconds
    updateLabel(timeRemaining);

    ui->pomodoro->setChecked(false);
    ui->short_break->setChecked(true);
    ui->long_break->setChecked(false);

    this->setStyleSheet("background-color: #4CAF50;"); // Adjust color as needed

    ui->start->setStyleSheet(sb_BaseStyle);
}

void MainWindow::on_long_break_released()
{
    ui->start->setVisible(true);
    ac_pomo=false, ac_sb=false, ac_lb=true;
    pause=false;
    pause_status=false;
    if(timeRemaining==900)
        ui->start->setText("Start");
    qDebug()<<"Long Break clicked!";
    timeRemaining=900; //15min in seconds
    updateLabel(timeRemaining);

    ui->pomodoro->setChecked(false);
    ui->short_break->setChecked(false);
    ui->long_break->setChecked(true);


    this->setStyleSheet("background-color: lightblue;");

    ui->start->setStyleSheet(lb_BaseStyle);
}

void MainWindow::updateLabel(int seconds)
{
    int min=seconds/60;
    int sec=seconds%60;
    QString TimeString=QString::asprintf("%02d:%02d", min, sec);
    ui->label->setText(TimeString);
}

void MainWindow::on_start_ckicked()
{
    ui->reset->setVisible(false);
    qDebug()<<"Start clicked!";
    pause= (!pause);
    pause_status=false;
    if(pause==false)
    {
        ui->start->setText("Pause");
        pause_status=(!pause_status);
        qDebug()<<"Pause status : "<<pause;
    }
    if(timer==nullptr)
    {
        timer=new QTimer(this);
        connect(timer, &QTimer::timeout, this, &MainWindow::updateTimer);
    }
    timer->start(1000); //every 1 sec
}

void MainWindow::updateTimer()
{
    if(pause==false)
    {
        ui->reset->setVisible(true);
        timeRemaining=timeRemaining;
        updateLabel(timeRemaining);
        if(pause_status==true)
        {
            ui->start->setText("Resume");
            ui->reset->setVisible(true);
        }
        else
        {
            ui->start->setText("Start");
            ui->reset->setVisible(false);
        }
    }
    else if(timeRemaining>0)
    {
        timeRemaining--;
        updateLabel(timeRemaining);
        ui->start->setText("Pause");
        ui->reset->setVisible(false);
    }
}

void MainWindow::on_reset_clicked()
{
    qDebug()<<"Reset clicked!";
    if(ac_pomo==true)
    {
        timeRemaining=1500;
        ui->reset->setStyleSheet(reset_pomodoro);
        pause_status=false;
        //pause=true;
        //ui->start->setText("Start");
    }

    else if(ac_sb ==true)
    {
        timeRemaining=300;
        ui->reset->setStyleSheet(reset_shortBreak);
        pause_status=false;
    }
    else if(ac_lb=true)
    {
        timeRemaining=900;
        ui->reset->setStyleSheet(reset_longBreak);
        pause_status=false;
    }
}

