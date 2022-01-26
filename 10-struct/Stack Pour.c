#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node*next;
}Node;
int move[2000020];
int n,m;
void Move(Node*from,Node*to,int loca_from,int loca_to);
Node *reverse(Node*link);
Node *location[1000010];
Node *zerostack[1000010];
void printstack(Node*stack);
//思路 把每个栈看成一个链表
//先开个数组存下各个栈的链表的首个指针
//每次操作实际上是改掉next的指向
//print就查找链表并打印 直到null为止
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<2*m;i++){
        scanf("%d",&move[i]);
    }
    for(int i=1;i<=n;i++){
        Node *zero=malloc(sizeof(Node));
        zero->val=0;
        zero->next=NULL;
        zerostack[i]=zero;
        Node *tmp=malloc(sizeof(Node));
        tmp->val=i;
        tmp->next=zerostack[i];
        location[i]=tmp;
    }
    for(int i=0;i<2*m;i+=2){
        Move(location[move[i]],location[move[i+1]],move[i],move[i+1]);
    }
    for(int i=1;i<=n;i++){
        printstack(location[i]);
    }
    return 0;
}

void Move(Node*from,Node*to,int loca_from,int loca_to){//移动有问题
    if(from->val!=0){
        Node*tmp=reverse(from);
        location[loca_to]=tmp->next;
        tmp->next=NULL;
        from->next=to;
        location[loca_from]=zerostack[loca_from];
    }
}

Node *reverse(Node*link){//反转 返回起点
    if(link->next==NULL){
        return link;
    }else{
        Node *tmp=reverse(link->next);
        link->next->next=link;
        link->next=NULL;
        return tmp;
    }
}

void printstack(Node*stack){
    stack=reverse(stack);//从底部打印
    if(stack->next==NULL){
        printf("%d ",stack->val);
    }
    stack=stack->next;
    while(stack!=NULL){
        printf("%d ",stack->val);
        stack=stack->next;
    }
    printf("\n");
}