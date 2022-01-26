#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int chaos[200],clean[200];
    for(int i=0;i<n;i++){
        scanf("%d",&chaos[i]);

    }
    for(int i=0;i<n;i++){
        if(i==0){
            clean[0]=chaos[i];
        }
        else{
            for(int j=i-1;j>=0;j--){
                clean[j+1]=clean[j];
            }
            clean[0]=chaos[i];
            for(int k=0;k<i;k++){
                if(clean[k]>=clean[k+1]){
                    int tmp;
                    tmp=clean[k];
                    clean[k]=clean[k+1];
                    clean[k+1]=tmp;
                }
            }
        }
        for(int l=0;l<=i;l++){
            printf("%d ",clean[l]);
        }
        printf("\n");
    }
    return 0;
}