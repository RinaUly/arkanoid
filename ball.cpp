#include <iostream>
#include "ball.h"

Ball::Ball(int _x, int _y)
{
    xdir = 1;
    ydir = -1;

    image.load(":/ball.png");

    rect = image.rect();
    rect.translate(_x, _y);
}

Ball::~Ball()
{

    std::cout << ("Ball deleted") << std::endl;
}

void Ball::autoMove()
{
    rect.translate(xdir, ydir);

    if (rect.left() == 0)
    {
        xdir = 1;
    }

    if (rect.right() == RIGHT_EDGE)
    {
        xdir = -1;
    }

    if (rect.top() == 0)
    {
        ydir = 1;
    }
}

void Ball::resetState()
{

    rect.moveTo(INITIAL_X, INITIAL_Y);
}

void Ball::setXDir(int x)
{

    xdir = x;
}

void Ball::setYDir(int y)
{

    ydir = y;
}

int Ball::getXDir()
{

    return xdir;
}

int Ball::getYDir()
{

    return ydir;
}

QRect Ball::getRect()
{

    return rect;
}

QImage &Ball::getImage()
{

    return image;
}
