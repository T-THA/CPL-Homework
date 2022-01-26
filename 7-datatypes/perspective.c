#include<stdio.h>
int board[1005][1005]={0};
int front[1005]={0};
int left[1005]={0};
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[j][i]>front[i]){
                front[i]=board[j][i];
            }
        }        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]>left[i]){
                left[i]=board[i][j];
            }
        }        
    }
    int max_front=front[0],max_left=left[0];
    for(int i=0;i<m;i++){
        if(front[i]>max_front){
            max_front=front[i];
        }
    }
    for(int i=0;i<n;i++){
        if(left[i]>max_left){
            max_left=left[i];
        }
    }

    int tmp_front=max_front,tmp_left=max_left;
    for(int i=0;i<tmp_front;i++){
        for(int j=0;j<m;j++){
            if(front[j]==max_front){
                printf("*");
                front[j]-=1;
            }else{
                printf(" ");
            }
        }
        max_front-=1;
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<tmp_left;i++){
        for(int j=0;j<n;j++){
            if(left[j]==max_left){
                printf("*");
                left[j]-=1;
                
            }else{
                printf(" ");
            }
        }
        max_left-=1;
        printf("\n");
    }
    return 0;
}