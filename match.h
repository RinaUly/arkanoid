//#ifndef MATCH_H
//#define MATCH_H

//class match
//{
//public:
//    match();
//};

//#endif // MATCH_H

#pragma once

#include <QWidget>
#include <QKeyEvent>
#include "ball.h"
#include "brick.h"
#include "paddle.h"
#include "pucksupply.h"
#include "bonus.h"
class Match : public QWidget
{

public:
    Match(QWidget *parent = 0);
    ~Match();

protected:
    void paintEvent(QPaintEvent *);       //при условиях прописываются game lost victory и тд
    void timerEvent(QTimerEvent *);       //обновляет события moveObjects();checkCollision();repaint();
    void keyPressEvent(QKeyEvent *);      //отслеживает события по нажатию клавиши
    void keyReleaseEvent(QKeyEvent *);    //отслеживает отжатие клавиш платформы
    void drawObjects(QPainter *);         //отрисовка объектов
    void finishGame(QPainter *, QString); //отрисовывает событие paintEventer
    void moveObjects();                   //назначение движения ракетки и мячика

    void startGame();      //установка всех позиций в их начальные положения и начало игры
    void pauseGame();      //пауза игры
    void unpauseGame();    //распауза игры
    void stopGame();       //констатация поражения
    void victory();        //констатация победы
    void checkCollision(); //непосредственная проверка колличества жизней, проверка кол-во разбитых кирпичей, проверка касания мяча о кирпичи и стенки и настройска его отражения от них

private:
    int x;                              //
    int count;                          //счетчик жизней
    int timerId;                        //уникальный идентификатор таймера
    static const int N_OF_BRICKS = 30;  //кол-во кирпичиков
    static const int DELAY = 10;        //
    static const int BOTTOM_EDGE = 400; //положение нижней границы

    QList<Bonus*> bonuses;

    Ball *ball;                         //объект ball
    Paddle *paddle;                     //объект paddle
    PuckSupply *pucksupply[3];          //объект класса Pucksupply
    Brick *bricks[N_OF_BRICKS];         //объекта класса Brick
    bool gameOver;                      //флаг поражения
    bool gameWon;                       //флаг выигрыша
    bool gameStarted;                   //флаг начала игры
    bool paused;                        //флаг паузы
};
