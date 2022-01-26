#include<stdio.h>
int yanghui(int a,int b);
int main(){
    int a=0,b=0;
    scanf("%d%d",&a,&b);
    long long tmp=yanghui(a, b);
    printf("%lld",tmp);
    return 0;
}
int yanghui(int a,int b){
    if(a==b || a==1 || b==1){
        return 1;
    }else{
        return yanghui(a-1,b-1)+yanghui(a-1,b);
    }
}
