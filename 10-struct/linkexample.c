#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node* next;
}Node;
typedef struct link{
    Node* head;
    Node* tail;
}Link;

void init(Link *list);
void free(Link *list);
int main(){
    Node list;
    init(&list);
    
    return 0;
}
void init(Link *list){//初始化
    list->head =NULL;
    list->tail =NULL;
}