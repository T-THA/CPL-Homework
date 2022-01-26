#include<stdio.h>
#define MAX 1010
int cube[MAX][MAX]={0};
int main(){
    int n;
    scanf("%d",&n);
    int location_x=(1+n)/2 -1,location_y=0;
    for(int i=1;i<n*n+1;i++){   
        if(location_x>n-1){
            location_x-=n;
        }
        if(location_y<0){
            location_y+=n;
        }
        if(cube[location_x][location_y]){
            location_y+=2;
            location_x-=1;
        }
        if(location_y>n-1){
            location_y-=n;
        }
        if(location_x<0){
            location_x+=n;
        }
        cube[location_x][location_y]=i;
        location_x+=1;
        location_y-=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",cube[j][i]);
        }
        printf("\n");
    }
    return 0;
}