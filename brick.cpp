#include <iostream>
#include "brick.h"

Brick::Brick(int _x, int _y, bool _bonus)
{
    x = _x;
    y = _y;

    bonus = _bonus;
    if (bonus)
    {
        if (!image.load(":/brickie_bonus.png"))
            std::cout << ("Image was not loaded!!!!") << std::endl;
    }
    else
    {
        if (!image.load(":/brickie.png"))
            std::cout << ("Image was not loaded!!!!") << std::endl;
    }
    destroyed = false;
    rect = image.rect();
    rect.translate(x, y);
}

Brick::~Brick()
{
    std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect()
{

    return rect;
}

void Brick::setRect(QRect rct)
{

    rect = rct;
}

QImage &Brick::getImage()
{

    return image;
}

bool Brick::isDestroyed()
{

    return destroyed;
}

void Brick::setDestroyed(bool destr)
{

    destroyed = destr;
}

bool Brick::isBonus()
{
    return bonus;
}
