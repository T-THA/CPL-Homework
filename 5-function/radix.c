#include<stdio.h>
#include<math.h>
int sum(int i,int x);
int minradix(int x);
int main(){
    int p,q,r;
    int radix=0;
    scanf("%d%d%d",&p,&q,&r);
    int min_radix=minradix(p);
    if(minradix(q)>min_radix){
        min_radix=minradix(q);
    }
    if(minradix(r)>min_radix){
        min_radix=minradix(r);
    }
    for(int i=min_radix+1;i<41;i++){
        if(sum(i,p)*sum(i,q)==sum(i,r)){
            radix=i;
            break;
        }
    }
    printf("%d",radix);
    return 0;
}
int sum(int i,int x){
    int sum_i=0,count=0;
    while(x>0){
        sum_i+= (x%10)* (int)pow(i,count);
        x=x/10;
        count+=1;
    }
    return sum_i;
}
int minradix(int x){
    int max =0;
    while(x>0){
        if(x%10>max){
            max=x%10;
        }
        x=x/10;
    }
    return max;
}