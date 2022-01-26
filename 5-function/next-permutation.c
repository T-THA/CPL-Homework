#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int number[2000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int max_len=0;
    for(int i=n;i>0;i--){
        if(number[i]<number[i-1]){
            max_len+=1;
        }else{
            break;
        }
    }
    int min=number[n-max_len], mark=n-max_len;
    for(int i=n-max_len+1;i<n;i++){
        if(number[i]<min && number[i]>number[n-max_len-1]){
            min=number[i];
            mark = i;
        }
    }
    int tmp=0;
    tmp = number[mark];
    number[mark]=number[n-max_len-1];
    number[n-max_len-1]=tmp;
    for(int i=0;i<n-max_len;i++){
        printf("%d ",number[i]);
    }
    for(int i=n-1;i>n-max_len-1;i--){
        printf("%d ",number[i]);
    }
    return 0;
}