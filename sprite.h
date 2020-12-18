#pragma once

#include <QImage>
#include <QRect>

class Sprite
{
public:
    Sprite();
    ~Sprite();

public:
    virtual QRect getRect();    //определяем данный метод в классе Sprite(который будет наследоваться)
    virtual QImage &getImage(); //определяем данный метод в классе Sprite(который будет наследоваться)

private:
    QImage image; //переменная изображения
    QRect rect;   //переменная хитбокса
};
