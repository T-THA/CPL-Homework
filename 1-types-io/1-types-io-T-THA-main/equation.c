/**
 * File: equation.c
 *
 * Author:
 * ID:
 * Date:
 */


#include <stdio.h>
#include <math.h>

int main() {
  double x1, x2, a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  x1 = (-b + sqrt(pow(b, 2) - 4 *a *c)) /(2 *a);
  x2 = (-b - sqrt(pow(b, 2) - 4 *a *c)) /(2 *a);
  printf("%.3f %.3f", x1, x2);

  return 0;
}