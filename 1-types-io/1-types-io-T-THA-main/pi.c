/**
 * File: pi.c
 *
 * Author:
 * ID:
 * Date:
 */
#include<stdio.h>
#include<math.h>
int main() {
  double PI1, PI2;
  PI1 = (4 * atan(0.2) - atan (1.0/239)) *4;
  PI2 = (log(pow(640320, 3) +744)) /(sqrt(163));
  printf("%.15f\n%.15f", PI1, PI2);
  return 0;
}