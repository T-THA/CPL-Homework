/**
 * File: inverse.c
 *
 * Author:
 * ID:
 * Date:
 */
#include<stdio.h>
int main() {
  int number, n1, n2, n3;
  scanf("%d", &number);
  n1 = number % 10;
  n2 = (number /10) %10;
  n3 = (number /100) %10;
  printf("%d%d%d", n1, n2, n3);

  return 0;
}

