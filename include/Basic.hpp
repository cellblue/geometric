#pragma once

#include <cmath>
namespace geometric{
// 常数，运算
const double PI = acos(-1), EPS = 1e-9;
bool eq(double a, double b) { return abs(a - b) < EPS; } // ==
bool gt(double a, double b) { return a - b > EPS; }      // >
bool lt(double a, double b) { return a - b < -EPS; }     // <
bool ge(double a, double b) { return a - b > -EPS; }     // >=
bool le(double a, double b) { return a - b < EPS; }      // <=

// a的n次幂
template <typename T>
T fast_pow(T a,int n){
    T ans = 1; // 赋值为乘法单位元，可能要根据构造函数修改
    while (n){
        if (n & 1)
            ans = ans * a; // 这里就最好别用自乘了，不然重载完*还要重载*=，有点麻烦。
        n >>= 1;
        a = a * a;
    }
    return ans;
}

};