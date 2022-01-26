/**
 * File: ascii.c
 *
 * Author:张铭铭
 * ID:211250234
 * Date:
 */
#include<stdio.h>
int main() {
    int number;
    int number_another;

    scanf("%d", &number);

    printf("%d\n",number);

    if(number >= 97){
        number_another = number - 32;
        printf("%c\n",number);
        printf("%c\n",number_another);
    } else{
        number_another = number + 32;
        printf("%c\n",number_another);
        printf("%c\n",number);
    }
    
    

    
    return 0;
    
}