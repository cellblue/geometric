#pragma once

#include "Line.h"
#include "Point.h"
#include "Circle.h"
#include "Polygon.h"

namespace geometric{
const Point O = {0, 0};                        // 原点
const Line Ox = {O, {1, 0}}, Oy = {O, {0, 1}}; // 坐标轴
const Point NaN_point = {NaN,NaN};             //不存在的点
};