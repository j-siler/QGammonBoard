/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Game.cpp
 * Author: jsiler
 *
 * Created on July 6, 2018, 7:43 PM
 */

#include "Game.h"
Game::Game() {
  widget.setupUi(this);
  centralWidget()->setStyleSheet("background-color:darkred;");
  widget.blackInnerBoard->setStyleSheet("background-color:darkgreen;");
  widget.redInnerBoard->setStyleSheet("background-color:darkgreen;");
  widget.blackOuterBoard->setStyleSheet("background-color:darkgreen;");
  widget.redOuterBoard->setStyleSheet("background-color:darkgreen;");
  widget.redBar->setStyleSheet("background-color:darkgreen;");
  widget.blackBar->setStyleSheet("background-color:darkgreen;");
  widget.inititalCube->setStyleSheet("background-color:darkgreen;");
  
}

Game::~Game() {
}
