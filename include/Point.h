#pragma once

#include <cmath>
namespace geometric{
// 点
class Point {
public:
    // using Vec = Point;  
    Point(double _x, double _y):x(_x),y(_y){}
    // 获取向量的x分量
    double getX() const {return x;}
    // 获取向量的y分量
    double getY() const {return y;}
    // 逆时针旋转90度的向量
    Vec rotate90a(const Vec& v) const { return {-v.y, v.x}; }  
    // 顺时针旋转90度的向量                        
    Vec rotate90c(const Vec& v) const { return {v.y, -v.x}; } 
    
    // 向量加向量                         
    Vec operator+(const Vec& other) const { return {x + other.x, y + other.y}; }   
    // 向量减向量
    Vec operator-(const Vec& other) const { return {x - other.x, y - other.y}; }
    // 数乘   
    Vec operator*(const double k) const { return {k * x, k * y}; }    
    Vec operator/(const double k) const { return {x / k, y / k}; }    
    // 点乘
    double operator*(const Vec& other) const { return x * other.x + y * other.y; } 
    // 叉乘
    double operator^(const Vec& other) const { return x * other.y - y * other.x; } 
    // 向量长度
    double len() const { return sqrt(x * x + y * y); }
    // 斜率      
    double slope(const Vec& v) const { return v.y / v.x; }
    // 获取单位向量
    Vec norm() const {return {x / len(), y / len()};}
    // 极角
    double theta() const {return  atan2(y, x);}
    bool operator<(const Vec& other) const { return theta() < other.theta(); } 

private:
    double x, y; 
};        
// 向量
using Vec = Point;            
};