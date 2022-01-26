#include<stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    char palindrome[length];
    scanf("%s",palindrome);
    for(int i=0;i<length;i++){
        if(palindrome[i]=='?'){
            printf("%c",palindrome[length-i-1]);
        }else{
            printf("%c",palindrome[i]);
        }
    }
    return 0;
}