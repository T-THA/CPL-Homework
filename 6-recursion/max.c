#include<stdio.h>
long long number[100005];
int min(int x, int n);
int max(int x, int n);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&number[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d %d",min(i, n),max(i, n));
        printf("\n");
    }
    return 0;
}
int min(int x, int n){
    int tmp=x+1;
    for(int j=x-1;j>=0;j--){
        if(number[j]<number[x]){
            tmp=j+1;
        }else{
            break;
        }
    }
    return tmp;
}
int max(int x, int n){
    int tmp=x+1;
    for(int j=x+1;j<n;j++){
        if(number[j]<number[x]){
            tmp=j+1;
        }else{
            break;
        }
    }
    return tmp;
}