#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    char number[n];
    scanf("%s",number);
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += (number[i] - '0')*((int)pow(2,n-i-1));
    }
    printf("%lld",sum);
    return 0;
}