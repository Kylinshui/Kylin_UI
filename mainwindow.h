#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "home_window.h"
#include "sys_setting_window.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QWidget *top_window,*foot_window;
    QLabel *system_title;//系统标题
    QLabel *date_info,*time_info;
    QButton *main_button;
    QButton *sys_setting_button;

    Home_Window *home_win;
    Sys_Setting_Window *sys_setting_win;

public slots:
    void timeout_event(void);
    void home_button_click(void);
    void sys_setting_button_click(void);
};

#endif // MAINWINDOW_H
