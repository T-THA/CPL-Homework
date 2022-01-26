#include<stdio.h>
int main(){
    int n=0, q=0;
    scanf("%d%d",&n,&q);
    char lcp[101][101]={'\0'};
    for(int i=0;i<n;i++){
        scanf("%s",lcp[i]);
    }
    int number[101][3];
    for(int i=0;i<q;i++){
        scanf("%d%d",&number[i][0],&number[i][1]);
        
    }
    for(int i=0;i<q;i++){
        int sum=0,count=0;
        while(lcp[number[i][0]-1][count]==lcp[number[i][1]-1][count]&&lcp[number[i][0]-1][count]!='\0'){
            sum+=1;
            count+=1;
        }
        printf("%d\n",sum);
    }
    return 0;   
}