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
#include <QMouseEvent>

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
  QObject::connect(widget.pt02, SIGNAL(clicked(Point*)), widget.pt05, SLOT(handleButtonPress(Point*)));
  QObject::connect(widget.pt03, SIGNAL(clicked(Point*)), widget.pt05, SLOT(handleButtonRelease(Point*)));
  for(uint8_t i=1; i<=24; i++){
    Point* pP(NULL);
    Point::State s({i, 0, Point::Color::NONE});
    switch (i){
      case 1:
        pP=widget.pt01;
        s.count=2;
        s.color=Point::Color::BLACK;
        break;
      case 2:
        pP=widget.pt02;
        break;
      case 3:
        pP=widget.pt03;
        break;
      case 4:
        pP=widget.pt04;
        break;
      case 5:
        pP=widget.pt05;
        break;
      case 6:
        pP=widget.pt06;
        s.count=5;
        s.color=Point::Color::RED;
        break;
      case 7:
        pP=widget.pt07;
        break;
      case 8:
        pP=widget.pt08;
        s.count=3;
        s.color=Point::Color::RED;
        break;
      case 9:
        pP=widget.pt09;
        break;
      case 10:
        pP=widget.pt10;
        break;
      case 11:
        pP=widget.pt11;
        break;
      case 12:
        pP=widget.pt12;
        s.count=5;
        s.color=Point::Color::BLACK;
        break;
      case 13:
        pP=widget.pt13;
        s.count=5;
        s.color=Point::Color::RED;
        break;
      case 14:
        pP=widget.pt14;
        break;
      case 15:
        pP=widget.pt15;
        break;
      case 16:
        pP=widget.pt16;
        break;
      case 17:
        pP=widget.pt17;
        s.count=3;
        s.color=Point::Color::BLACK;
        break;
      case 18:
        pP=widget.pt18;
        break;
      case 19:
        pP=widget.pt19;
        s.count=19;
        s.color=Point::Color::BLACK;
        break;
      case 20:
        pP=widget.pt20;
        break;
      case 21:
        pP=widget.pt21;
        break;
      case 22:
        pP=widget.pt22;
        break;
      case 23:
        pP=widget.pt23;
        break;
      case 24:
        pP=widget.pt24;
        s.count=2;
        s.color=Point::Color::RED;
        break;
    }
    pP->setState(s);
    
  }
}

Game::~Game() {
}

void Game::mousePressEvent(QMouseEvent* event) {
  qDebug() << "MousePressEvent=" << event->x() << '/' << event->y();
}
