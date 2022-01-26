#include<stdio.h>

int main(){
    long long floor ,sum ,input;
    
    sum = 0;
    scanf("%lld",&floor);
    for(long long i =floor;i>0;i--){
        scanf("%lld",&input);
        sum += input *i;
    }
    printf("%lld",sum);
    return 0;
}