#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcat(char*s1, char*s2);
int main(){
    int T;
    scanf("%d",&T);
    char *point = malloc(T*2002*sizeof(char));
    for(int i=0;i<2*T;i++){
        scanf("%s",(point+i*1001));
    }
    for(int i=0;i<T;i++){
        mystrcat(point+2*i*1001,point+(2*i+1)*1001);
    }
    free(point);
    return 0;
}
void mystrcat(char*s1, char*s2){
    int flag=1;
    for(int i=0;i<strlen(s1);i++){
        if(*(s1+i)==*(s2)){
            if(strlen(s2)>strlen(s1)-i){
                for(int j=0;j<strlen(s1)-i;j++){
                    if(*(s1+i+j)!=*(s2+j)){
                        flag=0;
                    }
                }
                if(flag){
                    for(int j=0;j<i;j++){
                        printf("%c",*(s1+j));
                    }
                    for(int j=0;j<strlen(s2);j++){
                        printf("%c",*(s2+j));
                    }
                    printf("\n");
                    flag=0;
                    break;
                }
            }else{
                flag=1;
            }
        }        
    }
    if(flag){
        for(int j=0;j<strlen(s1);j++){
            printf("%c",*(s1+j));
        }
        for(int j=0;j<strlen(s2);j++){
            printf("%c",*(s2+j));
        }
        printf("\n");
    }
}