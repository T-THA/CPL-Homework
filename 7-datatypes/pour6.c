#include<stdio.h>
int k=0,flag=0;
long long Va,Vb,Vc,a,b,c,a_aim,b_aim,c_aim;
int position_final(long long a,long long b,long long c,int k);
int main(){
    scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b,&c,&a_aim,&b_aim,&c_aim);
    position_final(a,b,c,k);
    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
int position_final(long long a,long long b,long long c,int k){
    if(a>Va) a=Va;
    if(b>Vb) b=Vb;
    if(c>Vc) c=Vc;
    if(a_aim==a&&b_aim==b&&c_aim==c){
        flag+=1;
        return 1;
    }else{
        if(k<=0||a+b+c<a_aim+b_aim+c_aim||a+b+c<a_aim&&a+b+c<b_aim&&a+b+c<c_aim){
            flag+=0;
            return 1;
        }else{
            position_final(0,b+a,c,k-1);
            position_final(0,b,c+a,k-1);
            position_final(a+b,0,c,k-1);
            position_final(a,0,c+b,k-1);
            position_final(a+c,b,0,k-1);
            position_final(a,b+c,0,k-1);          
        }
    }
}


