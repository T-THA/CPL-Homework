#include<stdio.h>
int main(){
    int number_total, i, m;
    long long a, sum;
    sum = 0;
    scanf("%d",&number_total);
    for(i = 1;i<=number_total;i++){
        scanf("%d %lld",&m,&a);
        if(m==1){
            sum =sum - a; 
        } else{
            sum =sum + a;
        }
    }
    printf("%lld",sum);

    return 0;

}