//#include <QApplication>
//#include <QMainWindow>
//#include <QLabel>
//#include <QWidget>
//#include <QDebug>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);
//    QMainWindow mainWindow;
//    QLabel *label = new QLabel();
//    QFont labelFont = label->font();

//    label->setText("Hello My dear Friends! how are you? THis is a Qt Tutorial on how to use the QLabel and the QMainWindow class  of the Qt and here is the text which has to be printed on the scren in the window");
//    label->setAlignment(Qt::AlignLeft | Qt::AlignTop);
//    label->setFrameStyle(QFrame::Panel | QFrame::Sunken /*| QFrame::Shadow_Mask*/ /*| QFrame::Shape_Mask*/);
//    label->setLineWidth(30);
//    labelFont.setPixelSize(32);
//    label->setFont(labelFont);
//    label->setWordWrap(true);
//    label->move(500,100);

//    label->setLineWidth(100);

//    mainWindow.setCentralWidget(label);
//    mainWindow.setWindowFlags(Qt::Window);
//    mainWindow.setWindowTitle("Ameer's QLabel and QMainWindow application");
//    mainWindow.setMinimumSize(600, 200);
//    mainWindow.showMaximized();

//    QRect rect = label->frameRect();
//    qDebug()<<"The X is : "<<rect.x()
//           <<"The Y is : "<<rect.y()
//          <<"The width is : "<<rect.width();

//    return app.exec();
//}


#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow mainWindow;
    QLabel *label = new QLabel(&mainWindow);

    label->setText("Hello!\n\tThis is Ameer Salam, an intern at Aereo and I am learning the Qt framework and more about it. And here I am trying to contribute to the company with my skills I am trying to learn");
    label->setFrameStyle(QFrame::Panel | QFrame::Raised);
    label->setLineWidth(150);
    label->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    label->setWordWrap(true);
    QFont font = label->font();
    font.setPixelSize(65);
    label->setFont(font);

    mainWindow.setCentralWidget(label);
    mainWindow.setWindowFlags(Qt::Window);
    mainWindow.setWindowTitle("Ameer Salam's application");
    mainWindow.setMinimumSize(600, 300);
    mainWindow.showMaximized();

    QRect rect = label->frameRect();
    qDebug()<<"The rectangle X is : "<<rect.x()
           <<"The rectangle Y is : "<<rect.y();
    return app.exec();
}
