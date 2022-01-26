#include<stdio.h>
int k;//剩余操作次数
int flag=0;
long long Va,Vb,Vc;
long long a,b,c,a_aim,b_aim,c_aim;
int count[3]={0};//目标体积有几个0以及容器有几个0
void position_final_one(long long a,long long b,long long c,int k);
void position_final_two(long long a,long long b,long long c,int k);
int main(){
    scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b,&c,&a_aim,&b_aim,&c_aim);
    if(a_aim==0) count[0]+=1;
    if(b_aim==0) count[0]+=1;
    if(c_aim==0) count[0]+=1;
    if(Va==0) count[1]+=1;
    if(Vb==0) count[1]+=1;
    if(Vc==0) count[1]+=1;

    if(a_aim==a&&b_aim==b&&c_aim==c){//开局判断始末是否相等（包括0的情况）
        flag+=1;
    }else{
        if(k==0){//始末不相等但是无法操作
            flag=0;
        }else{
        //以下情况都是k>0 即至少可操作一次

        if(count[1]==2){//容器只有一个
            flag=0;
        }else if(count[1]==1){//容器有两个
            if(count[0]==2){//两个容器最终有1个是空的
                if(a+b+c==a_aim||a+b+c==b_aim||a+b+c==c_aim){//执行一次操作后即可达到
                    flag+=1;
                }else{
                    flag=0;
                }
        }else if(count[0]==1){//两个容器最终都不是空的，说明直接不相等了
            flag=0;
        }else if(count[0]==3){//两个容器最终都让它空
            if(a+b+c>0){//但是液体存在的话，无法得到全空
                flag=0;
            }else{
                flag+=1;
            }
        }
        }else{//有三个正常的瓶子
            if(count[0]==3){//三个容器最终都让它空
                if(a+b+c>0){//但是液体存在的话，无法得到全空
                    flag=0;
                }else{
                    flag+=1;
                }
            }else{
                if(a+b+c<a_aim+b_aim+c_aim){//初始的液体加起来不够
                    flag=0;
                }else{
                    if(count[0]==0){//最终三个都有液体
                    //因为一次倒水后必然会导致某个瓶子空了，故如果初始都是三个但不相等，最终必不相等
                        flag=0;
                    }else if(count[0]==2){//最终三个只有一个有液体
                        position_final_one(a,b,c,k);
                
                    }else{//最终三个有两个有液体
                        position_final_two(a,b,c,k);
                    }
                }
            }
    }
    }
    }

    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

void position_final_one(long long a,long long b,long long c,int k){
    if(a>Va) a=Va;
    if(b>Vb) b=Vb;
    if(c>Vc) c=Vc;
    if(a_aim==a&&b_aim==b&&c_aim==c){
        flag+=1;
        return;
    }else{
        if(k<=0){
            flag+=0;
            return;
        }else{
            if(a+b+c==a_aim+b_aim+c_aim){
                if(k>=2){
                    flag+=1;
                    return 1;
                }else{
                    flag+=0;
                    return 1;
                }
            }else if(a+b+c<a_aim+b_aim+c_aim){
                flag+=0;
                return 1;
            }else{
                if(a+b+c<a_aim&&a+b+c<b_aim&&a+b+c<c_aim){//虽然已经超出体积了但是怎么倒都不会溢出，就不太行
                    flag+=0;
                    return 1;
                }else{
                    position_final_one(0,b+a,c,k-1);
                    position_final_one(0,b,c+a,k-1);
                    position_final_one(a+b,0,c,k-1);
                    position_final_one(a,0,c+b,k-1);
                    position_final_one(a+c,b,0,k-1);
                    position_final_one(a,b+c,0,k-1);
                }
            }
        }
    }
}
void position_final_two(long long a,long long b,long long c,int k){
    
    
}