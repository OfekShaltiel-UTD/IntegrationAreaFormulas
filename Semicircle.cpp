#include "Semicircle.h"

Semicircle::Semicircle( double radius, double limit1, double limit2)
  : radius(radius), limit1(limit1), limit2(limit2){}

/* 
 * Calculates the area of the quarter or semi circle 
 * uses A=1/2r^2(theta)
 */ 
double Semicircle::quarterOrSemiCircle(){
    double res = 0;
    if((limit2 == -limit1 && limit2 == radius) || (limit2 - limit1) == 2 * radius){
        res = (0.5) * pow(radius,2)*(3.14);
    }
    if((limit2 == radius  && limit1 == 0) || (limit2 - limit1) == radius){
      res = (0.5) * pow(radius,2) * (1.57);
    
    }
    return res;
}