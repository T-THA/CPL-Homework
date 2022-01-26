#include<stdio.h>
int main(){
    long long n, i, sum;
    scanf("%lld",&n);
    long long number[2*n-1];
    for(i = 0;i < 2*n-1;i++){
        scanf("%lld",&number[i]);
    }
    sum = 0;
    for(i = 0; i < 2*n-1;i++){
        sum = sum ^ number[i];
    }
    printf("%lld",sum);
    return 0;
}