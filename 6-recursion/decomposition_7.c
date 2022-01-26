#include<stdio.h>
int board[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int min;
int decomposition(int remain, int location);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        min=i;
        board[0]=min;
        decomposition(n-i,1);
    }
    return 0;
}
int decomposition(int remain, int location){
    if(remain!=0){
        int tmp=min;
        for(int i=tmp;i<=remain;i++){
            min = i;
            board[location]=min;
            decomposition(remain-i,location+1);
        }
        return 1;
    }else{
        for(int i=0;i<location;i++){
            printf("%d ",board[i]);
        }
        printf("\n");
        return 1;
    }
}