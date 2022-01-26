#include<stdio.h>
#include<math.h>
#define MAX 25
int modulus[MAX]={0};
int N=0;
int f(double x);
int main(){
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        scanf("%d",&modulus[i]);
    }
    double l=0,r=0;
    scanf("%lf%lf",&l,&r);
    double p1=0,p2=0;
    p1= l*2/3+ r/3;
    p2= l/3+ r*2/3;
    while(p2-p1>pow(10,-6)){
        if(f(p1)>f(p2)){
            r=p2;
        }else{
            l=p1;
        }
        p1= l*2/3+ r/3;
        p2= l/3+ r*2/3;
    }
    printf("%.6f",p1);
    printf("%f",f(0));
    return 0;
}
int f(double x){
    double output=0.0;
    for(int i=0;i<=N;i++){
        output+= ((double)modulus[i]) *pow(x,N-i);
    }
    return output;
}