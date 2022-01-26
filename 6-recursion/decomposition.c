#include<stdio.h>
int board[30]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int n;
int decomposition(int n);
int help(int i,int j, int x);
int main(){
    scanf("%d",&n);
    decomposition(n);
    return 0;
}
int decomposition(int x){
    if(board[0]==n){
        printf("%d",n);
        return 1;
    }else{
        for(int i=0;i<x;i++){
            printf("%d ",board[i]);
        }
        printf("\n");
        for(int i=2;i<=x;i++){
            for(int j=x;j>=i;j--){
                if(board[i-2]+1<=board[j-1]-1){
                    if(help(i,j,x)){
                        board[i-2]=board[i-2]+1;
                        board[j-1]=board[j-1]-1;
                        decomposition(x);
                        return 1;
                    }
                }
            }
        }
        for(int i=0;i<x-2;i++){
            board[i]=1;
        }
        board[x-2]=n-(x-2);
        decomposition(x-1);
        return 1;   
    }    
}
int help(int i, int j, int x){
    int flag=1;
    for(int k=i-1;k<x;k++){
        if(board[i-2]+1>board[k]){
            flag=0;
        }
    }
    return flag;
}