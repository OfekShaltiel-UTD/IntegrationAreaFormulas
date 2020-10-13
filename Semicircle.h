#ifndef SEMICIRCLEH
#define SEMICIRCLEH
#include <iostream>
#include <cmath>
using namespace std;



class Semicircle{

public:
  Semicircle(double radius,double limit1, double limit2);
  double quarterOrSemiCircle();
private:
  double limit1;
  double limit2;
  double radius;
};
#endif