#include "bonus.h"

Bonus::Bonus(int _x, int _y)
{
    image.load(":/bonus.png");
    x = _x;
    y = _y;

    rect = image.rect();
    rect.translate(x, y);
}

QRect Bonus::getRect()
{
    return rect;
}

QImage &Bonus::getImage()
{
    return image;
}
