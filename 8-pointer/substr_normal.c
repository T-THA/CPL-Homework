#include<stdio.h>
#include<string.h>
char S[100005],T[100005];
int main(){
    scanf("%s%s",S,T);
    int len_s=strlen(S),len_t=strlen(T);
    int flag=1;
    for(int i=0;i<len_s;i++){
        if(T[0]==S[i]){
            for(int j=1;j<len_t;j++){
                if(T[j]!=S[i+j]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                printf("%d ",i);
            }
            flag=1;
        }
    }
    return 0;
}