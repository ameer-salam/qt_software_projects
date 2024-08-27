#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pomodoro_released();
    void on_start_ckicked();
    void on_short_break_released();
    void on_long_break_released();

    void updateLabel(int);
    void updateTimer();

    void on_reset_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer=nullptr;
    int timeRemaining;
    bool pause=true;
    bool pause_status=false;

    bool ac_pomo, ac_sb, ac_lb;
};
#endif // MAINWINDOW_H


