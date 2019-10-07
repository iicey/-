#include <stdio.h>

//带有*的类型

int main(int argc,char** argv)
{
    int i;
    int* p;
//      short i;
//      short* p;//带*的类型 
    printf("请输入一个数值:");
    scanf("%d",&i);
    p=&i;
    printf("输出p的结果为:%d\n",p);
    //p++;
    p--;
    printf("输出p++的结果为:%d\n",p);
    system("pause");
    return 0;
} 
