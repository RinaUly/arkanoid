#pragma once
#include <QImage>
#include <QRect>
#include <sprite.h>
class Ball : public Sprite{

  public:
    Ball();
    ~Ball();

  public:
    void resetState();//возвращает щайбу на начальное положение
    void autoMove();//движение и отскок от полей
    void setXDir(int);//установка направления движения по координате 'X'
    void setYDir(int);//установка направления движения по координате 'Y'
    int getXDir();//получение координаты движения по X
    int getYDir();//получение координаты движения по Y
    QRect getRect() override;//получение хитбокса
    QImage & getImage() override;//получение изображения

  private:
    int xdir;//переменная направления движения по X
    int ydir;//переменная направления движения по Y
    QImage image;//переменная изображения
    QRect rect;//переменная хитбокса
    static const int INITIAL_X = 230;//переменная начального положения X
    static const int INITIAL_Y = 355;//переменная начального положения Y
    static const int RIGHT_EDGE = 300;//крайняя граница
};


