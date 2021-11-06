#include "Rectangle.h"

Rectangle::Rectangle( double yValue, double limit1, double limit2)
  : yValue(yValue), limit1(limit1), limit2(limit2){}

/*
* Calculates the are under a horizontal line.  
* Uses A=bh=(x2-x1)y
*/
double Rectangle::constant(){
    double res = 0;
    
    res = (limit2 - limit1) * yValue;

    return res;
}