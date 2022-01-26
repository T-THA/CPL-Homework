#include<stdio.h>
char board[10005]={' '};
char require[10005][7];
int count=0;
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        gets(require[i]);
    }
    for(int i=0;i<n;i++){
        if(require[i][1]=='u'){
            board[count]=require[i][5];
            count+=1;
        }
        if(require[i][1]=='r'){
            if(board[0]==' '){
                printf("Empty\n");
            }else{
                for(int i=count-1;i>=0;i--){
                    printf("| %c |",board[i]);
                    printf("\n");
                }
                printf("|===|\n");
            }
            
        }
        if(require[i][0]=='p'&&require[i][1]=='o'){
            if(board[0]==' '){
                printf("Empty\n");
            }else{
                board[count-1]=' ';
                count-=1;
            }
        }
        if(require[i][0]=='t'&&require[i][1]=='o'){
            if(board[0]==' '){
                printf("Empty\n");
            }else{
                printf("%c",board[count-1]);
                printf("\n");
            }
        }
    }
    
    return 0;
}