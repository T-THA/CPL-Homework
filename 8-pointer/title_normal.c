#include<stdio.h>
char number[4096][4096];
int main(){
    int l=0;
    while(scanf("%s",number[l]) != EOF){
        l+=1;
    }
    for(int j=0;j<l;j++){
        if(number[j][0]>='a'&&number[j][0]<='z'){
            number[j][0]-=32;
        }
        int k=1;
        while(number[j][k]!='\0'){
            if(number[j][k]>='A'&&number[j][k]<='Z'){
                number[j][k]+=32;
            }
            k+=1;
        }
    }
    
    for(int i=0;i<l;i++){
        printf("%s ",number[i]);
    }
    return 0;
}