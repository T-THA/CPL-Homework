#include<stdio.h>
int main(){
    long long n, i, j,sum;
    scanf("%lld",&n);
    long long number[2*n-1];
    for(i = 0;i < 2*n-1;i++){
        scanf("%lld",&number[i]);
    }
    sum = 0;
    for(i = 0;i < 2*n-1;i++){
        for(j = 0 ; (j<2*n-1) && (j !=i);j++){
            if(number[i] == number[j]){
                sum =sum;
            }else{
                printf("%lld",number[i]+sum);
                break;
            }
            }
        }
    return 0;
}

