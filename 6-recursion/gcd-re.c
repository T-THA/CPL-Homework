/**
 * @file note.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-15
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
int GCD(int a, int b);
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    int tmp=0;
    tmp= GCD(a, b);
    printf("%d",tmp);
    return 0;
}
int GCD(int a, int b){
    if(a==b){
        return a;
    }
    if(a<b){
        return GCD(a,b-a);
    }else{
        return GCD(a-b, b);
    }
}