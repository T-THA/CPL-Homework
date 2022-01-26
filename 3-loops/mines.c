#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int SIZE[n+2][n+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<n+2;j++){
            SIZE[i][j]='o';
        }
    }
    for(int i=1;i<n+1;i++){
        scanf("\n");
        for(int j=1;j<n+1;j++){
            scanf("%c",&SIZE[i][j]);
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            int sum=0;
            if(SIZE[i][j]=='*'){
                printf("*");
            }else{
                int vectors[8]={SIZE[i-1][j-1],SIZE[i-1][j],SIZE[i-1][j+1],SIZE[i][j-1],SIZE[i][j+1],SIZE[i+1][j-1],SIZE[i+1][j],SIZE[i+1][j+1]};
                for(int i=0;i<8;i++){
                    if(vectors[i]=='*'){
                        sum++;
                    }
                }
                printf("%d",sum);
            }
        }
        printf("\n");
    }
    return 0;
}