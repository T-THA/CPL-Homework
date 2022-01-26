/**
 * @date 2021-11-29
 * 
 * 指针：指向地址
 * 
 * 开变长数组
 * #include<stdlib.h>  ←要读的头文件
 * scanf 一个 len
 * 
 * malloc
 * malloc的全称是memory allocation，中文叫动态内存分配，
 * 用于申请一块连续的指定大小的内存块区域以void*类型返回分配的内存区域地址
 * void 并不是说没有返回值或者返回空指针，而是返回的指针类型未知。
 * 所以在使用 malloc() 时通常需要进行强制类型转换，将 void 指针转换成我们希望的类型
 * int *numbers = (int *) malloc(len * sizeof(int));
 * 
 *  ↓   但是现在会自动识别了
 * int *numbers = (int *) malloc(len * sizeof(int));
 *                故 ↑强制类型转换其实可以不需要
 * 
 * int *numbers = malloc(len * sizeof(*numbers));
 *                                      ↑已经知道是什么类型
 * 
 * 好消息：   可以直接当数组用
 * for(int i=0;i<len;i++){
 *   scanf("%d",&numbers[i]);
 * }
 * numbers[i]等价于*(numbers + i)等价于i[numbers]
 * 完了以后要用free释放内存空间
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int len;
    scanf("%d",&len);
    int *numbers = malloc(len * sizeof(*numbers));
    for(int i=0;i<len;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<len;i++){
        printf("%d",*numbers);
        numbers++;
    }
    free(numbers);
    return 0;
}