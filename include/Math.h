#pragma once
#include <cmath>
#include "Object.h"
namespace geometric{
// 距离类，只考虑欧拉距离
// 两点之间的距离
double distance(const Point& A, const Point& B);
// 点到直线的距离
double distance(const Point& A, const Line& line);
// 点到圆的距离
double distance(const Point& A, const Circle& B);
// 直线之间的距离
double distance(const Line& line1, const Line& line2);
// 直线到圆的距离
double distance(const Line& line, const Circle& B);

// 交点类，是否相交，如果相交，交点返回vector<point>
// 直线和直线的交点，不相交返回point_NaN
Point& intersection(const Line& A, const Line& B);
// 直线和圆的交点，不相交返回
std::vector<Point>& intersection(const Line& A, const Circle& B);

// 点集问题类
// 平面最近点对

// 凸包

// 旋转卡壳

// 最小圆覆盖
};