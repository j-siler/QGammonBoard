/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.h
 * Author: jsiler
 *
 * Created on July 10, 2018, 3:27 PM
 */

#ifndef POINT_H
#define POINT_H

#include <QLabel>

class Point : public QLabel{
    Q_OBJECT
public:
    Point(QWidget *parent = nullptr);
    virtual ~Point();
public slots:
    void handleButtonRelease(void);
    void handleButtonPress(void);
private:

};

#endif /* POINT_H */

