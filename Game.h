/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: jsiler
 *
 * Created on July 6, 2018, 7:43 PM
 */

#ifndef _GAME_H
#define _GAME_H

#include "ui_Game.h"

class Game : public QMainWindow {
    Q_OBJECT
public:
    Game();
    virtual ~Game();
    void mousePressEvent(QMouseEvent *event);
private:
    inline int heightForWidth( int width );
    Ui::Game widget;
};

#endif /* _GAME_H */
