#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    double sum = 0;
    scanf("%d%d",&n,&x);
    for(int i=1;i<n+1;i++){
        double fact=1;
        for(int j=1;j<i+1;j++){
            fact = fact*(double)j;
        }
        sum += pow(x,i) / fact;
    }
    printf("%.3f",sum+1.000);
    return 0;
}