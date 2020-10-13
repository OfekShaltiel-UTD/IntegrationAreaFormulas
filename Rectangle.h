#ifndef RECTANGLEH
#define RECTANGLEH

#include <iostream>
#include <cmath>
using namespace std;



class Rectangle {

public:
  Rectangle(double yValue,double limit1, double limit2);
  double constant();
private:
  double limit1;
  double limit2;
  double yValue;
};
#endif