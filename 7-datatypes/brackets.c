#include<stdio.h>
char board[31][114514]={'\0'};
char stack[114514]={' '};
int T;
int judge(int n,int len);
int main(){
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%s",board[i]);
    }
    for(int i=0;i<T;i++){
        int len=0;
        while(board[i][len]!='\0'){
            len+=1;
        }
        judge(i,len);
        for(int i=0;i<len;i++){
            stack[i]=' ';
        }
    }
    return 0;
}
int judge(int n,int len){
    int count=0;
    int flag=1;
    for(int i=0;i<len;i++){
        if(board[n][i]!='{'&&board[n][i]!='('&&board[n][i]!='['){
            if(stack[count-1]=='{'&&board[n][i]=='}'){
                flag=1;
                stack[count-1]=' ';
                count-=1;
            }else if(stack[count-1]=='['&&board[n][i]==']'){
                flag=1;
                stack[count-1]=' ';
                count-=1;
            }else if(stack[count-1]=='('&&board[n][i]==')'){
                flag=1;
                stack[count-1]=' ';
                count-=1;
            }else{
                flag=0;
                break;
            }
        }else{
            stack[count]=board[n][i];
            count+=1;
        }
    }
    if(flag==1){
        printf("True");
    }else{
        printf("False");
    }
    printf("\n");
    return 1;
}