#include<stdio.h>
#include<stdlib.h>
int main(){
    long long tmp;
    scanf("%X",&tmp);
    printf("%d\n",tmp);
    printf("%u\n",tmp);
    // float *tmp_2= (float *)&tmp;
    // printf("%f\n",*tmp_2);
    float *tmp_2;
    tmp_2= (float *)&tmp;
    printf("%f\n",*tmp_2);
    return 0;
}