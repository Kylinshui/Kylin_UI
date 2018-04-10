#include "mainwindow.h"
#include "home_window.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置背景
    this->move(200,200);//just for the pc position
    this->resize(SCREEN_WIDTH,SCREEN_HEIGHT);
    this->setAutoFillBackground(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(SCREEN_WALLPAPER)));
    this->setPalette(palette);

    //设置状态栏
    top_window = new QWidget(this);
    top_window->move(0,0);
    top_window->resize(SCREEN_WIDTH,TOP_WINDOW_HEIGHT);
    top_window->setAutoFillBackground(true);
    top_window->setStyleSheet("background-image:url(:/img/home-top-bg.png)");
    top_window->show();

    //设置导航栏
    foot_window = new QWidget(this);
    foot_window->move(0,SCREEN_HEIGHT-BOTTOM_WINDOW_HEIGHT);
    foot_window->resize(SCREEN_WIDTH,BOTTOM_WINDOW_HEIGHT);
    foot_window->setAutoFillBackground(true);
    foot_window->setStyleSheet("background-image:url(:/img/home-foot-bg.png)");
    foot_window->show();

    //系统标题
    system_title = new QLabel(tr("Kylin 系统"),top_window);
    system_title->move(300, 10);
    system_title->setStyleSheet("border:none;background:transparent;image:url(:/img/tran.png);color:rgb(255, 255, 255);");
    system_title->setFont(QFont("simfang", 30, QFont::Normal));
    system_title->show();

    //日期　时间
    date_info = new QLabel("2018-04-09",top_window);
    date_info->move(100, 10);
    date_info->setStyleSheet("border:none;background:transparent;image:url(:/img/tran.png);color:rgb(255, 255, 255);");
    date_info->setFont(QFont("simfang", 15, QFont::Normal));
    date_info->show();
    time_info = new QLabel("16:41:55",top_window);
    time_info->move(100, 30);
    time_info->setStyleSheet("border:none;background:transparent;image:url(:/img/tran.png);color:rgb(255, 255, 255);");
    time_info->setFont(QFont("simfang", 15, QFont::Normal));
    time_info->show();

    //获取系统时间
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(timeout_event(void)));
    timer->start(1000);

    //主界面
    main_button = new QButton("",foot_window);
    main_button->move(((SCREEN_WIDTH/FOOT_ITM_NUM)/2)-(MAIN_BTN_SIZE_W/2)+1*(SCREEN_WIDTH/FOOT_ITM_NUM),(0));
    main_button->resize(HOME_BUTTON_SIZE);

    main_button->setStyleSheet("QButton{border:2px;background-image:url(:/img/ic_allapps.png);color:white;}QButton:hover:pressed{background-image:url(:/img/ic_allapps_pressed.png)}");
    main_button->setFocusPolicy(Qt::NoFocus);
    main_button->setFont(QFont("wenquanyi", 15, QFont::Bold));
    main_button->show();

    home_win = new Home_Window(this);
    home_win->init_home_window();
    connect(main_button, SIGNAL(clicked(void)),this,SLOT(home_button_click(void)));

    //系统设置
    sys_setting_button = new QButton("系统设置",foot_window);
    sys_setting_button->move(((SCREEN_WIDTH/FOOT_ITM_NUM)/2)-(MAIN_BTN_SIZE_W/2)+2*(SCREEN_WIDTH/FOOT_ITM_NUM),(0));
    sys_setting_button->resize(HOME_BUTTON_SIZE);
    sys_setting_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/ic_launcher_settings0.png);text-align:bottom center;padding-bottom:8px;color:white;}QButton:hover:pressed{background-image:url(:/img/ic_launcher_settings1.png);padding-bottom: 1px;}");
    sys_setting_button->setFocusPolicy(Qt::NoFocus);
    sys_setting_button->setFont(QFont("wenquanyi", 13, QFont::Bold));
    sys_setting_button->show();

    sys_setting_win = new Sys_Setting_Window(this);
    sys_setting_win->init_sys_settings_window();
    connect(sys_setting_button, SIGNAL(clicked(void)),this,SLOT(sys_setting_button_click(void)));



}

void MainWindow::timeout_event(void){
    QDateTime dt;
    QTime time;
    QDate date;

    dt.setTime(time.currentTime());
    dt.setDate(date.currentDate());

    date_info->setText(dt.toString("yyyy-MM-dd"));
    time_info->setText(dt.toString("hh:mm:ss"));


}

void MainWindow::home_button_click(void){
    home_win->show_home_window();
    sys_setting_win->hide_sys_settings_window();
}

void MainWindow::sys_setting_button_click(void){
    sys_setting_win->show_sys_settings_window();
    home_win->hide_home_window();
}
MainWindow::~MainWindow()
{

}
