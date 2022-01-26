#include<stdio.h>
int board[30]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int tmp[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int n;
int decomposition(int x);
int help(int x);
int judge(int x);
int tmpchange(int o,int j);
int main(){
    scanf("%d",&n);
    decomposition(n);
    return 0;
}
int decomposition(int x){
    if(x==1){
        printf("%d",n);
        return 1;
    }else{
        for(int i=0;i<x-1;i++){
            board[i]=1;
        }
        board[x-1]=n-(x-1);
        help(x);
        decomposition(x-1);
        return 1;   
    }    
}
int help(int x){
//排列顺序必须是，最高位从上到下是不严格递减的，
//而对于相同的如两次都是5，则这两次的次高位必须也符合不严格的递减
//思路:尝试找到-1以后合法的最小的数和+1以后合法的最大的数
    for(int i=0;i<x;i++){
        printf("%d ",board[i]);
    }
    printf("\n");
    
    for(int j=1;j<x;j++){
        for(int i=j-1;i>=0;i--){
            board[i]+=1;
            board[j]-=1;
            
            if(judge(x)){
                for(int o=j;o>1;o--){
                    tmpchange(o, j);
                    if(judge(x)){
                        help(x);
                    }else{
                        for(int l=0;l<o;l++){
                            board[j-1]-=tmp[l];
                            board[l]+=tmp[l];
                            tmp[l]=0;
                        }
                    }
                }
                help(x);         
            }else{
                board[i]-=1;
                board[j]+=1;
            }
        }
    }
    return 1;
    
}
int judge(int x){
    int flag=1;
    for(int i=0;i<x-1;i++){
        if(board[i]>board[i+1]){
            flag=0;
        }
    }
    return flag;
}
int tmpchange(int o,int j){
    for(int k=0;k<o;k++){
        if(board[k]!=1){
            tmp[k]=board[k]-1;
            board[k]=1;
            board[j-1]+=tmp[k];
        }
    }
}