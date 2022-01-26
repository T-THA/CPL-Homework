#include<stdio.h>
int k;//剩余操作次数
int flag;
long long Va,Vb,Vc;
long long a,b,c,a_aim,b_aim,c_aim;
void judge(long long a,long long b,long long c,int k);
void equal(long long a,long long b,long long c,int k);
void more(long long a,long long b,long long c,int k);
int main(){
    scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b,&c,&a_aim,&b_aim,&c_aim);
    judge(a,b,c,k);
    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
void judge(long long a,long long b,long long c,int k){
    if(a+b+c<a_aim+b_aim+c_aim){
        flag=0;
    }else if(a+b+c==a_aim+b_aim+c_aim){
        equal(a,b,c,k);
    }else{
        more(a,b,c,k);
    }
}
void equal(long long a,long long b,long long c,int k){
    if(a==a_aim&&b==b_aim&&c_aim){
        flag=1;
    }else{
        if(k==0){
            flag=0;
        }else{
            if(a_aim*b_aim*c_aim==0){
                if(a_aim==0){
                    return;//edit here
                //    if(a+b==b_aim||a+c==c_aim||(a+b==c_aim&&(a+b<Va||))||(a+c==b_aim&&a+c<))
                }
            }else{
                flag=0;
            }
        }
    }
}