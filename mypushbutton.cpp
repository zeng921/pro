#include "mypushbutton.h"
#include "QtDebug"

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{
    //qDebug()相当于cout
    qDebug()<<"我的按钮类构造调用";
}

MyPushButton::~MyPushButton(){
    qDebug()<<"我的按钮类析构调用";
}
