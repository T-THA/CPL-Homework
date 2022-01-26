/**
 * File: gray.c
 *
 * Author:
 * ID:
 * Date:
 */

#include <stdio.h>

int main() {
  int number, n1, n2, n3, n4, m1, m2, m3, m4;
  scanf("%d", &number);
  n1 = number % 2;
  n2 = (number / 2) % 2;
  n3 = ((number / 2) / 2) % 2;
  n4 = (((number /2) /2) /2) % 2;
  m1 = n1 ^ n2;
  m2 = n2 ^ n3;
  m3 = n3 ^ n4;
  m4 = n4;
  printf("%d%d%d%d", m4, m3, m2, m1);
  return 0;
}