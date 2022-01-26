#include<stdio.h>
#include<stdlib.h>
int main(){
    char *point_high= malloc(4096 * sizeof(char));
    int l=0;
    while(scanf("%c",(point_high+l)) != EOF){
        l+=1;
    }
    if(*(point_high+0)>='a'&&(*(point_high+0)<='z')){
        *(point_high+0)-=32;
    }
    for(int j=1;j<l;j++){
        if(*(point_high+j)==' '){
            if(*(point_high+j+1)>='a'&&(*(point_high+l+1)<='z')){
                *(point_high+j+1)-=32;
            }
        }
        if(*(point_high+j-1)!=' '){
            if(*(point_high+j)>='A'&&*(point_high+j)<='Z'){
                *(point_high+j)+=32;
            }
        }
    }
    for(int i=0;i<l;i++){
        printf("%c",*(point_high+i));
    }
    free(point_high);
    return 0;
}