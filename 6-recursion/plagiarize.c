#include<stdio.h>
int people[100005];
int find(int x,int number);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&people[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",find(people[i],i+1));
    }
    return 0;
}
int find(int x,int number){
    if(x==number){
        return x;
    }else{
        return find(people[x-1],x);
    }
}