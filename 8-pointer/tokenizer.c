#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int flag=1;
int output_location=0;
void process(char*s, char*output);
int main(){
    char *output=malloc(40960*sizeof(char));
    char *s=malloc(4096*sizeof(char));
    while(scanf("%s",s) != EOF){
        char *position = strchr(s,';');
        if(position== NULL){
            process(s,output+output_location);
            output_location+=10;
        }else if(strlen(position)!=1){
            char *tmp=malloc(4096*sizeof(char));
            for(int i=0;i<strlen(s)-strlen(position);i++){
                *(tmp+i)=*(s+i);
            }
            process(tmp, output+output_location);
            output_location+=10;
            *(output+output_location)='\n';
            output_location+=10;
            process(position+1, output+output_location);
            output_location+=10;
            free(tmp);
        }else if(strlen(s)==1&&*s==';'){
            *(output+output_location)='\n';
            output_location+=10;
        }else{
            char *tmp=malloc(4096*sizeof(char));
            for(int i=0;i<strlen(s)-1;i++){
                *(tmp+i)=*(s+i);
            }
            process(tmp, output+output_location);
            output_location+=10;
        }
    }
    if(flag){
        for(int i=0;i<output_location/10;i++){
            for(int j=0;j<strlen(output+i*10);j++){
                printf("%c",*(output+j+i*10));
            }
            printf(" ");
        }
    }else printf("Compile Error");
    free(output);
    free(s);   
    return 0;
}
void process(char*s, char*output){
    if(flag){
        if((*(s)=='c'&&*(s+1)=='o'&&*(s+2)=='n'&&*(s+3)=='s'&&*(s+4)=='t')||
        (*(s)=='i'&&*(s+1)=='n'&&*(s+2)=='t')|| (*(s)=='f'&&*(s+1)=='l'&&*(s+2)=='o'&&*(s+3)=='a'&&*(s+4)=='t')||
        (*(s)=='d'&&*(s+1)=='o'&&*(s+2)=='u'&&*(s+3)=='b'&&*(s+4)=='l'&&*(s+5)=='e')||
        (*(s)=='l'&&*(s+1)=='o'&&*(s+2)=='n'&&*(s+3)=='g')||
        (*(s)=='s'&&*(s+1)=='t'&&*(s+2)=='a'&&*(s+3)=='t'&&*(s+4)=='i'&&*(s+5)=='c')||
        (*(s)=='v'&&*(s+1)=='o'&&*(s+2)=='i'&&*(s+3)=='d')||
        (*(s)=='c'&&*(s+1)=='h'&&*(s+2)=='a'&&*(s+3)=='r')||
        (*(s)=='e'&&*(s+1)=='x'&&*(s+2)=='t'&&*(s+3)=='e'&&*(s+4)=='r'&&*(s+5)=='n')||
        (*(s)=='r'&&*(s+1)=='e'&&*(s+2)=='t'&&*(s+3)=='u'&&*(s+4)=='r'&&*(s+5)=='n')||
        (*(s)=='b'&&*(s+1)=='r'&&*(s+2)=='e'&&*(s+3)=='a'&&*(s+4)=='k')||
        (*(s)=='e'&&*(s+1)=='n'&&*(s+2)=='u'&&*(s+3)=='m')||
        (*(s)=='s'&&*(s+1)=='t'&&*(s+2)=='r'&&*(s+3)=='u'&&*(s+4)=='c'&&*(s+5)=='t')||
        (*(s)=='u'&&*(s+1)=='n'&&*(s+2)=='i'&&*(s+3)=='o'&&*(s+4)=='n')||
        (*(s)=='g'&&*(s+1)=='o'&&*(s+2)=='t'&&*(s+3)=='o')||
        (*(s)=='t'&&*(s+1)=='y'&&*(s+2)=='p'&&*(s+3)=='e'&&*(s+4)=='d'&&*(s+5)=='e'&&*(s+6)=='f')){
            *(output)='r',*(output+1)='e',*(output+2)='s',*(output+3)='e',*(output+4)='r',*(output+5)='v',*(output+6)='e',*(output+7)='d';
        }else if(*(s)>='0'&&*(s)<='9'){
            int flag_int=1,flag_float=0;
            for(int i=0;i<strlen(s);i++){
                if(!(*(s+i)>='0'&&*(s+i)<='9')) flag_int=0;
                if(*(s+i)=='.') flag_float+=1;
            }
            if(flag_int){
                *(output)='i',*(output+1)='n',*(output+2)='t',*(output+3)='e',*(output+4)='g',*(output+5)='e',*(output+6)='r';
            }else if(flag_float==1){
                *(output)='f',*(output+1)='l',*(output+2)='o',*(output+3)='a',*(output+4)='t';
            }else flag=0;
        }else if(*s=='.'){
            int flag_float=1;
            for(int i=0;i<strlen(s);i++){
                if(!(*(s+i)>='0'&&*(s+i)<='9')) flag_float=0;
            }
            if(flag_float){
                *(output)='f',*(output+1)='l',*(output+2)='o',*(output+3)='a',*(output+4)='t';
            }else flag=0;
        }else if((strlen(s)==2&&(*(s)=='='||*(s)=='!'||*(s)=='>'||*(s)=='<')&&*(s+1)=='=')||
        (strlen(s)==1&&(*s=='+'||*s=='-'||*s=='*'||*s=='/'||*s=='='||*s=='>'||*s=='<'))){
            *(output)='o',*(output+1)='p',*(output+2)='e',*(output+3)='r',*(output+4)='a',*(output+5)='t',*(output+6)='o',*(output+7)='r';
        }else if(*s=='_'||(*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z')){
            *(output)='v',*(output+1)='a',*(output+2)='r',*(output+3)='i',*(output+4)='a',*(output+5)='b',*(output+6)='l',*(output+7)='e';
        }else flag=0;
    }
}