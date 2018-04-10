#ifndef SYS_SETTING_WINDOW_H
#define SYS_SETTING_WINDOW_H
#include "common.h"

class Sys_Setting_Window:public QObject
{
    Q_OBJECT
public:
    Sys_Setting_Window(QWidget *parent=0){s_parent = parent;}
    ~Sys_Setting_Window(void){}

    void init_sys_settings_window(void);
    void show_sys_settings_window(void);
    void hide_sys_settings_window(void);

private:
    QWidget *s_parent;
    QWidget *sys_setting_window;
};

#endif // SYS_SETTING_WINDOW_H
