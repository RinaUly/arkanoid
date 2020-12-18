#include <sprite.h>

Sprite::Sprite()
{
}

QRect Sprite::getRect() { return rect; }
QImage &Sprite::getImage() { return image; }
Sprite::~Sprite()
{
}
