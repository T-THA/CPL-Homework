#include<stdio.h>
#include<math.h>
int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        long long a, b;
        char op[2];
        scanf("%lld%s%lld",&a,&op,&b);
        if(op[0]=='+'){
            printf("%d",a+b);
        }else if(op[0]=='-'){
            printf("%d",a-b);
        }else if(op[0]=='*' && op[1] !='*'){
            printf("%d",a*b);
        }else if(op[0]=='/' && op[1] !='*'){
            printf("%d",a/b);
        }else if(op[0]=='/' && op[1] =='*'){
            double k = a;
            printf("%.3f",1.0*k/b);
        }else if(op[0]=='*' && op[1] =='*'){
            printf("%d",(int)pow(a,b));
        }else if(op[0]=='%'){
            printf("%d",a%b);
        }
    }
    return 0;
}