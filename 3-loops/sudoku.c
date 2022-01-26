#include<stdio.h>
#define SIZE 9
int board[SIZE][SIZE] = {
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0}};
int main(){
    char judge='Y';
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&board[i][j]);
            if(board[i][j]>9||board[i][j]<1){
                judge ='N';
            }
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<8;j++){
            for(int k=j+1;k<9;k++){
                if(board[i][j]==board[i][k]){
                    judge ='N';
                    break;
                }
            }
    }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<8;j++){
            for(int k=j+1;k<9;k++){
                if(board[j][i]==board[k][i]){
                    judge ='N';
                    break;
                }
            }
    }
    }
    for(int i=1;i<9;i+=3){
        for(int j=1;j<9;j+=3){
            int number[9]={board[i-1][j-1],board[i-1][j],board[i-1][j+1],board[i][j-1],board[i][j],board[i][j+1],board[i+1][j-1],board[i+1][j],board[i+1][j+1]};
            for(int k=0;k<8;k++){
                for(int l=k+1;l<9;l++){
                    if(number[k]==number[l]){
                        judge = 'N';
                        break;
                    }
                }
            }
        }
    }
    if(judge=='N'){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}