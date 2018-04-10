#include "sys_setting_window.h"

void Sys_Setting_Window::init_sys_settings_window(void)
{
    sys_setting_window = new QWidget(this->s_parent);
    sys_setting_window->move(0,TOP_WINDOW_HEIGHT);
    sys_setting_window->resize(SCREEN_WIDTH,(SCREEN_HEIGHT-TOP_WINDOW_HEIGHT-BOTTOM_WINDOW_HEIGHT));
    sys_setting_window->setAutoFillBackground(true);
    sys_setting_window->setStyleSheet("border:3px;background-color:white");
    sys_setting_window->hide();
}

void Sys_Setting_Window::show_sys_settings_window(void){
    sys_setting_window->show();
}

void Sys_Setting_Window::hide_sys_settings_window(){
    sys_setting_window->hide();
}

