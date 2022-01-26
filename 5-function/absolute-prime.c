#include<stdio.h>
#include<math.h>
int judge(int number);
int turn(int number);
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(judge(i) && judge(turn(i))){
            sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}
int judge(int number){
    if(number==2 ||number==3){
        return 1;
    }else{
        for(int i=2;i<=sqrt(number+0.5);i++){
            if(number%i==0){
                return 0;
            }
        }
        return 1;
    }
    
}
int turn(int number){
    int oppo=0,len=0;
    int number2=number;
    while(number>0){
        len+=1;
        number=number/10;
    }
    for(int i=len;i>0;i--){
        int note=number2 %10;
        oppo+=note *(int)pow(10,i-1);
        number2=number2 /10;
    }
    return oppo;
}