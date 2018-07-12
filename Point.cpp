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
#include <QDebug>
#include <QMouseEvent>
#include "Point.h"

Point::Point(QWidget *parent) : QLabel(parent) {
}

Point::~Point() {
}

void Point::mousePressEvent(QMouseEvent* event) {
  qDebug()<<"__FUNCTION__="
          <<event->x()
          <<"/"
          <<event->y();
  emit clicked(this);
}

void Point::handleButtonPress(Point* pP){
  setState(State({5, 4, Color::BLACK}));
  setStyleSheet("background-color:darkred;");
}

void Point::handleButtonRelease(Point* pP){
  setState(State({5, 0, Color::NONE}));
  setStyleSheet("background-color:darkgreen;");
  pP->setStyleSheet("background-color:darkblue;");
}


void Point::setState(const State &s) {
  if (s == m_state)
    return;
  bool isTop(s.position > 12), isBlack(s.position % 2);
  m_state = s;
 QString myImage(QString::fromUtf8(":/Images/Images/Point")
         +(isBlack ? "B" : "W")
         +(isTop ? "T" : "B"));
 if(s.count>0){
   char count('0' + (s.count>=5 ? 5 : s.count));
   myImage+=count;
   myImage+=s.color==Color::BLACK ? 'B' : 'W';
 }
 myImage+=".png";
 this->setPixmap(QPixmap(myImage));
  
}

QVector<Point*> Point::m_points(24, NULL);
void Point::add(Point* pP, uint8_t at){
  if(at<1 || at>24)
    throw QString("Bad index");
  uint8_t index(at-1);
  if(m_points[index] != NULL)
    throw QString("Point already added");
  if(pP==NULL)
    throw QString("Attempt to add NULL point");
  m_points[index]=pP;
}
