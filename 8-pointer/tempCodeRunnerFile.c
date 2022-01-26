#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *point=malloc(10200*sizeof(char));
    char *split_point=malloc(15000*sizeof(char));
    char mark;
    gets(point);
    mark=getchar();
    int len=strlen(point);
    int count_1=0,count_2=0;
    for(int i=0;i<len;i++){
        if(*(point+i)!=mark){
            *(split_point+count_1*150+count_2)=*(point+i);
            count_2+=1;
        }else{
            count_1+=1;
            count_2=0;
        }
    }//一共count——1 + 1 串
    for(int i=1;i<count_1+1;i++){
        for(int j=i;j>0;j--){
            if(strcmp((split_point+(j-1)*150), (split_point+j*150))>0){
                char tmp=*(split_point+(j-1)*150);
                *(split_point+(j-1)*150)=*(split_point+j*150);
                *(split_point+i*150)=tmp;
            }else{
                break;
            }
        }
    }
    for(int i=0;i<count_1+1;i++){
        for(int i=0;i<strlen(split_point+i*150);i++){
            printf("%c",*(split_point+i*150));
        }
        printf("\n");
    }
    free(point);
    free(split_point);
    return 0;
}