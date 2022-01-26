#include<stdio.h>
int tile(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",tile(n));
    return 0;
}
int tile(int n){
    if(n==1 || n==2){
        return n;
    }else{
        return tile(n-1)+tile(n-2);
    }

}