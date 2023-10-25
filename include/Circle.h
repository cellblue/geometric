#pragma once

#include "Point.h"
#include "Basic.h"
namespace geometric{
//圆
class Circle{
public:
    double getArea(){ return PI*r*r;}
    double getLength(){return 2*PI*r;}
    const Point& getO() const {return O;}
    double getR() const {return r;}
private:
    Point O; 
    double r; 
};


};