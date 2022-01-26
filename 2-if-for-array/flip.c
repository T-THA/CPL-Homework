#include<stdio.h>
int main(){
    long long n, i, j, sum;
    scanf("%lld",&n);
    long long number[n+1];
    for(i=0;i<n+1;i++){
        number[i]=0;
    }
    for(i=1;i<n+1;i++){
        sum = 0;
        for(j=1;j<i+1;j++){
            if(i % j ==0){
                sum += 1;
            }
        }
        if(sum % 2==1){
            printf("%lld ",i);
        }
    }
    return 0;

}