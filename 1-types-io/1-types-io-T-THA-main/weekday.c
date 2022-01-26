/**
 * File: weekday.c
 *
 * Author:
 * ID:
 * Date:
 */
#include<stdio.h>
#include<math.h>

int main() {
    int year, year_sub, month, month_sub_two, day, century, weekday;
    scanf("%d %d %d", &year, &month, &day);
    if(month < 3){
        month_sub_two = 10 + month;
        year_sub = (year -1) % 100;
        century = (year -1) / 100;
    } else{
        month_sub_two = month - 2;
        year_sub = year % 100;
        century = year / 100;
    }

    weekday = (int)(day + floor(2.6 *month_sub_two -0.2) +5 *(year_sub %4) +3 *year_sub + 5*(century % 4)) % 7;
    printf("%d",weekday);

    return 0;
}