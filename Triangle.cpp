#include "Triangle.h"

Triangle::Triangle( double xCoefficent, double yIntercept,double limit1, double limit2)
  : xCoefficent(xCoefficent), yIntercept(yIntercept),limit1(limit1), limit2(limit2){}

/* 
 * Calculates the area under a horizontal line  
 * uses A=bh=(x2-x1)y.
 */ 
double Triangle::constant( double yValue, double limit1, double limit2 ){
    double res = 0;

    res = (limit2-limit1) * yValue;

    return res;
}

/* 
 * Calculates the area under a line with non-zero slope   
 * Uses A=1/2bΔh+b(h_min)=1/2(x2-x1)(height at x2 - height at x1 )
 * + (x2 - x1)(minimium of the heights at x2 and x1)
 */ 
double Triangle::line(){
   double res = 0;
   double res2 = 0;
   double heightAtx2 = linearExpressionEvaluator( limit2 );
   double heightAtx1 = linearExpressionEvaluator( limit1 );
    res = (0.5) * ( limit2 - limit1 ) * ( heightAtx2 - heightAtx1 ) + constant( min( heightAtx2 , heightAtx1 ), limit1, limit2);
   
    return res;
}

double Triangle::linearExpressionEvaluator( double x ){
  return xCoefficent * x + yIntercept;
}