#ifndef HOME_WINDOW_H
#define HOME_WINDOW_H

#include "common.h"

class Home_Window:public QObject
{
    Q_OBJECT //use single & slot must define Q_OBJECT
public:
    Home_Window(QWidget *parent=0){s_parent = parent;}
    ~Home_Window(){}

    void init_home_window(void);
    void show_home_window(void);
    void hide_home_window(void);

public slots:
    void uhf_button_click(void);
    void camera_button_click(void);
    void video_button_click(void);
    void music_button_click(void);
    void gps_button_click(void);
    void cc2520_button_click(void);
    void file_button_click(void);

private:
    QWidget *s_parent;
    QWidget *home_window;
    QButton *uhf_button;
    QButton *camera_button;
    QButton *video_button;
    QButton *music_button;
    QButton *gps_button;
    QButton *cc2520_button;
    QButton *file_button;

};


#endif // HOME_WINDOW_H
