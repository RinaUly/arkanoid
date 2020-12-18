#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Paddle : public Sprite
{
public:
    Paddle();
    ~Paddle();

public:
    void resetState();           //ставит платформу в начальное положение
    void move();                 //функция движения платформы
    void setDx(int);             //получение координаты движения по X
    QRect getRect() override;    //получение хитбокса
    QImage &getImage() override; //получение изображения

private:
    QImage image;                     //переменная изображения
    QRect rect;                       //переменная хитбокса
    int dx;                           //переменная передвижения платформы платформы
    static const int INITIAL_X = 200; //начальное положения платформы по X
    static const int INITIAL_Y = 360; //начальное положения платформы Y
};
