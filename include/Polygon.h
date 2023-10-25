#pragma once

#include <vector>
#include "Point.h"
namespace geometric{
class Ploygon{

    double getArea();
    double getLength();
    //判定是不是凸多边形
    bool isConvex();
private:
    std::vector<Point> points; 
    std::vector<Segment> segs;
};
};