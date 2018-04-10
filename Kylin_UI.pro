#-------------------------------------------------
#
# Project created by QtCreator 2018-04-09T13:52:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kylin_UI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    home_window.cpp \
    sys_setting_window.cpp

HEADERS  += mainwindow.h \
    qbutton.h \
    home_window.h \
    common.h \
    sys_setting_window.h

RESOURCES += \
    img.qrc
