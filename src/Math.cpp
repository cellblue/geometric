#include <Math.h>
namespace geometric{
double distance(const Point& A, const Point& B){
    double dx = A.getX()-B.getX(), dy = A.getY()-B.getY();
    return sqrt(dx*dx+dy*dy);
}

double distance(const Point& A,const Line& line){
    Vec PA = A - line.getP();
    double l1 = PA.len();
    double l2 = PA*line.getv()/l1;
    return sqrt(l1*l1-l2*l2);
}

double distance(const Point& A, const Circle& B){
    Point CircleO = B.getO();
    double CircleR = B.getR();
    
    return distance(A,CircleO) - CircleR;
}   

double distance(const Line& line, const Circle& B){
    Point CircleO = B.getO();
    double CircleR = B.getR();
    return distance(CircleO, line)-CircleR;
}

Point& intersection(const Line& A, const Line& B){
    
}

};