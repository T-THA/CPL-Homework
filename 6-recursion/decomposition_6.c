#include<stdio.h>
int board[30]={0};
int n;
int decomposition(int remain, int min, int len);
int main(){
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        decomposition(n,n-i+1,i);
    }
    return 0;
}
int decomposition(int remain, int min, int len){
    if(remain==0){
        for(int i=0;i<len;i++){
            printf("%d ",board[i]);
        }
        printf("\n");
    }
}