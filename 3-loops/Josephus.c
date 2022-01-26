#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int people[n];
    for(int i=0;i<n;i++){
        people[i]=0;
    }
    int sum=0;
    while(sum<=k*(n-1)){
        for(int i=0;i<n;i++){
            if(people[i]==0){
                sum++;
                if(sum%k==0){
                people[i]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(people[i]==0){
            printf("%d",i+1);
        }
    }
    return 0;
}