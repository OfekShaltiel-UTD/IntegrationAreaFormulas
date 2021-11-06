#include "Rectangle.h"
#include "Semicircle.h"
#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;


int main() {
   double limit1Constant, limit2Constant,limit1Line,limit2Line,limit1QuarterOrSemiCircle, limit2QuarterOrSemiCircle, yValue, xCoeffiencent, yIntercept, radius;
   cout << "Enter the first limit of integration for the area under a horizontal line" << endl;
   cin  >> limit1Constant;
   cout << "Enter the second limit of integration for the area under a horizontal line" << endl;
   cin  >> limit2Constant;
   cout << "Enter the y Value for the area under a horizontal line " << endl;
   cin  >> yValue;
   
   cout << "Enter the first limit of integration for the area of a non-horizontal line" << endl;
   cin  >> limit1Line;
   cout << "Enter the second limit of integration for the area of a non-horizontal line" << endl;
   cin  >> limit2Line;
   cout << "Enter the x Coeffiencent for the area under a non-horizontal line" << endl; 
   cin  >> xCoeffiencent;
   cout << "Enter the y intercept for the area under a non-horizontal line " << endl;
   cin  >> yIntercept;
   
   cout << "Enter the first limit of integration for a quarter or semi circle (enter only an x value 2 radi or 1 radius away from  the second limit of integration)" << endl;
   cin  >> limit1QuarterOrSemiCircle;
   cout << "Enter the second limit of integration for a quarter or semi circle (enter only an x value 2 radi or 1 radius away from  the first limit of integration)" << endl;
   cin  >> limit2QuarterOrSemiCircle;
   cout << "Enter the radius for the area under a semicircle" << endl;
   cin  >> radius;

   Rectangle constant1 = Rectangle(yValue,limit1Constant,limit2Constant);
   Semicircle semicircle1 = Semicircle(radius,limit1QuarterOrSemiCircle,limit2QuarterOrSemiCircle);
   Triangle line1 = Triangle(xCoeffiencent,yIntercept,limit1Line,limit2Line);
   cout << "The area under the graph of y= "<<yValue<< " from x = "<< limit1Constant <<" to x = "<<limit2Constant<< " is: " << constant1.constant() << endl; 
   cout << "The area under the graph of y= "<<xCoeffiencent<<"x + "<<yIntercept<< " from x = "<<limit1Line <<" to "<< "x = "<< limit2Line << " is: " << line1.line()<< endl;
   cout << "The area under the graph of y=sqrt("<<pow(radius,2) <<" - x^2) from x = "<<limit1QuarterOrSemiCircle <<" to x = "<< limit2QuarterOrSemiCircle <<" is: " << semicircle1.quarterOrSemiCircle() << endl;

}