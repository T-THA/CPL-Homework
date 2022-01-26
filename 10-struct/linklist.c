#include<stdio.h>
#include<stdlib.h>

long long n,T;
char tmp[20];
long long tmpnum;
long long location;

typedef struct node{
    long long val;
    struct node* next;
}Node;
int main(){
    scanf("%lld%lld",&n,&T);
    Node *first=malloc(sizeof(Node));
    first->val=1;
    first->next=first;
    
    Node *help=malloc(sizeof(Node));
    long long count=1;
    help=first;
    while(++count<=n){
        Node *new=malloc(sizeof(Node));
        new->val=count;
        help->next=new;
        new->next=first;
        help=new;
    }
    count-=1;

    // 题干Remove的内容看错了，于是干脆整体指针往前移一格
    while(scanf("%s",tmp)!=EOF){
        if(tmp[0]=='F'){//前进
            scanf("%lld",&tmpnum);
            tmpnum=tmpnum%count;
            for(long long i=0;i<tmpnum;i++){
                help=help->next;
            }
        }
        if(tmp[0]=='B'){//后退
            scanf("%lld",&tmpnum);
            tmpnum=count-tmpnum%count;
            for(long long i=0;i<tmpnum;i++){
                help=help->next;
            }
        }
        if(tmp[0]=='I'){//插入
            scanf("%lld",&tmpnum);
            Node *insert=malloc(sizeof(Node));
            insert->val=tmpnum;
            insert->next=help->next->next;
            help->next->next=insert;
            count+=1;
        }
        if(tmp[0]=='R'){
            Node *tmp=location;
            help->next=help->next->next;
            free(tmp);
            count-=1;
        }
        if(tmp[0]=='P'){
            printf("%d\n",help->next->val);
        }
    }
    return 0;
}
