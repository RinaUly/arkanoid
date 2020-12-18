#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Brick : public Sprite
{
  public:
    Brick(int, int);
    ~Brick();

  public:
    bool isDestroyed();//проверка на существование блока
    void setDestroyed(bool);//устанвление флага уничтожения
    QRect getRect() override;//получение хитбокса
    void setRect(QRect) ;//установление хитбокса
    QImage & getImage() override;//получение изображения
    void setBonus(bool);
    bool isBonus() {return bonus;}

  private:
    bool bonus = false;
    QImage image;//переменная изображения
    QRect rect;//переменная хитбокса
    bool destroyed;//флаг уничтожения
};
