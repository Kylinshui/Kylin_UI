#ifndef QBUTTON_H
#define QBUTTON_H
#include "common.h"

class QButton:public QPushButton
{
    Q_OBJECT
public:
    QButton(const QString &text, QWidget *parent=0):QPushButton(text, parent){
        installEventFilter(this);s_text=text;}
private:
        QString s_text;

};
#endif // QBUTTON_H

