#ifndef TRIANGLEH
#define TRIANGLEH

#include <iostream>
#include <cmath>
using namespace std;

class Triangle{

public:
  Triangle( double xCoefficent, double yIntercept, double limit1, double limit2);
  double constant( double yValue, double limit1, double limit2);
  double line();
  double linearExpressionEvaluator( double x );
private:
  double limit1;
  double limit2;
  double xCoefficent;
  double yIntercept;
};
#endif