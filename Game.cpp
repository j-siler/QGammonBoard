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

#include <QDebug>

#include "Game.h"
#include "Point.h"

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
  widget.leftBoardDivider->setStyleSheet("background-color:darkgreen;");
  widget.rightBoardDivider->setStyleSheet("background-color:darkgreen;");
  widget.blackCube->setStyleSheet("background-color:darkgreen;");
  widget.redCube->setStyleSheet("background-color:darkgreen;");
  widget.blackOff->setStyleSheet("background-color:darkgreen;");
  widget.redOff->setStyleSheet("background-color:darkgreen;");
  QObject::connect(widget.pushButton, SIGNAL(pressed()), widget.pt01, SLOT(handleButtonPress()));
  QObject::connect(widget.pushButton, SIGNAL(released()), widget.pt01, SLOT(handleButtonRelease()));
  QObject::connect(widget.pt02, SIGNAL(clicked()), widget.pt05, SLOT(handleButtonPress()));
  QObject::connect(widget.pt03, SIGNAL(clicked()), widget.pt05, SLOT(handleButtonRelease()));
}

Game::~Game() {
}

void Game::mousePressEvent(QMouseEvent* event) {
  qDebug() << "MousePressEvent x=" << 1;
}
