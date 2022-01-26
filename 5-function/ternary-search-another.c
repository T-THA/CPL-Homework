#include<stdio.h>
#include<math.h>
#define MAX 25
int modulus[MAX]={0};
int N=0;
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
    while(p2-p1>pow(10,-7)){
        double output_p1=0,output_p2=0;
        for(int i=0;i<=N;i++){
            output_p1+= (double)modulus[i] *pow(p1,N-i);
        }
        for(int i=0;i<=N;i++){
            output_p2+= (double)modulus[i] *pow(p2,N-i);
        }
        if(output_p1>=output_p2){
            r=p2;
        }else{
            l=p1;
        }
        p1= l*2/3+ r/3;
        p2= l/3+ r*2/3;
    }
    printf("%.6f",p1);
    return 0;
}
