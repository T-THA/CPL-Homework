#include<stdio.h>
#include<math.h>
char board[1025][2050]={'\0'};
int tri(int n,int i,int y);
int main(){
    int n;
    scanf("%d",&n);
    tri(n,1023,0);
    for(int i=0;i<(int)(pow)(2,n);i++){
        for(int j=1024-(int)pow(2,n);j<1024+(int)pow(2,n);j++){
            if(board[i][j]!='\0'){
                printf("%c",board[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int tri(int n,int x,int y){
    if(y==1){
        tri(n,x,0);
        return 1;
    }
    if(n==1){
        board[y][x]='/', board[y][x+1]='\\', board[y+1][x-1]='/';
        board[y+1][x+2]='\\',board[y+1][x]='_',board[y+1][x+1]='_';
        return 1; 
    }else{
        tri(n-1,x-(int)pow(2,n-1),y+(int)pow(2,n-1));
        tri(n-1,x+(int)pow(2,n-1),y+(int)pow(2,n-1));
        tri(n-1,x,y);
        return 1;
    }
}