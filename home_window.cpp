#include "home_window.h"


void Home_Window::init_home_window(void)
{

    //主界面窗口大小
    home_window = new QWidget(this->s_parent);
    home_window->move(0,TOP_WINDOW_HEIGHT);
    home_window->resize(SCREEN_WIDTH,(SCREEN_HEIGHT-TOP_WINDOW_HEIGHT-BOTTOM_WINDOW_HEIGHT)); 
    home_window->show();

    //uhf
    uhf_button = new QButton(QObject::tr("超高频"),home_window);
    uhf_button->move(MAI_POS0);
    uhf_button->resize(MAIN_BUTTON_SIZE);
    uhf_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/uhf0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/uhf1.png);padding-bottom: 12px;}");
    uhf_button->setFocusPolicy(Qt::NoFocus);
    uhf_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    uhf_button->show();
    connect(uhf_button, SIGNAL(clicked(void)), this, SLOT(uhf_button_click(void)));

    //camera
    camera_button = new QButton(QObject::tr("相机"),home_window);
    camera_button->move(MAI_POS1);
    camera_button->resize(MAIN_BUTTON_SIZE);
    camera_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/camera0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/camera1.png);padding-bottom: 12px;}");
    camera_button->setFocusPolicy(Qt::NoFocus);
    camera_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    camera_button->show();
    connect(camera_button, SIGNAL(clicked(void)), this, SLOT(camera_button_click(void)));

    //video
    video_button = new QButton(QObject::tr("视频"),home_window);
    video_button->move(MAI_POS2);
    video_button->resize(MAIN_BUTTON_SIZE);
    video_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/video0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/video1.png);padding-bottom: 12px;}");
    video_button->setFocusPolicy(Qt::NoFocus);
    video_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    video_button->show();
    connect(video_button, SIGNAL(clicked(void)), this, SLOT(video_button_click(void)));

    //msuic
    music_button = new QButton(QObject::tr("音乐"),home_window);
    music_button->move(MAI_POS3);
    music_button->resize(MAIN_BUTTON_SIZE);
    music_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/record0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/record1.png);padding-bottom: 12px;}");
    music_button->setFocusPolicy(Qt::NoFocus);
    music_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    music_button->show();
    connect(music_button, SIGNAL(clicked(void)), this, SLOT(music_button_click(void)));

    //gps
    gps_button = new QButton(QObject::tr("GPS"),home_window);
    gps_button->move(MAI_POS4);
    gps_button->resize(MAIN_BUTTON_SIZE);
    gps_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/GPS0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/GPS1.png);padding-bottom: 12px;}");
    gps_button->setFocusPolicy(Qt::NoFocus);
    gps_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    gps_button->show();
    connect(gps_button, SIGNAL(clicked(void)), this, SLOT(gps_button_click(void)));

    //cc2520
    cc2520_button = new QButton(QObject::tr("2.4Ｇ通信"),home_window);
    cc2520_button->move(MAI_POS5);
    cc2520_button->resize(MAIN_BUTTON_SIZE);
    cc2520_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/fr2520.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/fr2521.png);padding-bottom: 12px;}");
    cc2520_button->setFocusPolicy(Qt::NoFocus);
    cc2520_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    cc2520_button->show();
    connect(cc2520_button, SIGNAL(clicked(void)), this, SLOT(cc2520_button_click(void)));

    //The Second Line
    //FileManager
    file_button = new QButton(QObject::tr("文件管理器"),home_window);
    file_button->move(MAI_POS6);
    file_button->resize(MAIN_BUTTON_SIZE);
    file_button->setStyleSheet("QButton{border:1px;background-image:url(:/img/filemanager0.png);text-align:bottom center;padding-bottom:22px;color:white;}QButton:hover:pressed{background-image:url(:/img/filemanager1.png);padding-bottom: 12px;}");
    file_button->setFocusPolicy(Qt::NoFocus);
    file_button->setFont(QFont("wenquanyi", 16, QFont::Bold));
    file_button->show();
    connect(file_button, SIGNAL(clicked(void)), this, SLOT(file_button_click(void)));

}

void Home_Window::show_home_window(void){
    home_window->show();

}

void Home_Window::hide_home_window(void){
    home_window->hide();

}

void Home_Window::uhf_button_click(void){
    hide_home_window();
    QMessageBox::information(uhf_button,tr("通知"),tr("uhf被点击了"));
}

void Home_Window::camera_button_click(void){
     QMessageBox::information(camera_button,tr("通知"),tr("camera被点击了"));
}

void Home_Window::video_button_click(void){
     QMessageBox::information(video_button,tr("通知"),tr("video被点击了"));
}

void Home_Window::music_button_click(void){
     QMessageBox::information(music_button,tr("通知"),tr("music被点击了"));
}

void Home_Window::gps_button_click(void){
     QMessageBox::information(gps_button,tr("通知"),tr("gps被点击了"));
}

void Home_Window::cc2520_button_click(void){
     QMessageBox::information(cc2520_button,tr("通知"),tr("cc2520被点击了"));
}

void Home_Window::file_button_click(void){
     QMessageBox::information(file_button,tr("通知"),tr("file 被点击了"));
}
