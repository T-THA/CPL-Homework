#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
int m,q;
int hash(char *s){
    int len=strlen(s);
    int ret=0;
    for(int i=0;i<len;i++) ret=(ret+s[i]*(i+1))%N;
    return ret;
}
typedef struct node{
    char name[529];
    struct node*next;
}Node;

void add(Node*old,Node*new);
int find(char*s,Node*node);
Node*board[501825];
int judge[501825];
int main(){
    scanf("%d%d",&m,&q);
    N=2*m;
    for(int i=0;i<m;i++){
        char*tmp=malloc(529*sizeof(char));
        scanf("%s",tmp);
        int tmpint=hash(tmp);    
        if(!judge[tmpint]){
            board[tmpint]=malloc(sizeof(Node));
            board[tmpint]->next=NULL;
            judge[tmpint]=1;
        }
        Node*new=malloc(sizeof(Node));
        new->next=NULL;
        strcpy(new->name,tmp);
        add(board[tmpint],new);
        free(tmp);
    }
    for(int i=0;i<q;i++){
        char*tmp=malloc(529*sizeof(char));
        scanf("%s",tmp);
        int tmpint=hash(tmp);
        if(!judge[tmpint]){
            printf("No\n");
        }else{
            if(find(tmp,board[tmpint])){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
        free(tmp);
    }
    return 0;
}
void add(Node*old,Node*new){
    while(old->next!=NULL){
        old=old->next;
    }
    old->next=new;
}
int find(char*s,Node*node){
    while(node->next!=NULL){
        if(*(node->name+0)==*(s+0)){
            if(strcmp(node->name,s)==0){
                return 1;
            }
        }
        node=node->next;
    }
    if(*(node->name+0)==*(s+0)){
            if(strcmp(node->name,s)==0){
                return 1;
            }
        }
    return 0;
}