#include<stdio.h>
#include<math.h>
int modulus[22];
int n, p;
double f(double x);
double integration(double a, double b);
double judge(double a, double b);
int main(){
    scanf("%d%d",&n,&p);
    for(int i=0;i<=n;i++){
        scanf("%d",&modulus[i]);
    }
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.6f",judge(a, b));
    return 0;
}
double f(double x){
    double sum=0;
    for(int i=0;i<=n;i++){
        sum+=modulus[i]*pow(x,i);
    }
    sum=pow(sum,p);
    return sum;
}
double integration(double a, double b){
    double sum=0;
    sum = (4*f((a+b)/2)+f(a)+f(b))*(b-a)/6;
    return sum;
}
double judge(double a, double b){
    double tmp_judge=0.0;
    tmp_judge=integration(a, (a+b)/2)+integration((a+b)/2, b);
    if(tmp_judge-integration(a, b)<15*pow(10,-5)&&tmp_judge-integration(a, b)>-15*pow(10,-5)){
        return tmp_judge+ (tmp_judge-integration(a, b))/15;
    }else{
        return judge(a, (a+b)/2) + judge((a+b)/2, b);
    }
}