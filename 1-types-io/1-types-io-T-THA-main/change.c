#include<stdio.h>
int main() {
  int money,n1,n2,n3,n4;
  scanf("%d", &money);
  n1 = money / 20;
  n2 = (money - n1 * 20) / 10;
  n3 = (money - n1 * 20 - n2 * 10) / 5;
  n4 = money - n1 * 20 - n2 * 10 - n3 * 5;
  printf("%d\n%d\n%d\n%d\n",n1,n2,n3,n4);
  return 0;
}

