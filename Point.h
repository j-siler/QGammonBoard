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
#include <QDebug>
#include <qt5/QtWidgets/qwidget.h>

class Point : public QLabel{
    Q_OBJECT
public:
    Point(QWidget *parent = nullptr);
    virtual ~Point();
    
    enum class Color{BLACK, RED, NONE};
    struct State{
        uint8_t position;
        uint8_t count;
        Color color;
        inline bool operator == (const State& s) const{
            return color==s.color && count==s.count && position==s.position;
        }
        inline const State& operator = (const State &s){
            color=s.color;
            count=s.count;
            position=s.position;
            return *this;
        }
        
    };
    inline const State &state() const {return m_state;}
    static void add(Point* pP, uint8_t at);
public slots:
    void setState(const State &s);
    void handleButtonRelease(Point*);
    void handleButtonPress(Point*);
    inline void repaint(){
        qDebug()<<"Point::repaint";
        QLabel::repaint();
    }
signals:
    void clicked(Point*);
protected:
    void mousePressEvent(QMouseEvent* event);
    State m_state;
    static QVector<Point*> m_points;

};

#endif /* POINT_H */

