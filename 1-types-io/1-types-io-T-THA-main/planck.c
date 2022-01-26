/**
 * File: inverse.c
 *
 * Author:
 * ID:
 * Date:
 */

#include <stdio.h>

int main(){
    double E , frequency;
    const double h = 6.626e-34;
    scanf("%lf", &frequency);
    E = h * frequency;
    printf("%.2e",E);

    return 0;
}