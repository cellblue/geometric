#pragma once

#include "Point.h"
#include "Basic.h"
namespace geometric{

//直线
class Line{
public:
    // 两点式
    Line(const Point& A,const Point& B):P(A),v(B - A){}
    // 斜截式
    Line(double k, double b):P({0, b}),v({1, k}){}
    // 点斜式
    Line(const Point& P, double k):P(P), v({1, k}){}
    double set_x(double x)const {return P.getY() + (x - P.getX()) * v.getY() / v.getX();}
    double set_y(double y)const {return P.getX() - (y + P.getY()) * v.getX() / v.getY();}
    //点是否在直线上
    bool isPointIn(const Point& point) const{return eq(set_x(point.getX()), point.getY());}
    const Vec& getv()const {return v;}
    const Point& getP()const {return P;}
private:
    //统一使用点向式
    Point P; 
    Vec v;
};

//线段
class Segment{
public:
    //获取线段中点
    Point getMid() const { return {(A.getX()+B.getX())/2,(A.getY()+B.getY())/2};}
private:
    Point A, B; 
};
};