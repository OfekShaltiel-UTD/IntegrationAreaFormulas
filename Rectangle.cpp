#include "Rectangle.h"

Rectangle::Rectangle(double yValue, double limit1, double limit2)
  : yValue(yValue), limit1(limit1), limit2(limit2){}

double Rectangle::constant(){
    double res = 0;
    
    res = yValue * (limit2 - limit1);

    return res;
}