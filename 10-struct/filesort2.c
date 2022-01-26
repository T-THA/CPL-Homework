#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct file{
    char name[11];
    // char*name=malloc(11*sizeof(char));
    struct file *parent;
    struct file *first;
    struct file *second;
}File;
File *bigfile;
File *parentfile;//存放爹文件的指针的
int n,q;
char query[1001][11];//最多问500句
char belong[20010][11];
void Belong(char*child,char*parent);
void Query(char condition,char*file);
void findparent(File*location,char*parent,File*child);
int countfile(File*location);
int main(){
    scanf("%d%d",&n,&q);
    for(int i=0;i<2*n;i+=2){
        scanf("%s",belong[i]);
        scanf("%s",belong[i+1]);
    }
    for(int i=0;i<2*n;i+=2){
        Belong(belong[i],belong[i+1]);
    }
    for(int i=0;i<2*q;i+=2){
        scanf("%s",query[i]);
        scanf("%s",query[i+1]);
    }
    for(int i=0;i<2*q;i+=2){
        Query(query[i][0],query[i+1]);
    }
    return 0;
}
void Belong(char*child,char*parent){
    if(strcmp(parent,"~~~")==0){
        strcpy(bigfile->name,child);
        bigfile->parent=NULL;
        bigfile->first=NULL;
        bigfile->second=NULL;
    }else{
        File*childfile=malloc(sizeof(File));
        childfile->parent=NULL;
        childfile->first=NULL;
        childfile->second=NULL;
        strcpy(childfile->name,child);
        findparent(bigfile,parent,childfile);
    }
}
void findparent(File*location,char*parent,File*child){
    if(strcmp(location->name,parent)==0){
        if(location->first==NULL){
            parentfile->first=child;
            child->parent=location;
        }else{
            parentfile->second=child;
            child->parent=location;
        }
    }else{
        if(location->first!=NULL){
            findparent(location->first,parent,child);
        }
        if(location->second!=NULL){
            findparent(location->second,parent,child);
        }
    }
}
void Query(char condition,char*file){
    if(condition=='r'){
        File*find=bigfile;
        findparent(find,file);
        if(parentfile->parent->first==parentfile){
            parentfile->parent->first==NULL;
        }else{
            parentfile->parent->second==NULL;
        }
        free(parentfile);
    }
    if(condition=='q'){
        File*find=bigfile;
        findparent(find,file);
        int number=countfile(parentfile);
        printf("%d",number);
    }
}
int countfile(File*location){
    if(location->first==NULL){
        return 0;
    }else{
        if(location->second==NULL){
            return 1 + countfile(location->first);
        }else{
            return 2 + countfile(location->first) + countfile(location->second);
        }
    }
}