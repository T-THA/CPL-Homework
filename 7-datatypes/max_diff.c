#include<stdio.h>
#include<stdlib.h>
int number[105];
int max=0;
int len=0;
int judge(int x);
int main(){
    int n=0;
    while((scanf("%d",&n))!=EOF){
        number[len]=n;
        len+=1;                
    }
    for(int i=1;i<len;i++){
        judge(i);
    }
    printf("%d",max);
    return 0;
}
int judge(int x){
    int max_1=number[0],max_2=number[x];
    for(int i=0;i<x;i++){
        if(number[i]>max_1){
            max_1=number[i];
        }
    }
    for(int i=x;i<len;i++){
        if(number[i]>max_2){
            max_2=number[i];
        }
    }
    if(abs(max_1-max_2)>max){
        max=abs(max_1-max_2);
    }
}
