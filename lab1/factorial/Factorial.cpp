//
// Created by mwypych on 02.02.17.
//
//komantarz
#include "Factorial.h"
#include <cmath>

double factorial(int value) {

  if (value == 0 || value == 1 || value == -1)
    return 1;
  else return (value<0) ? value * factorial(value-1) : value * factorial(fabs(value)-1);
  //if(value == 0)
   // return 1;
 // else
  //  return tgamma(fabs(value))*value ? value%2 == 0 && value>0: tgamma(fabs(value))*fabs(value);


}
