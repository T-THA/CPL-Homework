#include<stdio.h>
int k;//剩余操作次数
int flag=0;
long long Va,Vb,Vc;
long long a,b,c,a_aim,b_aim,c_aim;
int count[3]={0};//目标体积有几个0以及容器有几个0
void judge(long long a,long long b,long long c,int k);
void position(long long a,long long b,long long c,int k);
int main(){
    scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b,&c,&a_aim,&b_aim,&c_aim);
    if(a_aim==0) count[0]+=1;
    if(b_aim==0) count[0]+=1;
    if(c_aim==0) count[0]+=1;
    if(Va==0) count[1]+=1;
    if(Vb==0) count[1]+=1;
    if(Vc==0) count[1]+=1;

    if(count[1]==3){
        flag+=1;//容器全0
    }else if(count[1]==2){//容器只有一个
        if(a_aim==a&&b_aim==b&&c_aim==c){
            flag+=1;
        }else{
            flag=0;
        }
    }else if(count[1]==1){//容器有两个
        if(count[0]==2){//两个中目标空体积1个
            if((a+b+c==a_aim||a+b+c==b_aim||a+b+c==c_aim)&&(k>0)){
                flag+=1;
            }else{
                flag=0;
            }
        }else if(count[0]==1){//目标空体积0个
            if(a_aim==a&&b_aim==b&&c_aim==c){
                flag+=1;
            }else{
                flag=0;
            }
        }else if(count[0]==3){//两个全空
            if(a+b+c>0){
                flag=0;
            }else{
                flag+=1;
            }
        }
    }else{//正常状态，都是有正常容积的瓶子
        if(count[0]==3){
            if(a+b+c>0){
                flag=0;
            }else{
                flag+=1;
            }
        }else if(count[0]==0){
            if(a_aim==a&&b_aim==b&&c_aim==c){
                flag+=1;
            }else{
                flag=0;
            }
        }
    }
    position(a,b,c,k);
    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
void judge(long long a,long long b,long long c,int k){
    if(a==a_aim&&b==b_aim&&c==c_aim){
        flag+=1;
    }else{
        flag+=0;
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
                    if(a+b==b_aim||a+c==c_aim||(a+b==c_aim&&(a+b<Va||))||(a+c==b_aim&&a+c<))
                }
            }else{
                flag=0;
            }
        }
    }
}
void position(long long a,long long b,long long c,int k){
    judge(a,b,c,k);
    if(flag>0){
        return 1;
    }else{
        if(a>Va) a=Va;
        if(b>Vb) b=Vb;
        if(c>Vc) c=Vc;
        if(a+b+c<a_aim+b_aim+c_aim){
            return 1;//总量不足
        }
        if((a==0&&b==0)||(c==0&&b==0)||(a==0&&c==0)){
            if(a_aim*b_aim*c_aim)
        }
        if(a==0||b==0||c==0)
    }
}