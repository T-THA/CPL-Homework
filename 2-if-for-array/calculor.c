#include<stdio.h>
#include<math.h>
int main(){    
    long a, b;
    char op[114514];
    while (scanf("%ld%s%ld",&a,op,&b) != EOF){
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
        printf("\n");
    }
    return 0;
}