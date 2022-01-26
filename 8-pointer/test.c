#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *output= malloc(4096 * sizeof(char));
    // scanf("%s",point_high);

    // if(*(point_high+0)>='a'&&(*(point_high+0)<='z')){
    //     *(point_high+0)-=32;
    // }
    // for(int j=1;j<l;j++){
    //     if(*(point_high+j)=' '){
    //         if(*(point_high+j+1)>='a'&&(*(point_high+l+1)<='z')){
    //             *(point_high+j+1)-=32;
    //         }
    //     }
    //     if(*(point_high+j-1)!=' '){
    //         if(*(point_high+j)>='A'&&*(point_high+j)<='Z'){
    //             *(point_high+j)+=32;
    //         }
    //     }
    // }
    char copy;
    *(output)='r',*(output+1)='e',*(output+2)='s',*(output+3)='e',*(output+4)='r',*(output+5)='v',*(output+6)='e',*(output+7)='d';
    char *pos=strchr(output, 'd');
    if(pos==NULL) printf("null\n");
    char k='k';
    char h='\n';
    char l='l';
    int len=strlen(&h);
    int len2=strlen(pos);
    int len3=strlen(output);
    printf("%c%c%c %d %c\n%d  %d   %c",k,h,l,len,*(output+1),len2,len3,*pos);
    free(output);
    return 0;
}