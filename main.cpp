/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: jsiler
 *
 * Created on July 6, 2018, 7:40 PM
 */

#include <QApplication>

#include "Game.h"

int main(int argc, char *argv[]) {
  // initialize resources, if gmneeded
  // Q_INIT_RESOURCE(resfile);

  QApplication app(argc, argv);
  // create and show your widgets here
  Game game;
  //game.centralWidget()->setStyleSheet("background-color:darkgreen;");
  //game.groupBox;//->setStyleSheet("background-color:darkred";);
  game.show();

  return app.exec();
}
