#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
int m,q;

int hash(char *s){
    int len=strlen(s);
    int ret=0;
    for(int i=0;i<len;i++)ret=(ret+s[i]*(i+1))%N;
    return ret;
}
typedef struct node{
    char name[500];
    struct file *next;
}Node;
void add(Node*old,Node*new);
int find(char*s,Node*node);
Node*board[500000];
int main(){
    scanf("%d%d",&m,&q);
    int N=2*m;
    for(int i=0;i<500000;i++){
        board[i]=malloc(sizeof(Node));
        board[i]->next=NULL;
    }
    for(int i=0;i<m;i++){
        char*tmp=malloc(1001*sizeof(char));
        scanf("%s",tmp);
        int tmpint=hash(tmp);
        Node*new=malloc(sizeof(Node));
        strcpy(new->name,tmp);
        free(tmp);
        new->next=NULL;
        add(board[tmpint],new);
    }
    for(int i=0;i<q;i++){
        char*tmp=malloc(1001*sizeof(char));
        scanf("%s",tmp);
        int tmpint=hash(tmp);
        if(find(tmp,board[tmpint])){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        free(tmp);
    }
    return 0;
}
void add(Node*old,Node*new){
    while(old->next==NULL){
        old->next=new;
    }
}
int find(char*s,Node*node){
    while(node->next!=NULL){
        if(strcmp(node->name,s)==0){
            return 1;
        }
    }
    if(strcmp(node->name,s)==0){
            return 1;
        }
    return 0;
}