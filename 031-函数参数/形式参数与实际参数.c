#include <stdio.h>

//声明函数，该函数的功能是求最大值
int max(int,int); 

int main()
{
    printf("求两个整数的最大值:%d\n",max(12,19));//在这里的12,19就是实参
    return 0;
} 

//定义一个函数
int max(int a,int b)//在这里的参数a，b就是形式参数 
{
    int temp=0;
    temp=a>b?a:b; 
    return temp;
} 
