#include<stdio.h>
#include<math.h>
int output(int n,int t);
int main(){
    int sum=0;
    int n,t;
    scanf("%d%d",&n,&t);
    for(int i=1;i<n+1;i++){
        sum+=output(i,t);
    }
    printf("%d",sum);
    return 0;
}
int output(int n,int t){
    int output_one=0;
    for(int count=0;count<n;count++){
        output_one+=t*((int)pow(10,count));
    }
    return output_one;
}