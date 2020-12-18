#ifndef BONUS_H
#define BONUS_H

#include <QImage>
#include <QRect>
#include <sprite.h>

class Bonus : public Sprite
{
public:
    Bonus(int _x, int _y);

    void move() {
        rect.translate(0, 1);
    }

    QRect getRect() override;//получение хитбокса
    QImage & getImage() override;//получение изображения

    int x;
    int y;
    QImage image;//переменная изображения
    QRect rect;//переменная хитбокса
};

#endif // BONUS_H
