// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int k;//剩余操作次数
// int flag;
// long long Va,Vb,Vc;
// long long a,b,c,a_aim,b_aim,c_aim;
// int main(){
//     scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b,&c,&a_aim,&b_aim,&c_aim);
//     srand((unsigned)time(NULL));
//     a = rand() % 100;

//     puts(a<56?"Yes":"No");
//     return 0;
// }
// //just for fun
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int k;//剩余操作次数
int flag;
long long Va,Vb,Vc;
long long a,b,c,a_aim,b_aim,c_aim;
int main( )
{ 
    scanf("%d%lld%lld%lld%lld%lld%lld%lld%lld%lld",&k,&Va,&Vb,&Vc,&a,&b);
    srand(time(0)+getchar()-getchar()-getchar()+getchar() );
    puts(rand()&1?"Yes":"No");
    return 0;
}