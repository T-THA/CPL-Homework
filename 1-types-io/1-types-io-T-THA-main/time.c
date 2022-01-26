#include<stdio.h>
int main() {
  /**
   * input example: November 17 1968 Sunday 6 6 6
   * output example: Sun Nov 17 06:06:06 1968
   */
  int day, year, hour, minute, second;
  char month[10],weekday[114514];
  scanf("%s %d %d %s %d %d %d", month, &day, &year, weekday, &hour, &minute, &second);
  printf("%.3s %.3s %d %.2d:%.2d:%.2d %d", weekday, month, day, hour, minute, second, year);

  return 0;
}