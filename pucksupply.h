#pragma once

#include <QImage>
#include <QRect>

class PuckSupply
{
public:
    PuckSupply(int, int);
    ~PuckSupply();

public:
    QRect getRect(); //получение хитбокса

    QImage &getImage(); //получение изображения

private:
    int puck[3] = {1, 2, 3}; //массив жизней
    int count;               //кол-во жизней
    QImage image;            //переменная изображения
    QRect rect;              //переменная хитбокса
};
