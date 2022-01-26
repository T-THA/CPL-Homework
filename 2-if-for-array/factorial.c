#include<stdio.h>
int main(){
    int n, i, j;
    long long sum_total,sum_one;
    sum_total = 0;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        sum_one = 1;
        for(j = 1; j<=i;j++){
            sum_one = sum_one *j;
        }
        sum_total +=sum_one; 
    }
    printf("%lld",sum_total % 10007);
    return 0;
}