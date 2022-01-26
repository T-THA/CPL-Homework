#include<stdio.h>
int value[10005]={0};
int amount[10005]={0};
int new_value[10005]={0};
int new_amount[10005]={0};
int main(){
    int n,L;
    scanf("%d%d",&n,&L);
    for(int i=0;i<n;i++){
        scanf("%d",&value[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&amount[i]);
    }
    new_value[0]=value[0];
    new_amount[0]=amount[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(j==i-1){
                if(value[i]>=new_value[j]){
                    new_value[i]=value[i];
                    new_amount[i]=amount[i];
                    break;
                }else{
                    new_value[i]=new_value[i-1];
                    new_amount[i]=new_amount[i-1];
                    new_value[i-1]=value[i];
                    new_amount[i-1]=amount[i];
                    break;
                }
            }else{
                if(value[i]<new_value[j]){
                    for(int k=i;k>j;k--){
                        new_value[k]=new_value[k-1];
                        new_amount[k]=new_amount[k-1];
                    }
                    new_value[j]=value[i];
                    new_amount[j]=amount[i];
                    break;
                }
            }
        }
    }
    int value_total=0;
    int count=n-1;
    while(L-new_amount[count]>0){
        value_total+=new_value[count]*new_amount[count];
        L-=new_amount[count];
        count-=1;
    }
    value_total+=new_value[count]*L;
    printf("%d",value_total);
    return 0;
}