#include<stdio.h>
int main(){
    int n, max;
    scanf("%d\n",&n);
    char number[n];
    int total[26]={0};
    scanf("%s",number);
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if((int)number[i]-97 == j){
                total[j] +=1;
            }
        } 
    }
    max = total[0];
    for(int i=0;i<26;i++){
        if(total[i]>max){
            max = total[i];
        }
    }
    int max2=max;
    for(int i=0;i<max;i++){
        printf(" ");
        for(int i=0;i<26;i++){
            if(total[i]==max2){
                printf("=  ");
                total[i] -=1;
            }else{
                printf("   ");
            }
        }
        printf("\n");
        max2 -= 1;
    }
    printf("------------------------------------------------------------------------------\n");
    printf(" a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  ");
    return 0;
}