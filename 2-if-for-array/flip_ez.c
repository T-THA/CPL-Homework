#include<stdio.h>
int main(){
    long long n, i;
    scanf("%lld",&n);
    for(i=1;i*i<n+1;i++){
        printf("%lld ",i*i);
    }
    return 0;
}