/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: jsiler
 * 
 * Created on July 10, 2018, 3:27 PM
 */

#include "Point.h"

Point::Point(QWidget *parent) : QLabel(parent) {
}

Point::~Point() {
}

void Point::handleButtonPress(){
  setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBottomBlackW5.png")));
}

void Point::handleButtonRelease(){
  setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBottomBlack.png")));
}

