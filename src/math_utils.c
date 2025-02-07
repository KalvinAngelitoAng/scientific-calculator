#include "../include/math_utils.h"
#include <stdio.h>
#include <math.h>

double power(double base, double exponent){
  return pow(base, exponent);
}

double square_root(double num){
  if(num >= 0){
    return sqrt(num);
  }
  else{
    printf("Error : Negative input for square root opearation");
    return -1;
  }
}

int factorial(int num){
  if(num <= 1){
    return 1;
  }
  else{
    return num * factorial(num - 1);
  }
}

double log_base_10(double num) {
  if (num > 0)
      return log10(num);
  else {
      printf("Error: Logarithm of non-positive number\n");
      return -1;
  }
}

double log_base_e(double num) {
  if (num > 0)
      return log(num);
  else {
      printf("Error: Logarithm of non-positive number\n");
      return -1;
  }
}