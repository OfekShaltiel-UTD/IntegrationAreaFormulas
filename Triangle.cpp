#include "Triangle.h"



Triangle::Triangle(double xCoefficent, double yIntercept,double limit1, double limit2)
  : xCoefficent(xCoefficent), yIntercept(yIntercept),limit1(limit1), limit2(limit2){}

double Triangle::constant(double yValue,double limit1, double limit2 ){
    double res = 0;

    res = yValue*(limit2-limit1);

    return res;
}

double Triangle::line(){
   double res = 0;

    res = (0.5) * (xCoefficent * (pow(limit2,2) - pow(limit1,2))) + constant(yIntercept,limit1,limit2);

    return res;
}